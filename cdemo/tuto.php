<?php
require('fpdf/custompdf.php');
class cce_pdf_report{

	const dbhost = 'localhost:3306';
	const dbuser = 'igradeno_urcdemo';
	const dbpass = 'T6UrLXLf92hW';
	const dbname = 'igradeno_cdemodb';		
	
public function generatepdf($accountstudentid, $rand) {

// $accountstudentid = 1053;
// $accountstudentid = 1053;
$pdf = new PDF();

$pdf->AddPage();

$pdf->setBorder();



$pdf->SetFont('Arial','',10);

//$pdf->Image('logo.png',90,6,30);

$pdf->Ln(30);



$pdf->schoolHeader($accountstudentid);

$pdf->Report_Title();

$pdf->studentHeader($accountstudentid);

$pdf->attendanceHeader($accountstudentid);

$pdf->signatureHeader($accountstudentid);

//page 2

$pdf->AddPage();

//$pdf->setBorder();

$pdf->page2Title();

$pdf->setPage2InternalBorder();

$pdf->setTableOuterHeader();



$pdf->section1A($accountstudentid);

 $pdf->section1ASummary($accountstudentid);



 

//page 3 

//page 3 

$pdf->AddPage();

//$pdf->setBorder();

$pdf->page3Title();

$pdf->page3_2ATitle();

$pdf->page3_2A_Border();

$pdf->page3_2A_InternalBorder($accountstudentid);



$pdf->page3_2A_descriptor();

$pdf->page3_2B_section($accountstudentid);

$pdf->page3_2C_section($accountstudentid);

$pdf->page3_2C_descriptor( $accountstudentid);

// $pdf->page3_2A_setFooter();



//page 4

$pdf->AddPage();

//$pdf->setBorder();

$pdf->page4Title();

$pdf->page4_2D_Border();

$pdf->page4_2D_InternalBorder($accountstudentid);



//page 5



$pdf->AddPage();

//$pdf->setBorder();

$pdf->page5Title();

$pdf->page5_3ATitle();

$pdf->page5_3A_Border();

$pdf->page5_3A_InternalBorder($accountstudentid);

$pdf->page5_3A_descriptor();





//page 6



$pdf->AddPage();

//$pdf->setBorder();

$pdf->page6Title();

$pdf->page6_3BTitle();

$pdf->page6_3B_Border();

$pdf->page6_3B_InternalBorder($accountstudentid);



$pdf->page6_Health_Border();

//$pdf->AddPage();

//$pdf->setBorder();

//$pdf->page3Title();



//page 7

$pdf->AddPage();

//$pdf->setBorder();

$pdf->page7Title($accountstudentid);

$pdf->page7InternalBorder($accountstudentid);

$pdf->page7_SubSections($accountstudentid);





//page 8



$pdf->AddPage();

//$pdf->setBorder();

$pdf->page8_Title();

$pdf->page8_Section1_InternalBorder();

$pdf->page8_Section1_Content();

$pdf->page8_Section1_ActualContent();





$pdf->page8_Section2_Title();

$pdf->page8_Section2_InternalBorder();

$pdf->page8_Section2_Content();



$pdf->page8_Section2_ActualContent();

$pdf->page8_Section3_InternalBorder();

$pdf->page8_Section4_InternalBorder();

//$pdf->Output();
//return;
 $abc = "sites/default/files/report_card/" . $accountstudentid . "_" . $rand . ".pdf"; 
 $pdf->Output( "$abc" ,'F');
 }
public function main_generatepdf($v)
{
//$this->generatepdf(1053);
/*
		$dbhost = 'localhost:3306';
		$dbuser = 'newonli1_sysdemo ';
		$dbpass = 'GXpDTNckz2SO';
		$dbname = 'newonli1_demodb1';	
		$mysql = mysql_connect($dbhost, $dbuser, $dbpass, false, 65536) or die ( 'Error connecting to mysql');
		mysql_select_db($dbname, $mysql);
		*/
		$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
		mysql_select_db(self::dbname, $mysql); 		
		
		$gradeid = $v;
			$rs = mysql_query("select account_student_map_id from qtxt_sms_account_student_map where account_grade_id = $gradeid" );
			
			$num_rows = mysql_num_rows($rs);
			if ( $num_rows > 0 ) {
						while($row1 = mysql_fetch_assoc($rs)){
							$accountstudentid = $row1["account_student_map_id"];
							$rand = rand();
							$newfilename = $accountstudentid . "_" . $rand . ".pdf"; 
							$this->generatepdf($accountstudentid, $rand);
		
							$rsinner = mysql_query("select sno from cce_pdf_report where account_student_map_id = $accountstudentid" );
							$num_rows = mysql_num_rows($rsinner);
							if ( $num_rows > 0 ) {
								$rowinner = mysql_fetch_assoc($rsinner);
								$rowid = $rowinner["sno"];
								
								$rs1 = "update  cce_pdf_report set file_name = '$newfilename' where sno = $rowid " ;
								$lresponse = mysql_query($rs1);
							} else {
								$rs1 = "insert into cce_pdf_report (sno,account_student_map_id,account_grade_id,group_id,file_name) values (null,$accountstudentid,$gradeid,2,'$newfilename')";
								$lresponse = mysql_query($rs1);
							}
						}
			}
					
}

}



?>