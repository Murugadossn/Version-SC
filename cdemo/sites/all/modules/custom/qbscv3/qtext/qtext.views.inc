<?php 

/**
 * @file
 * Provide views data and handlers for qtext.module
 */



/**
 * Implementation of hook_views_data()
 */
 function qtext_views_data() {
 
 $data['qtxt_sms_account_v']['table']['group']  = t('MyAccounts');
$data['qtxt_sms_account_v']['table']['base'] = array(
   'field' => 'account_name',
   'title' => t('MyAccounts'),
    'database' => 'qtxt_db',
   
   'help' => t('MyAccounts forecast'),

 	);


$data['qtxt_sms_account_v']['account_name'] = array(
   	'title' => t('account_name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_account_v']['account_description'] = array(
   	'title' => t('account_description'),
   	'help' => t("Account Desc"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_account_v']['account_address'] = array(
   	'title' => t('account_address'),
   	'help' => t("Account Address"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_account_v']['table']['group']  = t('MyMAccounts');
$data['qtxt_sms_mobile_account_v']['table']['base'] = array(
   'field' => 'account_name',
   'title' => t('My Mobile Accounts'),
    'database' => 'qtxt_db',
   
   'help' => t('MyMobile Accounts forecast'),

 	);


$data['qtxt_sms_mobile_account_v']['account_name'] = array(
   	'title' => t('account_name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_mobile_account_v']['account_description'] = array(
   	'title' => t('account_description'),
   	'help' => t("Account Desc"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_mobile_account_v']['account_address'] = array(
   	'title' => t('account_address'),
   	'help' => t("Account Address"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_account_v']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_account_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_alerts_v']['table']['group']  = t('MyAlerts');
$data['qtxt_sms_mobile_alerts_v']['table']['base'] = array(
   'field' => 'alert_message',
   'title' => t('My Alerts'),
    'database' => 'qtxt_db',
   
   'help' => t('MyAlerts forecast'),

 	);
$data['qtxt_sms_mobile_alerts_v']['alert_message'] = array(
'title' => t('Alert Message'),
   	'help' => t("Alert Message"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_alerts_v']['alert_pub_date'] = array(
'title' => t('Alert Published Date'),
   	'help' => t("Alert Published Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_alerts_v']['mobile_number'] = array(
'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_alerts_v']['student_name'] = array(
'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_alerts_v']['student_identifier'] = array(
'title' => t('Student Identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_alerts_v']['grade_name'] = array(
'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_alerts_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_alerts_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_curriculam_v']['table']['group']  = t('MyCurriculam');
$data['qtxt_sms_mobile_curriculam_v']['table']['base'] = array(
   'field' => 'cur_title',
   'title' => t('My Curriculam'),
    'database' => 'qtxt_db',
   
   'help' => t('Extra Curricular Activites'),

 	);

$data['qtxt_sms_mobile_curriculam_v']['cur_title'] = array(
'title' => t('cur_title'),
   	'help' => t("Curriculam Title"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_curriculam_v']['cur_description'] = array(
'title' => t('Curriculam Description'),
   	'help' => t("Curriculam Description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_curriculam_v']['cur_address'] = array(
'title' => t('Curriculam Address'),
   	'help' => t("Curriculam Address"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_curriculam_v']['cur_start_date'] = array(
'title' => t('Curriculam Start Date'),
   	'help' => t("Curriculam Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_curriculam_v']['cur_end_date'] = array(
'title' => t('Curriculam End Date'),
   	'help' => t("Curriculam End Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_curriculam_v']['mobile_number'] = array(
'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_curriculam_v']['account_id'] = array(
'title' => t('Account Id'),
   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_curriculam_v']['account_name'] = array(
'title' => t('Account Name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_curriculam_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_messages_v']['table']['group']  = t('School Messages');
$data['qtxt_sms_mobile_messages_v']['table']['base'] = array(
   'field' => 'message_text',
   'title' => t('School Messages'),
    'database' => 'qtxt_db',
   
   'help' => t('MyMessages forecast'),

 	);
$data['qtxt_sms_mobile_messages_v']['message_text'] = array(
	'title' => t('Message Text'),
   	'help' => t("Message Text"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_messages_v']['pub_date'] = array(
	'title' => t('Published Date'),
   	'help' => t("Published Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_messages_v']['message_start_date'] = array(
	'title' => t('Message Start Date'),
   	'help' => t("Message Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_messages_v']['message_end_date'] = array(
	'title' => t('Message End Date'),
   	'help' => t("Message End Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_messages_v']['mobile_number'] = array(
'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_messages_v']['account_id'] = array(
'title' => t('Account Id'),
   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_messages_v']['account_name'] = array(
'title' => t('Account Name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_messages_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);




 $data['qtxt_sms_mobile_students_v']['table']['group']  = t('Mobile Account - Students ');
$data['qtxt_sms_mobile_students_v']['table']['base'] = array(
   'title' => t('Mobile Account Students Map'),
     'database' => 'qtxt_db',
   'help' => t('Mobile Account - Students'),

 	);




$data['qtxt_sms_mobile_students_v']['account_name'] = array(
   	'title' => t('account_name'),
        
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),
   	'help' => t("account_grade_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



	
$data['qtxt_sms_mobile_students_v']['mobile_number'] = array(
   	'title' => t('mobile_number'),

   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_mobile_students_v']['student_name'] = array(
   	'title' => t('student_name'),

   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v']['standard'] = array(
   	'title' => t('Standard'),

   	'help' => t("Standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_mobile_students_v']['section'] = array(
   	'title' => t('Section'),

   	'help' => t("Section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_mobile_students_v']['student_identifier'] = array(
   	'title' => t('Student_identifier'),

   	'help' => t("student_identifier "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v']['grade_name'] = array(
   	'title' => t('Grade name'),

   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),

   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_students_v']['account_id'] = array(
   	'title' => t('account_id'),

   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_mobile_test_schedule_v']['table']['group'] = t('Test Schedule');
 $data['qtxt_sms_mobile_test_schedule_v']['table']['base'] = array(
   'field' => 'mobile_number',
   'title' => t('Test Schedule'),
   'database' => 'qtxt_db',  
   'help' => t('Test Schedule'),
 	);
$data['qtxt_sms_mobile_test_schedule_v']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_test_schedule_v']['test_code'] = array(
   	'title' => t('test_code'),
   	'help' => t("Test Code"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_test_schedule_v']['test_start_date'] = array(
   	'title' => t('Test Start Date'),
   	'help' => t("Test Start Date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_test_schedule_v']['subject_name'] = array(
   	'title' => t('Subject Name'),
   	'help' => t("Subject Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_test_schedule_v']['start_date'] = array(
   	'title' => t('Start Date'),
   	'help' => t("Start Date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_test_schedule_v']['end_date'] = array(
   	'title' => t('End Date'),
   	'help' => t("End Date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_test_schedule_v']['max_marks'] = array(
   	'title' => t('Max Marks'),
   	'help' => t("Max Marks"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_test_schedule_v']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_test_schedule_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_mark_details_v']['table']['group']  = t('MyMarks');
$data['qtxt_sms_student_mark_details_v']['table']['base'] = array(
   'field' => 'student_identifier',
   'title' => t('My Marks'),
    'database' => 'qtxt_db',
   
   'help' => t('MyMarks forecast'),

 	);
$data['qtxt_sms_student_mark_details_v']['test_code'] = array(
   	'title' => t('Test Code'),
   	'help' => t("Test Code"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_mark_details_v']['test_description'] = array(
   	'title' => t('Test Description'),
   	'help' => t("Test Description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_mark_details_v']['test_type'] = array(
   	'title' => t('Test Type'),
   	'help' => t("Test Type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_mark_details_v']['student_name'] = array(
   	'title' => t('student name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_mark_details_v']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_mark_details_v']['student_identifier'] = array(
   	'title' => t('student identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_mark_details_v']['grade_name'] = array(
   	'title' => t('Grade name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_mark_details_v']['subject_name'] = array(
   	'title' => t('Subject name'),
   	'help' => t("Subject Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_mark_details_v']['max_marks'] = array(
   	'title' => t('Maximum Marks'),
   	'help' => t("Maximum Marks"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_mark_details_v']['marks_obtained'] = array(
   	'title' => t('Marks Obtained'),
   	'help' => t("Marks Obtained"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_student_mark_details_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_mark_details_v']['test_start_date'] = array(
   	'title' => t('Test Start Date'),
   	'help' => t("Test Start Date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_mark_details_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_event_v']['table']['group']  = t('MyEvents');
$data['qtxt_sms_mobile_event_v']['table']['base'] = array(
   'field' => 'event_name',
   'title' => t('My Events'),
    'database' => 'qtxt_db',
   
   'help' => t('MyEvents forecast'),

 	);
$data['qtxt_sms_mobile_event_v']['event_name'] = array(
   	'title' => t('Event name'),
   	'help' => t("Event Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_event_v']['event_description'] = array(
   	'title' => t('Event Description'),
   	'help' => t("Event Description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_event_v']['start_date'] = array(
   	'title' => t('Start Date'),
   	'help' => t("Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_event_v']['end_date'] = array(
   	'title' => t('End Date'),
   	'help' => t("End Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_event_v']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_event_v']['student_name'] = array(
   	'title' => t('Student name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_event_v']['student_identifier'] = array(
   	'title' => t('Student Identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_event_v']['grade_name'] = array(
   	'title' => t('Grade name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_event_v']['account_name'] = array(
   	'title' => t('Account_Name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_event_v']['account_id'] = array(
   	'title' => t('Account_Id'),
   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_event_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_holiday_v']['table']['group']  = t('MyHoliday');
$data['qtxt_sms_mobile_holiday_v']['table']['base'] = array(
   'field' => 'holiday_type',
   'title' => t('My Holiday'),
    'database' => 'qtxt_db',
   
   'help' => t('MyHoliday forecast'),

 	);
$data['qtxt_sms_mobile_holiday_v']['holiday_type'] = array(
   	'title' => t('Holiday Type'),
   	'help' => t("Holiday Type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_holiday_v']['holiday_description'] = array(
   	'title' => t('Holiday Description'),
   	'help' => t("Holiday Description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_holiday_v']['holiday_start_date'] = array(
	'title' => t('Holiday Start Date'),
   	'help' => t("Holiday Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_holiday_v']['holiday_end_date'] = array(
	'title' => t('Holiday End Date'),
   	'help' => t("Holiday End Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_holiday_v']['mobile_number'] = array(
   	'title' => t('Mobile_number'),
   	'help' => t("Mobile_number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_holiday_v']['student_name'] = array(
   	'title' => t('Student name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_holiday_v']['student_identifier'] = array(
   	'title' => t('Student Identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_holiday_v']['grade_name'] = array(
   	'title' => t('Grade name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_holiday_v']['account_name'] = array(
   	'title' => t('Account_Name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_holiday_v']['account_id'] = array(
   	'title' => t('Account_Id'),
   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_holiday_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_student_url_v']['table']['group']  = t('Students URL');

$data['qtxt_sms_student_url_v']['table']['base'] = array(
   'field' => 'mobile_student_map_id',
   'title' => t('Students URL'),
    'database' => 'qtxt_db',
   
   'help' => t('Students URL'),

 	);



	$data['qtxt_sms_student_url_v']['mobile_student_map_id'] = array(
		'title' => t('mobile_student_map_id'),
		'help' => t("Mobile Student Id"), // The help that appears on the UI,
		'field' => array(
					'handler' => 'views_handler_field_numeric',
				),
		   'argument' => array(
		     'handler' => 'views_handler_argument_numeric',
		   ),
		   'filter' => array(
		     'handler' => 'views_handler_filter_numeric',
		   ),
		   'sort' => array(
		     'handler' => 'views_handler_sort',
		   ),
		);


$data['qtxt_sms_student_url_v']['mobile_number'] = array(
   	'title' => t('mobile_number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);




$data['qtxt_sms_student_url_v']['student_identifier'] = array(
   	'title' => t('student_identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);




$data['qtxt_sms_student_url_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Student Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_student_url_v']['academics_url'] = array(
   	'title' => t('academics_url'),
   	'help' => t("Academics URL"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_student_url_v']['attendance_url'] = array(
   	'title' => t('attendance_url'),
   	'help' => t("Attendance URL"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_student_url_v']['curriculum_url'] = array(
   	'title' => t('curriculum_url'),
   	'help' => t("Curriculum URL"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_student_url_v']['fees_url'] = array(
   	'title' => t('fees_url'),
   	'help' => t("Fees URL"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_student_url_v']['dates_url'] = array(
   	'title' => t('dates_url'),
   	'help' => t("Dates URL"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_student_url_v']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_student_url_v']['metrics_url'] = array(
   	'title' => t('Metrics URL Title'),
   	'help' => t("Metrics URL - Help"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_url_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_event_v']['table']['group']  = t('Events');

$data['qtxt_sms_mobile_event_v']['table']['base'] = array(
   'field' => 'account_student_map_id',
   'title' => t('Events URL'),
    'database' => 'qtxt_db',
   
   'help' => t('Events URL'),

 	);

$data['qtxt_sms_mobile_event_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_mobile_event_v']['mobile_number'] = array(
   	'title' => t('mobile_number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_event_v']['event_name'] = array(
   	'title' => t('event_name'),
   	'help' => t("Event Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_event_v']['event_description'] = array(
   	'title' => t('event_description'),
   	'help' => t("Event Description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_mobile_event_v']['start_date'] = array(
   	'title' => t('start_date'),
   	'help' => t("Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_date',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort_date',
	   ),
 	);


$data['qtxt_sms_mobile_event_v']['date_argument'] = array(
     'group' => t('Date'),
     'title' => t('Date'),
     'help' => t('Filter any Views date field by a date argument'),
     'argument' => array(
       'handler' => 'date_api_argument_handler',
       'empty name field' => t('Undated'),
     ),
   );
$data['qtxt_sms_mobile_event_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_student_attendance_summary_v']['table']['group']  = t('Events');

$data['qtxt_sms_student_attendance_summary_v']['table']['base'] = array(
   'field' => 'mobile_student_map_id',
   'title' => t('Student Attendance Summary'),
   'database' => 'qtxt_db',
   'help' => t('Student Attendance Summary'),
 	);

$data['qtxt_sms_student_attendance_summary_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_attendance_summary_v']['mobile_student_map_id'] = array(
   	'title' => t('Mobile Student Map Id'),
   	'help' => t("Mobile Student Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_attendance_summary_v']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("Account Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_attendance_summary_v']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_attendance_summary_v']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_sms_student_attendance_summary_v']['student_identifier'] = array(
   	'title' => t('Student Identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
$data['qtxt_sms_student_attendance_summary_v']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_sms_student_attendance_summary_v']['account_name'] = array(
   	'title' => t('Account Name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
$data['qtxt_sms_student_attendance_summary_v']['days_30_count'] = array(
   	'title' => t('Last 30 Days'),
   	'help' => t("Last 30 Days"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
		
$data['qtxt_sms_student_attendance_summary_v']['days_60_count'] = array(
   	'title' => t('Last 60 Days'),
   	'help' => t("Last 60 Days"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
		
$data['qtxt_sms_student_attendance_summary_v']['days_90_count'] = array(
   	'title' => t('Last 90 Days'),
   	'help' => t("Last 90 Days"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
		
$data['qtxt_sms_student_attendance_summary_v']['days_120_count'] = array(
   	'title' => t('Last 120 Days'),
   	'help' => t("Last 120 Days"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_sms_student_attendance_summary_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
		
$data['qtxt_sms_log_v']['table']['group'] = t('Log Response');
 $data['qtxt_sms_log_v']['table']['base'] = array(
   'field' => 'mobile_number',
   'title' => t('Log Response'),
   'database' => 'qtxt_db',  
   'help' => t('Log Response'),
 	);

$data['qtxt_sms_log_v']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_v']['broadcast_message'] = array(
   	'title' => t('Broadcast Message'),
   	'help' => t("Broadcast Message"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_log_v']['creation_date'] = array(
   	'title' => t('Creation Date'),
   	'help' => t("Creation Date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_log_v']['request_send_date'] = array(
   	'title' => t('Request Creation Date'),
   	'help' => t("Request Creation Date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_log_v']['sender_number'] = array(
   	'title' => t('Sender Mobile Number'),
   	'help' => t("Sender Mobile Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_v']['msg_id'] = array(
   	'title' => t('Msg ID'),
   	'help' => t("Msg ID"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_log_v']['Message'] = array(
   	'title' => t('Message'),
   	'help' => t("Message"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_log_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v1']['table']['group']  = t('Mobile Account - Students with Staff');
$data['qtxt_sms_mobile_students_v1']['table']['base'] = array(
   'field' => 'account_name',
   'title' => t('Mobile Account Students Map with Staff'),
    'database' => 'qtxt_db',
   
   'help' => t('Mobile Account - Students with Staff'),

 	);


$data['qtxt_sms_mobile_students_v1']['account_name'] = array(
   	'title' => t('account_name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_mobile_students_v1']['mobile_number'] = array(
   	'title' => t('mobile_number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_mobile_students_v1']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v1']['student_identifier'] = array(
   	'title' => t('Student_identifier'),
   	'help' => t("student_identifier "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v1']['grade_name'] = array(
   	'title' => t('Grade name'),
   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v1']['standard'] = array(
   	'title' => t('Standard'),

   	'help' => t("Standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_mobile_students_v1']['section'] = array(
   	'title' => t('Section'),

   	'help' => t("Section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_mobile_students_v1']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_students_v1']['account_id'] = array(
   	'title' => t('account_id'),
   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v1']['staff_name'] = array(
   	'title' => t('Staff name'),
   	'help' => t("Staff Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v1']['admin_role'] = array(
   	'title' => t('Admin Role'),
   	'help' => t("Admin Role"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v1']['staff_subject'] = array(
   	'title' => t('Staff Subject'),
   	'help' => t("Staff Subject"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_mobile_students_v1']['str_dob'] = array(
   	'title' => t('str Date Of Birth'),

   	'help' => t("str Date Of Birth"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v1']['gender'] = array(
   	'title' => t('gender'),

   	'help' => t("Gender"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v1']['student_email'] = array(
   	'title' => t('student_email'),

   	'help' => t("Student Email"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v1']['blood_group'] = array(
   	'title' => t('blood_group'),
   	'help' => t("Blood Group"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_mobile_students_v1']['permanent_address'] = array(
   	'title' => t('permanent_address'),
   	'help' => t("Permanent Address"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qtxt_sms_mobile_students_v1']['student_mobile_number'] = array(
   	'title' => t('student_mobile_number'),

   	'help' => t("Student Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_mobile_students_v1']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_student_performance_summary_v']['table']['group'] = t('Student Performance - Summary');
 $data['qtxt_student_performance_summary_v']['table']['base'] = array(
   'field' => 'test_result_id',
   'title' => t('Student Performance Summary Title'),
   'database' => 'qtxt_db',  
   'help' => t('Student Performance Summary Help'),
 	);

$data['qtxt_student_performance_summary_v']['test_result_id'] = array(
   	'title' => t('Test Result Id'),
   	'help' => t("Mobile Number"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_student_performance_summary_v']['test_schedule_id'] = array(
   	'title' => t('Test Schedule Id'),
   	'help' => t("Test Schedule Id"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	

$data['qtxt_student_performance_summary_v']['account_test_map_id'] = array(
   	'title' => t('Account Test Map Id'),
   	'help' => t("account_test_map_id"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_student_performance_summary_v']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("account_id"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_student_performance_summary_v']['account_student_map_id'] = array(
   	'title' => t('Account Student Map Id'),
   	'help' => t("account_student_map_id"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qtxt_student_performance_summary_v']['test_code'] = array(
   	'title' => t('Test Code'),
   	'help' => t("test_code"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
$data['qtxt_student_performance_summary_v']['test_type'] = array(
   	'title' => t('Test Type'),
   	'help' => t("test_type"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	

	
$data['qtxt_student_performance_summary_v']['subject_name'] = array(
   	'title' => t('Subject Name'),
   	'help' => t("subject_name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	

$data['qtxt_student_performance_summary_v']['max_marks'] = array(
   	'title' => t('Max Marks'),
   	'help' => t("max_marks"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_student_performance_summary_v']['marks_obtained'] = array(
   	'title' => t('Marks Obtained'),
   	'help' => t("marks_obtained"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qtxt_student_performance_summary_v']['student_identifier'] = array(
   	'title' => t('Student Identifier'),
   	'help' => t("student_identifier"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_student_performance_summary_v']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("student_name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_student_performance_summary_v']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("grade_name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_student_performance_summary_v']['test_description'] = array(
   	'title' => t('Test Description'),
   	'help' => t("grade_name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_student_performance_summary_v']['test_start_date'] = array(
	'title' => t('Test Start Date'),
   	'help' => t("Test Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_student_performance_summary_v']['class_percentile_for_test_by_subject'] = array(
   	'title' => t('Percentile'),
   	'help' => t("class_percentile_for_test_by_subject"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_student_performance_summary_v']['percentage'] = array(
   	'title' => t('Percentage'),
   	'help' => t("Percentage"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_student_performance_summary_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_route_details_v']['table']['group'] = t('Route Details - Details');
 $data['qtxt_sms_route_details_v']['table']['base'] = array(
   'field' => 'route_description',
   'title' => t('Student Route Details'),
   'database' => 'qtxt_db',  
   'help' => t('Student Route Details'),
 	);

$data['qtxt_sms_route_details_v']['account_student_map_id'] = array(
   	'title' => t('Account Student Map Id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_route_details_v']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("account_id"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
 	
$data['qtxt_sms_route_details_v']['route_number'] = array(
   	'title' => t('Route Number'),
   	'help' => t("Route Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_route_details_v']['rnumber_rdesc'] = array(
   	'title' => t('Route Number and Route Description'),
   	'help' => t("Route Number and Route Description"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
	 	
$data['qtxt_sms_route_details_v']['route_description'] = array(
   	'title' => t('Route Description'),
   	'help' => t("Route Description"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_sms_route_details_v']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	 	


$data['qtxt_sms_route_details_v']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	 	

$data['qtxt_sms_route_details_v']['account_name'] = array(
   	'title' => t('Account Name'),
   	'help' => t("Account Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	 	
$data['qtxt_sms_route_details_v']['account_description'] = array(
   	'title' => t('Account Description'),
   	'help' => t("Account Description"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_route_details_v']['stop_name'] = array(
   	'title' => t('Stop Name'),
   	'help' => t("Stop Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	 	
$data['qtxt_test_code_result_v']['table']['group'] = t('Marks Summary - Details');
 $data['qtxt_test_code_result_v']['table']['base'] = array(
   'field' => 'account_student_map_id',
   'title' => t('Marks Summary - Details'),
   'database' => 'qtxt_db',  
   'help' => t('Marks Summary Details'),
 	);
$data['qtxt_test_code_result_v']['account_student_map_id'] = array(
   	'title' => t('Account Student Map Id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_test_code_result_v']['account_test_map_id'] = array(
   	'title' => t('Account Test Map Id'),
   	'help' => t("account_test_map_id"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_test_code_result_v']['hall_ticket_number'] = array(
   	'title' => t('Hall Ticket Number'),
   	'help' => t("Hall Ticket Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_test_code_result_v']['test_code'] = array(
   	'title' => t('Test Code'),
   	'help' => t("Test Code"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_test_code_result_v']['total_marks_scored'] = array(
   	'title' => t('Total'),
   	'help' => t("Total"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_test_code_result_v']['rank'] = array(
   	'title' => t('Rank'),
   	'help' => t("Rank"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_test_code_result_v']['attendance'] = array(
   	'title' => t('Attendance'),
   	'help' => t("Attendance"), // The help that appears on the UI
    	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_test_code_result_v']['test_start_date'] = array(
	'title' => t('Test Start Date'),
   	'help' => t("Test Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_account_staff']['table']['group'] = t('Staff - Details');
 $data['qtxt_sms_account_staff']['table']['base'] = array(
   'field' => 'staff_name',
   'title' => t('Staff - Details'),
   'database' => 'qtxt_db',  
   'help' => t('Staff Details'),
 	);
$data['qtxt_sms_account_staff']['staff_name'] = array(
   	'title' => t('Staff Name'),
   	'help' => t("Staff Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_account_staff']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("Account Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_account_staff']['staff_std'] = array(
   	'title' => t('Staff Standard'),
   	'help' => t("Staff Standard"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_account_staff']['staff_section'] = array(
   	'title' => t('Staff Section'),
   	'help' => t("Staff Section"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_account_staff']['admin_role'] = array(
   	'title' => t('Admin Role'),
   	'help' => t("Admin Role"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['table']['group'] = t('Staff - Details1');
 $data['qtxt_sms_staff_list_v']['table']['base'] = array(
   'field' => 'staff_name',
   'title' => t('Staff - Details1'),
   'database' => 'qtxt_db',  
   'help' => t('Staff Details1'),
 	);

$data['qtxt_sms_staff_list_v']['staff_name'] = array(
   	'title' => t('Staff Name'),
   	'help' => t("Staff Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("Account Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['account_name'] = array(
   	'title' => t('Account Name'),
   	'help' => t("Account Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['standard'] = array(
   	'title' => t('Standard'),
   	'help' => t("Standard"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['section'] = array(
   	'title' => t('Section'),
   	'help' => t("Section"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['admin_role'] = array(
   	'title' => t('Admin Role'),
   	'help' => t("Admin Role"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_staff_list_v']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['contact_details'] = array(
   	'title' => t('Contact Details'),
   	'help' => t("Contact Details"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_staff_list_v']['staff_subject'] = array(
   	'title' => t('Staff Subject'),
   	'help' => t("Staff Subject"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
 
$data['qtxt_sms_log_header_v']['table']['group'] = t('SMS LOG Header');
 $data['qtxt_sms_log_header_v']['table']['base'] = array(
   'field' => 'log_request_id',
   'title' => t('SMS Log Request Id'),
   'database' => 'qtxt_db',  
   'help' => t('SMS Log Request'),
 	);

$data['qtxt_sms_log_header_v']['log_request_id'] = array(
   	'title' => t('Log Request Id'),
   	'help' => t("Log Request Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_log_header_v']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("Account Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_header_v']['account_name'] = array(
   	'title' => t('Account Name'),
   	'help' => t("Account Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_header_v']['sender_mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_header_v']['message_type'] = array(
   	'title' => t('Message Type'),
   	'help' => t("Message Type"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_header_v']['staff_name'] = array(
   	'title' => t('Staff Name'),
   	'help' => t("Staff Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_header_v']['staff_contact_info'] = array(
   	'title' => t('Staff Contact Info'),
   	'help' => t("Staff Contact Info"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_log_header_v']['message'] = array(
   	'title' => t('SMS Message'),
   	'help' => t("SMS Message"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_header_v']['creation_date'] = array(
'title' => t('SMS Creation Date'),
   	'help' => t("SMS Creation Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_header_v']['str_creation_date'] = array(
   	'title' => t('STR Creation Date'),
   	'help' => t("STR Creation Date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_log_header_v']['sender_name'] = array(
   	'title' => t('Sender Name'),
   	'help' => t("Sender Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
 

$data['qtxt_teacher_messages_all_v']['table']['group'] = t('Qtxt Teacher Messages');
 $data['qtxt_teacher_messages_all_v']['table']['base'] = array(
   'field' => 'teacher_message_id',
   'title' => t('Qtxt Teacher Messages'),
   'database' => 'qtxt_db',  
   'help' => t('Qtxt Teacher Messages'),
 	);

$data['qtxt_teacher_messages_all_v']['teacher_message_id'] = array(
   	'title' => t('Teacher Message Id'),
   	'help' => t("Teacher Message Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_teacher_messages_all_v']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("Account Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_teacher_messages_all_v']['teacher_mnumber'] = array(
   	'title' => t('Teacher Mobile Number'),
   	'help' => t("Teacher Mobile Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_teacher_messages_all_v']['contact_details'] = array(
   	'title' => t('Teacher Contact Details'),
   	'help' => t("Teacher Contact Details"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_teacher_messages_all_v']['teacher_name'] = array(
   	'title' => t('Teacher Name'),
   	'help' => t("Teacher Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_teacher_messages_all_v']['message'] = array(
   	'title' => t('SMS Message'),
   	'help' => t("SMS Message"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_teacher_messages_all_v']['msg_creation_date'] = array(
'title' => t('Msg Creation Date'),
   	'help' => t("Msg Creation Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_teacher_messages_all_v']['str_msg_creation_date'] = array(
   	'title' => t('Message Creation Date -String'),
   	'help' => t("Message Creation Date -String"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_teacher_messages_all_v']['person_name'] = array(
   	'title' => t('Parent Name'),
   	'help' => t("Parent Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
 
 $data['qtxt_teacher_messages_all_v']['parent_uid'] = array(
   	'title' => t('Parent User Id'),
   	'help' => t("Parent User Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_teacher_messages_all_v']['parent_mobile_number'] = array(
   	'title' => t('Parent Mobile '),
   	'help' => t("Parent Mobile"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
 $data['qtxt_teacher_messages_all_v']['parent_mobile_number_id'] = array(
   	'title' => t('Parent Mobile Number Id'),
   	'help' => t("Parent Mobile Number Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

 $data['qtxt_teacher_messages_all_v']['account_student_map_id'] = array(
   	'title' => t('Account Student Map Id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_parent_messages_v']['table']['group'] = t('Qtxt Parent Messages');
 $data['qtxt_sms_parent_messages_v']['table']['base'] = array(
   'field' => 'parent_message_id',
   'title' => t('Qtxt Parent Messages'),
   'database' => 'qtxt_db',  
   'help' => t('Qtxt Parent Messages'),
 	);

$data['qtxt_sms_parent_messages_v']['parent_message_id'] = array(
   	'title' => t('Parent Message Id'),
   	'help' => t("Parent Message Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_parent_messages_v']['mobile_number'] = array(
   	'title' => t('Parent Mobile Number'),
   	'help' => t("Parent Mobile Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_parent_messages_v']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_parent_messages_v']['student_identifier'] = array(
   	'title' => t('Student Identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_parent_messages_v']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_parent_messages_v']['person_relationship_to_student'] = array(
   	'title' => t('person_relationship_to_student'),
   	'help' => t("person_relationship_to_student"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_parent_messages_v']['message'] = array(
   	'title' => t('Message'),
   	'help' => t("Message"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_parent_messages_v']['creation_date'] = array(
'title' => t('Msg Creation Date'),
   	'help' => t("Msg Creation Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_parent_messages_v']['msg_creation_date'] = array(
   	'title' => t('Message Creation Date -String'),
   	'help' => t("Message Creation Date -String"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_parent_messages_v']['person_name'] = array(
   	'title' => t('Parent Name'),
   	'help' => t("Parent Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
 
 $data['qtxt_sms_parent_messages_v']['drupal_uid'] = array(
   	'title' => t('Parent User Id'),
   	'help' => t("Parent User Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_attd_details_v']['table']['group']  = t('Attendance Details');
$data['qtxt_sms_attd_details_v']['table']['base'] = array(
   'field' => 'account_student_map_id',
   'title' => t('Attendance Details'),
    'database' => 'qtxt_db',
   'help' => t('Attendance Details'),
 	);
$data['qtxt_sms_attd_details_v']['account_student_map_id'] = array(
   	'title' => t('Student Map Id'),
   	'help' => t("Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_attd_details_v']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_attd_details_v']['account_name'] = array(
   	'title' => t('account_name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_attd_details_v']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	$data['qtxt_sms_attd_details_v']['student_identifier'] = array(
   	'title' => t('student_identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	

$data['qtxt_sms_attd_details_v']['number_of_days'] = array(
   	'title' => t('Number of Days'),
   	'help' => t("Number of Days"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_sms_attd_details_v']['start_date'] = array(
   	'title' => t('Number of Days'),
   	'help' => t("Number of Days"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	
	$data['qtxt_sms_attd_details_v']['standard'] = array(
   	'title' => t('standard'),
   	'help' => t("standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
	$data['qtxt_sms_attd_details_v']['section'] = array(
   	'title' => t('section'),
   	'help' => t("section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_attd_details_v']['drupal_uid'] = array(
   	'title' => t('Teacher Drupal UID'),
   	'help' => t("Teacher Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_attd_summary_v']['table']['group']  = t('Attendance Details');
$data['qtxt_sms_attd_summary_v']['table']['base'] = array(
   'field' => 'student_identifier',
   'title' => t('Student Identifier'),
    'database' => 'qtxt_db',
   'help' => t('Student Identifier'),
 	);
	
	

	$data['qtxt_sms_attd_summary_v']['student_identifier'] = array(
   	'title' => t('student_identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_attd_summary_v']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
		
$data['qtxt_sms_attd_summary_v']['attd_percentage'] = array(
   	'title' => t('attd_percentage'),
   	'help' => t("attd_percentage"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_attd_det_summary_v']['table']['group']  = t('Attendance Details');
$data['qtxt_sms_attd_det_summary_v']['table']['base'] = array(
   'field' => 'student_identifier',
   'title' => t('Attd Detail Summary'),
    'database' => 'qtxt_db',
   'help' => t('Attd Detail Summary'),
 	);
	
	

	$data['qtxt_sms_attd_det_summary_v']['student_identifier'] = array(
   	'title' => t('student_identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qtxt_sms_attd_det_summary_v']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
		
$data['qtxt_sms_attd_det_summary_v']['attd_percentage'] = array(
   	'title' => t('attd_percentage'),
   	'help' => t("attd_percentage"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

		$data['qtxt_sms_attd_det_summary_v']['standard'] = array(
   	'title' => t('standard'),
   	'help' => t("standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
		$data['qtxt_sms_attd_det_summary_v']['section'] = array(
   	'title' => t('section'),
   	'help' => t("section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
		$data['qtxt_sms_attd_det_summary_v']['grade'] = array(
   	'title' => t('grade'),
   	'help' => t("grade"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
		$data['qtxt_sms_attd_det_summary_v']['account_name'] = array(
   	'title' => t('account_name'),
   	'help' => t("account_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
$data['qtxt_sms_attd_det_summary_v']['account_id'] = array(
   	'title' => t('account_id'),
   	'help' => t("account_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_students_attendance_by_class_det_v1']['table']['group']  = t('Today Attendance - Detail');
$data['qtxt_students_attendance_by_class_det_v1']['table']['base'] = array(
   'field' => 'student_identifier',
   'title' => t('Today Attendance - Detail'),
    'database' => 'qtxt_db',
   'help' => t('Today Attendance - Detail'),
 	);
	
	

	$data['qtxt_students_attendance_by_class_det_v1']['student_identifier'] = array(
   	'title' => t('student_identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qtxt_students_attendance_by_class_det_v1']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
		
		$data['qtxt_students_attendance_by_class_det_v1']['standard'] = array(
   	'title' => t('standard'),
   	'help' => t("standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
		$data['qtxt_students_attendance_by_class_det_v1']['section'] = array(
   	'title' => t('section'),
   	'help' => t("section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_students_attendance_by_class_det_v1']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),
   	'help' => t("account_grade_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_students_attendance_by_class_det_v1']['absence_reason'] = array(
   	'title' => t('absence_reason'),
   	'help' => t("absence_reason"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_students_attendance_by_class_det_v1']['start_date'] = array(
'title' => t('start_date'),
   	'help' => t("start_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	


$data['qtxt_students_attendance_by_class_summ_v1']['table']['group']  = t('Today Attendance - Summary');
$data['qtxt_students_attendance_by_class_summ_v1']['table']['base'] = array(
   'field' => 'account_grade_id',
   'title' => t('Today Attendance - Summary'),
    'database' => 'qtxt_db',
   'help' => t('Today Attendance - Summary'),
 	);
	
	

	$data['qtxt_students_attendance_by_class_summ_v1']['standard'] = array(
   	'title' => t('standard'),
   	'help' => t("standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qtxt_students_attendance_by_class_summ_v1']['section'] = array(
   	'title' => t('section'),
   	'help' => t("section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	

	$data['qtxt_students_attendance_by_class_summ_v1']['date'] = array(
   	'title' => t('Date'),
   	'help' => t("Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_students_attendance_by_class_summ_v1']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),
   	'help' => t("account_grade_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_students_attendance_by_class_summ_v1']['number_of_students_absent'] = array(
   	'title' => t('number_of_students_absent'),
   	'help' => t("number_of_students_absent"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_students_attendance_by_class_summ_v1']['total_number_of_students'] = array(
   	'title' => t('total_number_of_students'),
   	'help' => t("total_number_of_students"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
 $data['qtxt_sms_teacher_messages_v']['table']['group']  = t('Teacher Messages - All ');

 $data['qtxt_sms_teacher_messages_v']['table']['base'] = array(
   'title' => t('Teacher Messages - All'),
     'database' => 'qtxt_db',
   'help' => t('Teacher Messages - All'),
 	);



$data['qtxt_sms_teacher_messages_v']['teacher_name'] = array(
   	'title' => t('teacher_name'),
        
   	'help' => t("Teacher Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_teacher_messages_v']['teacher_mobile'] = array(
   	'title' => t('Teacher Mobile'),

   	'help' => t("Teacher Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_teacher_messages_v']['student_name'] = array(
   	'title' => t('student_name'),

   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_sms_teacher_messages_v']['standard'] = array(
   	'title' => t('Standard'),

   	'help' => t("Standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_teacher_messages_v']['section'] = array(
   	'title' => t('Section'),

   	'help' => t("Section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_teacher_messages_v']['student_identifier'] = array(
   	'title' => t('Student_identifier'),

   	'help' => t("student_identifier "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
$data['qtxt_sms_teacher_messages_v']['grade_name'] = array(
   	'title' => t('Grade name'),

   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v']['type_id'] = array(
   	'title' => t('type_id'),

   	'help' => t("Type Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),

   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),

   	'help' => t("Account Grade Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v']['teacher_userid'] = array(
   	'title' => t('Teacher Drupal UID'),
   	'help' => t("Teacher Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v']['teacher_message_id'] = array(
   	'title' => t('teacher_message_id'),
   	'help' => t("teacher_message_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_teacher_messages_v']['msg_creation_date'] = array(
   	'title' => t('msg_creation_date'),

   	'help' => t("msg_creation_date "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v']['msg_type'] = array(
   	'title' => t('msg_type'),
        
   	'help' => t("msg_type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);					
$data['qtxt_sms_teacher_messages_v']['message'] = array(
   	'title' => t('message'),

   	'help' => t("message"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);	

$data['qtxt_sms_teacher_messages_v']['mobile_number_id'] = array(
   	'title' => t('mobile_number_id'),
   	'help' => t("mobile_number_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v']['parent_drupal_id'] = array(
   	'title' => t('parent_drupal_id'),
   	'help' => t("parent_drupal_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v']['file_name'] = array(
   	'title' => t('file_name'),

   	'help' => t("file_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);	
 $data['qtxt_sms_parent_messages_v']['table']['group']  = t('Message From Parents To Teacher ');

 $data['qtxt_sms_parent_messages_v']['table']['base'] = array(
   'title' => t('Message From Parents To Teacher'),
     'database' => 'qtxt_db',
   'help' => t('Message From Parents To Teacher'),
 	);



$data['qtxt_sms_parent_messages_v']['person_name'] = array(
   	'title' => t('person_name'),
        
   	'help' => t("Person Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_parent_messages_v']['person_relationship_to_student'] = array(
   	'title' => t('person_relationship_to_student'),
        
   	'help' => t("person_relationship_to_student"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qtxt_sms_parent_messages_v']['mobile_number'] = array(
   	'title' => t('Parent Mobile'),

   	'help' => t("Parent Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_parent_messages_v']['student_name'] = array(
   	'title' => t('student_name'),

   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_sms_parent_messages_v']['standard'] = array(
   	'title' => t('Standard'),

   	'help' => t("Standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_parent_messages_v']['section'] = array(
   	'title' => t('Section'),

   	'help' => t("Section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_parent_messages_v']['student_identifier'] = array(
   	'title' => t('Student_identifier'),

   	'help' => t("student_identifier "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
$data['qtxt_sms_parent_messages_v']['grade_name'] = array(
   	'title' => t('Grade name'),

   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_parent_messages_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),

   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_parent_messages_v']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),

   	'help' => t("Account Grade Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_parent_messages_v']['drupal_uid'] = array(
   	'title' => t('Teacher Drupal UID'),
   	'help' => t("Teacher Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_parent_messages_v']['msg_creation_date'] = array(
   	'title' => t('msg_creation_date'),

   	'help' => t("msg_creation_date "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	
$data['qtxt_sms_parent_messages_v']['msg_type'] = array(
   	'title' => t('msg_type'),
        
   	'help' => t("msg_type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_sms_parent_messages_v']['message'] = array(
   	'title' => t('Message'),
        
   	'help' => t("Message"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
$data['qtxt_sms_parent_messages_v']['parent_message_id'] = array(
   	'title' => t('parent_message_id'),
   	'help' => t("parent_message_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



 $data['qtxt_sms_mobile_students_v3']['table']['group']  = t('Mobile Account - Students ');
$data['qtxt_sms_mobile_students_v3']['table']['base'] = array(
   'title' => t('Student Personal Details'),
     'database' => 'qtxt_db',
   'help' => t('Mobile Account - Students'),

 	);




$data['qtxt_sms_mobile_students_v3']['account_name'] = array(
   	'title' => t('account_name'),
        
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v3']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),
   	'help' => t("account_grade_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



	
$data['qtxt_sms_mobile_students_v3']['mobile_number'] = array(
   	'title' => t('mobile_number'),

   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_mobile_students_v3']['student_name'] = array(
   	'title' => t('student_name'),

   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v3']['standard'] = array(
   	'title' => t('Standard'),

   	'help' => t("Standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_mobile_students_v3']['section'] = array(
   	'title' => t('Section'),

   	'help' => t("Section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_mobile_students_v3']['student_identifier'] = array(
   	'title' => t('Student_identifier'),

   	'help' => t("student_identifier "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v3']['grade_name'] = array(
   	'title' => t('Grade name'),

   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v3']['dob'] = array(
   	'title' => t('Date Of Birth'),

   	'help' => t("Date Of Birth"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v3']['str_dob'] = array(
   	'title' => t('str Date Of Birth'),

   	'help' => t("str Date Of Birth"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v3']['gender'] = array(
   	'title' => t('gender'),

   	'help' => t("Gender"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v3']['student_email'] = array(
   	'title' => t('student_email'),

   	'help' => t("Student Email"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v3']['blood_group'] = array(
   	'title' => t('blood_group'),
   	'help' => t("Blood Group"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_mobile_students_v3']['permanent_address'] = array(
   	'title' => t('permanent_address'),
   	'help' => t("Permanent Address"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_students_v3']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),

   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_students_v3']['account_id'] = array(
   	'title' => t('account_id'),

   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v3']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

// Start

$data['qtxt_sms_teacher_messages_v3']['table']['group'] = t('Home Work and Assignments');
 $data['qtxt_sms_teacher_messages_v3']['table']['base'] = array(
   'field' => 'teacher_message_id',
   'title' => t('Home Work and Assignments'),
   'database' => 'qtxt_db',  
   'help' => t('Qtxt Teacher Messages'),
 	);

$data['qtxt_sms_teacher_messages_v3']['teacher_message_id'] = array(
   	'title' => t('Teacher Message Id'),
   	'help' => t("Teacher Message Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_teacher_messages_v3']['parent_drupal_id'] = array(
   	'title' => t('Drupal Id'),
   	'help' => t("Drupal Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_teacher_messages_v3']['teacher_mobile'] = array(
   	'title' => t('Teacher Mobile Number'),
   	'help' => t("Teacher Mobile Number"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v3']['teacher_name'] = array(
   	'title' => t('Teacher Name'),
   	'help' => t("Teacher Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v3']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v3']['message'] = array(
   	'title' => t('SMS Message'),
   	'help' => t("SMS Message"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v3']['msg_creation_date'] = array(
'title' => t('Msg Creation Date'),
   	'help' => t("Msg Creation Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v3']['standard'] = array(
   	'title' => t('Standard'),
   	'help' => t("Parent Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
 
 $data['qtxt_sms_teacher_messages_v3']['section'] = array(
   	'title' => t('Standard'),
   	'help' => t("Parent Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

 $data['qtxt_sms_teacher_messages_v3']['mobile_number_id'] = array(
   	'title' => t('Mobile Number Id'),
   	'help' => t("Mobile Number Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

 $data['qtxt_sms_teacher_messages_v3']['account_student_map_id'] = array(
   	'title' => t('Account Student Map Id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_student_attendance_det_today_det_v1']['table']['group']  = t('Version 3 Attendance Summary day');

$data['qtxt_sms_student_attendance_det_today_det_v1']['table']['base'] = array(
   'field' => 'mobile_student_map_id',
   'title' => t('Version 3 Student Attendance Summary Day'),
   'database' => 'qtxt_db',
   'help' => t('Student Attendance Summary'),
 	);

$data['qtxt_sms_student_attendance_det_today_det_v1']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_attendance_det_today_det_v1']['mobile_student_map_id'] = array(
   	'title' => t('Mobile Student Map Id'),
   	'help' => t("Mobile Student Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_attendance_det_today_det_v1']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("Account Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_attendance_det_today_det_v1']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_attendance_det_today_det_v1']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_sms_student_attendance_det_today_det_v1']['studentname_grade'] = array(
   	'title' => t('Student Name and Grade'),
   	'help' => t("Student Name and Grade"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_sms_student_attendance_det_today_det_v1']['student_identifier'] = array(
   	'title' => t('Student Identifier'),
   	'help' => t("Student Identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
$data['qtxt_sms_student_attendance_det_today_det_v1']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_sms_student_attendance_det_today_det_v1']['account_name'] = array(
   	'title' => t('Account Name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	

$data['qtxt_sms_student_attendance_det_today_det_v1']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qtxt_sms_student_attendance_det_today_det_v1']['student_attendance_id'] = array(
   	'title' => t('Student Attendance Id'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_student_attendance_det_today_det_v1']['start_date'] = array(
	'title' => t('Start Date'),
   	'help' => t("Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_date',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_date',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_attendance_det_today_det_v1']['msg_start_date'] = array(
	'title' => t('Msg Start Date'),
   	'help' => t("Msg Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_student_attendance_det_today_det_v1']['str_start_date'] = array(
	'title' => t('Str Start Date'),
   	'help' => t("Str Start Date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_students_teacher_all_v3']['table']['group']  = t('Teachers Contact Information');

$data['qtxt_sms_students_teacher_all_v3']['table']['base'] = array(
  
   'title' => t('Teachers Contact Information'),
   'database' => 'qtxt_db',
   'help' => t('Teachers Contact Information'),
 	);

$data['qtxt_sms_students_teacher_all_v3']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_students_teacher_all_v3']['account_grade_id'] = array(
   	'title' => t('Account Grade Id'),
   	'help' => t("Account Grade Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_sms_students_teacher_all_v3']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_students_teacher_all_v3']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
$data['qtxt_sms_students_teacher_all_v3']['student_grade'] = array(
   	'title' => t('Student Grade'),
   	'help' => t("Student Grade"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_sms_students_teacher_all_v3']['staff_name'] = array(
   	'title' => t('Staff Name'),
   	'help' => t("Staff Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
$data['qtxt_sms_students_teacher_all_v3']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
$data['qtxt_sms_students_teacher_all_v3']['staff_email'] = array(
   	'title' => t('Staff Email'),
   	'help' => t("Staff Email"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
	$data['qtxt_sms_students_teacher_all_v3']['staff_subject'] = array(
   	'title' => t('Staff Subject'),
   	'help' => t("Staff Subject"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);		

	$data['qtxt_sms_students_teacher_all_v3']['admin_role'] = array(
   	'title' => t('Admin Role'),
   	'help' => t("Admin Role"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);		
	
$data['qtxt_sms_students_teacher_all_v3']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qtxt_sms_students_teacher_all_v3']['staff_id'] = array(
   	'title' => t('Staff Id'),
   	'help' => t("Staff Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['v3_test_result_v']['table']['group']  = t('Student Arrear And Academic Report');

$data['v3_test_result_v']['table']['base'] = array(
  
   'title' => t('Student Arrear And Academic Report'),
   'database' => 'qtxt_db',
   'help' => t('Student Arrear And Academic Report'),
 	);

$data['v3_test_result_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['v3_test_result_v']['test_result_id'] = array(
   	'title' => t('Test Result Id'),
   	'help' => t("Test Result Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['v3_test_result_v']['account_test_map_id'] = array(
   	'title' => t('Test Map Id'),
   	'help' => t("Test Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['v3_test_result_v']['marks'] = array(
   	'title' => t('Marks'),
   	'help' => t("Marks"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
$data['v3_test_result_v']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
$data['v3_test_result_v']['sname_tcode'] = array(
   	'title' => t('Student Name and Test Code'),
   	'help' => t("Student Name and Test Code"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['v3_test_result_v']['marks_obtained'] = array(
   	'title' => t('Marks Obtained'),
   	'help' => t("Marks Obtained"), // The help that appears on the UI,
   'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['v3_test_result_v']['max_marks'] = array(
   	'title' => t('Maximum marks'),
   	'help' => t("Maximum marks"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
	$data['v3_test_result_v']['subject_name'] = array(
   	'title' => t('Subject Name'),
   	'help' => t("Subject Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);		

	
$data['v3_test_result_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

		

$data['qtxt_sms_course_details_v']['table']['group']  = t('Course Details');

$data['qtxt_sms_course_details_v']['table']['base'] = array(
  
   'title' => t('Course Details'),
   'database' => 'qtxt_db',
   'help' => t('Course Details'),
 	);

$data['qtxt_sms_course_details_v']['subject_id'] = array(
   	'title' => t('subject_id'),
   	'help' => t("Subject Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_sms_course_details_v']['subject_name'] = array(
   	'title' => t('Subject Name'),
   	'help' => t("Subject Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

	
	$data['qtxt_sms_course_details_v']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

	
	$data['qtxt_sms_course_details_v']['account_grade_id'] = array(
   	'title' => t('Grade Id'),
   	'help' => t("Grade Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

	
		$data['qtxt_sms_course_details_v']['description'] = array(
   	'title' => t('Description'),
   	'help' => t("Description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	


$data['qtxt_sms_students_teacher_contacts_all_v']['table']['group']  = t('Ver3 Teachers Contact Information');

$data['qtxt_sms_students_teacher_contacts_all_v']['table']['base'] = array(
  
   'title' => t('ver3 Teachers Contact Information'),
   'database' => 'qtxt_db',
   'help' => t('ver3 Teachers Contact Information'),
 	);

$data['qtxt_sms_students_teacher_contacts_all_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_students_teacher_contacts_all_v']['account_grade_id'] = array(
   	'title' => t('Account Grade Id'),
   	'help' => t("Account Grade Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qtxt_sms_students_teacher_contacts_all_v']['mobile_number'] = array(
   	'title' => t('Mobile Number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_students_teacher_contacts_all_v']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
$data['qtxt_sms_students_teacher_contacts_all_v']['student_grade'] = array(
   	'title' => t('Student Grade'),
   	'help' => t("Student Grade"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

$data['qtxt_sms_students_teacher_contacts_all_v']['staff_name'] = array(
   	'title' => t('Staff Name'),
   	'help' => t("Staff Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
$data['qtxt_sms_students_teacher_contacts_all_v']['grade_name'] = array(
   	'title' => t('Grade Name'),
   	'help' => t("Grade Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
$data['qtxt_sms_students_teacher_contacts_all_v']['staff_email'] = array(
   	'title' => t('Staff Email'),
   	'help' => t("Staff Email"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
	$data['qtxt_sms_students_teacher_contacts_all_v']['staff_subject'] = array(
   	'title' => t('Staff Subject'),
   	'help' => t("Staff Subject"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);		

	$data['qtxt_sms_students_teacher_contacts_all_v']['admin_role'] = array(
   	'title' => t('Admin Role'),
   	'help' => t("Admin Role"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);		
	
$data['qtxt_sms_students_teacher_contacts_all_v']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qtxt_sms_students_teacher_contacts_all_v']['staff_id'] = array(
   	'title' => t('Staff Id'),
   	'help' => t("Staff Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

 $data['qtxt_sms_teacher_messages_v2']['table']['group']  = t('Student Homework and Assignment');

 $data['qtxt_sms_teacher_messages_v2']['table']['base'] = array(
   'title' => t('Student Homework and Assignment'),
     'database' => 'qtxt_db',
   'help' => t('Student Homework and Assignment'),
 	);

$data['qtxt_sms_teacher_messages_v2']['mobile_number_id'] = array(
   	'title' => t('mobile_number_id'),
   	'help' => t("mobile_number_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_teacher_messages_v2']['type_id'] = array(
   	'title' => t('type_id'),

   	'help' => t("Type Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_teacher_messages_v2']['parent_drupal_id'] = array(
   	'title' => t('parent_drupal_id'),
   	'help' => t("parent_drupal_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_teacher_messages_v2']['teacher_message_id'] = array(
   	'title' => t('teacher_message_id'),
   	'help' => t("teacher_message_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_teacher_messages_v2']['teacher_mobile'] = array(
   	'title' => t('Teacher Mobile'),

   	'help' => t("Teacher Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_teacher_messages_v2']['student_name'] = array(
   	'title' => t('student_name'),

   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_teacher_messages_v2']['teacher_name'] = array(
   	'title' => t('teacher_name'),
        
   	'help' => t("Teacher Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_teacher_messages_v2']['student_name'] = array(
   	'title' => t('student_name'),

   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_teacher_messages_v2']['student_identifier'] = array(
   	'title' => t('Student_identifier'),

   	'help' => t("student_identifier "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_teacher_messages_v2']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),

   	'help' => t("Account Grade Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_teacher_messages_v2']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),

   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_teacher_messages_v2']['message'] = array(
   	'title' => t('message'),

   	'help' => t("message"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);	
$data['qtxt_sms_teacher_messages_v2']['due_date'] = array(
   	'title' => t('due_date'),

   	'help' => t("due_date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qtxt_sms_teacher_messages_v2']['subject_name'] = array(
   	'title' => t('subject_name'),

   	'help' => t("subject_name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	$data['qtxt_sms_teacher_messages_v2']['str_due_date'] = array(
   	'title' => t('str_due_date'),

   	'help' => t("str_due_date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

		

$data['qtxt_sms_teacher_messages_v2']['standard'] = array(
   	'title' => t('Standard'),

   	'help' => t("Standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_teacher_messages_v2']['section'] = array(
   	'title' => t('Section'),

   	'help' => t("Section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);

	
	
$data['qtxt_sms_teacher_messages_v2']['grade_name'] = array(
   	'title' => t('Grade name'),

   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);






$data['qtxt_sms_teacher_messages_v2']['teacher_userid'] = array(
   	'title' => t('Teacher Drupal UID'),
   	'help' => t("Teacher Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);




$data['qtxt_sms_teacher_messages_v2']['msg_creation_date'] = array(
   	'title' => t('msg_creation_date'),

   	'help' => t("msg_creation_date "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_teacher_messages_v2']['msg_type'] = array(
   	'title' => t('msg_type'),
        
   	'help' => t("msg_type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);					


$data['qtxt_sms_teacher_messages_v2']['file_name'] = array(
   	'title' => t('file_name'),

   	'help' => t("file_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);	
$data['qtxt_sms_teacher_messages_v2']['str_msg_creation_date'] = array(
   	'title' => t('str_msg_creation_date'),

   	'help' => t("str_msg_creation_date"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_students_v4']['table']['group']  = t('Mobile Account - Students det');
$data['qtxt_sms_mobile_students_v4']['table']['base'] = array(
   'field' => 'account_name',
   'title' => t('Mobile Account Students det '),
    'database' => 'qtxt_db',
   
   'help' => t('Mobile Account - Students det'),

 	);


$data['qtxt_sms_mobile_students_v4']['account_name'] = array(
   	'title' => t('account_name'),
   	'help' => t("Account Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_mobile_students_v4']['mobile_number'] = array(
   	'title' => t('mobile_number'),
   	'help' => t("Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qtxt_sms_mobile_students_v4']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("Student Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v4']['student_identifier'] = array(
   	'title' => t('Student_identifier'),
   	'help' => t("student_identifier "), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v4']['grade_name'] = array(
   	'title' => t('Grade name'),
   	'help' => t("Grade Name"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
$data['qtxt_sms_mobile_students_v4']['standard'] = array(
   	'title' => t('Standard'),

   	'help' => t("Standard"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_mobile_students_v4']['section'] = array(
   	'title' => t('Section'),

   	'help' => t("Section"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),

 	);
$data['qtxt_sms_mobile_students_v4']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("Account Student Map Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


$data['qtxt_sms_mobile_students_v4']['account_id'] = array(
   	'title' => t('account_id'),
   	'help' => t("Account Id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_mobile_students_v4']['str_dob'] = array(
   	'title' => t('str Date Of Birth'),

   	'help' => t("str Date Of Birth"), // The help that appears on the UI
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v4']['gender'] = array(
   	'title' => t('gender'),

   	'help' => t("Gender"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v4']['student_email'] = array(
   	'title' => t('student_email'),

   	'help' => t("Student Email"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qtxt_sms_mobile_students_v4']['blood_group'] = array(
   	'title' => t('blood_group'),
   	'help' => t("Blood Group"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qtxt_sms_mobile_students_v4']['permanent_address'] = array(
   	'title' => t('permanent_address'),
   	'help' => t("Permanent Address"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qtxt_sms_mobile_students_v4']['student_mobile_number'] = array(
   	'title' => t('student_mobile_number'),

   	'help' => t("Student Mobile Number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



$data['qtxt_sms_mobile_students_v4']['drupal_uid'] = array(
   	'title' => t('Drupal UID'),
   	'help' => t("Drupal UID"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_numeric',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_numeric',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_numeric',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


return $data;

 
 }

/**
* Implementation of hook_views_query_alter()
*/
function qtext_views_query_alter(&$view, &$query) {
global $user;

$drupalId = $user->uid ;

//print_r( $user->uid );

//print_r( $user->profile_mobile );

  if ($view->name == 'qtxt_student_alerts_panel') {
//    print_r($query);
//    print_r( $user->profile_mobile );
  }elseif($view->name == 'qtxt_extra_curricular_test') {
print_r( "Profile Mobile - ");
print_r( $user->profile_mobile );
         print_r($query);
  }elseif($view->name == 'qtxt_event_calendar') {

// $view->query->add_where('advf_filter',"(node.type='%s' OR node_comment_statistics.comment_count >= %d)",'forum',1);
   // $view->query->set_group_operator('AND');


           $view->query->add_where('advf_filter'," exists (  select '*' from  qtxt_sms_user_accounts_v b,  qtxt_sms_user_accounts_v c  where b.drupal_user_id = users.uid  and c.drupal_user_id = %d  and c.account_id = b.account_id )", $drupalId ); 
             
 //        print_r($query);




  }  elseif($view->name == 'school_calendar') {



     //      $view->query->add_where('advf_filter'," (  node_data_field_section.field_section_value is null and node_data_field_class.field_class_value is null) " ); 
             
    //     print_r($query);

	
	if (in_array('admin user', array_values($user->roles)) || in_array('principal user', array_values($user->roles)) ) 	{
	
	} else {

	  db_set_active('qtxt_db');	

  
	            $result = db_query(" select standard, section, account_student_map_id from {qtxt_sms_mobile_students_all_v} where drupal_uid =  '%d' ", $drupalId );

				$andClause = "";
				  while ($row = db_fetch_object($result)) {

				  	$standard =  trim($row->standard); 
					$section =  trim($row->section); 
					
					if ( empty($section) ) {
							$andClause .=  "  or (  ifnull(node_data_field_class.field_class_value, '$standard') = '$standard' ) ";
				  	} else {
							$andClause .=  "  or (  ifnull(node_data_field_section.field_section_value, '$section') = '$section'   and ifnull(node_data_field_class.field_class_value, '$standard') = '$standard' ) ";
					}
				}
		db_set_active('default');
	
           $view->query->add_where('advf_filter'," (  node_data_field_section.field_section_value is null and node_data_field_class.field_class_value is null) $andClause " ); 
             
       //  print_r($query);


		}


  }

/*

 elseif($view->name == 'quiz_by_taker') {
   	
	if (in_array('admin user', array_values($user->roles)) || in_array('principal user', array_values($user->roles))|| in_array('teacher user', array_values($user->roles)) ) 	{
	
	} else {

	  db_set_active('qtxt_db');	

  
	            $result = db_query(" select standard, section, account_student_map_id from {qtxt_sms_mobile_students_all_v} where drupal_uid =  '%d' ", $drupalId );

				$andClause = "";
				  while ($row = db_fetch_object($result)) {

				  	$standard =  trim($row->standard); 
					$section =  trim($row->section); 
					
					if ( empty($section) ) {
							$andClause .=  "  or (  ifnull(node_data_field_long_ans_class.field_long_ans_class_value, '$standard') = '$standard' ) ";
				  	} else {
							$andClause .=  "  or (  ifnull(node_data_field_long_ans_section.field_long_ans_section_value, '$section') = '$section'   and ifnull(node_data_field_long_ans_class.field_long_ans_class_value, '$standard') = '$standard' ) ";
					}
				}
		db_set_active('default');
	
           $view->query->add_where('advf_filter'," (  node_data_field_long_ans_section.field_long_ans_section_value is null and node_data_field_long_ans_class.field_long_ans_class_value is null) $andClause " ); 
             


		}


  } elseif($view->name == 'quiz_by_taker') {
   	
	if (in_array('admin user', array_values($user->roles)) || in_array('principal user', array_values($user->roles))|| in_array('teacher user', array_values($user->roles)) ) 	{
	
	} else {

	  db_set_active('qtxt_db');	

  
	            $result = db_query(" select standard, section, account_student_map_id from {qtxt_sms_mobile_students_all_v} where drupal_uid =  '%d' ", $drupalId );

				$andClause = "";
				  while ($row = db_fetch_object($result)) {

				  	$standard =  trim($row->standard); 
					$section =  trim($row->section); 
					
					if ( empty($section) ) {
							$andClause .=  "  or (  ifnull(node_data_field_match_class.field_match_class_value, '$standard') = '$standard' ) ";
				  	} else {
							$andClause .=  "  or (  ifnull(node_data_field_match_section.field_match_section_value, '$section') = '$section'   and ifnull(node_data_field_match_class.field_match_class_value, '$standard') = '$standard' ) ";
					}
				}
		db_set_active('default');
	
           $view->query->add_where('advf_filter'," (  node_data_field_match_section.field_match_section_value is null and node_data_field_match_class.field_match_class_value is null) $andClause " ); 
             


		}


  } elseif($view->name == 'quiz_by_taker') {
   	
	if (in_array('admin user', array_values($user->roles)) || in_array('principal user', array_values($user->roles))|| in_array('teacher user', array_values($user->roles)) ) 	{
	
	} else {

	  db_set_active('qtxt_db');	

  
	            $result = db_query(" select standard, section, account_student_map_id from {qtxt_sms_mobile_students_all_v} where drupal_uid =  '%d' ", $drupalId );

				$andClause = "";
				  while ($row = db_fetch_object($result)) {

				  	$standard =  trim($row->standard); 
					$section =  trim($row->section); 
					
					if ( empty($section) ) {
							$andClause .=  "  or (  ifnull(node_data_field_multi_class.field_multi_class_value, '$standard') = '$standard' ) ";
				  	} else {
							$andClause .=  "  or (  ifnull(node_data_field_multi_section.field_multi_section_value, '$section') = '$section'   and ifnull(node_data_field_multi_class.field_multi_class_value, '$standard') = '$standard' ) ";
					}
				}
		db_set_active('default');
	
           $view->query->add_where('advf_filter'," (  node_data_field_multi_section.field_multi_section_value is null and node_data_field_multi_class.field_multi_class_value is null) $andClause " ); 
             


		}


  } elseif($view->name == 'quiz_by_taker') {
   	
	if (in_array('admin user', array_values($user->roles)) || in_array('principal user', array_values($user->roles))|| in_array('teacher user', array_values($user->roles)) ) 	{
	
	} else {

	  db_set_active('qtxt_db');	

  
	            $result = db_query(" select standard, section, account_student_map_id from {qtxt_sms_mobile_students_all_v} where drupal_uid =  '%d' ", $drupalId );

				$andClause = "";
				  while ($row = db_fetch_object($result)) {

				  	$standard =  trim($row->standard); 
					$section =  trim($row->section); 
					
					if ( empty($section) ) {
							$andClause .=  "  or (  ifnull(node_data_field_scale_class.field_scale_class_value, '$standard') = '$standard' ) ";
				  	} else {
							$andClause .=  "  or (  ifnull(node_data_field_scale_section.field_scale_section_value, '$section') = '$section'   and ifnull(node_data_field_scale_class.field_scale_class_value, '$standard') = '$standard' ) ";
					}
				}
		db_set_active('default');
	
           $view->query->add_where('advf_filter'," (  node_data_field_scale_section.field_scale_section_value is null and node_data_field_scale_class.field_scale_class_value is null) $andClause " ); 
             


		}


  }  elseif($view->name == 'quiz_by_taker') {
   	
	if (in_array('admin user', array_values($user->roles)) || in_array('principal user', array_values($user->roles))|| in_array('teacher user', array_values($user->roles)) ) 	{
	
	} else {

	  db_set_active('qtxt_db');	

  
	            $result = db_query(" select standard, section, account_student_map_id from {qtxt_sms_mobile_students_all_v} where drupal_uid =  '%d' ", $drupalId );

				$andClause = "";
				  while ($row = db_fetch_object($result)) {

				  	$standard =  trim($row->standard); 
					$section =  trim($row->section); 
					
					if ( empty($section) ) {
							$andClause .=  "  or (  ifnull(node_data_field_short_class.field_short_class_value, '$standard') = '$standard' ) ";
				  	} else {
							$andClause .=  "  or (  ifnull(node_data_field_short_section.field_short_section_value, '$section') = '$section'   and ifnull(node_data_field_short_class.field_short_class_value, '$standard') = '$standard' ) ";
					}
				}
		db_set_active('default');
	
           $view->query->add_where('advf_filter'," (  node_data_field_short_section.field_short_section_value is null and node_data_field_short_class.field_short_class_value is null) $andClause " ); 
             


		}


  }   elseif($view->name == 'quiz_by_taker') {
   	
	if (in_array('admin user', array_values($user->roles)) || in_array('principal user', array_values($user->roles))|| in_array('teacher user', array_values($user->roles)) ) 	{
	
	} else {

	  db_set_active('qtxt_db');	

  
	            $result = db_query(" select standard, section, account_student_map_id from {qtxt_sms_mobile_students_all_v} where drupal_uid =  '%d' ", $drupalId );

				$andClause = "";
				  while ($row = db_fetch_object($result)) {

				  	$standard =  trim($row->standard); 
					$section =  trim($row->section); 
					
					if ( empty($section) ) {
							$andClause .=  "  or (  ifnull(node_data_field_tf_class.field_tf_class_value, '$standard') = '$standard' ) ";
				  	} else {
							$andClause .=  "  or (  ifnull(node_data_field_tf_section.field_tf_section_value, '$section') = '$section'   and ifnull(node_data_field_tf_class.field_tf_class_value, '$standard') = '$standard' ) ";
					}
				}
		db_set_active('default');
	
           $view->query->add_where('advf_filter'," (  node_data_field_tf_section.field_tf_section_value is null and node_data_field_tf_class.field_tf_class_value is null) $andClause " ); 
             


		}


  }
  
  
   
*/
  

}



 