
















<html lang=en xml:lang="en" xmlns="http://www.w3.org/1999/xhtml"><HEAD>

<TITLE>Login</TITLE>

<META http-equiv="Content-Type" content="text/html; charset=utf-8">



<LINK media="all" href="/skins/dp/snp_login.css" type="text/css" rel="stylesheet">

<LINK media="all" href="/skins/dp/snp_forms.css" type="text/css" rel="stylesheet">



<!--  *************** UA MARKER -->

<script language="JavaScript">

var helpId = '10300';

</script>

<!--  *************** END UA MARKER -->



<META content="MSHTML 6.00.2900.2627" name=GENERATOR></HEAD>





<script language="JavaScript" src="/javascript/window_UA.js"></script>

<script language="JavaScript" src="/javascript/registerUser.js"></script>

<script language="JavaScript" src="/javascript/digital_path/tools/jquery.js"></script>

<script language="JavaScript">

	$(document).ready(function(){

		window.setTimeout('errorFade($(".message"))',6000);             //Fade out the other messages

		window.setTimeout('errorFade($(".error"))',10000);             //Fade out the error messages

		$(".formheaderAright font[color='red'], .formheaderAright font[color='#ff0000']").css("color","#ce0e47");   //Change the color of the red notice messages according to the mockup

	});



	function errorFade(toFade)

	{

		toFade.fadeOut(4000);

	}

</script>



<script language="javascript">

	//Make sure login is always the top

	if (window!=window.top){window.top.location.href=window.location.href;}



    function forgotPassword()

    {

		//PDC-Start SAR SNP-00013801 dated 08/Aug/2008 by PullaReddy



       window.open('/snpapp/login/forgot_password.jsp','','top=150,left=100,location=no,toolbar=no,HEIGHT=500,WIDTH=600');



	   	//PDC-End SAR SNP-00013801 dated 08/Aug/2008 by PullaReddy



    }

// Added for Forgot Username

	 function forgotUserName()

    {

		 window.open('/snpapp/login/forgot_username.jsp','','top=150,left=200,location=no,toolbar=no,HEIGHT=450,WIDTH=800');





    }

	function aboutSuccessNet()

    {

	   window.open('/snpapp/login/aboutSuccessNet.jsp','','top=150,left=200,location=no,scrollbars=1,toolbar=no,HEIGHT=500,WIDTH=640');

    }

    function registerUser()

    {

        document.loginForm.action="/snpapp/access/PageServlet?url=/access/jsp/showAccessKeyEntry.jsp";

        	document.loginForm.submit();



    }

    function myPage()

    {

        if(window.opener)

        {

            if(window.opener.name !=window.name)

            {

                window.close();

                window.opener.location ="/snpapp/login/login.jsp";

                document.loginForm.username.focus();

            }

        }

        else

        {

            if(window.frameElement)

            {

                window.parent.location = "/snpapp/login/login.jsp";

            }

        }

    }





    function loginFocus()

    {

        document.loginForm.username.focus();

    }



    function dosubmit()

    {

          var elm = document.getElementById("LoginID");



          if(!elm.disabled)

          {

            elm.disabled = true;

			document.getElementById("loginBtn").className+=" disable";

            elm.innerHTML = "Logging in...";

        document.loginForm.action="/snpapp/login.do?method=login";

        document.loginForm.submit();

    }

    }



	 function OpenPop(page)

    {

		var link;

		var context='/snpapp/login/';

		if (page=="Privacy Statement")

		{

			link=context+"privacyStatement.jsp";

		}

		else if (page=="Terms of Use")

		{

			link=context+"termsOfUse.jsp";

		}

		else if (page=="System Requirements")

		{

			link="/snp_pdf/PSNSystemRequirements.pdf";

		}

		else if (page=="Getting Started")

		{

			link="/snp_pdf/GettingStarted.pdf";

		}

		else if (page=="Check Setting")

		{

			link=context+"checkSettings.jsp";

		}



       window.open(link,'','top=150,left=150,location=no,scrollbars=yes,HEIGHT=480,WIDTH=800');

    }



    function premiumLogin()

    {

    	<!-- END Shashikant SNP-00027663 removed url-->

    }

</script>





        <body class=pageEnterAccessCode id=groupRegistration  onload="loginFocus();">




<!-- Dont remove this comment. Required for session timeout handling in SCORM2004 API. For release 3.2. Added by Ashutosh Gangwar -->



<div id="centerLoginPage"><!-- PDC SAR SNP-00017969 modified by pullareddy -->

<form name="loginForm" method="post" action="/snpapp/login.do;SNSESSIONID=Kx08lJ4C5Do22GIcIbd24wP4qDSCT09YNhUL3t5qtg1BFM6ikh4t!-1625908985?method=login">



<div id="resourcesBlock" class="mainBlock">

<div class="mainSubBlock">



<!--Added to resolve SAR ID: SNP-049884 -->



































</P>



<div>

<table border="0" cellspacing="0" cellpadding="0" class="formHeaderTableA" width="100%">

	<tr>

		<td valign="top" id="loginPageMain">



			<div class="formheaderAleft">

			<div class="loginHeading1">Your Personalized Path <br>to Classroom Success</div>

			<div class="loginHeading2">To log in, enter your user name and password <br>and click on the log in button below. <br>The user name and password fields are case sensitive.</div>

			<div>

			<table cellpadding=0 cellspacing=2 border="0" width="480" class="loginBoxes">

			<span>



			</span>

			<tr>

				<td class="loginBold" width="130" >

				User name:&nbsp;</td>

				<td colspan="3" ><input type="text" name="username" value="" style="width:200px;">

					<input type="hidden" name="RequestURL" value="https://www.pearsonsuccessnet.com">

					<span style="font-size:.8em;font-weight: normal;margin-left:0px;"><a href="javaScript:forgotUserName();" title="Click here to retrieve your username" tabindex="3">Forgot</a> your Username?</a>



			</tr>

			<tr>

				<td colspan="3">&nbsp;</td>	</tr>

		<span>



		</span>

			<tr>

				<td class="loginBold">

			  Password:&nbsp;</td>

				<td width="190"><input type="password" name="password" value="" onkeypress="if(event.keyCode==13) dosubmit();" style="width:200px;"></td>

				<td width="152" nowrap="nowrap"><span style="font-size:.8em;font-weight: normal;margin-left:5px;"><a href="javaScript:forgotPassword();" title="Click here for a password hint" tabindex="3">Forgot</a> your password?</a> </span></td>

			</tr>



			</table>





			<br/>

				<div style="margin-left:230px;">

					<span class="button bold" id="loginBtn"><span class="desc" id="btnDesc"><a href="#" onclick="dosubmit();" class="buttonFont" id="LoginID" title="Login">Log in</a></span></span>

				</div>

			</div>

			</div>

			<br/>

			<div class="loginHeading3">To get your user name and password,<br> register using your access code.</div>

			<div class="regButtonBlock">

				<span class="button bold">

					<span class="desc" id="btnDesc">

						<a href="javaScript:registerUser()" class="buttonFont" id="btnTemp" title="Click here to register">Register</a>

					</span>

				</span>

			</div>



			<div class="successTrackerLogo">Assessments Powered by </div>

			<!-- SAR 29576 -->



           </td>

           <td valign="top" class="spacerCol">

           </td>

			<td valign="top" id="loginSupport">



            <!-- End - Premium product login link -->



			<table border ='0' cellpadding="3">

				<tr>

					<td><div class="supportDiv">Get support.</div></td>

				<tr>

				<tr>

					<td><div class="supportText">Click below to get the technical support you need.</div></td>

				<tr>

				<tr>

					<td>

						<div class="technicalSupport">

							<span class="button bold">

								<span class="desc" id="btnDesc">

									<a href="javascript:void(0)" onclick="javascript:window.open('http://support.pearsonschool.com/');return false;" class="buttonFont" id="btnTemp" title="Technical Support">Technical Support</a>

								</span>

							</span>

						</div>

					</td>

				<tr>

				<tr>

					<td><a class="settingsLink" href="javascript:OpenPop('Check Setting')" title="Check my computer for required browser and plug-ins">Check your computer's settings</a></td>

				<tr>

			</table>









			<!--<div class="genericSupport">support website<span><a id="supportWebsiteLink" href="http://support.pearsonschool.com/coco/#/" target="_blank">Click Here</a>to visit our Product Support site and Knowledge Base</span></div>

            <div class="genericSupport">email<span><a id="supportEmailLink" href="http://support.pearsonschool.com/coco/index.cfm/support/" target="_blank">Click Here</a> to email</span></div>

            <div class="genericSupport">phone<span>1-800-234-5832</span></div>

            <div class="genericSupport">live chat<span><a href="javascript:void(0)" onclick="javascript:window.open('http://159.182.172.187/WebAPISamples75/CoCo_Chat/HtmlChatFrameSet.jsp', 'genisclient', 'width=600,height=600,scrollbars=no,toolbar=no,statusbar=no');return false;">Click Here</a> to chat</span></div>

			-->











					<div class="supportDiv">Notices</div>

					<div class="formheaderAright" >

						<p>



		                      <b><font color="green">New! Mobile eTexts for iPad </b></font><br><br/>



		                      <b><font color="green">Starting this fall, many programs on SuccessNet offer a mobile version of the eText for the iPad.  Look for a notice in your Message Center and follow instructions to get access for applicable products.</b></font><br><br/>



		                      <b> Additional Resources to help you get started:<br/>



		                      <a href="javascript:;" onclick="javascript:window.open('http://www.mypearsontraining.com/index.asp'); return true;" >myPearsonTraining.com <a/><br/>



		                      <a href="javascript:;" onclick="javascript:window.open('https://www.pearsonsuccessnet.com/ua/sf/Teacher/SuccessNet_GettingStartedGuide_27Feb2009.pdf'); return true;" >Getting Started with Pearson SuccessNet <a/><br/>



							 </p>

					</div>

					<br>





			 <!-- Start - Premium product login link -->

				</td>

		</tr>

	</table>

	<span class="attentionMsg"></span>

</div>

</div>

</div>



<div id="footerBlock">



	<!-- curve hack -->

	<div class="topCurveFooter">

		<p>

		</p>

	</div>

	<!-- end curve hack -->

    <div class="footerSubBlock">

	  <!--Start Modified for the SAR SNP-00026799 by Ashwin on 06/08/09-->

      <p>Copyright &copy; 2005-2010 <a href="#" onClick="javascript:window.open('http://www.pearsoned.com/','','scrollbars=yes,resizable=yes,height=480,width=640');">

	  Pearson Education</a>,Inc. All rights reserved.</p>&nbsp;

	  <!--End Modified for the SAR SNP-00026799 by Ashwin on 06/08/09-->

      <p>Please read our <a href="javaScript:OpenPop('Privacy Statement');" title="Privacy Statement" tabindex="3">Privacy Statement </a>&nbsp;and&nbsp;<a href="javaScript:OpenPop('Terms of Use');" title="Terms of Use" tabindex="4">Terms of Use</a>&nbsp;and&nbsp;<a href="javaScript:OpenPop('System Requirements');" title="System Requirements." tabindex="5">System Requirements.</a></p>

    </div>



	<!-- end mainSubBlock -->

	<!-- curve hack -->

	<div class="botCurveFooter">

		<p>

		</p>

	</div>

	<!-- end curve hack -->

</div>



</form>



</div>


</body>

</html>