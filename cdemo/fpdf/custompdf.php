<?php
require('fpdf.php');

class PDF extends FPDF
{

const dbhost = 'localhost:3306';
	const dbuser = 'igradeno_urcdemo';
	const dbpass = 'T6UrLXLf92hW';
	const dbname = 'igradeno_cdemodb';		

	

function setBorder( ) {
$this->SetLineWidth(0.25);
//$this->SetDrawColor(102,153,102);
	$this->line( 1,1, 209,1);
	$this->line( 1,1, 1,296);
	$this->line( 1,296, 209,296);
	$this->line( 209,1, 209,296);
$this->SetLineWidth(.2);
$this->SetDrawColor(0,0,0);	
}


function schoolHeader($accountstudentid) {
		$w = array(10, 75);
		$this->SetFont('Arial','B',10);
	
//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
//		mysql_select_db($this->$dbname, $mysql);
/*
		$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
		mysql_select_db('newonli1_demodb1', $mysql);
*/		
		$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
		mysql_select_db(self::dbname, $mysql); 
		
		$data = array();
		$header = array('Affliation No.', 'Name of School', 'Complete Address', 'Email Id', 'Telephone No.');
        $resultg1 = mysql_query("select affliation_no, account_name, account_address, email_id, telephone_no from cce_rc_school_info_det_v where account_student_map_id = $accountstudentid");
		while ($rows = mysql_fetch_array($resultg1)) {
			//$data = $rows;
/*
			for( $i = 0; $i < 5; ++$i) {
			$this->Cell(10);
			$this->Cell(50,6,$header[$i],0,0,'L');
			$this->Cell(15);
			$this->Cell(100,6,$rows[$i],B,1,'L');	
			}			
*/
			$this->Cell(10);
$this->SetFont('Arial','B',10);			
			$this->Cell(50,6,$header[0],0,0,'L');
			$this->Cell(15);
$this->SetFont('Arial','',10);			
			$this->Cell(100,6,$rows[0],B,1,'L');	

			$this->Cell(10);
$this->SetFont('Arial','B',10);			
			$this->Cell(50,6,$header[1],0,0,'L');
			$this->Cell(15);
$this->SetFont('Arial','',10);					
			$this->Cell(100,6,$rows[1],B,1,'L');				
			
			$text = "College Connect,Chennai";
			$this->Cell(10);
$this->SetFont('Arial','B',10);			
			$this->Cell(50,6,$header[2],0,0,'L');	
			$this->Cell(15);
$this->SetFont('Arial','',10);					
			$this->MultiCell(100,6,$text,B,L);			

			$this->Cell(10);
$this->SetFont('Arial','B',10);			
			$this->Cell(50,6,$header[3],0,0,'L');
			$this->Cell(15);
$this->SetFont('Arial','',10);					
			$this->Cell(100,6,$rows[3],B,1,'L');				

			$this->Cell(10);
$this->SetFont('Arial','B',10);			
			$this->Cell(50,6,$header[4],0,0,'L');
			$this->Cell(15);
$this->SetFont('Arial','',10);					
			$this->Cell(100,6,$rows[4],B,1,'L');	
		}
		
		
}


function Report_Title()
{
$this->Ln(12);
    // Arial 12
    $this->SetFont('Arial','B',19);
    $this->SetTextColor(255,0,0);
    // Background color
    // Title
    $this->Cell(0,0,"Report Book",0,1,'C');
    $this->SetTextColor(0,0,0);
    // Line break
    $this->Ln(8);
    $this->SetFont('Arial','B',17);
    $this->Cell(0,0,"Class IX: Session 2011-2012",0,1,'C', false);
    $this->Ln(8);
		$this->SetFont('Arial','B',17);	
			$this->Cell(0,0,"Class X: Session 2011-2012",0,0,'C', false);
//			$this->Cell(10);
//			$this->Cell(30,6,"                ",B,1,'L');		
}


		function studentHeader($accountstudentid) {
				$w = array(10, 75);
$this->Ln(4);
					$this->SetFont('Arial','B',17);
					$this->Cell(10);
					$this->Cell(50,6,"Student Profile",0,1,'L');
			$this->Ln(6);		
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);

			$ypos = $this->GetY();

//		$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 				
				$data = array();
				$header = array('Name of Student', 'Class/House', 'Admission No.', 'Date of Birth', "Mother's Name", "Father's Name", 'Residential Address and Telephone No.');
				$resultg1 = mysql_query("select student_name, grade_name, student_identifier, dob, mother_name, father_name, permanent_address, telephone_no from cce_rc_student_info_det_v where account_student_map_id = $accountstudentid");

$widthforfield = 70;
				while ($rows = mysql_fetch_array($resultg1)) {
					//$data = $rows;

					$this->Cell(10);
		$this->SetFont('Arial','',10);				
					$this->Cell(50,6,$header[0],0,0,'L', false);
					$this->Cell(15);
		$this->SetFont('Arial','',10);					
					$this->Cell($widthforfield,6,$rows[0],B,1,'L', false);	

					$this->Cell(10);
		$this->SetFont('Arial','',10);				
					$this->Cell(50,6,$header[1],0,0,'L');
					$this->Cell(15);
		$this->SetFont('Arial','',10);					
					$this->Cell($widthforfield,6,$rows[1],B,1,'L');	

					$this->Cell(10);
		$this->SetFont('Arial','',10);				
					$this->Cell(50,6,$header[2],0,0,'L');
					$this->Cell(15);
		$this->SetFont('Arial','',10);					
					$this->Cell($widthforfield,6,$rows[2],B,1,'L');				


					$this->Cell(10);
		$this->SetFont('Arial','',10);				
					$this->Cell(50,6,$header[3],0,0,'L');
					$this->Cell(15);
		$this->SetFont('Arial','',10);					
					$this->Cell($widthforfield,6,$rows[3],B,1,'L');				


					$this->Cell(10);
		$this->SetFont('Arial','',10);				
					$this->Cell(50,6,$header[4],0,0,'L');
					$this->Cell(15);
		$this->SetFont('Arial','',10);					
					$this->Cell($widthforfield,6,$rows[4],B,1,'L');				


					$this->Cell(10);
		$this->SetFont('Arial','',10);				
					$this->Cell(50,6,$header[5],0,0,'L');
					$this->Cell(15);
		$this->SetFont('Arial','',10);					
					$this->Cell($widthforfield,6,$rows[5],B,1,'L');				


					
		//			$text = "asdfasfsdafadfl;asdf saf fasfjsaf;asf asf asfasl;fsadjf  safsafj;asdf sja;fasfasf ; afdsafsadf f afsafsafsafasfsafsafasfasfsafsadjkll afasfsadfafasfasfsafaf ffasdafds";
					$this->Cell(10);
		$this->SetFont('Arial','',10);				
					$this->Cell(50,6,$header[6],0,0,'L');	
					$this->Cell(15);	
		$this->SetFont('Arial','',10);			
					$this->MultiCell($widthforfield,6,$rows[6],B,L);			
					$this->Cell(75);
		$this->SetFont('Arial','',10);					
					$this->Cell($widthforfield,6,$rows[7],B,1,'L');	

					
				}
				
		}


		function attendanceHeader($accountstudentid) {
			$this->Ln(10);		
					$this->SetFont('Arial','B',17);
					$this->Cell(10);
					$this->Cell(50,6,"Attendance",0,0,'L');
					$this->Cell(40);			
					$this->Cell(25,6,"Term I",0,0,'L');
					$this->Cell(20);			
					$this->Cell(25,6,"Term II",0,1,'L');			
					$this->Ln(6);	
					//echo"er";	

//			$this->Ln(6);		
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 
		
				
				$data = array();
				$header = array('Total attendance of the Student', 'Total working days');
				$resultg1 = mysql_query("select term1_attd, term2_attd from cce_rc_student_attd_info_det_v1 where account_student_map_id = $accountstudentid order by sequence ");
				$i = 0;
				
				while ($rows = mysql_fetch_array($resultg1)) {			

					$this->Cell(10);
		$this->SetFont('Arial','',10);				
					$this->Cell(50,6,$header[$i],0,0,'L');
					$this->Cell(40);
		$this->SetFont('Arial','',10);					
					$this->Cell(25,6,$rows[0],B,0,'C');	
					$this->Cell(20);			
		$this->SetFont('Arial','',10);					
					$this->Cell(25,6,$rows[1],B,1,'C');				
					$this->Ln(3);		
					++$i; 

				
				}
				
		} // end of function attendanceHeader

		function signatureHeader($accountstudentid) {
//			$this->Ln(28);			
$this->SetXY(7, 264);
$this->Ln();

					$this->SetFont('Arial','B',12);
					$this->Cell(10);
					$this->Cell(15,6,"Signature:",0,0,'L');
					$this->Cell(25);			
					$this->Cell(15,6,"Student",0,0,'C');
					$this->Cell(25);			
					$this->Cell(15,6,"Class Teacher",0,0,'C');
					$this->Cell(25);			
					$this->Cell(15,6,"Principal",0,0,'C');
					$this->Cell(25);			
					$this->Cell(15,6,"Parent",0,1,'C');			


		} // end of function signatureHeader		
	
		function page2Title() {
			$this->Ln(12);
			// Arial 12
			$this->SetFont('Arial','B',17);
			// Background color
			// Title
			$this->Cell(0,0,"Part-1 Scholastic Areas",0,1,'L');
		}

		function setPage2InternalBorder( ) {
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( 7,27, 202,27);
				$this->line( 7,27, 7,240);
				$this->line( 7,240, 202,240);
				$this->line( 202,27, 202,240);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
		}

		
		function setTableOuterHeader( ) {
		$this->Ln(5);					

		$xborderstartpos = 7;
		$yborderstartpos = 27;

		$xborderendpos = 202;
		$yborderendpos = 240;

		$xstartpos = $xborderstartpos;
		$ystartpos = $yborderstartpos;

		$xendpos = $xborderendpos;
		$yendpos = $yborderendpos;



		$this->SetFont('Arial','',10);				
		$this->Cell(5,6,"S.No.",0,0,'C',false);
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$this->line( $xstartpos,$ystartpos+6, $xendpos,$ystartpos+6);  // horizontal line
							$xstartpos += 10;  // 10 mm for S.No Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 17
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		$this->SetFont('Arial','',10);				
//subject
		$this->Cell(3,6);
		$this->Cell(33,6,"",0,0,'C',false);	
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						$xstartpos += 35;  // 38 mm for Subject Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 52
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		$this->Cell(2,6);						
		$this->Cell(38,6,"Term-I",0,0,'C',false);	
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							// $this->line( 103,27, 103,240);
							$xstartpos += 44; 
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);	// vertical line  x = 96						
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);		
		$this->Cell(2,6);						
		$this->Cell(38,6,"Term-II",0,0,'C',false);			
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						$xstartpos += 44; 
//							$this->line( 144,27, 144,240);
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);	// vertical line  x = 140			
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);			
		$this->Cell(2,6);	
		$this->Cell(68,6,"(Term I+II)",0,1,'C',false);		
		
					
// 2nd Header

// $this->Ln(5);	
// y= 33		

// next level header
$xstartpos = $xborderstartpos;  // 7
$ystartpos += 6;  // 33

$xendpos = $xborderendpos;
$yendpos = $yborderendpos;
		
		$this->SetFont('Arial','',10);				
					$this->Cell(5,20,"",0,0,'L',false);
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						//	$this->line( 7,53, 202,53);
						$this->line( $xstartpos,$ystartpos+20, $xendpos,$ystartpos+20);	 // horizontal line
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		$this->SetFont('Arial','',10);				
//subject
$xstartpos += 10; // 17
		$this->Cell(3,20);
		$this->Cell(33,20,"Subjects",0,0,'C',false);	
		// fa1 => 4 segments
$xstartpos += 35; // 52		
		$this->Cell(2,6);	
			$this->Cell(9,20,"FA1",0,0,'L',false);	// 99914
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$xstartpos += 11;  // 63
							// $this->line( 71,33, 71,240);
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);	
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);			
		$this->Cell(2,6);	
			$this->Cell(9,20,"FA2",0,0,'L',false);	// 99914
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$xstartpos += 11;  // 74
//							$this->line( 80,33, 80,240);
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);	
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);			
		$this->Cell(2,6);	
			$this->Cell(9,20,"SA1",0,0,'L', false);	// 99914
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
//							$this->line( 89,33, 89,240);
							$xstartpos += 11;  // 85
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);	
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);			
			$current_y = $this->GetY();
			$current_x = $this->GetX();
						
		$this->Cell(1,6);	
			$this->MultiCell(11,5,"FA1+FA2+SA1",0,'C',false);	// 99914
//			$this->Cell(11,20,"FA1+FA2+SA1",0,'C',false);	// 99914

$this->SetXY($current_x + 11, $current_y);
$xstartpos += 11; // 96	

		$this->Cell(2,20);
		// fa2 => 4 segments
			$this->Cell(9,20,"FA3",0,0,'L',false);	// 99914
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$xstartpos += 11;  // 107
//							$this->line( 112,33, 112,240);
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);								
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);			
		$this->Cell(2,20);
			$this->Cell(9,20,"FA4",0,0,'L', false);	// 99914
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$xstartpos += 11;  // 118
//							$this->line( 121,33, 121,240);
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);								
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);			
		$this->Cell(2,20);
			$this->Cell(9,20,"SA2",0,0,'L', false);	// 99914
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$xstartpos += 11;  // 129
//							$this->line( 130,33, 130,240);
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);								
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);
			$current_y = $this->GetY();
			$current_x = $this->GetX();
			
		$this->Cell(1,20);
			$this->MultiCell(11,5,"FA3+FA4+SA2",0,'C',false);	// 99914
$this->SetXY($current_x + 11, $current_y);
$xstartpos += 11; // 140
					
/******************/
		$current_y = $this->GetY();
		$current_x = $this->GetX();
		$this->Cell(2,20);
		$this->MultiCell(20,5,"FA1+FA2+FA3+FA4",0,'L',false);	// 99914
		$this->SetXY($current_x + 22, $current_y);
		$xstartpos += 22; // 153
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
		$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);				
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);			
			
		$current_y = $this->GetY();
		$current_x = $this->GetX();
		$this->Cell(2,20);

		$this->MultiCell(11,5,"SA1+SA2",0,'C',false);	// 99914
		$this->SetXY($current_x +11, $current_y);
		$xstartpos +=13; // 162
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
		$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);		
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);			

		
		// fa2 => 4 segments
		$this->Cell(4,20);		
			$this->Cell(12,20,"Overall",0,0,'L',false);	// 99914
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$xstartpos += 14;  // 175
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);								
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);		
		$current_y = $this->GetY();
		$current_x = $this->GetX();
		$this->Cell(1,20);
			$this->MultiCell(12,5,"Grade Point",0,'C',false);	// 99914
		$this->SetXY($current_x + 11, $current_y);			
$xstartpos += 11; // 140

					
		}
		

		function section1A($accountstudentid) {
 
$xborderstartpos = 7;
$xborderendpos = 202;
$this->Cell(5,10,"",0,1,'C',false);
$this->Cell(5,9,"",0,1,'C',false);					

$this->Ln(1); 					
					// $this->Ln(20);  // go to the border	
// $this->Ln(1); 					
		//		$this->Ln(2);		
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 

				$data = array();
				$resultg1 = mysql_query("SELECT sequence_num,subject_name, round(FA1,2),round(FA2,2),round(SA1,2),round(FA1_FA2_SA1,2),round(FA3,2),round(FA4,2),round(SA2,2),round(FA3_FA4_SA2,2),round(FA1_FA2_FA3_FA4,2), round(SA1_SA2,2), round(Overall,2),Grade_Point,account_student_map_id,account_grade_id FROM cce_rc_section1_marks_det_v1 where  account_student_map_id = $accountstudentid");
                               

				while ($rows = mysql_fetch_array($resultg1)) {
					//$data = $rows;

					$this->Cell(5,2,"",0,1,'C',false);
		
					$this->SetFont('Arial','',10);					
//S.No
					$this->Cell(5,13,"$rows[0]",0,0,'C',false);
//gap                                   $sequencenum++;
					$this->Cell(3,13);
//Subject					
//					$this->Cell(33,13,"Subjects",0,0,'L',true);	
					$current_y = $this->GetY();
					$current_x = $this->GetX();
					
					if ( strlen( $rows[1] ) < 16 ) {
						$this->MultiCell(33,13,"$rows[1]",0,'L',false);
					}
					elseif ( strlen( $rows[1] ) < 31 ) {
						$this->MultiCell(33,9,"$rows[1]",0,'L',false);
					}
					else {
						$this->MultiCell(33,5,"$rows[1]",0,'L',false);	// 99914
					}
//					$this->MultiCell(33,5,"$rows[1]",0,'L',false);	// 99914
//					$this->MultiCell(33,5,"1234567890123456789",0,'L',false);	// 99914
					$this->SetXY($current_x + 33, $current_y);	
// gap
					$this->Cell(2,13);	
// FA1
					$this->Cell(9,13,"$rows[2]",0,0,'L',false);

// gap
					$this->Cell(2,13);	
// FA2
					$this->Cell(9,13,"$rows[3]",0,0,'L',false);

// gap
					$this->Cell(1,13);	
// SA1
					$this->Cell(10,13,"$rows[4]",0,0,'L',false);

// gap
					$this->Cell(2,13);	
// term FA1+FA2+SA1
					$this->Cell(9,13,"$rows[5]",0,0,'L',false);
					
// gap
					$this->Cell(2,13);	
// FA3
					$this->Cell(9,13,"$rows[6]",0,0,'L',false);

// gap
					$this->Cell(2,13);	
// FA4
					$this->Cell(9,13,"$rows[7]",0,0,'L',false);

// gap
					$this->Cell(1,13);	
// SA2
					$this->Cell(10,13,"$rows[8]",0,0,'L',false);

// gap
					$this->Cell(2,13);	
// term FA3+FA4+SA2
					$this->Cell(9,13,"$rows[9]",0,0,'L',false);

// gap
					$this->Cell(2,13);	
// FA1+FA2+FA3+FA4
					$this->Cell(20,13,"$rows[10]",0,0,'L',false);

// gap
					$this->Cell(2,13);	
// SA1 + sa2
					$this->Cell(11,13,"$rows[11]",0,0,'L',false);
// gap
					$this->Cell(2,13);	
// oVERALL
					$this->Cell(12,13,"$rows[12]",0,0,'L',false);

// gap
					$this->Cell(2,13);	
// Grade Point
					$this->Cell(11,13,"$rows[13]",0,0,'C',false);

					
					
					$this->Ln(15);
// $this->Ln(1);
					$current_y = $this->GetY();
					$current_x = $this->GetX();
					if ( $current_y < 240 ) {
						$this->line( $xborderstartpos,$current_y, $xborderendpos,$current_y);	 // horizontal line
					}
					
				}
				
		}  // END OF FUNCTION


		function section1ASummary($accountstudentid) {
			$xborderstartpos = 7;
			$yborderstartpos = 245;
			$xborderendpos = 202;

			$this->SetXY($xborderstartpos, $yborderstartpos);	

			$this->Cell(5,2,"",0,1,'C',false);
			$this->Ln(1); 
			$ypos = $this->GetY() + 2;
			
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$this->line( $xborderstartpos + 20,$ypos, $xborderendpos - 20,$ypos);  // horizontal line

							$this->line( $xborderstartpos + 20,$ypos, $xborderstartpos + 20,$ypos + 15);  // vertical line
							$this->line( $xborderendpos - 20,$ypos, $xborderendpos - 20,$ypos + 15);  // horizontal line
							
							
							$this->line( $xborderstartpos + 20,$ypos + 15, $xborderendpos - 20,$ypos + 15);  // horizontal line
							
							//							$xstartpos += 10;  // 10 mm for S.No Column trailing border
//							$this->line( $xstartpos,$ypos , $xstartpos,$ypos);   // vertical line  x = 17
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);				
						$this->SetXY($xborderstartpos, $ypos);							
$xpos = $xborderstartpos + 25;
$ypos = $ypos + 1;
						$this->SetXY($xpos, $ypos);	

$this->SetTextColor(255,0,0);
$this->SetFont('Arial','B',15);		
			$this->Cell(7,9,"Result:",0,0,'L',false);
$this->SetTextColor(0,0,0);							
			$this->Cell(12);
			$this->Cell(18,9,"Qualified/EIOP**",0,0,'L',false);
			$this->Cell(25);			
			$this->Cell(20,9,"",B,0,'L',false);
			$this->Cell(15);			
			$this->Cell(18,9,"CGPA: ",0,0,'L',false);
			$this->Cell(3);			
			$this->Cell(20,9,"",B,1,'L',false);
			
			
			// draw a line 
			
$this->SetFont('Arial','',10);
$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
		mysql_select_db(self::dbname, $mysql); 
		$resultg1 = mysql_query("SELECT cgpa FROM cce_cgpa_v where account_student_map_id =$accountstudentid");
		while ($rows = mysql_fetch_array($resultg1)) {
		$this->SetFont('Arial','',10);					
					$this->Cell(18,9,$rows[0],B,0,'C');	
					$this->Cell(0);
		}
		}  // END OF FUNCTION		



		function page3Title() {
			$this->Ln(12);
			// Arial 12
			$this->SetFont('Arial','B',17);
			// Background color
			// Title
			$this->Cell(80,0,"Part 2: Co-Scholastic Areas",0,1,'L', false);
//			$this->SetFont('Arial','I',13);	
//			$this->Cell(0,0,"( to be assessed on a 5 point scale once in a session )",0,0,'L');
			$this->SetFont('Arial','',10);	
			
		}

		function page3_2ATitle() {
		$this->SetXY(20 , 35);
			$this->Ln(1);
			// Arial 12
			$this->SetFont('Arial','B',14);
			// Background color
			// Title
			$this->Cell(80,0,"2 (A): Life Skills",0,1,'L', false);
			$this->SetFont('Arial','',10);	

			
		}
		function page3_2A_Border() {
			$adjustment = 6 ;		
			$ystartpos = $this->GetY() + $adjustment; // 42
			
		$xborderstartpos =7;
		$xborderendpos = 202;
		$yStartPos = $ystartpos;
//		$yEndPos = 274;
		$yEndPos = $yStartPos + 76 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY(7 , $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
			// separate into 10 distinct sets
			$xstartpos = 7;
			$xendpos = 202;
			//$ystartpos = 42;
			$yendpos = $yEndPos ; // 118;   // 274;	
			
//		$this->SetXY(8 , 44);
		$this->SetXY(8 , $ystartpos + 2);		
		$this->SetFont('Arial','B',14);			
		$this->Cell(2,6);		
		$this->Cell(10,6,"S.No.",0,0,'C',false);
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$this->line( $xstartpos,$ystartpos+10, $xendpos,$ystartpos+10);  // horizontal line y = 52
							$xstartpos += 15;  // 10 mm for S.No Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 22
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		//$this->SetFont('Arial','',10);				
// descriptors
		$this->Cell(3,6);
		$this->Cell(161,6,"Descriptor Indicators*",0,0,'C',false);	
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						$xstartpos += 163;  // 38 mm for Subject Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 185
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
						
		$this->Cell(2,6);
		$this->Cell(15,6,"Grade",0,1,'C',false);	
		$this->Ln(1);	
		$this->SetFont('Arial','',10);				
		
		}  // end of function
		
		function page3_2A_InternalBorder($accountstudentid) {
			$adjustment = 1 ;		
			$ystartpos = $this->GetY() + $adjustment;
			
			$xstartpos = 7;
			$xendpos = 202;
		//	$ystartpos = 52;
		//	$yendpos = 118 ; //274;	

			$height = 22;
			$x_firstcolstart = 9;
			$x_firstcolend = 22;			
			$x_secondcolend = 187;
			$leftMargin = 23;
			$rightMargin = 25;
			
			$descriptorFont = 5.8;
			
			
//			$x_thirdcolend = 9;
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
//			$this->Cell(5,10,"",0,1,'C',false);
//			$this->Cell(5,9,"",0,1,'C',false);			
			$this->Ln(1); 			
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2A_marks_det_v 
				where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('Thinking skills') ");
				$rows = mysql_fetch_array($resultg1);
				// echo (" Remarks:$rows[0]");
				// echo ("Grade : $rows[1]");
				
				$this->SetFont('Arial','',10);					
//S.No
				$this->Cell(10,6,"01",0,0,'C',false);				
//gap
					$this->Cell(3,6);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "Thinking Skills: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, $rows[1]);
//					$this->SetLeftMargin(1);				
//					$this->SetRightMargin($rightMargin);				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,$rows[2],0,0,'C',false);
					$this->Ln(1); 

			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
// 2nd entry
$this->SetLeftMargin($current_x);
		
			$ystartpos += $height;
			
//			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->SetXY(1 , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->SetX($xstartpos); 
			$this->Cell(3,6);
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2A_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('Social Skills') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
				$this->Cell(10,6,"02",0,0,'C',false);				
//gap
					$this->Cell(3,13);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "Social Skills: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
//					$this->SetLeftMargin(1);				
//					$this->SetRightMargin($rightMargin);				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 

			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	

// 3nd entry
			
			$ystartpos += $height;
			
//			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->SetXY(1 , $ystartpos -1 );		
			$this->Ln(1);

			$this->SetX($xstartpos); 
			$this->Cell(3,6);
			
//			$this->Cell(10,6);
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2A_marks_det_v 
				where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('Emotional Skills') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
				$this->Cell(10,6,"03",0,0,'C',false);				
//gap
					$this->Cell(3,13);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "Emotional Skills: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
//					$this->SetLeftMargin(1);				
//					$this->SetRightMargin($rightMargin);				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 

/*			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
*/

					
		} // end of function	

		function page3_2A_descriptor() {
			$adjustment = 24 ;		
			$yStartPos = $this->GetY() + $adjustment;
			
		$xborderstartpos =5;
		$xborderendpos = 202;
	
	//	$yStartPos = 120; //118
		$leftMargin = 5; // 23;
		$rightMargin = 6; // 25;
		$descriptorFont = 5.2;

			$this->SetXY($xborderstartpos , $yStartPos);
		
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',11);							
//Descriptor Heading
					$this->Write($descriptorFont, "Thinking Skills: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "Self Awareness, Problem Solving, Decision Making, Critical Thinking and Creative Thinking");
					$this->Ln(1);
					
					$current_y = $this->GetY();
					$this->SetXY($xborderstartpos , $current_y + 4);
					
					$this->SetFont('Arial','B',11);							
//Descriptor Heading
					$this->Write($descriptorFont, "Social Skills: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "Interpersonal Relationships, Effective Communication and Empathy ");
					$this->Ln(1);
					
					$current_y = $this->GetY();
					$this->SetXY($xborderstartpos , $current_y + 4);
					
					$this->SetFont('Arial','B',11);							
//Descriptor Heading
					$this->Write($descriptorFont, "Emotional Skills: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "Managing Emotions and Dealing with Stress");
		
		}	


		function page3_2B_section($accountstudentid) {
			$adjustment = 14 ;		
			$current_y = $this->GetY() + $adjustment;
			$this->SetXY(20 , $current_y );
			$this->Ln(1);
			// Arial 12
			$this->SetFont('Arial','B',14);
			// Background color
			// Title

			$this->Cell(80,0,"2(B): Work Education",0,0,'L', false);
			$this->SetFont('Arial','',10);	
			
			$current_y = $this->GetY();
					
			$xstartpos = 7;
			$xendpos = 202;
			$ystartpos = $current_y + 4;

			$yEndPos = $ystartpos + 35;
			$yendpos = $yEndPos;
			
			$descriptorFont = 5.8;
			
			$xborderstartpos =7;
			$xborderendpos = 202;
			$yStartPos = $ystartpos;
			$x_firstcolstart = 9;
$leftMargin = 7;
$rightMargin = 25;
$x_secondcolend = 187;
		
		$this->SetXY($xstartpos , $ystartpos );
		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	

		$this->SetXY(8 , $ystartpos +2);
		$this->SetFont('Arial','B',14);			
		$this->Cell(2,6);		
	//	$this->Cell(10,6,"S.No.",0,0,'C',false);
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$this->line( $xstartpos,$ystartpos+10, $xendpos,$ystartpos+10);  // horizontal line y = 52
							$xstartpos += 15;  // 10 mm for S.No Column trailing border
//							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 22
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		//$this->Cell(3,6);
		$this->Cell(161 + 13,6,"Descriptor Indicators*",0,0,'C',false);	
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						$xstartpos += 163;  // 38 mm for Subject Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 185
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
						
		$this->Cell(2,6);
		$this->Cell(15,6,"Grade",0,1,'C',false);	
		$this->Ln(1);	
		$this->SetFont('Arial','',10);				
			$this->SetXY($x_firstcolstart , $ystartpos + 11 );	
			$this->Ln(1); 			
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2B_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('Work Education') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
//				$this->Cell(10,6,"01",0,0,'C',false);				
//gap
//					$this->Cell(3,6);			
					$current_y =  $ystartpos +11;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "Work Education: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 
			
		}		// end of function
		

		function page3_2C_section($accountstudentid) {
			$adjustment = 14 + 5;
		
			$current_y = $this->GetY() + $adjustment;
			$this->SetXY(20 , $current_y + 14);
			$this->Ln(1);
			// Arial 12
			$this->SetFont('Arial','B',14);
			// Background color
			// Title
			$this->Cell(5,0);			
			$this->Cell(80,0,"2(C): Visual and Performing Arts",0,0,'L', false);
			$this->SetFont('Arial','',10);	
			
			$current_y = $this->GetY();
					
			$xstartpos = 7;
			$xendpos = 202;
			$ystartpos = $current_y + 4;

			$yEndPos = $ystartpos + 35;
			$yendpos = $yEndPos;
			
			$descriptorFont = 5.8;
			
			$xborderstartpos =7;
			$xborderendpos = 202;
			$yStartPos = $ystartpos;
			$x_firstcolstart = 9;
$leftMargin = 7;
$rightMargin = 25;
$x_secondcolend = 187;
		
		$this->SetXY($xstartpos , $ystartpos );
		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	

		$this->SetXY(8 , $ystartpos +2);
		$this->SetFont('Arial','B',14);			
		$this->Cell(2,6);		
	//	$this->Cell(10,6,"S.No.",0,0,'C',false);
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$this->line( $xstartpos,$ystartpos+10, $xendpos,$ystartpos+10);  // horizontal line y = 52
							$xstartpos += 15;  // 10 mm for S.No Column trailing border
//							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 22
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		//$this->Cell(3,6);
		$this->Cell(161 + 13,6,"Descriptor Indicators*",0,0,'C',false);	
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						$xstartpos += 163;  // 38 mm for Subject Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 185
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
						
		$this->Cell(2,6);
		$this->Cell(15,6,"Grade",0,1,'C',false);	
		$this->Ln(1);	
		$this->SetFont('Arial','',10);				
			$this->SetXY($x_firstcolstart , $ystartpos + 11 );	
			$this->Ln(1); 			
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 


				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2C_marks_det_v 
				where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('VISUAL ARTS') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
//				$this->Cell(10,6,"01",0,0,'C',false);				
//gap
//					$this->Cell(3,6);			
					$current_y =  $ystartpos +11;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "VISUAL ARTS: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 
		}		

		function page3_2C_descriptor($accountstudentid) {
			$adjustment = 26;
		
			$current_y = $this->GetY() + $adjustment;
			$this->SetXY(20 , $current_y );
			$this->Ln(1);
		$xborderstartpos =5;
		$xborderendpos = 202;
	
		$yStartPos = $current_y; //118
		$leftMargin = 5; // 23;
		$rightMargin = 6; // 25;
		$descriptorFont = 5.2;

			$this->SetXY($xborderstartpos , $yStartPos);
		
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',13);							
					$this->Write($descriptorFont, "Suggesstive Activities");
					$this->Ln(5);
					
					$this->SetFont('Arial','B',11);							
//Descriptor Heading
					$this->Write($descriptorFont, "Work Education:");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "Cookery Skills, Preparation of stationary items, Tieing and dyeing and Screen printing, Recycling of paper, Hand embroidery, Running a book bank, Repair and maintenance of domestic electrical gadgets, Computer operation and maintenance, Photography etc.");
					$this->Ln(1);
					
					$current_y = $this->GetY();
					$this->SetXY($xborderstartpos , $current_y + 4);
					
					$this->SetFont('Arial','B',11);							
//Descriptor Heading
					$this->Write($descriptorFont, "Visual & Performing Arts: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "Music ( Vocal, Instrumental), Dance, Drama, Drawing, Paiting, Craft, Sculpture, Puppetry, Folk Art forms etc.");
					$this->Ln(1);
					

					$this->SetFont('Arial','',10);							
//Descriptor Text
			
		}		

		function page4Title() {
			$this->Ln(12);
			// Arial 12
			$this->SetFont('Arial','B',14);
			// Background color
			// Title
			$this->Cell(80,0,"2(D): Attitudes & Values",0,1,'L', false);
//			$this->SetFont('Arial','I',13);	
//			$this->Cell(0,0,"( to be assessed on a 5 point scale once in a session )",0,0,'L');
			$this->SetFont('Arial','',10);	
			
		}	// end of function	page4Title
		
		
		function page4_2D_Border() {
			$adjustment = 6 ;		
			$ystartpos = $this->GetY() + $adjustment; // 42
			
			$xborderstartpos =7;
			$xborderendpos = 202;
			$yStartPos = $ystartpos;
//		$yEndPos = 274;
			$yEndPos = $yStartPos + 260 ;// // 3 sections + header
		
		
		$this->SetXY(7 , $ystartpos);
		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
			// separate into 10 distinct sets
			$xstartpos = 7;
			$xendpos = 202;
			//$ystartpos = 42;
			$yendpos = $yEndPos ; // 118;   // 274;	
			
		$this->SetXY(8 , $ystartpos + 2);
		$this->SetFont('Arial','B',14);			
		$this->Cell(2,6);		
		$this->Cell(10,6,"S.No.",0,0,'C',false);
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$this->line( $xstartpos,$ystartpos+10, $xendpos,$ystartpos+10);  // horizontal line y = 52
							$xstartpos += 15;  // 10 mm for S.No Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 22
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		//$this->SetFont('Arial','',10);				
// descriptors
		$this->Cell(3,6);
		$this->Cell(161,6,"Descriptor Indicators*",0,0,'C',false);	
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						$xstartpos += 163;  // 38 mm for Subject Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 185
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
						
		$this->Cell(2,6);
		$this->Cell(15,6,"Grade",0,1,'C',false);	
		$this->Ln(1);	
		$this->SetFont('Arial','',10);				
		
		}  // end of function

		function page4_2D_InternalBorder($accountstudentid) {
			$adjustment = 1 ;		
			$ystartpos = $this->GetY() + $adjustment;
			
			$xstartpos = 7;
			$xendpos = 202;
		//	$ystartpos = 52;
		//	$yendpos = 118 ; //274;	

			$height = 61;
			$x_firstcolstart = 9;
			$x_firstcolend = 22;			
			$x_secondcolend = 187;
			$leftMargin = 23;
			$rightMargin = 25;
			
			$descriptorFont = 5.8;
			
			
//			$x_thirdcolend = 9;
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
//			$this->Cell(5,10,"",0,1,'C',false);
//			$this->Cell(5,9,"",0,1,'C',false);			
			$this->Ln(1); 			
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2D_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('ATTITUDE TOWARDS TEACHERS') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
					$this->Cell(4,6);	
				$this->Cell(10,6,"01",0,0,'C',false);				
//gap
					$this->Cell(3,6);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "Attitude Towards: ");
					$this->SetFont('Arial','',10);							
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"",0,1,'C',false);
//					$this->Ln(2); 
// next row
//S.No
//			$this->SetXY(1 , $ystartpos -1 );		
//			$this->Ln(1); 			
			$this->SetX($xstartpos -1); 
			$this->Cell(3,6);

//					$this->Cell(9,6);	
				$this->Cell(10,6,"1.1",0,0,'C',false);				
//gap
					$this->Cell(3,6);			
					//$current_y =  $ystartpos ;  //52
					$current_y =  $this->GetY();
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "Teachers: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 					
			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
// 2nd entry
			
			$ystartpos += $height;
/*			
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->Cell(10,6);
*/			
			$this->SetXY(1 , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->SetX($xstartpos - 1); 
			$this->Cell(3,6);
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);




				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2D_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('ATTITUDE TOWARDS SCHOOL MATES') ");
		
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
				$this->Cell(10,6,"1.2",0,0,'C',false);				
//gap
					$this->Cell(3,13);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "School-mates: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 

			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	

// 3nd entry
			
			$ystartpos += $height;
/*			
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->Cell(10,6);
*/
			$this->SetXY(1 , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->SetX($xstartpos -1); 
			$this->Cell(3,6);
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);


				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2D_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('ATTITUDE TOWARDS SCHOOL PROGRAMMES AND ENVIRONMENT') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
				$this->Cell(10,6,"1.3",0,0,'C',false);				
//gap
					$this->Cell(3,13);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "School Programmes and Environment: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 

				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	

// 4th entry
			
			$ystartpos += $height;
/*			
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->Cell(10,6);
*/			
			$this->SetXY(1 , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->SetX($xstartpos - 1); 
			$this->Cell(3,6);
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_2D_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('Value Systems') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
				$this->Cell(10,6,"02",0,0,'C',false);				
//gap
					$this->Cell(3,13);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "Value Systems: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 					
					
		} // end of function	


		function page5Title() {
			$this->Ln(12);
			// Arial 12
			$this->SetFont('Arial','B',17);
			// Background color
			// Title
			$this->Cell(5,0);
			$this->Cell(80,0,"Part 3: Co-Scholastic Activities",0,1,'L', false);
//			$this->SetFont('Arial','I',13);	
//			$this->Cell(0,0,"( to be assessed on a 5 point scale once in a session )",0,0,'L');
			$this->SetFont('Arial','',10);	
			
		}

		function page5_3ATitle() {
		$adjustment = 3;
		$ystartpos = $this->GetY() + $adjustment;
		$descriptorFont = 5.8;
			$leftMargin = 5;
			$rightMargin = 5;
			
		$this->SetXY(5 , $ystartpos);
			$this->Ln(1);
			// Arial 12
			$this->SetFont('Arial','B',14);

					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetX(5);
//Descriptor Heading
					$this->Write($descriptorFont, "3A: ");
					$this->SetFont('Arial','BI',14);							
//Descriptor Text
					$this->Write($descriptorFont, "Any two to be assessed");
					$this->Ln(6);

					$this->SetFont('Arial','',12);	
					$this->SetX(5);
					
//					$this->SetXY($x_secondcolend , $current_y);	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->Write($descriptorFont, "1. Literary & Creative Skills 2. Scientific Skills 3. Information and Communication Technology 4. Organisational & Leadership Skills (Clubs).");	
					$this->Ln(1);					

//			$this->Cell(80,0,"3(A): Any 2 to be assessed",0,1,'L', false);
//		$this->SetXY(20 , 35);			
			$this->SetFont('Arial','',10);	

			
		}
		function page5_3A_Border() {
			$adjustment = 6 ;		
			$ystartpos = $this->GetY() + $adjustment; // 42
			
		$xborderstartpos =7;
		$xborderendpos = 202;
		$yStartPos = $ystartpos;
//		$yEndPos = 274;
		$yEndPos = $yStartPos + 180 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY(7 , $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
			// separate into 10 distinct sets
			$xstartpos = 7;
			$xendpos = 202;
			//$ystartpos = 42;
			$yendpos = $yEndPos ; // 118;   // 274;	
			
//		$this->SetXY(8 , 44);
		$this->SetXY(8 , $ystartpos + 2);		
		$this->SetFont('Arial','B',14);			
		$this->Cell(2,6);		
		$this->Cell(10,6,"S.No.",0,0,'C',false);
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$this->line( $xstartpos,$ystartpos+10, $xendpos,$ystartpos+10);  // horizontal line y = 52
							$xstartpos += 15;  // 10 mm for S.No Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 22
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		//$this->SetFont('Arial','',10);				
// descriptors
		$this->Cell(3,6);
		$this->Cell(161,6,"Descriptor Indicators*",0,0,'C',false);	
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						$xstartpos += 163;  // 38 mm for Subject Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 185
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
						
		$this->Cell(2,6);
		$this->Cell(15,6,"Grade",0,1,'C',false);	
		$this->Ln(1);	
		$this->SetFont('Arial','',10);				
		
		}  // end of function
		
		function page5_3A_InternalBorder($accountstudentid) {
			$adjustment = 1 ;		
			$ystartpos = $this->GetY() + $adjustment;
			
			$xstartpos = 7;
			$xendpos = 202;
		//	$ystartpos = 52;
		//	$yendpos = 118 ; //274;	

			$height = 80;
			$x_firstcolstart = 9;
			$x_firstcolend = 22;			
			$x_secondcolend = 187;
			$leftMargin = 23;
			$rightMargin = 25;
			
			$descriptorFont = 5.8;
			
			
//			$x_thirdcolend = 9;
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
//			$this->Cell(5,10,"",0,1,'C',false);
//			$this->Cell(5,9,"",0,1,'C',false);			
			$this->Ln(1); 			
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_3A_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('LITERARY and CREATIVE SKILLS') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
					$this->Cell(5,6);	
				$this->Cell(10,6,"01",0,0,'C',false);				
//gap
					$this->Cell(3,6);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "LITERARY and CREATIVE SKILLS: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 

			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
// 2nd entry
			
			$ystartpos += $height;
/*			
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->Cell(10,6);
*/
			$this->SetXY(1 , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->SetX($xstartpos); 
			$this->Cell(3,6);
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_3A_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('SCIENTIFIC SKILLS') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
				$this->Cell(10,6,"02",0,0,'C',false);				
//gap
					$this->Cell(3,13);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "SCIENTIFIC SKILLS: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 


/*			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
*/

					
		} // end of function	

		function page5_3A_descriptor() {
			$adjustment = 34 ;		
//			$yStartPos = $this->GetY() + $adjustment;
			$yStartPos = 230;
		
			
		$xborderstartpos =5;
		$xborderendpos = 202;
	
	//	$yStartPos = 120; //118
		$leftMargin = 5; // 23;
		$rightMargin = 6; // 25;
		$descriptorFont = 5.2;

			$this->SetXY($xborderstartpos , $yStartPos);
		
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',14);							
					$this->Write($descriptorFont, "Suggestive Activities:");
					$this->SetFont('Arial','',10);							
					$this->Ln(1);
					$current_y = $this->GetY();
					$this->SetXY($xborderstartpos , $current_y + 4);

				//	$this->SetLeftMargin($leftMargin);
				//	$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',12);							
//Descriptor Heading
					$this->Write($descriptorFont, "Literary & Creative Skills: ");
					$this->SetFont('Arial','',12);							
//Descriptor Text
					$this->Write($descriptorFont, "Debate, Declamation, Creative Writing, Recitation, Drawing, Poster-Making, Slogan Writing, Theatre etc.");
					$this->Ln(1);
					
					$current_y = $this->GetY();
					$this->SetXY($xborderstartpos , $current_y + 4);
					
					$this->SetFont('Arial','B',12);							
//Descriptor Heading
					$this->Write($descriptorFont, "Sceintific Skills: ");
					$this->SetFont('Arial','',12);							
//Descriptor Text
					$this->Write($descriptorFont, "Science Club, Projects, Maths Club, Science Quiz, Science Exhibition, Olympiads etc.");
					$this->Ln(1);
					
					$current_y = $this->GetY();
					$this->SetXY($xborderstartpos , $current_y + 4);
					
					$this->SetFont('Arial','B',12);							
//Descriptor Heading
					$this->Write($descriptorFont, "Information and Communication Technology(ICT): ");
					$this->SetFont('Arial','',12);							
//Descriptor Text
					$this->Write($descriptorFont, "PowerPoint Presentation, Website and Cover Page Designing, Animation, Programming, E-books etc.");
					$this->Ln(1);
					
					$current_y = $this->GetY();
					$this->SetXY($xborderstartpos , $current_y + 4);
					
					$this->SetFont('Arial','B',12);							
//Descriptor Heading
					$this->Write($descriptorFont, "Organisational & Leadership Skills (Clubs) : ");
					$this->SetFont('Arial','',12);							
//Descriptor Text
					$this->Write($descriptorFont, "Eco Club, Health & Wellness Club, Heritage Club, Disaster Management Club, AEP and other Clubs etc.");
					$this->SetFont('Arial','',10);							
		
		}	



		function page6Title() {
			$this->Ln(6);
			// Arial 12
			$this->SetFont('Arial','B',14);
			// Background color
			// Title
//			$this->Cell(5,0);
//			$this->Cell(5,0);
			$this->Cell(80,0,"3(B) Health & Physical Activities",0,1,'L', false);
//			$this->SetFont('Arial','I',13);	
//			$this->Cell(0,0,"( to be assessed on a 5 point scale once in a session )",0,0,'L');
			$this->SetFont('Arial','',10);	
			
		}

		function page6_3BTitle() {
		$adjustment = 3;
		$ystartpos = $this->GetY() + $adjustment;
		$descriptorFont = 5.8;
			$leftMargin = 5;
			$rightMargin = 5;
			
		$this->SetXY(5 , $ystartpos);
			$this->Ln(1);
			// Arial 12
			$this->SetFont('Arial','B',14);

					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetX(5);
//Descriptor Heading
				//	$this->Write($descriptorFont, "3A: ");
					$this->SetFont('Arial','BI',14);							
//Descriptor Text
					$this->Write($descriptorFont, "(Any two to be assessed)");
					$this->Ln(6);

					$this->SetFont('Arial','',12);	
					$this->SetX(5);
					
//					$this->SetXY($x_secondcolend , $current_y);	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->Write($descriptorFont, "1. Sports/Indigenous Sports 2. NCC/NSS 3. Scouting and Guiding  4. Swimming 5. Gymnastics 6. Yoga 7. First Aid 8. Gardening/Shramdaan");	
					$this->Ln(1);					

//			$this->Cell(80,0,"3(A): Any 2 to be assessed",0,1,'L', false);
//		$this->SetXY(20 , 35);			
			$this->SetFont('Arial','',10);	

			
		}
		function page6_3B_Border() {
			$adjustment = 6 ;		
			$ystartpos = $this->GetY() + $adjustment; // 42
			
		$xborderstartpos =7;
		$xborderendpos = 202;
		$yStartPos = $ystartpos;
//		$yEndPos = 274;
		$yEndPos = $yStartPos + 180 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY(7 , $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
			// separate into 10 distinct sets
			$xstartpos = 7;
			$xendpos = 202;
			//$ystartpos = 42;
			$yendpos = $yEndPos ; // 118;   // 274;	
			
//		$this->SetXY(8 , 44);
		$this->SetXY(8 , $ystartpos + 2);		
		$this->SetFont('Arial','B',14);			
		$this->Cell(2,6);		
		$this->Cell(10,6,"S.No.",0,0,'C',false);
					// Horizontal line below header 
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
							$this->line( $xstartpos,$ystartpos+10, $xendpos,$ystartpos+10);  // horizontal line y = 52
							$xstartpos += 15;  // 10 mm for S.No Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 22
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
		//$this->SetFont('Arial','',10);				
// descriptors
		$this->Cell(3,6);
		$this->Cell(161,6,"Descriptor Indicators*",0,0,'C',false);	
						$this->SetLineWidth(0.5);
						$this->SetDrawColor(0,0,0);
						$xstartpos += 163;  // 38 mm for Subject Column trailing border
							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 185
						$this->SetLineWidth(.2);
						$this->SetDrawColor(0,0,0);	
						
		$this->Cell(2,6);
		$this->Cell(15,6,"Grade",0,1,'C',false);	
		$this->Ln(1);	
		$this->SetFont('Arial','',10);				
		
		}  // end of function
		
		function page6_3B_InternalBorder($accountstudentid) {
			$adjustment = 1 ;		
			$ystartpos = $this->GetY() + $adjustment;
			
			$xstartpos = 7;
			$xendpos = 202;
		//	$ystartpos = 52;
		//	$yendpos = 118 ; //274;	

			$height = 80;
			$x_firstcolstart = 9;
			$x_firstcolend = 22;			
			$x_secondcolend = 187;
			$leftMargin = 23;
			$rightMargin = 25;
			
			$descriptorFont = 5.8;
			
			
//			$x_thirdcolend = 9;
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
//			$this->Cell(5,10,"",0,1,'C',false);
//			$this->Cell(5,9,"",0,1,'C',false);			
			$this->Ln(1); 			
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_3B_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('Sports/Indigenous Sports') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
					$this->Cell(5,6);	
				$this->Cell(10,6,"01",0,0,'C',false);				
//gap
					$this->Cell(3,6);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, ". Sports/Indigenous Sports: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 

			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
// 2nd entry
			
			$ystartpos += $height;
/*			
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->Cell(10,6);
*/			
			$this->SetXY(1 , $ystartpos -1 );		
			$this->Ln(1); 			
			$this->SetX($xstartpos); 
			$this->Cell(3,6);
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$data = array();
				$resultg1 = mysql_query(" select assessment_category_type, remarks, grade  from cce_rc_section_3B_marks_det_v where account_student_map_id = $accountstudentid and upper(assessment_category_type) = upper('NCC/NSS') ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//S.No
				$this->Cell(10,6,"02",0,0,'C',false);				
//gap
					$this->Cell(3,13);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',10);							
//Descriptor Heading
					$this->Write($descriptorFont, "NCC/NSS: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont, "$rows[1]");
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->SetXY($x_secondcolend , $current_y);	
//Grade			
					$this->Cell(10,6,"$rows[2]",0,0,'C',false);
					$this->Ln(1); 


/*			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
*/

					
		} // end of function	


		function page6_Health_Border() {
			$adjustment = 6 ;		
			$ystartpos = 230; // 42
//		$ystartpos =
			
		$xborderstartpos =6;
		$xborderendpos = 202;
		$yStartPos = $ystartpos;
//		$yEndPos = 274;
		$yEndPos = $yStartPos + 50 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY(7 , $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
			// separate into 10 distinct sets
			$xstartpos = 7;
			$xendpos = 202;
			//$ystartpos = 42;
			$yendpos = $yEndPos ; // 118;   // 274;	
			
//		$this->SetXY(8 , 44);
		$this->SetXY(8 , $ystartpos + 4);		
		$this->SetFont('Arial','B',17);			
		$this->Cell(2,6);		
		$this->Cell(189,6,"Health Status",0,0,'C',false);

		$this->SetFont('Arial','B',10);
		$this->SetXY(8 , $ystartpos + 12);		
			$this->Ln();		
			$this->Cell(15);
			$this->SetFont('Arial','B',14);		
			$this->Cell(14,6,"Height",0,0,'L', false);
			$this->Cell(5);
			$this->SetFont('Arial','',13);			
			$this->Cell(30,6,"",B,0,'L', false);				
		
			$this->Cell(5);
			$this->SetFont('Arial','B',14);		
			$this->Cell(14,6,"Weight",0,0,'L', false);
			$this->Cell(5);
			$this->SetFont('Arial','',13);			
			$this->Cell(30,6,"",B,0,'L', false);				

			$this->Cell(5);
			$this->SetFont('Arial','B',14);		
			$this->Cell(27,6,"Blood Group",0,0,'L', false);
			$this->Cell(5);
			$this->SetFont('Arial','',13);			
			$this->Cell(30,6,"",B,1,'L', false);	
			
			$this->Ln();
			
			$this->Cell(15);
			$this->SetFont('Arial','B',14);		
			$this->Cell(18,6,"Vision  (L)",0,0,'L', false);
			$this->Cell(7);
			$this->SetFont('Arial','',13);			
			$this->Cell(20,6,"",B,0,'L', false);				
		
			$this->Cell(5);
			$this->SetFont('Arial','B',14);		
			$this->Cell(5,6,"(R)",0,0,'L', false);
			$this->Cell(5);
			$this->SetFont('Arial','',13);			
			$this->Cell(20,6,"",B,0,'L', false);				

			$this->Cell(5);
			$this->SetFont('Arial','B',14);		
			$this->Cell(32,6,"Dental Hygiene",0,0,'L', false);
			$this->Cell(5);
			$this->SetFont('Arial','',13);			
			$this->Cell(48,6,"",B,1,'L', false);	
			
		}  // end of function
		

		function page7Title($accountstudentid) {
			$this->Ln(2);
			// Arial 12
			$this->SetFont('Arial','B',17);
			// Background color
			// Title
			$this->Cell(200,0,"Self Awareness",0,1,'C', false);
//			$this->SetFont('Arial','I',13);	
//			$this->Cell(0,0,"( to be assessed on a 5 point scale once in a session )",0,0,'L');
			$this->SetFont('Arial','',10);	
			
		}
		
		function page7InternalBorder($accountstudentid) {
			$adjustment = 6 ;		
			$ystartpos = 20; // 42

			
			$xborderstartpos =7;
			$xborderendpos = 202;
			$yStartPos = $ystartpos;
//		$yEndPos = 274;
		$yEndPos = 274 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY(7 , $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
		}		
		
		function page7_SubSections($accountstudentid) {
			$adjustment = 1 ;		
//			$ystartpos = $this->GetY() + $adjustment;
			$ystartpos = 20;
			
			$xstartpos = 7;
			$xendpos = 202;
		//	$ystartpos = 52;
		//	$yendpos = 118 ; //274;	

			$height = 62;
			$x_firstcolstart = 9;
//			$x_firstcolend = 22;			
//			$x_secondcolend = 187;
			$leftMargin = 7;
			$rightMargin = 7;
			
			$descriptorFont = 5.8;
			
			
//			$x_thirdcolend = 9;
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
//			$this->Cell(5,10,"",0,1,'C',false);
//			$this->Cell(5,9,"",0,1,'C',false);			
			$this->Ln(1); 			
			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
				mysql_select_db(self::dbname, $mysql); 

				$data = array();
				$resultg1 = mysql_query(" select text1 from cce_self_awarness where account_student_map_id = $accountstudentid");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
			
//gap
//					$this->Cell(3,6);			
					$current_y =  $ystartpos ;  //52
					$current_x = $this->GetX();	
					$this->SetLeftMargin($leftMargin + 3);
					$this->SetRightMargin($rightMargin);
					$this->SetFont('Arial','B',14);							
//Descriptor Heading
					$this->Ln(1); 	
					$this->Write($descriptorFont, "My Goals: ");
					$this->SetFont('Arial','',10);							
//Descriptor Text
					$this->Write($descriptorFont,$rows[0]);
				//	$this->SetLeftMargin();				
				//	$this->SetRightMargin();				
					$this->Ln(1); 

			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
// 2nd entry
			
			$ystartpos += $height;
			
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->Ln(1); 			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$data = array();
				$resultg1 = mysql_query("select text2  from cce_self_awarness where account_student_map_id = $accountstudentid ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//					$this->Cell(3,6);			
				$current_y =  $ystartpos ;  //52
				$current_x = $this->GetX();	
				$this->SetLeftMargin($leftMargin + 3);
				$this->SetRightMargin($rightMargin);
				$this->SetFont('Arial','B',14);							
//Descriptor Heading
				$this->Ln(1); 	
				$this->Write($descriptorFont, "My Strengths: ");
				$this->SetFont('Arial','',10);							
//Descriptor Text
				$this->Write($descriptorFont, "$rows[0]");
			//	$this->SetLeftMargin();				
			//	$this->SetRightMargin();				
				$this->Ln(1); 

		
			// Horizontal line 
				$this->SetLineWidth(0.5);
				$this->SetDrawColor(0,0,0);
					$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
				$this->SetLineWidth(.2);
				$this->SetDrawColor(0,0,0);	


					$this->Ln(1); 
// 3nd entry
			
			$ystartpos += $height;
			
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->Ln(1); 			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$data = array();
				$resultg1 = mysql_query(" select text3  from cce_self_awarness where account_student_map_id = $accountstudentid  ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//					$this->Cell(3,6);			
				$current_y =  $ystartpos ;  //52
				$current_x = $this->GetX();	
				$this->SetLeftMargin($leftMargin + 3);
				$this->SetRightMargin($rightMargin);
				$this->SetFont('Arial','B',14);							
//Descriptor Heading
				$this->Ln(1); 	
				$this->Write($descriptorFont, "My Intrests and Hobbies: ");
				$this->SetFont('Arial','',10);							
//Descriptor Text
				$this->Write($descriptorFont, "$rows[0]");
			//	$this->SetLeftMargin();				
			//	$this->SetRightMargin();				
				$this->Ln(1); 

		
			// Horizontal line 
				$this->SetLineWidth(0.5);
				$this->SetDrawColor(0,0,0);
					$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
				$this->SetLineWidth(.2);
				$this->SetDrawColor(0,0,0);	


					$this->Ln(1); 
// 4th entry
			
			$ystartpos += $height;
			
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
			$this->Ln(1); 			
		//		$mysql = mysql_connect($this->$dbhost, $this->$dbuser, $this->$dbpass, false, 65536) or die ( 'Error connecting to mysql');
		//		mysql_select_db($this->$dbname, $mysql);
//				$mysql = mysql_connect('localhost:3306', 'newonli1_sysdemo', 'GXpDTNckz2SO', false, 65536) or die ( 'Error connecting to mysql');
//				mysql_select_db('newonli1_demodb1', $mysql);

				$data = array();
				$resultg1 = mysql_query("select text4  from cce_self_awarness where account_student_map_id = $accountstudentid ");
				$rows = mysql_fetch_array($resultg1);
				
				$this->SetFont('Arial','',10);					
//					$this->Cell(3,6);			
				$current_y =  $ystartpos ;  //52
				$current_x = $this->GetX();	
				$this->SetLeftMargin($leftMargin + 3);
				$this->SetRightMargin($rightMargin);
				$this->SetFont('Arial','B',14);							
//Descriptor Heading
				$this->Ln(1); 	
				$this->Write($descriptorFont, "Responsibilities Discharged/Exceptional Achievements: ");
				$this->SetFont('Arial','',10);							
//Descriptor Text
				$this->Write($descriptorFont, "$rows[0]");
			//	$this->SetLeftMargin();				
			//	$this->SetRightMargin();				
				$this->Ln(1); 


					

		} // end of function			


		function page8_Title() {
$adjustment = 15;

		$this->SetXY(55 , $adjustment);
		// Select Arial italic 8
		$this->SetFont('Arial','B',16);
		$this->Write(5,"Scholastic Areas");
		$this->SetFont('Arial','',13);
		$this->Write(5," (Grading on 9 point scale)");

			
		}		

		
		function page8_Section1_InternalBorder() {
			$adjustment = 25 ;		
			$ystartpos = $adjustment; // 42

			
			$xborderstartpos =35;
			$xborderendpos = 173;
			$yStartPos = $ystartpos;
//		$yEndPos = 274;
			$yEndPos = 98 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY($xborderstartpos, $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
	//			$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
		}				
		
		function page8_Section1_Content() {
//			$adjustment = 25 ;		
//			$ystartpos = $adjustment; // 42
			$this->Ln(5);					

			$xborderstartpos = 35;
			$yborderstartpos = 25;

			$xborderendpos = 173;
			$yborderendpos = 98;

			$xstartpos = $xborderstartpos;
			$ystartpos = $yborderstartpos;

			$xendpos = $xborderendpos;
			$yendpos = $yborderendpos;


$this->SetXY($xborderstartpos , $yborderstartpos);
			$this->SetFont('Arial','B',16);	
			$this->Cell(2,11);			
			$this->Cell(42,11,"Grade",0,0,'C',false);
						// Horizontal line below header 
							$this->SetLineWidth(0.5);
							$this->SetDrawColor(0,0,0);
								$this->line( $xstartpos,$ystartpos+11, $xendpos,$ystartpos+11);  // horizontal line
								$xstartpos += 46;  // 10 mm for S.No Column trailing border
								$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 17
							$this->SetLineWidth(.2);
							$this->SetDrawColor(0,0,0);	
			//$this->SetFont('Arial','B',10);				
	//subject
			$this->Cell(4,11);
			$this->Cell(42,11,"Marks Range",0,0,'C',false);	
							$this->SetLineWidth(0.5);
							$this->SetDrawColor(0,0,0);
							$xstartpos += 46;  // 38 mm for Subject Column trailing border
								$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 52
							$this->SetLineWidth(.2);
							$this->SetDrawColor(0,0,0);	
			$this->Cell(4,11);						
			$this->Cell(42,11,"Grade Point",0,0,'C',false);	
							$this->SetLineWidth(0.5);
							$this->SetDrawColor(0,0,0);
								// $this->line( 103,27, 103,240);
								$xstartpos += 46; 
	//							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);	// vertical line  x = 96						
							$this->SetLineWidth(.2);
							$this->SetDrawColor(0,0,0);		
			

		}

		function page8_Section1_ActualContent() {
			$adjustment = 7 ;		
			$ystartpos = 30 + $adjustment;

			$xborderstartpos = 35;
			$xborderendpos = 173;

//			$yborderendpos = 90;			
			$xstartpos = $xborderstartpos;
			$xendpos = $xborderendpos;
		//	$ystartpos = 52;
		//	$yendpos = 118 ; //274;	

			$height = 6;
			$x_firstcolstart = 35;
			$x_firstcolend = 81;			
			$x_secondcolend = 125;
			$leftMargin = 23;
			$rightMargin = 25;
			
			$descriptorFont = 5.8;
			$this->Ln(2); 	
			$this->SetXY($x_firstcolstart , $ystartpos -1 );		
//			$this->Ln(1); 			
			$this->SetFont('Arial','',15);					
//S.No
					$this->Cell(2,6);	
				$this->Cell(42,$height,"A1",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"91-100",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"10.0",0,1,'C',false);		


	//				$this->Ln(1); 					
			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
					
// 2nd entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(42,$height,"A2",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"81-90",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"9.0",0,1,'C',false);		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
// 3rd entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(42,$height,"B1",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"71-80",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"8.0",0,1,'C',false);		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
					
// 4th entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(42,$height,"B2",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"61-70",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"7.0",0,1,'C',false);		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	

// 5th entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(42,$height,"C1",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"51-60",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"6.0",0,1,'C',false);		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);		

// 6th entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(42,$height,"C2",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"41-50",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"5.0",0,1,'C',false);		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);						

// 7th entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(42,$height,"D",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"33-40",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"4.0",0,1,'C',false);		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
// 8th entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(42,$height,"E1",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"21-32",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"3.0",0,1,'C',false);		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	

// 9th entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(42,$height,"E2",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(42,$height,"00-20",0,0,'C',false);		
				
					$this->Cell(4,6);	
				$this->Cell(42,$height,"2.0",0,1,'C',false);		
				// Horizontal line 
					$this->SetLineWidth(1);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
					
					$this->SetFont('Arial','',10);
					
					
		}		
		
		function page8_Section2_Title() {
		$adjustment = 105;

		$this->SetXY(55 , $adjustment);
		// Select Arial italic 8
		$this->SetFont('Arial','B',16);
		$this->Write(5,"Co-Scholastic Areas");
		$this->SetFont('Arial','',13);
		$this->Write(5," (Grading on 5 point scale)");

			
		}		

		
		function page8_Section2_InternalBorder() {
			$adjustment =112 ;		
			$ystartpos = $adjustment; // 42

			
			$xborderstartpos =35;
			$xborderendpos = 173;
			$yStartPos = $ystartpos;
//		$yEndPos = 274;
			$yEndPos = 157 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY($xborderstartpos, $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
	//			$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
		}				
		
		function page8_Section2_Content() {
//			$adjustment = 25 ;		
//			$ystartpos = $adjustment; // 42
			$this->Ln(5);					

			$xborderstartpos = 35;
			$yborderstartpos = 112;

			$xborderendpos = 173;
			$yborderendpos = 157;

			$xstartpos = $xborderstartpos;
			$ystartpos = $yborderstartpos;

			$xendpos = $xborderendpos;
			$yendpos = $yborderendpos;


$this->SetXY($xborderstartpos , $yborderstartpos);
			$this->SetFont('Arial','B',16);	
			$this->Cell(2,11);			
			$this->Cell(65,11,"Grade",0,0,'C',false);
						// Horizontal line below header 
							$this->SetLineWidth(0.5);
							$this->SetDrawColor(0,0,0);
								$this->line( $xstartpos,$ystartpos+11, $xendpos,$ystartpos+11);  // horizontal line
								$xstartpos += 67;  // 10 mm for S.No Column trailing border
								$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 17
							$this->SetLineWidth(.2);
							$this->SetDrawColor(0,0,0);	
			//$this->SetFont('Arial','B',10);				
	//subject
	/*
			$this->Cell(4,11);
			$this->Cell(42,11,"Marks Range",0,0,'C',false);	
							$this->SetLineWidth(0.5);
							$this->SetDrawColor(0,0,0);
							$xstartpos += 46;  // 38 mm for Subject Column trailing border
								$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);   // vertical line  x = 52
							$this->SetLineWidth(.2);
							$this->SetDrawColor(0,0,0);	
*/							
			$this->Cell(4,11);						
			$this->Cell(65,11,"Grade Point",0,0,'C',false);	
							$this->SetLineWidth(0.5);
							$this->SetDrawColor(0,0,0);
								// $this->line( 103,27, 103,240);
								$xstartpos += 46; 
	//							$this->line( $xstartpos,$ystartpos, $xstartpos,$yendpos);	// vertical line  x = 96						
							$this->SetLineWidth(.2);
							$this->SetDrawColor(0,0,0);		
			

		}

		function page8_Section2_ActualContent() {
			$adjustment = 2 ;		
			$ystartpos = 121 + $adjustment;

			$xborderstartpos = 35;
			$xborderendpos = 173;

//			$yborderendpos = 90;			
			$xstartpos = $xborderstartpos;
			$xendpos = $xborderendpos;
		//	$ystartpos = 52;
		//	$yendpos = 118 ; //274;	

			$height = 6;
			$x_firstcolstart = 35;
			$x_firstcolend = 81;			
			$x_secondcolend = 125;
			$leftMargin = 23;
			$rightMargin = 25;
			
			$descriptorFont = 5.8;
	//		$this->Ln(2); 	
			$this->SetXY($x_firstcolstart , $ystartpos  );		
//			$this->Ln(1); 			
			$this->SetFont('Arial','',14);					
//S.No
					$this->Cell(2,6);	
				$this->Cell(65,$height,"A",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(65,$height,"4.1-5.0",0,1,'C',false);		
	


	//				$this->Ln(1); 					
			
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
					
					
// 2nd entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(65,$height,"B",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(65,$height,"3.1-4.0",0,1,'C',false);		
		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	

// 3rd entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(65,$height,"C",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(65,$height,"2.1-3.0",0,1,'C',false);		
		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	

// 4th entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(65,$height,"D",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(65,$height,"1.1-2.0",0,1,'C',false);		
		
				// Horizontal line 
					$this->SetLineWidth(0.5);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	

//5th entry			


				$ystartpos = $this->GetY() +1;
				$this->SetXY($x_firstcolstart, $ystartpos );					
				
					$this->Cell(2,6);	
				$this->Cell(65,$height,"E",0,0,'C',false);				
//gap
					$this->Cell(4,6);	
				$this->Cell(65,$height,"0-1.0",0,1,'C',false);		
		
					$this->SetLineWidth(1);
					$this->SetDrawColor(0,0,0);
						$this->line( $xstartpos,$ystartpos+$height, $xendpos,$ystartpos+$height);  // horizontal line y = 52
					$this->SetLineWidth(.2);
					$this->SetDrawColor(0,0,0);	
					
					$this->SetFont('Arial','',10);
					
			}				
		
		
		function page8_Section3_InternalBorder() {
			$adjustment =165 ;		
			$ystartpos = $adjustment; // 42

			
			$xborderstartpos =35 - 12;
			$xborderendpos = 173 + 12;
			$yStartPos = $ystartpos;
//		$yEndPos = 274;
			$yEndPos = 177 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY($xborderstartpos, $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
		$adjustment = 166;
		$this->SetLeftMargin($xborderstartpos);
		$this->SetRightMargin(22);
		$this->SetXY($xborderstartpos , $adjustment );
		// Select Arial italic 8
		$this->SetFont('Arial','',14);
		$this->Write(5,"Student must obtain the qualifying grade (minimum grade D) in all the subjects under Scholastic and Co-Scholastic Domain.");
		$this->SetFont('Arial','',10);
		
		$this->SetXY($xborderstartpos , $yEndPos+ 4);
		$this->SetFont('Arial','B',14);
		$this->Write(5,"First Term:");
		$this->SetFont('Arial','',14);
		$this->Write(5," FA1(10%) + FA2(10%) + SA1(30%) = 50%");
		$this->Ln(7);
		$this->SetFont('Arial','B',14);
		$this->Write(5,"Second Term:");
		$this->SetFont('Arial','',14);
		$this->Write(5,"FA3(10%) + FA4(10%) + SA2(30%) = 50%");
		$this->Ln(8);
		$this->SetFont('Arial','B',14);
		$this->Write(5,"Formative Assessment:");
		$this->SetFont('Arial','',13);
				$this->SetRightMargin(15);
		$this->Write(5,"FA1(10%) + FA2(10%) + FA3(10%) + FA4(10%) = 40%");		
		$this->SetFont('Arial','',10);	
		$this->Ln(7);		
		$this->SetFont('Arial','B',14);
				$this->SetRightMargin(22);
		$this->Write(5,"Summative Assessment:");
		$this->SetFont('Arial','',13);
		$this->Write(5,"SA1(30%) + SA2(30%) = 60%");		
		$this->SetFont('Arial','',10);		
		
		}			
		
		function page8_Section4_InternalBorder() {
			$adjustment =220 ;		
			$ystartpos = $adjustment; // 42

			
			$xborderstartpos =35 - 12;
			$xborderendpos = 173 + 12+1;
			$yStartPos = $ystartpos;
//		$yEndPos = 274;
			$yEndPos = 270 ;// // 3 sections + header
		
		
		//$this->SetXY(7 , 40);
		$this->SetXY($xborderstartpos, $ystartpos);		
			$this->SetLineWidth(1);
			$this->SetDrawColor(0,0,0);
				$this->line( $xborderstartpos,$yStartPos, $xborderendpos,$yStartPos);
				$this->line( $xborderstartpos,$yStartPos, $xborderstartpos,$yEndPos);
				$this->line( $xborderstartpos,$yEndPos, $xborderendpos,$yEndPos);
				$this->line( $xborderendpos,$yStartPos, $xborderendpos,$yEndPos);
			$this->SetLineWidth(.2);
			$this->SetDrawColor(0,0,0);	
			
		$this->SetLeftMargin($xborderstartpos);
		$this->SetRightMargin(22);
		$this->SetXY($xborderstartpos , $adjustment+ 2 );
		// Select Arial italic 8
		$this->SetFont('Arial','',14);
		$this->Write(5,"CGPA (Cumulative Grade Point Average) will be provided excluding additional 6th subject as Scheme for Studies");
		$this->Ln(6);
		$this->Write(5,"An indicative equivalence of Grade Point and Percentage of Marks can be computed as follows");
		$this->Ln(6);
		$this->Write(5,"   - Subject wise inidcative percentage of marks = 9.5 x GP of the subject");
		$this->Ln(6);
		$this->Write(5,"   - Overall inidcative percentage of marks = 9.5 x CGPA");
		
		$this->SetFont('Arial','',10);			
		}
		function Footer()
			{
				if ( $this->PageNo() == 3) {
					// $this->Cell(0,0,'Page '.$this->PageNo(),0,0,'C');
					// Go to 1.5 cm from bottom
						$this->SetY(-15);
						$this->SetX(5);
						// Select Arial italic 8
						$this->SetFont('Arial','B',$height);
						$this->Write(5,"*Descriptor Indicators ");
						$this->SetFont('Arial','',10);
						$this->Write(5,"are statements used to describe each learner");
					// Print centered page number
				}
			}	
		
}  // end of class
 
?>