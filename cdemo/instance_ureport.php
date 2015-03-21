<!DOCTYPE html>
<html>
<body>

<div id="container" style="width:100%">

<div id="header" style="background-color:#BA80D0;"><center>
<h1 style="margin-bottom:0;"> <center> <b> <font size='6' face='verdana' color='darkblue'> School Connect Functionality Usages Report</font> </b> </center> </h1> </center> </div>

<div id="menu" style="height:100%;width:15%;float:left;">
<br>
<a Href="http://www.anicham.com/demo/instance_ureport.php">Dr.GUPTA</a><br /><br>
<a Href="http://www.anicham.com/mtpgri/instance_ureport.php">MTPGRI</a><br /><br>
<a Href="http://www.newonlinecampus.com/saraschool/instance_ureport.php">SARATHA SCHOOL</a> <br /><br>
<a Href="http://www.newonlinecampus.com/ritamm/instance_ureport.php">RITAM</a><br/><br>
<a Href="http://www.newonlinecampus.com/pkcollege/instance_ureport.php">PKCOLLEGE</a><br /><br>
<a Href="http://www.ourcampusonline.com/rgasc/instance_ureport.php">RGASC</a><br /><br>
<a Href="http://www.ourcampusonline.com/dbms_ca/instance_ureport.php">DBMS_CA</a><br /><br>
<a Href="http://www.ourcampusonline.com/jaintrust/instance_ureport.php">JAIN TRUST </a><br /><br>
<a Href="http://www.igradenow.com/nps/instance_ureport.php">NPS </a><br /><br>
<a Href="http://www.igradenow.com/rvspcet/instance_ureport.php">RVS PCET </a><br /><br>
<a Href="http://www.igradenow.com/bgcw/instance_ureport.php">BGCW </a><br /><br>
<a Href="http://www.igradenow.com/cdemo/instance_ureport.php">CDEMO</a><br /><br>

<a Href="http://igradenow.com/nps/stast_report.php">Over All Usages  Report</a><br>

<a Href="http://newonlinecampus.com/pkcollege/stast_report.php">Over All Usages  Report</a><br>
</div>

<div align="center" id="content" style="background-color:#EEEEEE;height:100%;width:85%;float:left;">



<?php
echo "<h1> <center> <b> <U> <font size='4.5' face='verdana' color='blue'> CDEMO   </font> </U> </b> </center> </h1>";
echo "<U> <b> <font size='3' face='verdana' color='SteelBlue'> Portal Features & Usages </font> </b> </U>";
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query(" SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`  
FROM  `qtxt_sms_log_response` where mobile_number is not null 
and `atowi_status` = 'Air2web accepted' or `sms_99_status` = 'SMS Sucessfully Sent' or `sms_99_status` = 'Dlr Status: Sent' ");

echo "<table border='1' WIDTH='100%' style='table-layout:fixed' ><tr bgcolor='LightGray'>
<th width='250' style='word-wrap: break-word;'>Featurest</th>
<th width='60'>Last 30 days</th>
<th width='60'>Last 60 days</th>
<th width='60'>Last 90 days</th>
<th width='60'>Last 120 days</th>
<th width='60'>Last 150 days</th>
<th width='60'>Last 180 days</th>
<th width='60'>Last 360 days</th>
</tr>";

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<tD style='word-wrap: break-word;'>Send Messages:</tD>";
  echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  echo "<br />";
  }

mysql_close($con);
?>






<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`
FROM `qtxt_sms_student_attendance` ");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td style='word-wrap: break-word;'>Attendance Report </td>";
  echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  echo "<br />";
  }
mysql_close($con);

?>



<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`
FROM `qtxt_sms_parent_message` where type_id = 4 and process_flag = 0 and process_flag = 2");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td style='word-wrap: break-word;'>Leave Letter Approval Sent to Parents</td>";
echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  }
mysql_close($con);

?>


<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`
FROM `qtxt_sms_student_test_results` ");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td style='word-wrap: break-word;'>Academic Report</td>";
echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  }
mysql_close($con);

?>


<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`
FROM qtxt_sms_parent_message` where type_id = 5 ");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
	echo "<td  style='word-wrap: break-word;'>View Messages (Teacher User)</td>";
echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  }
mysql_close($con);

?>


<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`
FROM qtxt_sms_teacher_message where type_id = 1  ");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
	echo "<td style='word-wrap: break-word;'>View Messages (Student User & Parent User) For Individual Messages :</td>";
echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  }
mysql_close($con);

?>





<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");

if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`
FROM qtxt_sms_teacher_message where type_id = 2  ");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
	echo "<td style='word-wrap: break-word;'> View Messages (Student User & Parent User) For Class Messages :</td>";
echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  }
mysql_close($con);

?>


<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`
FROM qtxt_sms_teacher_message where type_id = 3  ");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td style='word-wrap: break-word;'> Home Work and Assignments </td>";
echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  }
mysql_close($con);

?>




<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");

if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `creation_date` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count`,
count(if(( `creation_date` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count`
FROM qtxt_sms_parent_message where type_id = 4  ");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td style='word-wrap: break-word;'> Send Leave Letters To Staffs </td>";
echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  }
mysql_close($con);

?>



<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_urcdemo", $con);

$result = mysql_query("SELECT count(if(( `createdon` >= (cast(now() as date) - interval 30 day)),1,NULL)) AS `Last_30_days_count`,
count(if(( `createdon` >= (cast(now() as date) - interval 60 day)),1,NULL)) AS `Last_60_days_count`,
count(if(( `createdon` >= (cast(now() as date) - interval 90 day)),1,NULL)) AS `Last_90_days_count`,
count(if(( `createdon` >= (cast(now() as date) - interval 120 day)),1,NULL)) AS `Last_120_days_count`,
count(if(( `createdon` >= (cast(now() as date) - interval 150 day)),1,NULL)) AS `Last_150_days_count`,
count(if(( `createdon` >= (cast(now() as date) - interval 180 day)),1,NULL)) AS `Last_180_days_count` ,
count(if(( `createdon` >= (cast(now() as date) - interval 360 day)),1,NULL)) AS `Last_360_days_count` 
FROM  `v3_issues_report`");

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td style='word-wrap: break-word;'> School Connect Support Issue Report </td>";
echo "<td align='center'>".$row['Last_30_days_count']."</td>" ;
  echo "<td align='center'>".$row['Last_60_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_90_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_120_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_150_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_180_days_count'] ."</td>" ;
  echo "<td align='center'>". $row['Last_360_days_count'] ."</td>";
  echo "</tr>";
  }
echo "</table>";
mysql_close($con);

?>

 



<?php
$con = mysql_connect("localhost","igradeno_drp2","JcRfwiK6ry");
echo "<P ALIGN='LEFT'><br> <br> <U> <b> <font size='3' face='verdana' color='SteelBlue'> Entity Types Distribution </font> </b> </U>";
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_drp2", $con);

$result = mysql_query("select total_events,tot_fac_created,total_story,tot_gallery, total_image, assignments from usage_report_v");

echo "<table border='1' align='left'>
<tr bgcolor='LightGray'>
<th width='200' align='center'>Entity Type</th>
<th width='100' align='center'>Total</th>
</tr>";

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td>Events</td>" ;
  echo "<td align='center'>". $row['total_events']."</td>" ;
  echo "</tr>";
  echo "<tr>";
  echo "<td>Faculty Profile</td>" ;	
  echo "<td align='center'>". $row['tot_fac_created'] ."</td>" ;
  echo "</tr>";
  echo "<tr>";
  echo "<td >Stories</td>" ;
  echo "<td align='center'>". $row['total_story'] ."</td>" ;
  echo "</tr>";
  echo "<tr>";
  echo "<td>Galleries</td>" ;
  echo "<td align='center'>". $row['tot_gallery'] ."</td>" ;
echo "</tr>";
  echo "<tr>";
  echo "<td>Images</td>" ;
  echo "<td align='center'>". $row['total_image'] ."</td>" ;
echo "</tr>";
  echo "<tr>";
  echo "<td>Assignment Marks</td>" ;
  echo "<td align='center'>". $row['assignments'] ."</td>" ;
  echo "</tr>";
  echo "<br />";
  }
echo "</table>";
echo "</P>";
mysql_close($con);

?>



<br/>

</div>

<div id="footer" style="background-color:#9370D8;clear:both;text-align:center;">
Copyright © quadrobay.com</div>

</div>
 
</body>
</html>