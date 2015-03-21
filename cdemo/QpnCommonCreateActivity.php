<?php

class Qpn_create_activity{
public function createactivity_next_submit($account,
$activity,$activitydesc,$coordinator,$specialinstructions,
 $mandatory, $regstartdate, $regenddate, $feequota,$path){
 /*echo $account.
$activity.$activitydesc.$coordinator.$specialinstructions.
 $mandatory. $regstartdate. $regenddate. $feequota."helllo    ".$path;*/
$path = str_replace('/','', $path);
			$ini_array = parse_ini_file("connection.ini", true);
			$this->dbhost = $ini_array[$path]['dbhost'];
			$this->dbuser = $ini_array[$path]['dbuser'];
			$this->dbpass = $ini_array[$path]['dbpass'];
			$this->dbname = $ini_array[$path]['dbname'];


			$mysql = mysql_connect($this->dbhost, $this->dbuser, $this->dbpass, false, 65536) or die ( 'Error connecting to mysql');
			mysql_select_db($this->dbname, $mysql);
			
			/*$ret = mysql_query("call  QPN_SP_CREATE_ACTIVITY(%d, '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s' );", $account, $activity, $activitydesc, $coordinator, $specialinstructions, $mandatory, $regstartdate, $regenddate, $feequota );*/
			//$result  = mysql_query("call SP_RVS_FEES( '$iLastID' , '$schoolName')");
			//$result  = mysql_query("call QPN_SP_CREATE_ACTIVITY( '$iLastID' , '$schoolName')");
			$result  =  mysql_query("call  QPN_SP_CREATE_ACTIVITY( '$account', '$activity', '$activitydesc', '$coordinator', '$specialinstructions', '$mandatory', '$regstartdate', '$regenddate', '$feequota')");

		if (!$result) {
			echo "Could not successfully execute the Procedure SP_RVS_FEES from DB: " . mysql_error();
			exit;
		}

		$numRows = mysql_num_rows($result);
		if ($numRows == 0) {
			echo "No rows found, nothing to print so am exiting";
			exit;
		}


		while($row1 = mysql_fetch_assoc($result))
		{
		$feeID=$row1["nActivityId"];
		
		}

		


		mysql_free_result($result);
		mysql_close($mysql);

		
	

//nActivityId;
return $feeID;


}
public function qpncreate_fees_test($activityID, $feeType, $feeDesc, $feequota, $totalAmount,$path){

 /*echo $activityID, $feeType, $feeDesc, $feequota, $totalAmount,$path;*/
$path = str_replace('/','', $path);
			$ini_array = parse_ini_file("connection.ini", true);
			$this->dbhost = $ini_array[$path]['dbhost'];
			$this->dbuser = $ini_array[$path]['dbuser'];
			$this->dbpass = $ini_array[$path]['dbpass'];
			$this->dbname = $ini_array[$path]['dbname'];


			$mysql = mysql_connect($this->dbhost, $this->dbuser, $this->dbpass, false, 65536) or die ( 'Error connecting to mysql');
			mysql_select_db($this->dbname, $mysql);
			//$ret = sp_query("call  QPN_SP_CREATE_FEES_TEST(%d, '%s', '%s', '%s', %f );", $activityID, $feeType, $feeDesc, $feequota, $totalAmount );
			$result  =  mysql_query("call  QPN_SP_CREATE_FEES_TEST( '$activityID', '$feeType', '$feeDesc', '$feequota', '$totalAmount')");

		if (!$result) {
			echo "Could not successfully execute the Procedure QPN_SP_CREATE_FEES_TEST from DB: " . mysql_error();
			exit;
		}

		$numRows = mysql_num_rows($result);
		if ($numRows == 0) {
			echo "No rows found, nothing to print so am exiting";
			exit;
		}


		while($row1 = mysql_fetch_assoc($result))
		{
		$feeID=$row1["nFeeDetailId"];
		
		}

		mysql_free_result($result);
		mysql_close($mysql );
         
	

		
	//echo "end 1";

//nActivityId;
return $feeID;
}
public function qpnactivity_grade_map($activityID, $classArray, $feequota,$path){
 /*echo $activityID, $classArray, $feequota,$path;*/
$path = str_replace('/','', $path);
			$ini_array = parse_ini_file("connection.ini", true);
			$this->dbhost = $ini_array[$path]['dbhost'];
			$this->dbuser = $ini_array[$path]['dbuser'];
			$this->dbpass = $ini_array[$path]['dbpass'];
			$this->dbname = $ini_array[$path]['dbname'];


			$mysql = mysql_connect($this->dbhost, $this->dbuser, $this->dbpass, false, 65536) or die ( 'Error connecting to mysql');
			mysql_select_db($this->dbname, $mysql);
			//$ret = sp_query("call  QPN_SP_CREATE_ACTIVITY_GRADE_MAP_TEST(%d, %d, '%s');", $activityID, $classArray, $feequota )
			$result  =  mysql_query("call  QPN_SP_CREATE_ACTIVITY_GRADE_MAP_TEST( '$activityID', '$classArray', '$feequota ')");

		if (!$result) {
			echo "Could not successfully execute the Procedure SP_RVS_FEES from DB: " . mysql_error();
			exit;
		}

		$numRows = mysql_num_rows($result);
		if ($numRows == 0) {
			echo "No rows found, nothing to print so am exiting";
			exit;
		}


		while($row1 = mysql_fetch_assoc($result))
		{
		$feeID=$row1["nEligibilityId"];
		
		}

		mysql_free_result($result);
               
	mysql_close($mysql );

		
	//echo "end 2";

//nActivityId;
return $feeID;

}
public function qpncreate_receipt($accountId,$sid,$newAmount,$feedetail_list,$OrigTotAmount,$OrigCurBalance,$path){
 /*echo $activityID, $classArray, $feequota,$path;*/
// echo $accountId."  ".$sid."   ".$newAmount."   ".$feedetail_list."   ".$OrigTotAmount."   ".$OrigCurBalance."   ".$path;
$path = str_replace('/','', $path);
			$ini_array = parse_ini_file("connection.ini", true);
			$this->dbhost = $ini_array[$path]['dbhost'];
			$this->dbuser = $ini_array[$path]['dbuser'];
			$this->dbpass = $ini_array[$path]['dbpass'];
			$this->dbname = $ini_array[$path]['dbname'];


			$mysql = mysql_connect($this->dbhost, $this->dbuser, $this->dbpass, false, 65536) or die ( 'Error connecting to mysql');
			mysql_select_db($this->dbname, $mysql);
			//$ret = sp_query("call  QPN_SP_CREATE_ACTIVITY_GRADE_MAP_TEST(%d, %d, '%s');", $activityID, $classArray, $feequota )
			$result  =  mysql_query("call  QPN_SP_CREATE_RECEIPT( '$accountId', '$sid', '$newAmount','$feedetail_list', '$OrigTotAmount', '$OrigCurBalance')");

		if (!$result) {
			echo "Could not successfully execute the Procedure QPN_SP_CREATE_RECEIPT from DB: " . mysql_error();
			exit;
		}

		$numRows = mysql_num_rows($result);
		if ($numRows == 0) {
			echo "No rows found, nothing to print so am exiting";
			exit;
		}


		while($row1 = mysql_fetch_assoc($result))
		{
		$receeID=$row1["errmsg"];
		
		}

		mysql_free_result($result);
               
	mysql_close($mysql );

		
	//echo "end 2";

//nActivityId;
return $receeID;

}
}
?>