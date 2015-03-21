/*  Gopi's Unicode Converters Version 3.0
 *  Copyright (C) 2008 Gopalakrishnan (Gopi) http://www.higopi.com
 * 
 *  Original javascript source available: http://www.higopi.com
 *  modified by Vinoth for Drupal Integration: http://www.Tamil2Friends.com
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 * Dual licensed under the MIT and GPL licenses:
 *   http://www.opensource.org/licenses/mit-license.php
 *   http://www.gnu.org/licenses/gpl.html
 *
 * Further to the terms mentioned you should leave this copyright notice
 * intact, stating me as the original author.
*/
  
var isIE = document.all?true:false;
var myimg = new Image();
var sPos = 0;
var isTh = false;
var isNg = false;
var kbmode = "roman";
var pkbmode = "roman";
var SplKeys = new Array();
var toshow_tips = true;

var indic_script_new_lang = 0;  //default language 
    
SplKeys["ZR"] = 0;
SplKeys["BS"] = 8;
SplKeys["CR"] = 13;

function convertThis(e,numchar){
    
    if (!isIE)
	    Key = e.which;
    else
		Key = e.keyCode;

	Char = String.fromCharCode(Key);
	
	if(typeof numchar == "undefined"){
		//TODO: PLEASE FIX, WE CAN'T ASSUME THIS NUMBER, CONSIDER SPACE, ENGLISH CHARS etc.
		numchar = 4;
	}
	if( isIE ){
		myField = e.srcElement;
		myField.caretPos = document.selection.createRange().duplicate();
		prevChar = myField.caretPos.text;
		diff = 0;
		cpos = getCursorPosition(myField);
		if(prevChar.length != 0)
			document.selection.clear();
		if(myField.value.length != 0 && cpos != "1,1" ){
			myField.caretPos.moveStart('character',-1);
			prevChar = myField.caretPos.text;
			diff ++;
		}
		if(prevChar == chnbin){
			myField.caretPos.moveStart('character',-1);
			prevChar = myField.caretPos.text;
			diff ++;
		}

		if(cpos[1] > numchar ){
			myField.caretPos.moveStart('character', diff - numchar);
			prevChar = myField.caretPos.text;
		}
		
		if(prevChar == "" && cpos != "1,1"){
			prevChar =  "\u000A";
		}
		if(Key == 13){
			Char = "\u000A";
		}
		myField.caretPos.text = getLang(prevChar,Char, 0)
		e.cancelBubble = true;
		e.returnValue = false;
		
	}else{
		myField = e.target;
		if( myField.selectionStart >= 0){
			if(isSplKey(Key) ||  e.ctrlKey ){
				return true;
			}
			var startPos = myField.selectionStart;
			var endPos = myField.selectionEnd;
			txtTop = myField.scrollTop;
			if(myField.value.length == 0){
				prevChar = "";
				myField.value = getLang(prevChar,Char, startPos)
			}
			else{
				prevChar = myField.value.substring(startPos - 1, startPos);
				prevStr =  myField.value.substring(0,startPos - 1);
				if(prevChar == chnbin){
					prevChar = myField.value.substring(startPos - 2,startPos);
					prevStr =  myField.value.substring(0,startPos - 2);
				}
				cpos = getCursorPosition(myField);
				if(cpos[1] >= numchar){
					prevChar = myField.value.substring(startPos - numchar,startPos);
					prevStr =  myField.value.substring(0,startPos - numchar);
				}
				myField.value = prevStr + getLang(prevChar,Char, myField.selectionStart)
						  + myField.value.substring(endPos, myField.value.length);
			}
			myField.selectionStart = sPos ;
			myField.selectionEnd = sPos;
			if((myField.scrollHeight+4)+"px" != myField.style.height)
				myField.scrollTop = txtTop;
			e.stopPropagation();
			e.preventDefault();
		}
	}
	
	if($('#edit-indic-script-show-tips').attr('checked')){
        show_char_tips(e);
    }
}

function toggleT(obj){
	isTh = obj.checked;
	if(isTh)
		ta['t'] = "\u0BA4\u0BCD";
	else
		ta['t'] = "\u0B9F\u0BCD";
}

function toggleG(obj){
	isNg = obj.checked;
	if(isNg)
		ta['g'] = "\u0B99\u0BCD";
	else
		ta['g'] = "\u0B95\u0BCD"
}

function toggleKBMode(e,obj){
	if(obj != null){
		pkbmode = kbmode;
		kbmode = obj.value;		
	}else{
		if (!isIE){
	        key = e.which;
		}else{
			key = e.keyCode;
		}
		if (key == 123){
			if(kbmode != "en"){
				pkbmode = kbmode;
				kbmode = "en";
			}else{
				kbmode = pkbmode;
				pkbmode = "en";
			}
		}

	}
}

function isSplKey(keynum){
	retVal = false;
	for(i in SplKeys){
		if(keynum == SplKeys[i]){
			retVal = true;
		}
	}
	return retVal;
}

function getLang(prv, txt, sP){
	sPos = sP;
	if(kbmode == "en"){
		retTxt = prv+txt;
		sPos ++;
	}
	else if(kbmode.substring(3,5) == "tw"){
		if(prv == ugar && mapLang(txt,sP,"tw") == uugar)
			retTxt = mapLang(prv+txt,sP,"tw");
		else
			retTxt = prv+mapLang(txt,sP,"tw");
	}
	else if(kbmode == "ta_99"){
		retTxt = mapLang(prv+txt,sP,"t99");
	}else{
		if(pkbmode == "en")
		{
			retTxt = prv+mapLang(txt);
			pkbmode = "en";
		}
		else
			retTxt = mapLang(prv+txt);
	}
	return retTxt;
}

function mapLang(txt,sP,mod){
	if(sP != null)
		sPos = sP;
	prvlen = txt.length;
	txtarr = eval(kbmode);
    if (!txtarr) return '';
    
	retTxt = "";
	for(itm in txtarr){
		rexp = new RegExp(itm,"g");
		txt = txt.replace(rexp, txtarr[itm]);
	}
	sPos += (txt.length -prvlen +1);
	return txt;
}

function getCursorPosition(textarea){
	var txt = textarea.value;
	var len = txt.length;
	var erg = txt.split("\n");
	var pos = -1;
	
	// see http://drupal.org/node/587698
	if( isIE ){
	  if(typeof document.selection != "undefined" ){ // FOR MSIE
        range_sel = document.selection.createRange();
        range_obj = textarea.createTextRange();
        range_obj.moveToBookmark(range_sel.getBookmark());
        range_obj.moveEnd('character',textarea.value.length);
        pos = len - range_obj.text.length;
	  }
	}else if(typeof textarea.selectionStart != "undefined"){ // FOR MOZILLA
	   pos = textarea.selectionStart;
	}
	if(pos != -1)
	{
		for(ind = 0;ind<erg.length;ind++)
		{
			len = erg[ind].length + 1;
			if(pos < len)
				break;
			pos -= len;
		}
		ind++; pos++;
		return [ind, pos]; // ind = LINE, pos = COLUMN
	}
}

function show_char_tips(e){
    
    if(document.getElementById('HelpDiv') == null){
        
	    helpdiv  = document.createElement('div');
		helpdiv.setAttribute('id','HelpDiv');
		helpdiv.setAttribute('align','left');
		bdy = document.getElementsByTagName('BODY')[0];
		bdy.appendChild(helpdiv);

		helpstyle = document.getElementById('HelpDiv').style;
		//helpstyle.width = '140px';

        $("#HelpDiv").addClass("ic_type_tips_container");
        
	}
	else{
		helpdiv  = document.getElementById('HelpDiv');
		helpstyle = helpdiv.style;
	}
 
	if(!toshow_tips || kbmode != 'roman'){
		//is this really needed?
        //helpstyle.display = 'none';	return;
    }

    sdiv = '<div class="ic_type_tips">';
    ediv = '</b></div>';
    
	prevWord =  getLang(prevChar,Char,0)
	if(isLangOtru(prevWord.substring(prevWord.length - 1)))
		prevWord = prevWord.substring(prevWord.length - 2)
	else
		prevWord = prevWord.substring(prevWord.length - 1)

	helptxt = "";
    
	prevLet = getLang(prevWord,Char,0); prevLet = prevLet.substring(prevLet.length - 1);
	if( prevWord != "" && !isLangOtru(prevWord) && prevLet != getLang('',Char,0) ){
		if(Char == 'a' || Char == 'i' ||Char == 'u' || Char == 'e' || Char == 'o' ){
			helptxt =  sdiv + prevWord + ' + ' + Char+' = <b>' + getLang(prevWord,Char,0) + ediv ;
			if(Char == 'a')
				helptxt += sdiv + prevWord + ' + i = <b>' + getLang(prevWord,'i',0) + ediv
						   + sdiv + prevWord + ' + u = <b>' + getLang(prevWord,'u',0) + ediv;
		}
		else if( Char != getLang('',Char,0)){
			helptxt = sdiv + prevWord + ' + a = <b>' + getLang(prevWord,'a',0) + ediv
				 + sdiv + prevWord + ' + A = <b>' + getLang(prevWord,'A',0) + ediv
				 + sdiv + prevWord + ' + i = <b>' + getLang(prevWord,'i',0) + ediv
				 + sdiv + prevWord + ' + I = <b>' + getLang(prevWord,'I',0) + ediv
				 + sdiv + prevWord + ' + u = <b>' + getLang(prevWord,'u',0) + ediv
				 + sdiv + prevWord + ' + U = <b>' + getLang(prevWord,'U',0) + ediv
				 + sdiv + prevWord + ' + e = <b>' + getLang(prevWord,'e',0) + ediv
				 + sdiv + prevWord + ' + E = <b>' + getLang(prevWord,'E',0) + ediv
				 + sdiv + prevWord + ' + o = <b>' + getLang(prevWord,'o',0) + ediv
				 + sdiv + prevWord + ' + o = <b>' + getLang(prevWord,'O',0) + ediv
				 + sdiv + prevWord + ' + a + u = <b>' + getLang(getLang(prevWord,'a',0),'u',0) + ediv
				 + sdiv + prevWord + ' + a + i = <b>' + getLang(getLang(prevWord,'a',0),'i',0) + ediv;
			if(lang == 'tamil'){
				if(getLang('','t',0) == prevWord)
					helptxt += sdiv + prevWord + ' + h = <b>' + getLang(prevWord,'h',0) + ediv;
				if(getLang('','s',0) == prevWord)
					helptxt += sdiv + prevWord + ' + h = <b>' + getLang(prevWord,'h',0)+ ediv;
				if(getLang('','S',0) == prevWord)
					helptxt += sdiv + prevWord + ' + r + I = <b>' + getLang(getLang(prevWord,'r',0),'I',0) + ediv;
				if(getLang('k','n',0).indexOf(prevWord) > 0 )
					helptxt += sdiv + prevWord + ' + t + h = <b>' + getLang(getLang(prevWord,'t',0),'h',0) + ediv
								 + sdiv + prevWord + ' + g = <b>' + getLang(prevWord,'g',0) + ediv
								 + sdiv + prevWord + ' + j = <b>' + getLang(prevWord,'j',0) + ediv;
			}
		}
		helpdiv.innerHTML = helptxt ;
		show_tips();
	}
	else
		hide_tips();
		
	document.onmouseover = hide_tips;
}

function isLangOtru(letter){
	isOtru = false;
	otruArr = new Array (	'\u200C',
	"\u0BCD","\u0BBE","\u0BBF","\u0BC0", "\u0BC1","\u0BC2","\u0BC6","\u0BC7","\u0BC8","\u0BCA","\u0BCB","\u0BCC", // Tamil
	"\u0C4D","\u0C3E","\u0C3F","\u0C40","\u0C41","\u0C42","\u0C46","\u0C47","\u0C48","\u0C4A","\u0C4B","\u0C4C","\u0C43","\u0C44","\u0C01","\u0C02","\u0C03",  //Telugu
	"\u094D","\u093E","\u093F","\u0940","\u0941","\u0942","\u0946","\u0947","\u0948","\u094A","\u094B","\u094C","\u0901","\u0902","\u0903",// Hindi
	"\u0D3E","\u0D3F","\u0D40","\u0D41","\u0D42","\u0D43","\u0D47","\u0D46","\u0D48","\u0D4A","\u0D4B","\u0D4C","\u0D02","\u0D03",  //Malayalam
	"\u0CBE","\u0CBF","\u0CC0","\u0CC1","\u0CC2","\u0CC3","\u0CC4","\u0CC6","\u0CC7","\u0CC8","\u0CCA","\u0CCB","\u0CCC","\u0C82","\u0C83",//Kannada
	"\u0ABE","\u0ABF","\u0AC0","\u0AC1","\u0AC2","\u0AC5","\u0AC7","\u0AC8","\u0AC9","\u0ACB","\u0ACC","\u0A81","\u0A82","\u0A83",//Gujarathi
	"\u0B3E","\u0B3F","\u0B40","\u0B41","\u0B42","\u0B46","\u0B47","\u0B48","\u0B4A","\u0B4B","\u0B4C","\u0B01","\u0B02","\u0B03",//Oriya
	"\u09BE","\u09BF","\u09C0","\u09C1","\u09C2","\u09C6","\u09C7","\u09C8","\u09CA","\u09CB","\u09CC","\u0981","\u0982","\u0983",//Bengali
	"\u0A3E","\u0A3F","\u0A40","\u0A41","\u0A42","\u0A46","\u0A47","\u0A48","\u0A4A","\u0A4B","\u0A4C","\u0A50","\u0A03"//Punjabi
	);
	for(i=0;i<otruArr.length;i++)
		if(otruArr[i] == letter)
			isOtru = true;
	return isOtru;
}

function show_tips(){
	$("#HelpDiv").show('normal');
}

function hide_tips(){
	$("#HelpDiv").hide('normal');
}

function indic_script_lang(e){
    is_tamil = document.getElementById('edit-indic-script-typein');

	if (!is_tamil || is_tamil.selectedIndex == 0){
		return true;
	}
    return convertThis(e, 4);
}


$('document').ready(function(){
    is_tamil = document.getElementById('edit-indic-script-typein');

    if (!is_tamil){
        return true;
    }

    indic_script_change_lang(is_tamil);
    
    document.onkeyup=function(e){ 
		e = e || event;
		key = e.which || e.keyCode;
        if (key!=120){ //f9
            return true;
        }
		is_tamil = document.getElementById('edit-indic-script-typein');
        if(indic_script_new_lang == is_tamil.selectedIndex){
            is_tamil.selectedIndex = 0;
        }else{
            is_tamil.selectedIndex = indic_script_new_lang;            
        }
        indic_script_change_lang(is_tamil);
	}
	$("#indic_script_selector").hide('normal');
	//document.onclick = indic_script_hide_typing_method;
});

function indic_script_change_lang(obj){
    if (obj.selectedIndex != 0){
        indic_script_new_lang = obj.selectedIndex;
    }
    kbmode = obj.value;
    
    //use cookie instead of variable dump
    //$.ajax({ type: "GET", url: $("#is_dest_url").val() + "/" + obj.value});
    
    var expires = new Date();
	expires.setTime(expires.getTime() + 1000*3600*24*30);
	_is_set_cookie('indic_script_user_lang', obj.value, expires);
		
}

var typing_method_time;

function indic_script_show_typing_method(){
	clearTimeout(typing_method_time);
	$("#indic_script_selector").show('normal');
	//typing_method_shown = true;
}



function indic_script_hide_typing_method(){
	typing_method_time = setTimeout('_indic_script_hide_typing_method();', 5000);
}

function _indic_script_hide_typing_method(){
	clearTimeout(typing_method_time);
	$("#indic_script_selector").hide('normal');
}

function _is_get_cookie(name) {

    var dc = document.cookie;
    var prefix = name + "=";
    var begin = dc.indexOf("; " + prefix);

    if (begin == -1) {
        begin = dc.indexOf(prefix);

        if (begin != 0)
            return null;
    } else
        begin += 2;

    var end = document.cookie.indexOf(";", begin);

    if (end == -1)
        end = dc.length;

    return unescape(dc.substring(begin + prefix.length, end));
    
}

function _is_set_cookie(name, value, expires, path, domain, secure) {

    var curCookie = name + "=" + escape(value) +
        ((expires) ? "; expires=" + expires.toGMTString() : "") +
        ((path) ? "; path=" + escape(path) : "") +
        ((domain) ? "; domain=" + domain : "") +
        ((secure) ? "; secure" : "");

    document.cookie = curCookie;
    
}