<html>
	<head>
		<TITLE>Quadrobay School Connect</TITLE>
		<LINK media="all" href="sites/all/themes/sky/fp/snp_login.css" type="text/css" rel="stylesheet"/>
		<LINK media="all" href="sites/all/themes/sky/fp/snp_forms.css" type="text/css" rel="stylesheet"/>
	</head>
	<body>
		<div id="centerLoginPage">
			<div id="resourcesBlock" class="mainBlock">
				<div class="mainSubBlock">
					<div>
						<table border="0" cellspacing="0" cellpadding="0" class="formHeaderTableA" width="100%">
							<tr>
								<td valign="top" id="loginPageMain">
									<div class="formheaderAleft">
										<br/>
                                                                      <br/>
										<div class="loginHeading1" style="color:#06418F;font-family:georgia;font-size: 24px;margin-top: 150PX;letter-spacing:-1px;text-align: center;">Social Tools to manage all your Schedules & Courses</div>
										<br/>
										<div class="loginHeading2">To log in, enter your user name and password <br/>and click on the log in button below. <br/>The user name and password fields are case sensitive.</div>
										<br/>

										<!--deep-->
										<?php if (!$user->uid): ?>
										<div id="fologindiv" class="fplogin">
											<?php print sky_user_bar() ?>
										</div>
										<!--<?php else : ?>
										<?php  header('Location:'. sky_user_bar()) ?>-->
										<?php endif; ?>
										<!--deep-->

									</div>
									<br/>
								</td>
							</tr>
						</table>
					</div>
				</div>
			</div>
		</div>
	</body>
</html>
