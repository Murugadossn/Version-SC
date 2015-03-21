<?php

class Qtxt_Att_Updates{
 
private	$dbhost;
private	$dbuser;
private	$dbpass;
private $dbname;
public function Qtxt_Att_Updates1()
{
 echo "Welcome to php programming";
}
public function disp()
{
echo "Hello World!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
}

public function args($x,$y)
{

$z=$x+$y;
echo $z;
}
public function AttendanceUpdates ()
{
                       $dbhost = "localhost:3306";
                       $dbuser = "igradeno_urcdemo";
                       $dbpass = "T6UrLXLf92hW";
                       $dbname = "igradeno_cdemodb";
 		       $mysql = mysql_connect($dbhost, $dbuser, $dbpass, false, 65536) or die ( 'Error connecting to mysql');

			mysql_select_db($dbname, $mysql);
			echo "database Connected Sucessfully";
			
			



}
                                                        
                            
                            
                            
}
$sms=new Qtxt_Att_Updates;
//$sms->disp();
//$sms->args(5,6);
$sms->AttendanceUpdates();






?>