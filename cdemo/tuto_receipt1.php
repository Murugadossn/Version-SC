<?php
require('fpdf/custompdf_receipt1.php');
class cce_receipt_generate{
	const dbhost = 'localhost:3306';
	const dbuser = 'igradeno_urcdemo';
 	const dbpass = 'T6UrLXLf92hW';
 	const dbname = 'igradeno_cdemodb';	
	
public function generatereceipt($userdelastudentid,$activityid) {

$pdf = new PAYPDF();

$pdf->AddPage();
$pdf->setBorder();
$pdf->SetFont('Arial','',10);
// $pdf->Image('test1.png',90,6,30);
//$pdf->Image('test1.png',8,10,30);
//$pdf->Image('rvslogo2.png',172,10,30);

$pdf->schoolHeader($userdelastudentid,$activityid);
//$pdf->get_fee_and_amt($userdelastudentid,$activityid);
$pdf->Report_Title( $userdelastudentid,$activityid);
$pdf->Report_Body($userdelastudentid,$activityid);
$pdf->Output();
return;
// $abc = "sites/default/files/report_card/" . $accountstudentid . "_" . $rand . ".pdf"; 
// $pdf->Output( "$abc" ,'F');

  }

public function main_generatereceipt($userdelastudentid,$activityid)
{
$this->generatereceipt($userdelastudentid,$activityid);
}

}

//$instance= new cce_receipt_generate();
//$instance->generatereceipt(10);



?>