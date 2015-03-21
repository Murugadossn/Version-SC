text/x-generic TemplateProcessor.php
HTML document text

<html>
<body>
<?php 

	function loadStudentRouteMap ($fileName, $schoolName) {
		$sql0 = "INSERT INTO `qtxt_sms_file_loads` (`batch_id`,`file_type`,`number_of_records`,`file_load_status`,`creation_date`,`created_by`)	VALUES (null, 'Student routes map',null, 'N', null, null)";
		$loadData = mysql_query($sql0);
		$iLastId = mysql_insert_id();
	
		$row = 1;
		if (($handle = fopen($fileName, "r")) !== FALSE) {
    		while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
        		$num = count($data);
	        	$row++;
	        	$attQuery = "INSERT INTO `qtxt_sms_account_route_student_int` ( `student_identifier` , `route_number`, `stop_name`, `status`,`batch_id`, `row_id`) VALUES ( '$data[0]' ,  '$data[1]' , '$data[2]' , '$data[3]', $iLastId, null)";
				$loadData = mysql_query($attQuery);
				if (!$loadData) {
					die('Could not load data from file into table: ' .mysql_error());
				}
    	    }
 	        fclose($handle);
                $rs5 = mysql_query("CALL SP_PROCESS_STUDENT_ROUTE_MAP($iLastId,'$schoolName')");
				
			print "<table border cellpadding=3>";
			while($row3 = mysql_fetch_assoc($rs5))
			{
				print "<tr>";
				print "<th>Student Identifier</th><td>".$row3["student_identifier"]."</td>";
				print "<th>Route Number </th><td>".$row3["route_number"]."</td>";
				print "<th>Active Flag </th><td>".$row3["status"]."</td>";
				print "<th>Stop Name </th><td>".$row3["stop_name"]."</td>";
				print "<th>Batch Id</th><td>".$row3["batch_id"]."</td>";
				print "<th>Row Id</th><td>".$row3["row_id"]."</td>";
				print "<th>Process Status</th><td>".$row3["process_status"]."</td>";
				print "<th>Process Flag</th><td>".$row3["process_flag"]."</td>";
				print "</tr>";
			}
			print "</table>";
	    }
	   // mysql_free_result($loadData);
	}

	function loadRoutes ($fileName, $schoolName) {
		$sql0 = "INSERT INTO `qtxt_sms_file_loads` (`batch_id`,`file_type`,`number_of_records`,`file_load_status`,`creation_date`,`created_by`)	VALUES (null, 'routes - Stops upload',null, 'N', null, null)";
		$loadData = mysql_query($sql0);
		$iLastId = mysql_insert_id();
	
		$row = 1;
		if (($handle = fopen($fileName, "r")) !== FALSE) {
    		while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
        		$num = count($data);
	        	$row++;

	        	$attQuery = "INSERT INTO `qtxt_sms_route_stops_int` (`batch_id`, `route_name`, `route_desc`, `stop_name` ,  `stop_desc`, `stop_weight`, `status`) VALUES ($iLastId, '$data[0]' ,  '$data[1]' , '$data[2]' , '$data[3]',  '$data[4]' ,  '$data[5]' )";

				$loadData = mysql_query($attQuery);

				if (!$loadData) {
					die('Could not load data from file into table: ' .mysql_error());
				}

				}
 	        fclose($handle);
                $rs5 = mysql_query("CALL SP_PROCESS_ROUTE_STOPS($iLastId,'$schoolName')");

 
			print "<table border cellpadding=3>";
			while($row3 = mysql_fetch_assoc($rs5))
			{
				print "<tr>";
				print "<th>Route Name</th><td>".$row3["route_name"]."</td>";
				print "<th>Route Description </th><td>".$row3["route_desc"]."</td>";
				print "<th>Stop Name</th><td>".$row3["stop_name"]."</td>";
				print "<th>Stop Description </th><td>".$row3["stop_desc"]."</td>";
				print "<th>Stop Weight</th><td>".$row3["stop_weight"]."</td>";
				print "<th>Status </th><td>".$row3["status"]."</td>";
				print "<th>Batch Id</th><td>".$row3["batch_id"]."</td>";
				print "<th>Row Id</th><td>".$row3["row_id"]."</td>";
				print "<th>Process Status</th><td>".$row3["process_status"]."</td>";
				print "<th>Process Flag</th><td>".$row3["process_flag"]."</td>";
				print "</tr>";
			}
			print "</table>";
	    }
	   // mysql_free_result($loadData);
	}



function loadFeesData($fileName, $schoolName)
{
$sql0 = "INSERT INTO `qtxt_sms_file_loads` (`batch_id`,`file_type`,`number_of_records`,`file_load_status`,`creation_date`,`created_by`)	VALUES (null, 'fees',null, 'N', null, null)";
	$loaddata = mysql_query($sql0);
	$iLastID = mysql_insert_id();

      if (($handle = fopen($fileName, "r")) !== FALSE) {
		while (($data = fgetcsv($handle, 1000, ",", '"' )) !== FALSE) {

			$num = count($data);
			echo "<p> $num fields in line $row: <br /></p>\n";
			for ($c=0; $c < $num; $c++) {
				echo $data[$c] . "<br />\n";
			}


			print( "Data Inserted - LOG 5 " . $data[0] . "<br>" );

			$sql2 = "INSERT INTO `qtxt_sms_fees_int`(`fees_name`, `fees_description`, `standard`, `section`, `process_flag`,`batch_id`)
			VALUES (
			'$data[0]', '$data[1]', '$data[2]', '$data[3]', 
			'N', $iLastID
			)";

/*			
			$sql2 = "INSERT INTO `qtxt_vhss_student_mobile_data_int` (  student_id, `student_name`, `father_name`, `father_mobile`, `mother_name`, `mother_mobile`, `class`, `section`, status,  process_flag, batch_id)
			 VALUES ('$data[0]', '$data[1]', '$data[2]', 
			 '$data[3]', '$data[4]', '$data[5]', '$data[6]', '$data[7]',
			 'Y', 'N', $iLastID)";
*/
			 $loaddata = mysql_query($sql2);
			if (!$loaddata) {
				die('Could not load data from file into table: ' .mysql_error());
			}
		}
		fclose($handle);

		$result  = mysql_query("call SP_RVS_FEES( '$iLastID' , '$schoolName')");

		if (!$result) {
			echo "Could not successfully execute the Procedure SP_RVS_FEES from DB: " . mysql_error();
			exit;
		}

		$numRows = mysql_num_rows($result);
		if ($numRows == 0) {
			echo "No rows found, nothing to print so am exiting";
			exit;
		}

		echo "<p> $numRows rows: <br /></p>\n";


		print "<table border cellpadding=3>";

		while($row1 = mysql_fetch_assoc($result))
		{
		print "<tr>";
		print "<th> Fee Name: </th> <td>". $row1["fees_name"] . "</td>";
		print "<th> Fee Description: </th> <td>". $row1["fees_description"] . "</td>";
		print "<th> standard: </th> <td>". $row1["standard"] . "</td>";
		print "<th> section: </th> <td>". $row1["section"] . "</td>";

		print "<th> batch_id: </th> <td>". $row1["batch_id"] . "</td>";
		print "<th> row_id: </th> <td>". $row1["row_id"] . "</td>";
		print "<th> process_status: </th> <td>". $row1["process_status"] . "</td>";
		print "<th> process_flag: </th> <td>". $row1["process_flag"] . "</td>";
		print "</tr>";
		}

		print "</table>";


		mysql_free_result($result);

	}
}



function loadStudentMobile($fileName, $schoolName)
{
$sql0 = "INSERT INTO `qtxt_sms_file_loads` (`batch_id`,`file_type`,`number_of_records`,`file_load_status`,`creation_date`,`created_by`)	VALUES (null, 'student_parent',null, 'N', null, null)";
	$loaddata = mysql_query($sql0);
	$iLastID = mysql_insert_id();

      if (($handle = fopen($fileName, "r")) !== FALSE) {
		while (($data = fgetcsv($handle, 1000, ",", '"' )) !== FALSE) {

			$num = count($data);
			echo "<p> $num fields in line $row: <br /></p>\n";
			for ($c=0; $c < $num; $c++) {
				echo $data[$c] . "<br />\n";
			}


			print( "Data Inserted - LOG 5 " . $data[0] . "<br>" );

//			$studentName = $data[1] . " " . $data[2];
			$studentName = $data[1] ;
			$sql2 = "INSERT INTO `qtxt_rvs_student_mobile_data_int`(`student_id`,`student_name`,`father_name`,`father_mobile`,`mother_name`,`mother_mobile`,`class`,`section`,
			`dob`, gender, student_mobile_number, `mother_tongue`,`examination_passed`,`date_exam_passed`,
			`certificate_number`,`certificate_date`,`number1`,`date1`,`number2`,`date2`,
                         `student_email`,`blood_group`,`permanent_address`,`temporary_address`,`student_type`,`student_come_through`,`student_come_from`,
                         `student_fare`,`student_religion`,`student_caste`,`student_fees_fixed` ,
                         `status`,`process_flag`,`batch_id`)
			VALUES (
			'$data[0]', '$studentName', '$data[2]', '$data[3]','$data[4]', '$data[5]', '$data[6]', '$data[7]', 
			'$data[8]', '$data[9]', '$data[10]','$data[11]', '$data[12]', '$data[13]',
			'$data[14]','$data[15]','$data[16]','$data[17]','$data[18]','$data[19]','$data[20]','$data[21]','$data[22]','$data[23]',
                        '$data[24]','$data[25]','$data[26]','$data[27]','$data[28]','$data[29]','$data[30]',
			'Y', 'N', $iLastID	)";


/*			
			$sql2 = "INSERT INTO `qtxt_Demo_student_mobile_data_int` (  student_id, `student_name`, `father_name`, `father_mobile`, `mother_name`, `mother_mobile`, `class`, `section`, status,  process_flag, batch_id)
			 VALUES ('$data[0]', '$data[1]', '$data[2]', 
			 '$data[3]', '$data[4]', '$data[5]', '$data[6]', '$data[7]',
			 'Y', 'N', $iLastID)";
*/
			 $loaddata = mysql_query($sql2);
			if (!$loaddata) {
				die('Could not load data from file into table: ' .mysql_error());
			}
		}
		fclose($handle);

		$result  = mysql_query("call SP_RVS_PROCESS_STUDENTS( '$iLastID' , '$schoolName')");

		if (!$result) {
			echo "Could not successfully execute the Procedure SP_RVS_PROCESS_STUDENTS from DB: " . mysql_error();
			exit;
		}

		$numRows = mysql_num_rows($result);
		if ($numRows == 0) {
			echo "No rows found, nothing to print so am exiting";
			exit;
		}

		echo "<p> $numRows rows: <br /></p>\n";


		print "<table border cellpadding=3>";

		while($row1 = mysql_fetch_assoc($result))
		{
		print "<tr>";
		print "<th> student_id: </th> <td>". $row1["student_id"] . "</td>";
		print "<th> student_name: </th> <td>". $row1["student_name"] . "</td>";
		print "<th> father_name: </th> <td>". $row1["father_name"] . "</td>";
		print "<th> father_mobile: </th> <td>". $row1["father_mobile"] . "</td>";
		print "<th> mother_name: </th> <td>". $row1["mother_name"] . "</td>";
		print "<th> mother_mobile: </th> <td>". $row1["mother_mobile"] . "</td>";
		print "<th> class: </th> <td>". $row1["class"] . "</td>";
                print "<th> section: </th> <td>". $row1["section"] . "</td>";
		
		print "<th> Student Mobile Number: </th> <td>". $row1["student_mobile_number"] . "</td>";
                print "<th> Gender: </th> <td>". $row1["gender"] . "</td>";

		print "<th> status: </th> <td>". $row1["status"] . "</td>";

		print "<th> dob: </th> <td>". $row1["dob"] . "</td>";
		print "<th> mother_tongue: </th> <td>". $row1["mother_tongue"] . "</td>";
		print "<th> examination_passed: </th> <td>". $row1["examination_passed"] . "</td>";
		print "<th> date_exam_passed: </th> <td>". $row1["date_exam_passed"] . "</td>";
		print "<th> certificate_number: </th> <td>". $row1["certificate_number"] . "</td>";
		print "<th> certificate_date: </th> <td>". $row1["certificate_date"] . "</td>";
		print "<th> batch_id: </th> <td>". $row1["batch_id"] . "</td>";
		print "<th> row_id: </th> <td>". $row1["row_id"] . "</td>";
		print "<th> process_status: </th> <td>". $row1["process_status"] . "</td>";
		print "<th> process_flag: </th> <td>". $row1["process_flag"] . "</td>";
		print "</tr>";
		}

		print "</table>";


		mysql_free_result($result);

	}
}

	
	function loadAdminData ($fileName, $schoolName) {
		$sql0 = "INSERT INTO `qtxt_sms_file_loads` (`batch_id`,`file_type`,`number_of_records`,`file_load_status`,`creation_date`,`created_by`)	VALUES (null, 'routes upload',null, 'N', null, null)";
		$loadData = mysql_query($sql0);
		$iLastID = mysql_insert_id();
	
		$row = 1;
		if (($handle = fopen($fileName, "r")) !== FALSE) {
    		while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
        		$num = count($data);
	        	$row++;
	        	if (preg_match('/\w+/',$data[3]) == 0)
			{
			print ("IN first"."<br>");

			$sql2 = "INSERT INTO `qtxt_sms_admin_int`(mobile_number,name,contact_details,admin_type,admin_role,active_flag,`batch_id`,`staff_email`)
					VALUES  ('$data[0]', '$data[1]', '$data[2]', '$data[5]','$data[6]','$data[7]', $iLastID, '$data[8]')";
			}
			elseif (preg_match('/\w+/',$data[3]) == 1 && preg_match('/\w+/',$data[4]) == 0) {
			print ("IN second"."<br>");
				$sql2 = "INSERT INTO `qtxt_sms_admin_int`(`mobile_number`,name,contact_details,standard,admin_type,admin_role,active_flag,`batch_id`,`staff_email`)
					VALUES  ('$data[0]', '$data[1]','$data[2]','$data[3]', '$data[5]','$data[6]','$data[7]', $iLastID, '$data[8]')";
			}
			else {
			print ("IN third"."<br>");
			$sql2 = "INSERT INTO `qtxt_sms_admin_int`(`mobile_number`,name,contact_details,standard,section,admin_type,admin_role,active_flag,`batch_id`,`staff_email`)
					VALUES  ('$data[0]', '$data[1]', '$data[2]','$data[3]','$data[4]','$data[5]','$data[6]','$data[7]', $iLastID, '$data[8]')";
			}

		echo "<p> $sql2 <br /></p>\n";

		$loadData = mysql_query($sql2);				if (!$loadData) {
					die('Could not load data from file into table: ' .mysql_error());
				}
    	    }
 	        fclose($handle);

                $rs5 = mysql_query("CALL SP_PROCESS_ADMIN($iLastID,'$schoolName')");

print "<table border cellpadding=3>";
while($row3 = mysql_fetch_assoc($rs5))
{
print "<tr>";
print "<th>Mobile Number</th><td>".$row3["mobile_number"]."</td>";
print "<th>Admin Name </th><td>".$row3["name"]."</td>";
print "<th>Contact details</th><td>".$row3["contact_details"]."</td>";
print "<th> Standard</th><td>".$row3["standard"]."</td>";
print "<th> Section </th><td>".$row3["section"]."</td>";
print "<th> Admin Type </th><td>".$row3["admin_type"]."</td>";
print "<th> Admin Role </th><td>".$row3["admin_role"]."</td>";
print "<th> Active Flag </th><td>".$row3["active_flag"]."</td>";
print "<th>Batch Id</th><td>".$row3["batch_id"]."</td>";
print "<th>Row Id</th><td>".$row3["row_id"]."</td>";
print "<th>Process Status</th><td>".$row3["process_status"]."</td>";
print "<th>Process Flag</th><td>".$row3["process_flag"]."</td>";
print "</tr>";
}
print "</table>";
	    }	
	   // mysql_free_result($loadData);
}
	

	function loadAttendance ($fileName, $schoolName) {
		$sql0 = "INSERT INTO `qtxt_sms_file_loads` (`batch_id`,`file_type`,`number_of_records`,`file_load_status`,`creation_date`,`created_by`)	VALUES (null, 'attendance',null, 'N', null, null)";
		$loadData = mysql_query($sql0);
		$iLastId = mysql_insert_id();
		$row = 1;
                date_default_timezone_set("Asia/Calcutta");
		if (($handle = fopen($fileName, "r")) !== FALSE) {
    		while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
        		$num = count($data);
	        	$row++;
                        $s1 = date_create($data[1]);
			$s3 = date_format($s1,'Y-m-d h:i');
	        	$attQuery = "INSERT INTO `qtxt_sms_attendance_template` (`batch_id`,`student_identifier` , `absent_date`, `row_id`) VALUES ($iLastId, '$data[0]','$s3', null)";
				$loadData = mysql_query($attQuery);
				if (!$loadData) {
					die('Could not load data from file into table: ' .mysql_error());
				}
    	    }
 	        fclose($handle);
                $rs5 = mysql_query("CALL SP_PROCESS_ATTENDANCE($iLastId,'$schoolName')");

			print "<table border cellpadding=3>";
			while($row3 = mysql_fetch_assoc($rs5))
			{
				print "<tr>";
				print "<th>Student Identifier</th><td>".$row3["student_identifier"]."</td>";
				print "<th>Absent Date </th><td>".$row3["absent_date"]."</td>";
				print "<th>Batch Id</th><td>".$row3["batch_id"]."</td>";
				print "<th>Row Id</th><td>".$row3["row_id"]."</td>";
				print "<th>Process Status</th><td>".$row3["process_status"]."</td>";
				print "<th>Process Flag</th><td>".$row3["process_flag"]."</td>";
				print "</tr>";
			}
			print "</table>";
	    }	
	   // mysql_free_result($loadData);
	}
	

function loadSchedule($fileName, $schoolName)
{
date_default_timezone_set("Asia/Calcutta");

		$sql0 = "INSERT INTO `qtxt_sms_file_loads` (`batch_id`,`file_type`,`number_of_records`,`file_load_status`,`creation_date`,`created_by`)	VALUES (null, 'test_schedule_load',null, 'N', null, null)";
			$loaddata = mysql_query($sql0);
			$iLastID = mysql_insert_id();

	if (($handle = fopen($fileName, "r")) !== FALSE) {
		while (($data = fgetcsv($handle, 1000, ",", '"' )) !== FALSE) {
			$num = count($data);
			echo "<p> $num fields in line $row: <br /></p>\n";
			for ($c=0; $c < $num; $c++) {
				echo $data[$c] . "<br />\n";
			}


			print( "Data Inserted - LOG 5 " . $data[0] . "<br>" );
			$s1 = date_create($data[4]);
			$s2 = date_create($data[5]);
			$s3 = date_format($s1,'Y-m-d h:i');
			$s4 = date_format($s2,'Y-m-d h:i');
			print "$s3++$s4";

			if (preg_match('/mark[s]?/i',$data[6]))
			{

			$sql2 = "INSERT INTO `qtxt_sms_test_schedule_int`(`test_code`,`standard`,`section`,subject_code, `start_date`,`end_date`,`max_marks`,  MARKS_TYPE,`batch_id`)
					VALUES  ('$data[0]', '$data[1]', '$data[2]', '$data[3]', '$s3', '$s4', '$data[7]', '$data[6]',  $iLastID)";
			}
			else
			{
			$sql2 = "INSERT INTO `qtxt_sms_test_schedule_int`(`test_code`,`standard`,`section`,subject_code, `start_date`,`end_date`,MARKS_TYPE,`batch_id`)
					VALUES  ('$data[0]', '$data[1]', '$data[2]', '$data[3]', '$s3', '$s4', '$data[6]',  $iLastID)";
			}
		echo "<p> $sql2 <br /></p>\n";

		$loaddata = mysql_query($sql2);
			if (!$loaddata) {
				die('Could not load data from file into table: ' .mysql_error());			}

		}
		fclose($handle);
$rs5 = mysql_query("CALL SP_PROCESS_SCHEDULE($iLastID,'$schoolName')");

print "<table border cellpadding=3>";
while($row3 = mysql_fetch_assoc($rs5))
{
print "<tr>";
print "<th>Test code </th><td>".$row3["test_code"]."</td>";
print "<th>Standard </th><td>".$row3["standard"]."</td>";
print "<th>Section</th><td>".$row3["section"]."</td>";
print "<th>Subject</th><td>".$row3["subject_code"]."</td>";
print "<th>Start Date</th><td>".$row3["start_date"]."</td>";
print "<th> End Date</th><td>".$row3["end_date"]."</td>";
print "<th> Marks type</th><td>".$row3["MARKS_TYPE"]."</td>";
print "<th> Max Marks </th><td>".$row3["max_marks"]."</td>";
print "<th>Batch Id</th><td>".$row3["batch_id"]."</td>";
print "<th>Row Id</th><td>".$row3["row_id"]."</td>";
print "<th>Process Status</th><td>".$row3["process_status"]."</td>";
print "<th>Process Flag</th><td>".$row3["process_flag"]."</td>";
print "</tr>";
}
print "</table>";

}
}

function loadResults($fileName, $schoolName, $testCode)
{
//$examName = 'QUATERLY - 2010';
$examName = $testCode;
$headerRecFlag = 'N';

$sql0 = "INSERT INTO `qtxt_sms_file_loads` (`batch_id`,`file_type`,`number_of_records`,`file_load_status`,`creation_date`,`created_by`)	VALUES (null, 'test_schedule_load',null, 'N', null, null)";
	$loaddata = mysql_query($sql0);
	$iLastID = mysql_insert_id();

if (($handle = fopen($fileName, "r")) !== FALSE) {
		while (($data = fgetcsv($handle, 1000, ",", '"' )) !== FALSE) {
			if ( $headerRecFlag == 'N' ) {
				$headerRecFlag = 'Y';
				$headerRec = $data;
				continue;
			}
			$num = count($data);
			echo "<p> $num fields in line $row: <br /></p>\n";
			for ($c=0; $c < $num; $c++) {
				echo $data[$c] . "<br />\n";
			}
			$hallTicketNum = $data[0];
			$studentName = $data[1];
			

			print( "Data Inserted - LOG 5 " . $data[0] . "<br>" );
			
			for ($ii = 1; $ii <= 25; $ii++) { 
				$var[$ii] = "NONE-";
			}
			$x = 2;
			for ($i = 1; $i <= 25; $i++) { 
//print ( "Header Record - "	. trim($headerRec[$x]). "<br>" );			
				if ( strcasecmp ( trim($headerRec[$x]) , 'TOTAL') == 0 ) {
//print( "Data Inserted - LOG 10 " .trim($headerRec[$x]) . "<br>" );				
				break;
				} ELSE {
					$xvar = trim($data[$x]);
 //print( "Data - Log XXX1 "	. 	$xvar. "<br>");			
					$tempVar = str_replace("-", "", $xvar );
 //print( "Data - Log XXX2 "	. 	$tempVar. "<br>");			
					$tempVar = ereg_replace("[A-Za-z]", "", $tempVar );
//print( "Data - Log XXX3 "	. 	$tempVar. "<br>");			
					
//					print( "Data Created - Lot 7777 " .$headerRec[$x] . '-' . trim($data[$x]) . "<br>" . $tempVar);	
					$var[$i] = $headerRec[$x] . '-'. $tempVar;
	// print( "Data Created - Lot 7777 " .$headerRec[$x] . '-' . trim($data[$x]) . "<br>" );				
	// $var[$i] = $headerRec[$x] . '-' . trim($data[$x]) ;
				}
			    $x = $x +1;

			}
					$totalMarks = $data[$x];
					$rank = str_replace("-", "", $data[$x + 1] );
					if ( empty($rank) ) {
						$rank = 'null';
					}
					$attendance = $data[$x + 2];
					$class = $data[$x + 3];
					$section = $data[ $x + 4];
					$batchId =  $iLastID;

					if ( empty($attendance) ) {
						$attendance = 'null';
					}

					if ( empty($totalMarks) ) {
						$totalMarks = 'null';
					}


			$sql2 = " INSERT INTO `qtxt_sms_vhss_results_int`  ( `hall_ticket_number`,
			`student_name`, `subject1_result`, `subject2_result`,  `subject3_result`, `subject4_result`,
			`subject5_result`, `subject6_result` , `subject7_result`, `subject8_result`, `subject9_result`,
			`subject10_result`, `subject11_result`, `subject12_result`, `subject13_result`, `subject14_result`, `subject15_result`,
			`subject16_result`, `subject17_result`, `subject18_result`, `subject19_result`, `subject20_result`, `subject21_result`, 
			`subject22_result`, `subject23_result`, `subject24_result`, `subject25_result`,
			`total_marks`, `rank`, `attendance`, `class`, `section`, `batch_id`, test_code) values
 (
			'$data[0]', '$data[1]', '$var[1] ', '$var[2]', '$var[3] ', '$var[4]', '$var[5] ', '$var[6]',
			'$var[7] ', '$var[8]',  '$var[9] ', '$var[10]', '$var[11]', '$var[12]', '$var[13]', '$var[14]', '$var[15]', 
                        '$var[16]', '$var[17]', '$var[18]', '$var[19]', '$var[20]', '$var[21]', '$var[22]', '$var[23]', '$var[24]', '$var[25]',
  $totalMarks, '$rank', $attendance, '$class', '$section', $batchId,
			'$examName'
			)";

			
			// It is always marks 
			// don't need this
//			if ( ( $data[0] == 'X' ) and ( $data[1] == 'A' ) ) {
/*			
			$sql2 = "INSERT INTO `qtxt_sms_test_results_int`(`test_code`,`student_id`,`subject_name`,`marks_type`,marks_obtained,`batch_id`)
					VALUES  ('$data[0]', '$data[1]', '$data[2]', '$data[3]', '$data[4]', $iLastID)";
//			}
*/
			
		//	}
			
/*
			if (preg_match('/mark[s]?/i',$data[3]))
			{

			$sql2 = "INSERT INTO `qtxt_sms_test_results_int`(`test_code`,`student_id`,`subject_name`,`marks_type`,marks_obtained,`batch_id`)
					VALUES  ('$data[0]', '$data[1]', '$data[2]', '$data[3]', '$data[4]', $iLastID)";
			}
			else
			{
			$sql2 = "INSERT INTO `qtxt_sms_test_results_int`(`test_code`,`student_id`,`subject_name`,`marks_type`,`grade_obtained`,`batch_id`)
					VALUES  ('$data[0]', '$data[1]', '$data[2]', '$data[3]', '$data[4]', $iLastID)";
			}
*/
			echo "<p> $sql2 <br /></p>\n";

		$loaddata = mysql_query($sql2);
			if (!$loaddata) {
				die('Could not load data from file into table: ' .mysql_error());			}

		}
		fclose($handle);
		
	
$rs5 = mysql_query("CALL SP_VHSS_PROCESS_RESULTS($iLastID,'$schoolName')");

print "<table border cellpadding=3>";
	while($row1 = mysql_fetch_assoc($rs5))
		{
		print "<tr>";
		print "<th> test_code: </th> <td>". $row1["test_code"] . "</td>";
		print "<th> hall_ticket_number: </th> <td>". $row1["hall_ticket_number"] . "</td>";
		print "<th> student_name: </th> <td>". $row1["student_name"] . "</td>";
		print "<th> subject1_result: </th> <td>". $row1["subject1_result"] . "</td>";
		print "<th> subject2_result: </th> <td>". $row1["subject2_result"] . "</td>";
		print "<th> subject3_result: </th> <td>". $row1["subject3_result"] . "</td>";
		print "<th> subject4_result: </th> <td>". $row1["subject4_result"] . "</td>";
		print "<th> subject5_result: </th> <td>". $row1["subject5_result"] . "</td>";
		print "<th> subject6_result: </th> <td>". $row1["subject6_result"] . "</td>";
		print "<th> subject7_result: </th> <td>". $row1["subject7_result"] . "</td>";
		print "<th> subject8_result: </th> <td>". $row1["subject8_result"] . "</td>";
		print "<th> subject9_result: </th> <td>". $row1["subject9_result"] . "</td>";
		print "<th> subject10_result: </th> <td>". $row1["subject10_result"] . "</td>";
		
		print "<th> subject11_result: </th> <td>". $row1["subject11_result"] . "</td>";
		print "<th> subject12_result: </th> <td>". $row1["subject12_result"] . "</td>";
		print "<th> subject13_result: </th> <td>". $row1["subject13_result"] . "</td>";
		print "<th> subject14_result: </th> <td>". $row1["subject14_result"] . "</td>";
		print "<th> subject15_result: </th> <td>". $row1["subject15_result"] . "</td>";
		print "<th> subject16_result: </th> <td>". $row1["subject16_result"] . "</td>";
		print "<th> subject17_result: </th> <td>". $row1["subject17_result"] . "</td>";
		print "<th> subject18_result: </th> <td>". $row1["subject18_result"] . "</td>";
		print "<th> subject19_result: </th> <td>". $row1["subject19_result"] . "</td>";
		print "<th> subject20_result: </th> <td>". $row1["subject20_result"] . "</td>";
		print "<th> subject21_result: </th> <td>". $row1["subject21_result"] . "</td>";
		print "<th> subject22_result: </th> <td>". $row1["subject22_result"] . "</td>";
		print "<th> subject23_result: </th> <td>". $row1["subject23_result"] . "</td>";
		print "<th> subject24_result: </th> <td>". $row1["subject24_result"] . "</td>";
		print "<th> subject25_result: </th> <td>". $row1["subject25_result"] . "</td>";
		
		print "<th> total_marks: </th> <td>". $row1["total_marks"] . "</td>";
		print "<th> rank: </th> <td>". $row1["rank"] . "</td>";
		print "<th> attendance: </th> <td>". $row1["attendance"] . "</td>";
		print "<th> class: </th> <td>". $row1["class"] . "</td>";
		print "<th> section: </th> <td>". $row1["section"] . "</td>";
		print "<th> batch_id: </th> <td>". $row1["batch_id"] . "</td>";
		print "<th> row_id: </th> <td>". $row1["row_id"] . "</td>";
		print "<th> process_status: </th> <td>". $row1["process_status"] . "</td>";
		print "<th> process_flag: </th> <td>". $row1["process_flag"] . "</td>";
		print "</tr>";
		}
print "</table>";
			echo "<p> DATA INSERTED <br /></p>\n";

	}
}



	
	
    $schoolId=$_POST["schoolId"];
    $interfaceType=$_POST["interfaceType"];
	$testCode=$_POST["testcode"];
	$randomFileName = rand();
    $flag = 0;
    
	print( "schoolId       : " . $schoolId . "<br>" );
	print( "interfaceType  : " . $interfaceType . "<br>" );
	print( "randomFileName : " . $randomFileName . "<br>" );
	print( "testCode : " . $testCode . "<br>" );	

	$target_path = "upload/";
	$target_path = $target_path . $randomFileName.".csv"; 
	
    echo "<br> Target_path   : ".$target_path;
    echo "<br> Temp Path : ".$_FILES['uploadedfile']['tmp_name'];
    
  	if(move_uploaded_file($_FILES['uploadedfile']['tmp_name'], $target_path))
 {
    	echo "<br> The file ".  basename( $_FILES['uploadedfile']['name'])." has been uploaded <br>";
        $flag = 1;
    }
 else{
   		echo "<br> There was an error uploading the file, please try again!";
   		$flag = 0;
   }
	
   if ($flag == 1){	
		include "mysql_connect.php";
		
		if ($interfaceType == "9") {
			loadStudentMobile($target_path,$schoolId);
		} elseif ($interfaceType == "3") {
			loadAdminData ($target_path, $schoolId) ;
		}elseif ($interfaceType == "10") {
			loadFeesData ($target_path, $schoolId) ;
		}elseif ($interfaceType == "4") {
			loadRoutes ($target_path, $schoolId) ;
		}elseif ($interfaceType == "11") {
			loadStudentRouteMap ($target_path, $schoolId) ;
		}elseif ($interfaceType == "5") {
			loadAttendance ($target_path, $schoolId);
		}elseif ($interfaceType == "7") {
            loadSchedule($target_path,$schoolId);
        }elseif ($interfaceType == "8") {
             loadResults($target_path,$schoolId, $testCode);
        }
		mysql_close($mysql);
   }

?> 
</body>
</html>

