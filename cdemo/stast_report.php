<?php
$con = mysql_connect("localhost","igradeno_urcdemo","T6UrLXLf92hW");
echo "<br> <br> <U> <b> <font size='3' face='verdana' color='SteelBlue'> CollegeConnect Portal </font> </b> </U> <br>";
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("igradeno_cdemodb", $con);

$result = mysql_query("SELECT Send_Msg as `Send Messages`,
Attendance_Report as `Attendence Report`,
Leave_Approval_to_Parents as `Leave Letter Approval Sent to Parent`,
`Academic Report` as `Acadamic Report`,
View_Msg_Teacher as `View Messages(Teacher User)`,
Indiviual_Msg_stu_parent as `View Messages(Student & Parent User) For Individual Messages`,
View_cl_Msg as `View Messages(Student & Parent User) For Class Messages`,
HomeWork_Assignments as `Home Work and Assignment`,
LeaveLetters_To_Staffs as `Sent Leave Letters to Staffs`,
scs_Report as `School Commect Support Issue Report`, 
total_events as `Total Event Usages`, 
tot_fac_created as `Total Faculty File Created`, 
total_story as `Total Story Count`,
tot_gallery as `Total Gallery Usages`,
total_image as `Total Image Uploaded`,
assignments as `Total Assignment Marks Loaded`
 FROM `usage_report_final_sr`");

echo "<table border='1'>
<tr bgcolor='LightGray'>
<th>Send Messages</th>
<th>Attendence Report</th>
<th>Leave Letter Approval Sent to Parent</th>
<th>Acadamic Report</th>
<th>View Messages(Teacher User)</th>
<th>View Messages(Student & Parent User) For Individual Messages</th>
<th>View Messages(Student & Parent User) For Class Messages</th>
<th>Home Work and Assignment</th>
<th>Sent Leave Letters to Staffs</th>
<th>School Commect Support Issue Report</th>
<th>Total Event Usages</th>
<th>Total Faculty File Created</th>
<th>Total Story Count</th>
<th>Total Gallery Usages</th>
<th>Total Image Uploaded</th>
<th>Total Assignment Marks Loaded</th>
</tr>";

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td>". $row['Send Messages']."</td>" ;
  echo "<td>". $row['Attendence Report'] ."</td>" ;
  echo "<td>". $row['Leave Letter Approval Sent to Parent'] ."</td>" ;
  echo "<td>". $row['Acadamic Report'] ."</td>" ;
  echo "<td>". $row['View Messages(Teacher User)'] ."</td>" ;
  echo "<td>". $row['View Messages(Student & Parent User) For Individual Messages'] ."</td>" ;
  echo "<td>". $row['View Messages(Student & Parent User) For Class Messages'] ."</td>" ;
  echo "<td>". $row['Home Work and Assignment']."</td>" ;
  echo "<td>". $row['Sent Leave Letters to Staffs'] ."</td>" ;
  echo "<td>". $row['School Commect Support Issue Report'] ."</td>" ;
  echo "<td>". $row['Total Event Usages'] ."</td>" ;
  echo "<td>". $row['Total Faculty File Created'] ."</td>" ;
  echo "<td>". $row['Total Story Count'] ."</td>" ;
  echo "<td>". $row['Total Gallery Usages'] ."</td>" ;
  echo "<td>". $row['Total Image Uploaded'] ."</td>" ;
  echo "<td>". $row['Total Assignment Marks Loaded'] ."</td>" ;
  echo "</tr>";
  echo "<br />";
  }
echo "</table>";
mysql_close($con);

?>
