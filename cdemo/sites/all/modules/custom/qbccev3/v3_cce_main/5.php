text/x-generic qtxt_teacher_msg.module
PHP script text

<?php
/**
 * Implementation of hook_views_api().
 *
 */
// require ( "../quadroquest/SMSLibrary.php");

function qtxt_teacher_msg_views_api() {
  return array(
    'api' => 2,
    'path' => drupal_get_path('module', '  '),
  );
}


function qtxt_teacher_msg_menu() {
	$items['teacherform'] = array(
			'title' => t('Online Messages to Parents  - Welcome Screen'),
			'page callback' => 'qtxt_teacher_submit_form',
			'type' => MENU_CALLBACK,
			'access callback' => 'user_access',
			'access arguments' => array('access content'),
	);
	$items['teacherform/next'] = array(
			'title' => t('Online Messages to Parents  - Next Screen'),
			'page callback' => 'qtxt_teacher_submit_next_form',
			'type' => MENU_CALLBACK,
			'access callback' => 'user_access',
			'access arguments' => array('access content'),
	);
 $items['teacherform/ind/ahahjs2'] = array(
        'page callback' => 'qtext_teacher_ahah_field_js_for_ind2',
    //    'access arguments' => array('administer ahahtestmodule'),
        'type' => MENU_CALLBACK,
    			'access callback' => 'user_access',
    			'access arguments' => array('access content'),	
  );
return $items;
}

function qtxt_teacher_submit_form() {
			$output = drupal_get_form('qtxt_class_teacher_form');
			return $output ;
}

function qtxt_teacher_submit_next_form() {
			$output = drupal_get_form('qtxt_class_teacher_next_form');
			return $output ;
}

function qtxt_class_teacher_form( $form_state) {

global $user;
$profile =  profile_load_profile($user);
$myMobileNumber =  $user->profile_mobile;  

$defusermobile = $myMobileNumber;
$defadminuserid = "";
$defadminpwd = "";


	  $form['adminOuter'] = array(
						'#type' => 'fieldset',
						'#title' => t(' Information to be delivered to Students'),
						'#collapsible' => TRUE, 
						'#collapsed' => FALSE,
						'#tree' => TRUE
	  );
				  

	  db_set_active('qtxt_db');	

	  
	  $resultg1 = db_query("SELECT account_grade_id,grade_name FROM {qtxt_sms_account_grades} a, {qtxt_sms_account} b where   a.account_id = b.account_id and section != 'ALL' order by class_weight ");
				  $igradeOptions = array('' => t('Select..'));
				  while ($rowg1 = db_fetch_object($resultg1)) {
				  	$igradeOptions[$rowg1->account_grade_id ] =  $rowg1->grade_name; //This is the only line that changed from the code above.
				  	}
				db_set_active('default');
				  $form['adminOuter']['grade'] = array('#type' => 'select',
				  				  		'#options' => $igradeOptions,
				  				  		'#title' => t('Department - Year'),
				  				  		'#description' => t('Please select the Department and Year '),
				  				  		'#disabled' => FALSE,
				  				  		'#ahah' => array(
				  				  		 'path' => 'teacherform/ind/ahahjs2',
				  				  		 'wrapper' => 'ahah-wrapper-grade',
				  				  		 'method' => 'replace',
				  				  						)
				  );
				  
				  $form['adminOuter']['student'] = array('#type' => 'select',
				  				  		'#title' => t('Student Name'),
										'#options' =>  array( '' => t('Select ..') ),
				  				  		'#description' => t('Please select the Student'),
				  				  		'#disabled' => FALSE,
				  				  	'#prefix' => '<div id = "ahah-wrapper-grade">',
				  					'#suffix' => '</div>',
				  				  		
				  );
				  
				
  $form['adminOuter']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Confirm'),
  );
return $form;
 
}


function qtxt_class_teacher_next_form( $form_state) {

global $user;
$profile =  profile_load_profile($user);
$myMobileNumber =  $user->profile_mobile;  
$defusermobile = $myMobileNumber;
if(!empty($_SESSION['user_section_filter'])) {
	$c2 = &$_SESSION['user_section_filter'];
	if(!empty($_SESSION['user_section_filter_value'])) {
		$c2Val = &$_SESSION['user_section_filter_value'];
	} else {
		$c2Val = "";
	}
} else {
	$c2 = "";
	$c2Val = "";
}
// $_SESSION['user_class_filter_value'] = $clVal;
$_SESSION['user_section_filter_value'] = $c2Val;


$form['filters'] = array(
    '#type' => 'fieldset',
    '#title' => t('Select the Message Type'),
   //  '#theme' => 'user_filters',
  );
db_set_active('qtxt_db');	
$result = db_query("select type_id,msg_type from {qtxt_sms_teacher_message_type} where type_id < 4 ");
$sectionoptions = array('' => t('Select..'));

while ($row = db_fetch_object($result)) {
  $sectionoptions[$row->type_id ] =  $row->msg_type; //This is the only line that changed from the code above.
}
db_set_active('default');

$key = 'section';				
 $names[$key] = 'Type';
 $form['filters']['status'][$key] = array(
      '#type' => 'select',
      '#options' => $sectionoptions,
    );


  $form['filters']['section']['#default_value']	= $clVal;

// $form['filters']['status']['class']['#default_value']	= $clVal;
// $form['filters']['status']['section']['#default_value']	= $c2Val;  



$form['#attributes']['enctype'] = "multipart/form-data";

				  
				  $form['inMsg'] = array(
				  		'#title' => t('Message'),
				  		'#type' => 'textfield',
						  '#size' => 40, 
						  '#maxlength' => 500, 
				  		'#disabled' => FALSE,
				  		'#description' => t('Please enter Message'),
					);
					
				$form['tcsv'] = array(
					  '#type' => 'file',
					  '#title' => 'Upload file',
					  '#description' => t('Pick a file to upload')
				  );


				
				  $form['submit'] = array(
					'#type' => 'submit',
					'#value' => t('Confirm'),
				  );
		return $form;
}


function qtxt_class_teacher_form_submit($form, &$form_state) {
	global $user;
	$profile =  profile_load_profile($user);
	$myMobileNumber =  $user->profile_mobile; 
	$uid = $user->uid;
	$_SESSION['t_student'] = $form_state['values']['adminOuter']['student'];
	$_SESSION['t_student_grade'] = $form_state['values']['adminOuter']['grade'];
	$form_state['redirect'] = 'teacherform/next';
  return;

}

function qtxt_class_teacher_next_form_submit($form, &$form_state) {
// krumo($form_state);
// krumo($_FILES); 
// drupal_set_message( "$_FILES" ) ;
 
	global $user;
	$profile =  profile_load_profile($user);
	$myMobileNumber =  $user->profile_mobile; 
	$uid = $user->uid;

	if(!empty($_SESSION['t_student'])) {
		$student = &$_SESSION['t_student'];
	} else {
		$student = 'null';
	}

	if(!empty($_SESSION['t_student_grade'])) {
		$grade = &$_SESSION['t_student_grade'];
	} else {
		$grade = "";
	}

if (isset($form_state['values']['section'])) {

			$filter = $form_state['values']['section'];
			//  drupal_set_message(t("After Submit, Value Selected $filter "));	  

			$_SESSION['user_section_filter_value'] = $filter;
		  if ( $form_state['values'][$filter] != "") {
		   $_SESSION['user_section_filter'] = "section";
		   }
      } else {
		//  $_SESSION['user_section_filter'] = "";
		//  $_SESSION['user_section_filter_value'] = "";	  
		 //  unset ( $_SESSION['user_section_filter'] );
		 //  unset ( $_SESSION['user_section_filter_value'] );
	  }
	  
	  $c2Val = &$_SESSION['user_section_filter_value'] ;

// drupal_set_message(("Msg id = $c2Val"));





	$dir = file_directory_path();

	if(isset($_FILES) && !empty($_FILES) && $_FILES['files']['size']['tcsv'] != 0){
    
		#this structure is kind of wacky
		$name = $_FILES['files']['name']['tcsv'];
		$size = $_FILES['files']['size']['tcsv'];
		$type = $_FILES['files']['type']['tcsv'];

		#this is the actual place where we store the file
		$file = file_save_upload('tcsv', array() , $dir);

	} 
	/*
	else {
		$name = 'null';
	}
*/


		
	$msg = $form_state['values']['inMsg'];
		db_set_active('qtxt_db');

			$msg = str_replace("'", "''", $msg);
		
			$result = db_query( "INSERT INTO qtxt_sms_teacher_message(`teacher_message_id`,`account_student_map_id`,`account_grade_id`,
                     `message`,`teacher_uid`,`teacher_mnumber`,`creation_date`,`last_update_date`,`created_by`,`last_updated_by`, file_name,process_flag,type_id)
			VALUES(null,$student,$grade,'$msg',$uid, '$myMobileNumber', sysdate(), sysdate(), 'admin', 'admin', '$name',1,$filter)");
			db_set_active('default');
			drupal_set_message(t("Your Message has been Submitted."));	

			$form_state['redirect'] = 'teacherform';
			return;

}

function qtxt_class_teacher_form_validate($form, &$form_state) {
// if (!isset($form_state['values'])) {
// http://anicham.com/quadrotxt/attendanceformBytudent}
}

function qtext_teacher_ahah_field_js_for_ind2 () {
//  krumo($form_state);
$form_state = array('storage' => NULL, 'submitted' => FALSE);
		$form_build_id = $_POST['form_build_id'];

		// Get for the form from the cache
		$form = form_get_cache($form_build_id, $form_state);
  
		// Get the form set up to process
		$args = $form['#parameters'];
		$form_id = array_shift($args);
		$form_state['post'] = $form['#post'] = $_POST;
//		$form['#programmed'] = $form['#redirect'] = FALSE;


		$gid = $form['#post']['adminOuter']['grade'];
		db_set_active('qtxt_db');
		$sqlg = " select account_student_map_id,student_name from {qtxt_sms_mobile_students_v} where account_grade_id = $gid";
		$resultg = db_query($sqlg);
		$valueg[''] = 'Select a value';
		while($datag = db_fetch_object($resultg))
		{
		$valueg[$datag->account_student_map_id] = $datag->student_name;
		}
		db_set_active('default');
		//$valueg1 = drupal_map_assoc($valueg);
		$form['adminOuter']['student']['#options'] = $valueg;
		form_set_cache($form_build_id, $form, $form_state);
				$form += array(
					'#post' => $_POST,
					'#programmed' => FALSE,
				  );
				$form = form_builder('qtext1_smsform', $form, $form_state);		
				$output = $form['adminOuter']['student'];
				unset($output['#prefix'],$output['#suffix']);
				$out1 =  drupal_render($output);
				drupal_json(array('status' => TRUE, 'data' => $out1));


}

