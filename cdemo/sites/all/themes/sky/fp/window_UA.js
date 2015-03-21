var helpWin;
// Mx-Start 02/03/2003 11:45 Chandrashekhar Damahe. To resolve SAR No. 12166
function popNewWindow(urlOpen, name, props)
{
	close_UA();    
	// Mx-Start 27/05/03 Swati Gopalan. To resolve SAR# 12903
	//if (helpWin)
//	{
//		if (window.focus) {helpWin.focus();}	
//		helpWin.location.href = urlOpen;
//	}
// Mx-Ends 27/05/03 Swati Gopalan. To resolve SAR# 12903
//	else
//	{
		helpWin=window.open(urlOpen,name, props);		
		if (window.focus) {helpWin.focus();}
//	}

}
function window_UA(newWin, pProps)
{
		if (pProps==null){
			//PSN-Start for sar SNP-00014557 dated 13/11/2008 by Ashwin
				pProps ='scrollbars=yes,height=480,width=700,resizable';
			//PSN-End for sar SNP-00014557 dated 13/11/2008 by Ashwin
		}	
		newWin = '/ua/ua_rollthru.html?helpUrl=';
		try
		{
			newWin+=helpRoleId;
		}
		catch(E)
		{
			newWin+='student';
		}
		
		try
		{
			newWin+=','+buId;
		}
		catch(E)
		{
			newWin+=','+'multi';
		}
		
		try
		{
			newWin+=',' + helpId;
		}
		catch(E)
		{
		}
    close_UA();    
    helpWin = window.open(newWin,'ua',pProps + ',top=0,left=0,screenX=0.screenY=0');
    helpWin.focus();
}
function close_UA()
{
     if ((window.helpWin && navigator.appName == "Microsoft Internet Explorer") || (window.helpWin &&  navigator.appName == "Netscape"))
    {
        helpWin.close();
    }
}
function ncsLogout(logOffUrl)
{ 
	// START
	//     modifications made to properly address SAR 12643, please see
	//     '/ncs4school/framework/header.jsp' for more information
	// window.location.href= logOffUrl;
	// self.location.href= logOffUrl;
	// END

//	if (helpWin && window.focus)  
//	{ 
//		window.helpWin.opener.focus(); 
//	}
	if (window.helpWin)
	{
		window.helpWin.close();
	}
}
// Mx-Ends 02/03/2003 11:55 Chandrashekhar Damahe. To resolve SAR No. 12166
