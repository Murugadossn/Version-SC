<html>
<head>
<title>Swaminathan File Upload Form</title>
</head>
<body>

<?php
		include "mysql_connect.php";
    	
      	$accountQuery = "select account_id, account_name from qtxt_sms_account WHERE party_id = 5";
		$resultAccount = mysql_query($accountQuery);
		if (!$resultAccount) {
   			$message  = 'Invalid query: ' . mysql_error() . "\n";
  			$message .= 'Whole query: ' . $accountQuery;
    		die($message);
		}
		
		$templateQuery = "select template_id, template_name from qtxt_sms_template_master where tag = 'cdemo' ";
		$resultTemplate = mysql_query($templateQuery);
		if (!$resultTemplate) {
   			$message  = 'Invalid query: ' . mysql_error() . "\n";
  			$message .= 'Whole query: ' . $templateQuery;
    		die($message);
		}
?> 

<form action="TemplateProcessor.php" method="post" enctype="multipart/form-data">

<br><br>
<center>
<h3>College File Upload</h3>
</center>
<br><br>
<table>
<tr>
<center>
<td>Select College</td>
</center>
<td>
<select name="schoolId" id="schoolId">
<?php
while ($row = mysql_fetch_assoc($resultAccount)) {
echo "<option value=\"".$row['account_id']."\">".$row['account_name']."\n  ";
}
mysql_free_result($resultAccount);
?>
</select>
</td>
</tr>
<tr>
<center>
<td>Interface Type</td>
</center>
<td>
<select name="interfaceType" id="interfaceType">
<?php
while ($row = mysql_fetch_assoc($resultTemplate)) {
echo "<option value=\"".$row['template_id']."\">".$row['template_name']."\n  ";
}
mysql_free_result($resultTemplate);
?>
</select>
</td>
</tr>
<tr>
<center>
<td>Select File</td>
</center>
<td><input type="file" name="uploadedfile"  id = "uploadedfile"/></td>
</tr>	

<tr>
<center>
<td>Test Code</td>
</center>
<td><input type="text" name="testcode"  id = "testcode"/></td>
</tr>

</table>
<br><br>
<center>
<input type="submit" value="Upload File">
</center>
</form>
<a href="download.php?file=template.xls">Download Template File Format</a>
</body>
</html>
