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

var lang = "bengali";
var chnbin = "\u09CD";
var ugar = "\u09C1";
var uugar = "\u09C2";
myimg.src = "images/"+lang+".png";

var be_en = new Array();
var be_tw = new Array();
//Typewritter
be_tw['\\!'] = "\u098D";
be_tw['\\@'] = "\u09C5";
be_tw['\\#'] = "\u09CD\u09B0";
be_tw['\\$'] = "\u09B0\u09CD";
be_tw['\\%'] = "\u099C\u09CD\u099E";
be_tw['\\^'] = "\u09A4\u09CD\u09B0";
be_tw['\\&'] = "\u0995\u09CD\u09B7";
be_tw['\\*'] = "\u09B6\u09CD\u09B0";
be_tw['_'] = "\u0983";
be_tw['\\+'] = "\u098B";
be_tw['\\='] = "\u09C3";
be_tw['q'] = "\u09CC";
be_tw['w'] = "\u09C8";
be_tw['e'] = "\u09BE";
be_tw['r'] = "\u09C0";
be_tw['t'] = "\u09C2";
be_tw['y'] = "\u09AC";
be_tw['u'] = "\u09B9";
be_tw['i'] = "\u0997";
be_tw['o'] = "\u09A6";
be_tw['p'] = "\u099C";
be_tw['\\['] = "\u09A1";
be_tw['\\]'] = "\u09BC";
be_tw['Q'] = "\u0994";
be_tw['W'] = "\u0990";
be_tw['E'] = "\u0986";
be_tw['R'] = "\u0988";
be_tw['T'] = "\u098A";
be_tw['Y'] = "\u09AD";
be_tw['U'] = "\u0999";
be_tw['I'] = "\u0998";
be_tw['O'] = "\u09A7";
be_tw['P'] = "\u099D";
be_tw['\\{'] = "\u09A2";
be_tw['\\}'] = "\u099E";

be_tw['a'] = "\u09CB";
be_tw['s'] = "\u09C7";
be_tw['d'] = "\u09CD";
be_tw['f'] = "\u09BF";
be_tw['g'] = "\u09C1";
be_tw['h'] = "\u09AA";
be_tw['j'] = "\u09B0";
be_tw['k'] = "\u0995";
be_tw['l'] = "\u09A4";
be_tw[';'] = "\u099A";
be_tw['\\\''] = "\u099F";
be_tw['\\\\'] = "\u09C9";
be_tw['A'] = "\u0993";
be_tw['S'] = "\u098F";
be_tw['D'] = "\u0985";
be_tw['F'] = "\u0987";
be_tw['G'] = "\u0989";
be_tw['H'] = "\u09AB";
be_tw['J'] = "\u09DC";
be_tw['K'] = "\u0996";
be_tw['L'] = "\u09A5";
be_tw[':'] = "\u099B";
be_tw['"'] = "\u09A0";
be_tw['\\|'] = "\u0991";

be_tw['z'] = "";
be_tw['x'] = "\u0982";
be_tw['c'] = "\u09AE";
be_tw['v'] = "\u09A8";
be_tw['b'] = "\u09B5";
be_tw['n'] = "\u09B2";
be_tw['m'] = "\u09B8";
be_tw['/'] = "\u09AF";
be_tw['Z'] = "";
be_tw['X'] = "\u0981";
be_tw['C'] = "\u09A3";
be_tw['V'] = "";
be_tw['B'] = "";
be_tw['N'] = "\u09B3";
be_tw['M'] = "\u09B6";
be_tw['<'] = "\u09B7";
be_tw['>'] = "\u09E4";
be_tw['\\?'] = "\u09DF";
//Phonetic
be_tw['B'] = "b";
be_tw['e'] = "E";
be_tw['o'] = "O";
be_tw['C'] = "c";
be_tw['F'] = "ph";
be_tw['f'] = "ph";
be_tw['G'] = "g";
be_tw['J'] = "j";
be_tw['K'] = "k";
be_tw['M'] = "m";
be_tw['P'] = "p";
be_tw['Q'] = "q";
be_tw['V'] = "b";
be_tw['W'] = "b";
be_tw['W'] = "b";
be_tw['v'] = "b";
be_tw['X'] = "x";
be_tw['Y'] = "y";
be_tw['Z'] = "j";
be_tw['z'] = "j";
//Cons
be_en['k'] = "\u0995\u09CD";
be_en['c'] = "\u099A\u09CD";
be_en['T'] = "\u099F\u09CD";
be_en['D'] = "\u09A1\u09CD";
be_en['N'] = "\u09A3\u09CD";
be_en['t'] = "\u09A4\u09CD";
be_en['d'] = "\u09A6\u09CD";
be_en['p'] = "\u09AA\u09CD";
be_en['b'] = "\u09AC\u09CD";

be_en['y'] = "\u09AF\u09CD";
be_en['R'] = "\u09DC\u09CD";
be_en['L'] = "\u09E1\u09CD";
be_en['v'] = "\u09B5\u09CD";
be_en['s'] = "\u09B8\u09CD";
be_en['S'] = "\u09B7\u09CD";
be_en['H'] = "\u09B9\u09CD";
be_en['x'] = "\u0995\u09CD\u09B6\u09CD";

be_en['\u200Dn'] = "\u0981";
be_en['\u200Dm'] = "\u0982";
be_en[':h'] = "\u0983";
be_en['m'] = "\u09AE\u09CD";
be_en['n'] = "\u09A8\u09CD";

be_en['\u0995\u09CDh'] = "\u0996\u09CD";
be_en['\u0997\u09CDh'] = "\u0998\u09CD";
be_en['\u09A8\u09CDg'] = "\u0999\u09CD";
be_en['\u099A\u09CDh'] = "\u099B\u09CD";
be_en['\u099C\u09CDh'] = "\u099D\u09CD";
be_en['\u09A8\u09CDj'] = "\u099E\u09CD";
be_en['\u099F\u09CDh'] = "\u09A0\u09CD";
be_en['\u09A1\u09CDh'] = "\u09A2\u09CD";
be_en['\u09A4\u09CDh'] = "\u09A5\u09CD";
be_en['\u09A6\u09CDh'] = "\u09A7\u09CD";
be_en['\u09AA\u09CDh'] = "\u09AB\u09CD";
be_en['\u09AC\u09CDh'] = "\u09AD\u09CD";
be_en['\u09B8\u09CDh'] = "\u09B6\u09CD";
be_en['\u09DC\u09CDr'] = "\u098B";
be_en['\u09E1\u09CDl'] = "\u098C";
be_en['\u09CD\u098B'] = "\u09C3";
be_en['r'] = "\u09B0\u09CD";
be_en['l'] = "\u09B2\u09CD";

be_en['h'] = "\u09B9\u09CD";
be_en['g'] = "\u0997\u09CD";
be_en['j'] = "\u099C\u09CD";
//VowSml
be_en['\u09CDa'] = "\u200C";
be_en['\u09CDi'] = "\u09BF";
be_en['\u09CDu'] = "\u09C1";
be_en['\u09CDe'] = "\u09C6";
be_en['\u09CDo'] = "\u09CA";
be_en['\u200Ci'] = "\u09C8";
be_en['\u200Cu'] = "\u09CC";
be_en['\u200C-'] = "\u200D";
be_en['\u200C:'] = ":";
be_en['-'] = "\u200D";
//VowBig
be_en['\u200Ca'] = "\u09BE";
be_en['\u09BFi'] = "\u09C0";
be_en['\u09C1u'] = "\u09C2";
be_en['\u09C6e'] = "\u09C7";
be_en['\u09CAo'] = "\u09CB";
be_en['\u09CDA'] = "\u09BE";
be_en['\u09CDI'] = "\u09C0";
be_en['\u09CDU'] = "\u09C2";
be_en['\u09CDE'] = "\u09C7";
be_en['\u09CDO'] = "\u09CB";
//Vows
be_en['\u0985i'] = "\u0990";
be_en['\u0985u'] = "\u0994";
be_en['\u0985a'] = "\u0986";
be_en['\u0987i'] = "\u0988";
be_en['\u0989u'] = "\u098A";
be_en['\u098Ee'] = "\u098F";
be_en['\u0992o'] = "\u0993";
be_en['\u0993m'] = "\u09D0";

be_en['a'] = "\u0985";
be_en['A'] = "\u0986";
be_en['i'] = "\u0987";
be_en['I'] = "\u0988";
be_en['u'] = "\u0989";
be_en['U'] = "\u098A";
be_en['e'] = "\u098E";
be_en['E'] = "\u098F";
be_en['o'] = "\u0992";
be_en['O'] = "\u0993";
be_en['q'] = "\u0995\u09CD";
//Nums
be_en['\u200D1'] = "\u09E7";
be_en['\u200D2'] = "\u09E8";
be_en['\u200D3'] = "\u09E9";
be_en['\u200D4'] = "\u09EA";
be_en['\u200D5'] = "\u09EB";
be_en['\u200D6'] = "\u09EC";
be_en['\u200D7'] = "\u09ED";
be_en['\u200D8'] = "\u09EE";
be_en['\u200D9'] = "\u09EF";
be_en['\u200D0'] = "\u09E6";
be_en['(.+)\u200C(.+)'] = "$1$2";