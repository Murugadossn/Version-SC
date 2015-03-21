<?php
require('pay_fpdf.php');

class PAYPDF extends PAYFPDF
{

	const dbhost = 'localhost:3306';
	const dbuser = 'igradeno_urcdemo';
 	const dbpass = 'T6UrLXLf92hW';
 	const dbname = 'igradeno_cdemodb';

			
		
function setBorder( ) {
$this->SetLineWidth(5);
$this->SetDrawColor(102,153,102);
	$this->line( 1,1, 209,1);
	$this->line( 1,1, 1,296);
	$this->line( 1,296, 209,296);
	$this->line( 209,1, 209,296);
$this->SetLineWidth(.2);
$this->SetDrawColor(0,0,0);	
}


function schoolHeader($student_map_id,$activityid) {
		$w = array(10, 75);
		$this->SetFont('Arial','B',10);
// RVS Padmavathi College of Engineering- Gummidipoondi
}



function Report_Title($student_map_id,$activityid)
{
// $this->Ln(30);
$this->Ln(5);

$data=array();

$stumapid=$student_map_id;
$avid=$activityid;

$data=$this->get_receiptdata($stumapid,$avid);

$reference = "Ref-123";

$studentname = $data[0];

    $this->SetFont('Arial','B',15);
    $this->SetTextColor(0,0,0);
    // Background color
    // Title
    $this->Cell(0,0,"RVS EDUCATIONAL TRUST( CHENNAI )",0,1,'C');
    $this->Ln(8);
	$this->SetFont('Arial','B',10);
    $this->Cell(0,0,"# No.13,Sethilpakkam Village,Peppamarikuppam Post,",0,1,'C');
	$this->Ln(8);
	$this->Cell(0,0,"Gummidipoondi Taluk,Thiruvallur Dist.,T.N. - 517588.",0,1,'C');
    // Arial 12  
    $this->Ln(8);
    $this->SetFont('Arial','B',19);
    $this->SetTextColor(0,0,0);
    // Background color
    // Title
    $this->Cell(0,0,"RECEIPT",0,1,'C');
	$this->Ln(8);
	$this->Ln(8);
	$this->SetFont('Arial','B',10);
    $this->SetTextColor(0,0,0);
    $this->Cell( -1,6,"Receipt.No :- $reference",0,0,'L',false);
    $date_array = getdate();
    $formated_date .= $date_array[mday] . "/";
    $formated_date .= $date_array[mon] . "/";
    $formated_date .= $date_array[year];
    $this->Cell( 190,6,"Receipt Date : $formated_date",0,1,'R',false);	

	$this->SetTextColor(0,0,0);
	$this->Ln(8);


    // Line break
	$this->Ln();	

	$this->Cell(7);
			$this->SetFont('Arial','',14);		
			$this->Cell(57,6,"Received with thanks from ",0,0,'L', false);
			$this->Cell(3);
			$this->SetFont('Arial','B',13);			
			$this->Cell(65,6,"$studentname",B,0,'C', false);				
		
			$this->Cell(1);
			$this->SetFont('Arial','',14);		
			$this->Cell(28,6,"The sum of Rs : ",0,0,'L', false);
			$this->Cell(5);
			$this->SetFont('Arial','B',13);			
			$this->Cell(20,6,$data[1],B,0,'C', false);	
			
			$this->Ln();
                          $amount=$this->number_to_word( $data[1] );
            $this->Cell(2);
			$this->SetFont('Arial','',14);		
			$this->Cell(18,6,"Rupees ( ",0,0,'L', false);
			$this->Cell(5);
			$this->SetFont('Arial','B',13);			
			$this->Cell(157,6,$amount,B,0,'C', false);				
			
			$this->Cell(2);
			$this->SetFont('Arial','',14);		
			$this->Cell(160,6,") ",0,0,'L', false);
			
		    $this->Ln();
			$this->Cell(2);
			$this->SetFont('Arial','',14);		
			$this->Cell(18,6,"towards ",0,0,'L', false);
			$this->Cell(3);
			$this->SetFont('Arial','B',13);			
			$this->Cell(30,6,"Cheque",B,0,'C', false);				
		
			$this->Cell(2);
			$this->SetFont('Arial','',14);		
			$this->Cell(5,6,"By Cash/Cheque/DD bearing No ",0,0,'L', false);
			$this->Cell(70);
			$this->SetFont('Arial','B',13);			
			$this->Cell(30,6,"XXXXX",B,0,'C', false);	
			
$this->Ln();	

}

function Report_Body($student_map_id,$activityid)
{
	$fees_type=array();
	$amt=array();
	$feeandamt=array();
	$feeandamt=$this->get_fee_and_amt($student_map_id,$activityid);
	
	$fees_type=$feeandamt[0];
	$amt=$feeandamt[1];
	/*for($i=0;$i<=sizeof($fees_type);$i++)
	{
	print_r($fees_type[$i]);
	}*/
	$xborderstartpos = 7;
	$yborderstartpos = 27;

	$xborderendpos = 202;
	$yborderendpos = 240;

	$this->Ln(8);
	$this->SetFont('Arial','',10);
	$current_y = $this->GetY();
	$current_x = $this->GetX();
	$xstartpos = $current_x;
	$ystartpos = $current_y;
	$height= 0;
	$xendpos = $xborderendpos;

//	$rcptdate = "10 Jul 2012";
	
// Horizontal line 
	$this->SetLineWidth(.5);
	$this->SetDrawColor(0,0,0);
	$this->SetLineWidth(.2);
	$this->SetDrawColor(0,0,0);	
	$this->SetFont('Arial','B',10);	

	$store_x = $this->GetX();

//Now comes the actual details	 
// Horizontal line 
	$this->SetLineWidth(.5);
	$this->SetDrawColor(0,0,0);
		$this->line( $xstartpos,$ystartpos, $xendpos,$ystartpos);  // horizontal line y = 52
	$this->SetLineWidth(.2);
	$this->SetDrawColor(0,0,0);	
// Enter the Receipt Header
	$this->SetFont('Arial','B',10);				
	$this->Cell(19,6,"S No.",0,0,'L',false);	
	$this->Cell(1,6);	
	$this->Cell(130,6,"Description",0,0,'L',false);	
	$this->Cell(1,6);	
	$this->Cell(3,6,"",0,0,'L',false);	
	$temp_y= $this->GetY();
	$current_y = $temp_y;
	$this->SetXY($xborderendpos, $temp_y);			
	$this->Cell( -1,6,"Receipt Amount",0,1,'R',false);	

	$current_y= $this->GetY();
	$this->SetLineWidth(.5);
	$this->SetDrawColor(0,0,0);
		$this->line( $xstartpos,$current_y, $xendpos,$current_y);  // horizontal line y = 52
	$this->SetLineWidth(.2);
	$this->SetDrawColor(0,0,0);	

	$linestart_y = $this->GetY();
	$lineheight = 20;
	
	$cury = $linestart_y ;
// loop through the details to print the details
// replace the below loop by the actual number of records
	$this->SetFont('Arial','',10);				

	$description1 = "Lab Fee.";
	$description2 = "Tution Fee";
	$description3 = "EXam Fee";
	$description4 = "Sports  Fee";
	$description5 = "Convience  Fee";
	$j=1;
	$total=0;
	for ($i=0; $i<sizeof($fees_type); $i++)
	{
		
			$this->Cell(19,6,"$j",0,0,'L',false);	
			$j++;
			$this->Cell(1,6);	
			$temp_y= $this->GetY();
			$current_y = $temp_y;
			$this->MultiCell(130,6,$fees_type[$i],0,'L',false);	
			$end_y= $this->GetY();
			$this->SetXY(150, $temp_y);
			$this->Cell(16,6);	
			$this->Cell(3,6,"Rs",0,0,'L',false);	
			$total=$total+$amt[$i];
			$this->SetXY( $xborderendpos, $temp_y);
			$this->Cell( -1,6,$amt[$i],0,1,'R',false);	
			$curx = $this->GetX();
			$cury = $cury + $lineheight ;
			$this->SetXY($curx, $cury);			
		
		

	} // end of all the data
	
	// now calculate the total 
	$this->SetFont('Arial','B',10);				
	
			$this->Cell(19,6,"",0,0,'L',false);	
			$this->Cell(1,6);	
			$temp_y= $this->GetY();
			$current_y = $temp_y;
			$this->Cell(130,6,"Total Amount Received",0,0,'R',false);	
			$end_y= $this->GetY();
			$this->SetXY(150, $temp_y);
			$this->Cell(16,6);	
			$this->Cell(3,6,"Rs.",0,0,'L',false);	
			$this->SetXY( $xborderendpos, $temp_y);
			$this->Cell( -1,6,$total,0,1,'R',false);	
			$curx = $this->GetX();
			$cury = $cury + $lineheight ;
			$this->SetXY($curx, $cury);			

	$this->SetFont('Arial','',10);		
	
	
	
}
		
function Footer()
	{
	$address = "Old #8 New #25 A, 2nd Bharathiar Street, Palavanthangal, Chennai 600114.";
	$parentname = "Mohamed Ali";
	
		// Address		
				
	$this->SetFont('Arial','B',10);	
    $this->Cell(10,6,"Name & Address",0,0,'L',false);
    $this->Ln(8);	
	$this->Cell(10,6,"Attn: $parentname",0,0,'L',false);
	$this->SetFont('Arial','',10);	
	$this->Ln(8);
	$this->MultiCell(50,6,"$address",0,'L',false);	// 99914
	
	$xstartpos = $store_x;
	$ystartpos = $store_y + 60;
    $this->SetXY($xstartpos, $ystartpos );	

				$this->SetY(-15);
				$this->SetX(5);
				// Select Arial italic 8
				$this->SetFont('Arial','',8);
				$this->Write(15,"This is a computer generated receipt. No signature is necessary.");
				$this->SetFont('Arial','',10);
	

	}
		
public function get_receiptdata($student_map_id,$activityid){


$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
  mysql_select_db(self::dbname, $mysql);
  
  $sbcsql="SELECT * FROM qpn_pending_amount_by_student_v where activity_id=$activityid and account_student_map_id=$student_map_id";
   $sbcrs = mysql_query($sbcsql);
   $detail=array();
                                        $num_rows5 = mysql_num_rows($sbcrs);
                                        if ( $num_rows5 > 0 ) {
                                       $amt=0;
                                                    while($row1 = mysql_fetch_assoc($sbcrs)){
                                                                
                                                                $student_name = $row1["student_name"];
								$tpa=$row1["total_paid_amount"];
								
								
								 $amt=$amt+$row1["total_paid_amount"];
							 }
							 $detail[]= $student_name;
                                                    
                                                    $detail[]=$amt;
                                                   

                                        // end of if clause   $num_rows5 > 0
                                        }
                                        return $detail;
  
}
public function get_fee_and_amt($student_map_id,$activityid){


$mysql = mysql_connect(self::dbhost, self::dbuser, self::dbpass, false, 65536) or die ( 'Error connecting to mysql');
  mysql_select_db(self::dbname, $mysql);
  
  $sbcsql="SELECT * FROM qpn_pending_amount_by_student_v where activity_id=$activityid and account_student_map_id=$student_map_id";
   $sbcrs = mysql_query($sbcsql);
   $fee=array();
   $tpa=array();
   $feeandammt=array();
                                        $num_rows5 = mysql_num_rows($sbcrs);
                                        if ( $num_rows5 > 0 ) {
                                   
                                                    while($row1 = mysql_fetch_assoc($sbcrs)){
                                                                
                                                                $fee[]= $row1["fee_type"];
								$tpa[]=$row1["total_paid_amount"];
								
                                                    }
                                               
                                                   

                                        // end of if clause   $num_rows5 > 0
                                        }
                                       // echo $fee[1]." ".$tpa[1]. "<BR>";
                                        $feeandammt[0]=$fee;
                                        $feeandammt[1]=$tpa;
                                       // print_r($feeandammt[0]);                                    
                                         // print_r($feeandammt[1]);
                                        return  $feeandammt;
  
}
public function number_to_word( $num = '' )
{
    $num    = ( string ) ( ( int ) $num );
   
    if( ( int ) ( $num ) && ctype_digit( $num ) )
    {
        $words  = array( );
       
        $num    = str_replace( array( ',' , ' ' ) , '' , trim( $num ) );
       
        $list1  = array('','one','two','three','four','five','six','seven',
            'eight','nine','ten','eleven','twelve','thirteen','fourteen',
            'fifteen','sixteen','seventeen','eighteen','nineteen');
       
        $list2  = array('','ten','twenty','thirty','forty','fifty','sixty',
            'seventy','eighty','ninety','hundred');
       
        $list3  = array('','thousand','million','billion','trillion',
            'quadrillion','quintillion','sextillion','septillion',
            'octillion','nonillion','decillion','undecillion',
            'duodecillion','tredecillion','quattuordecillion',
            'quindecillion','sexdecillion','septendecillion',
            'octodecillion','novemdecillion','vigintillion');
       
        $num_length = strlen( $num );
        $levels = ( int ) ( ( $num_length + 2 ) / 3 );
        $max_length = $levels * 3;
        $num    = substr( '00'.$num , -$max_length );
        $num_levels = str_split( $num , 3 );
       
        foreach( $num_levels as $num_part )
        {
            $levels--;
            $hundreds   = ( int ) ( $num_part / 100 );
            $hundreds   = ( $hundreds ? ' ' . $list1[$hundreds] . ' Hundred' . ( $hundreds == 1 ? '' : 's' ) . ' ' : '' );
            $tens       = ( int ) ( $num_part % 100 );
            $singles    = '';
           
            if( $tens < 20 )
            {
                $tens   = ( $tens ? ' ' . $list1[$tens] . ' ' : '' );
            }
            else
            {
                $tens   = ( int ) ( $tens / 10 );
                $tens   = ' ' . $list2[$tens] . ' ';
                $singles    = ( int ) ( $num_part % 10 );
                $singles    = ' ' . $list1[$singles] . ' ';
            }
            $words[]    = $hundreds . $tens . $singles . ( ( $levels && ( int ) ( $num_part ) ) ? ' ' . $list3[$levels] . ' ' : '' );
        }
       
        $commas = count( $words );
       
        if( $commas > 1 )
        {
            $commas = $commas - 1;
        }
       
        $words  = implode( ', ' , $words );
       
        //Some Finishing Touch
        //Replacing multiples of spaces with one space
        $words  = trim( str_replace( ' ,' , ',' , $this->trim_all( ucwords( $words ) ) ) , ', ' );
        if( $commas )
        {
            $words  = $this->str_replace_last( ',' , ' and' , $words );
        }
       
        return $words;
    }
    else if( ! ( ( int ) $num ) )
    {
        return 'Zero';
    }
    return '';
}


public function trim_all( $str , $what = NULL , $with = ' ' )
{
    if( $what === NULL )
    {
        //  Character      Decimal      Use
        //  "\0"            0           Null Character
        //  "\t"            9           Tab
        //  "\n"           10           New line
        //  "\x0B"         11           Vertical Tab
        //  "\r"           13           New Line in Mac
        //  " "            32           Space
       
        $what   = "\\x00-\\x20";    //all white-spaces and control chars
    }
   
    return trim( preg_replace( "/[".$what."]+/" , $with , $str ) , $what );	
    }
    
public function str_replace_last( $search , $replace , $str ) {
    if( ( $pos = strrpos( $str , $search ) ) !== false ) {
        $search_length  = strlen( $search );
        $str    = substr_replace( $str , $replace , $pos , $search_length );
    }
    return $str;
}
}  // end of class
 
?>