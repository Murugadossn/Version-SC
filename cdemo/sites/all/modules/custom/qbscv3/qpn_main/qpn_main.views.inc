<?php 

/**
 * @file
 * Provide views data and handlers for qtext.module
 */



/**
 * Implementation of hook_views_data()
 */
 function qpn_main_views_data()  {
 $data['qpn_defaulters_summary_v']['table']['group']  = t('Defaulters View');
 
 $data['qpn_defaulters_summary_v']['table']['base'] = array(
   'title' => t('Defaulters View'),
     'database' => 'qtxt_db',
   'help' => t('Defaulters View'),
 	);

$data['qpn_defaulters_summary_v']['account_name'] = array(
   	'title' => t('account_name'),
   	'help' => t("Account Name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



	
$data['qpn_defaulters_summary_v']['activity_name'] = array(
   	'title' => t('Activity Name'),
   	'help' => t("Activity Name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_defaulters_summary_v']['activity_desc'] = array(
   	'title' => t('Activity Description'),
   	'help' => t("Activity Description"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	

	
$data['qpn_defaulters_summary_v']['fee_type'] = array(
   	'title' => t('Fee Type'),
   	'help' => t("Fee Type"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	
$data['qpn_defaulters_summary_v']['fee_description'] = array(
   	'title' => t('Fee Description'),
   	'help' => t("Fee Description"),
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
$data['qpn_defaulters_summary_v']['num_of_students'] = array(
   	'title' => t('Defaulters Count'),
   	'help' => t("Defaulters Count"), 
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
	
	$data['qpn_defaulters_summary_v']['account_id'] = array(
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

	$data['qpn_defaulters_summary_v']['activity_id'] = array(
   	'title' => t('Activity Id'),
   	'help' => t("Activity Id"), 
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


	$data['qpn_defaulters_summary_v']['fee_detail_id'] = array(
   	'title' => t('Fee Detail Id'),
   	'help' => t("Fee Detail Id"), 
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
	
	
	$data['qpn_defaulters_summary_v']['total_balance_amount'] = array(
   	'title' => t('Total Balance Amount'),
   	'help' => t("Total Balance Amount"), 
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
	
$data['qpn_users_v']['table']['group']  = t('Qpn Users Details');
 
 $data['qpn_users_v']['table']['base'] = array(
   'title' => t('Qpn Users Details'),
     'database' => 'qtxt_db',
   'help' => t('Qpn Users Details'),
 	);
	





$data['qpn_users_v']['user_name'] = array(
   	'title' => t('user_name'),
   	'help' => t("User Name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qpn_users_v']['account_id'] = array(
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


	
$data['qpn_users_v']['user_drupal_id'] = array(
   	'title' => t('user_drupal_id'),
   	'help' => t("user_drupal_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_users_v']['user_mobile_number'] = array(
   	'title' => t('user_mobile_number'),
   	'help' => t("user_mobile_number"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_users_v']['user_address'] = array(
   	'title' => t('user_address'),
   	'help' => t("user_address"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qpn_users_v']['user_role_name'] = array(
   	'title' => t('user_role_name'),
   	'help' => t("user_role_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qpn_users_v']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("student_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_users_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("account_student_map_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	$data['qpn_users_v']['account_grade_id'] = array(
   	'title' => t('Account Grade Id'),
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
	
	$data['qpn_users_v']['standard'] = array(
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
	
	$data['qpn_users_v']['section'] = array(
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
	
	$data['qpn_users_v']['account_name'] = array(
   	'title' => t('Account Name'),
   	'help' => t("Account Name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

	
	$data['qpn_users_v']['user_id'] = array(
   	'title' => t('PayforIt User Id'),
   	'help' => t("PayforIt User Id"), // The help that appears on the UI,
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
		
	
$data['qpn_activities_summary_v']['table']['group']  = t('Qpn Activity Summary Details');
 
 $data['qpn_activities_summary_v']['table']['base'] = array(
   'title' => t('Qpn Activity Summary Details'),
     'database' => 'qtxt_db',
   'help' => t('Qpn Activity Summary Details'),
 	);
	


$data['qpn_activities_summary_v']['activity_name'] = array(
   	'title' => t('activity_name'),
   	'help' => t("activity_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qpn_activities_summary_v']['coordinator_name'] = array(
   	'title' => t('coordinator_name'),
   	'help' => t("coordinator_name"), // The help that appears on the UI,
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


	
$data['qpn_activities_summary_v']['special_instructions'] = array(
   	'title' => t('special_instructions'),
   	'help' => t("special_instructions"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_activities_summary_v']['registration_start_date'] = array(
   	'title' => t('registration_start_date'),
   	'help' => t("registration_start_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_activities_summary_v']['mandatory_flag'] = array(
   	'title' => t('mandatory_flag'),
   	'help' => t("mandatory_flag"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qpn_activities_summary_v']['account_name'] = array(
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

$data['qpn_activities_summary_v']['year_from'] = array(
   	'title' => t('year_from'),
   	'help' => t("year_from"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_activities_summary_v']['year_to'] = array(
   	'title' => t('year_to'),
   	'help' => t("year_to"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
 $data['qpn_activities_details_v']['table']['group']  = t('Qpn Activity Details');
 
 $data['qpn_activities_details_v']['table']['base'] = array(
   'title' => t('Qpn Activity Details'),
     'database' => 'qtxt_db',
   'help' => t('Qpn Activity Details'),
    	);
	


$data['qpn_activities_details_v']['activity_name'] = array(
   	'title' => t('activity_name'),
   	'help' => t("activity_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qpn_activities_details_v']['coordinator_name'] = array(
   	'title' => t('coordinator_name'),
   	'help' => t("coordinator_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_string',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_activities_details_v']['activity_desc'] = array(
   	'title' => t('activity_desc'),
   	'help' => t("activity_desc"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_activities_details_v']['registration_start_date'] = array(
   	'title' => t('registration_start_date'),
   	'help' => t("registration_start_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_activities_details_v']['registration_end_date'] = array(
   	'title' => t('registration_end_date'),
   	'help' => t("registration_end_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	$data['qpn_activities_details_v']['special_instructions'] = array(
   	'title' => t('special_instructions'),
   	'help' => t("special_instructions"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_activities_details_v']['mandatory_flag'] = array(
   	'title' => t('mandatory_flag'),
   	'help' => t("mandatory_flag"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qpn_activities_details_v']['account_name'] = array(
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

$data['qpn_activities_details_v']['year_from'] = array(
   	'title' => t('year_from'),
   	'help' => t("year_from"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_activities_details_v']['year_to'] = array(
   	'title' => t('year_to'),
   	'help' => t("year_to"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	
	$data['qpn_activities_details_v']['fee_type'] = array(
   	'title' => t('fee_type'),
   	'help' => t("fee_type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_activities_details_v']['fee_description'] = array(
   	'title' => t('fee_description'),
   	'help' => t("fee_description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_activities_details_v']['total_amount'] = array(
   	'title' => t('total_amount'),
   	'help' => t("total_amount"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_activities_details_v']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),
   	'help' => t("account_grade_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_activities_details_v']['standard'] = array(
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
	$data['qpn_activities_details_v']['section'] = array(
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
	
	$data['qpn_activities_details_v']['year_id'] = array(
   	'title' => t('year_id'),
   	'help' => t("year_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_activities_details_v']['activity_id'] = array(
   	'title' => t('activity_id'),
   	'help' => t("activity_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	
	$data['qpn_activities_details_v']['fee_detail_id'] = array(
   	'title' => t('fee_detail_id'),
   	'help' => t("fee_detail_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_activities_details_v']['msg_registration_start_date'] = array(
   	'title' => t('msg_registration_start_date'),
   	'help' => t("msg_registration_start_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_activities_details_v']['msg_registration_end_date'] = array(
   	'title' => t('msg_registration_end_date'),
   	'help' => t("msg_registration_end_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
 $data['qpn_pending_amount_by_student_v']['table']['group']  = t('Qpn Pending Amount By Students - Admin View');
 
 $data['qpn_pending_amount_by_student_v']['table']['base'] = array(
   'title' => t('Qpn Pending Amount By Students - Admin View'),
     'database' => 'qtxt_db',
   'help' => t('Qpn Pending Amount By Students - Admin View'),
 	);

	
	
	$data['qpn_pending_amount_by_student_v']['account_name'] = array(
   	'title' => t('Account Name'),
   	'help' => t("Account Name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
	
	$data['qpn_pending_amount_by_student_v']['activity_name'] = array(
   	'title' => t('Activity Name'),
   	'help' => t("Activity Name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
			
	$data['qpn_pending_amount_by_student_v']['activity_desc'] = array(
   	'title' => t('Activity Description'),
   	'help' => t("Activity Description"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
	$data['qpn_pending_amount_by_student_v']['coordinator_name'] = array(
   	'title' => t('Coordinator Name'),
   	'help' => t("Coordinator Name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qpn_pending_amount_by_student_v']['special_instructions'] = array(
   	'title' => t('Special Instructions'),
   	'help' => t("Special Instructions"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_pending_amount_by_student_v']['mandatory_flag'] = array(
   	'title' => t('Mandatory Flag'),
   	'help' => t("Mandatory Flag"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_pending_amount_by_student_v']['fee_type'] = array(
   	'title' => t('Fee Type'),
   	'help' => t("Fee Type"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
		
	$data['qpn_pending_amount_by_student_v']['fee_description'] = array(
   	'title' => t('Fee Description'),
   	'help' => t("Fee Description"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

	$data['qpn_pending_amount_by_student_v']['account_id'] = array(
   	'title' => t('Account Id'),
   	'help' => t("Account Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_pending_amount_by_student_v']['year_id'] = array(
   	'title' => t('Year Id'),
   	'help' => t("Year Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_pending_amount_by_student_v']['fee_detail_id'] = array(
   	'title' => t('Fee Detail Id'),
   	'help' => t("Fee Detail Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_pending_amount_by_student_v']['activity_id'] = array(
   	'title' => t('Activity Id'),
   	'help' => t("Activity Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_pending_amount_by_student_v']['total_amount'] = array(
   	'title' => t('Total Amount'),
   	'help' => t("Total Amount"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	$data['qpn_pending_amount_by_student_v']['account_student_map_id'] = array(
   	'title' => t('Account Student Map Id'),
   	'help' => t("Account Student Map Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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

	
	$data['qpn_pending_amount_by_student_v']['account_grade_id'] = array(
   	'title' => t('Account Grade Id'),
   	'help' => t("Account Grade Id"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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

	
	$data['qpn_pending_amount_by_student_v']['exemption_amount'] = array(
   	'title' => t('Exemption Amount'),
   	'help' => t("Exemption Amount"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_pending_amount_by_student_v']['total_paid_amount'] = array(
   	'title' => t('Total Paid Amount'),
   	'help' => t("Total Paid Amount"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	$data['qpn_pending_amount_by_student_v']['msg_registration_start_date'] = array(
   	'title' => t('msg_registration_start_date'),
   	'help' => t("msg_registration_start_date"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
	
	$data['qpn_pending_amount_by_student_v']['msg_registration_end_date'] = array(
   	'title' => t('msg_registration_end_date'),
   	'help' => t("msg_registration_end_date"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	
	
	$data['qpn_pending_amount_by_student_v']['student_name'] = array(
   	'title' => t('student name'),
   	'help' => t("student name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);	

	
	$data['qpn_pending_amount_by_student_v']['student_identifier'] = array(
   	'title' => t('student identifier'),
   	'help' => t("student identifier"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);		


$data['qpn_defaulters_details_v']['table']['group']  = t('QPN Defaulters View - details');
 
 $data['qpn_defaulters_details_v']['table']['base'] = array(
   'title' => t('QPN Defaulters View - details'),
     'database' => 'qtxt_db',
   'help' => t('QPN Defaulters View - details'),
 	);

$data['qpn_defaulters_details_v']['account_name'] = array(
   	'title' => t('account_name'),
   	'help' => t("Account Name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);



	
$data['qpn_defaulters_details_v']['activity_name'] = array(
   	'title' => t('Activity Name'),
   	'help' => t("Activity Name"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_defaulters_details_v']['activity_desc'] = array(
   	'title' => t('Activity Description'),
   	'help' => t("Activity Description"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	

	
$data['qpn_defaulters_details_v']['fee_type'] = array(
   	'title' => t('Fee Type'),
   	'help' => t("Fee Type"), 
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	
$data['qpn_defaulters_details_v']['fee_description'] = array(
   	'title' => t('Fee Description'),
   	'help' => t("Fee Description"),
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
	$data['qpn_defaulters_details_v']['account_id'] = array(
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

	$data['qpn_defaulters_details_v']['activity_id'] = array(
   	'title' => t('Activity Id'),
   	'help' => t("Activity Id"), 
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


	$data['qpn_defaulters_details_v']['fee_detail_id'] = array(
   	'title' => t('Fee Detail Id'),
   	'help' => t("Fee Detail Id"), 
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
	

	
	
$data['qpn_defaulters_details_v']['student_name'] = array(
   	'title' => t('Student Name'),
   	'help' => t("Student Name"),
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_defaulters_details_v']['student_identifier'] = array(
   	'title' => t('Student ID'),
   	'help' => t("Student Id"),
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qpn_defaulters_details_v']['total_amount'] = array(
   	'title' => t('Total Amount'),
   	'help' => t("Total Amount"), 
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
	
	$data['qpn_defaulters_details_v']['exemption_amount'] = array(
   	'title' => t('Exemption Amount'),
   	'help' => t("Exemption Amount"), 
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

	$data['qpn_defaulters_details_v']['total_paid_amount'] = array(
   	'title' => t('Total Paid Amount'),
   	'help' => t("Total Paid Amount"), 
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

	$data['qpn_defaulters_details_v']['total_balance_amount'] = array(
   	'title' => t('Total Balance Amount'),
   	'help' => t("Total Balance Amount"), 
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


$data['qpn_defaulters_details_v']['msg_registration_start_date'] = array(
   	'title' => t('Registration Start Date'),
   	'help' => t("Registration Start Date"),
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qpn_defaulters_details_v']['msg_registration_end_date'] = array(
   	'title' => t('Registration End Date'),
   	'help' => t("Registration End Date"),
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);




 $data['qpn_activities_details_for_students_v']['table']['group']  = t('Qpn activities_details_for_students_v');
 
 $data['Qpn activities_details_for_students_v']['table']['base'] = array(
   'title' => t('Qpn activities_details_for_students_v'),
     'database' => 'qtxt_db',
   'help' => t('Qpn activities_details_for_students_v'),
    	);

 
$data['qpn_activities_details_for_students_v']['activity_name'] = array(
   	'title' => t('activity_name'),
   	'help' => t("activity_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qpn_activities_details_for_students_v']['coordinator_name'] = array(
   	'title' => t('coordinator_name'),
   	'help' => t("coordinator_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_string',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_activities_details_for_students_v']['activity_desc'] = array(
   	'title' => t('activity_desc'),
   	'help' => t("activity_desc"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_activities_details_for_students_v']['registration_start_date'] = array(
   	'title' => t('registration_start_date'),
   	'help' => t("registration_start_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_activities_details_for_students_v']['registration_end_date'] = array(
   	'title' => t('registration_end_date'),
   	'help' => t("registration_end_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	$data['qpn_activities_details_for_students_v']['special_instructions'] = array(
   	'title' => t('special_instructions'),
   	'help' => t("special_instructions"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_activities_details_for_students_v']['mandatory_flag'] = array(
   	'title' => t('mandatory_flag'),
   	'help' => t("mandatory_flag"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qpn_activities_details_for_students_v']['account_name'] = array(
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

$data['qpn_activities_details_for_students_v']['year_from'] = array(
   	'title' => t('year_from'),
   	'help' => t("year_from"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_activities_details_for_students_v']['year_to'] = array(
   	'title' => t('year_to'),
   	'help' => t("year_to"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	
	$data['qpn_activities_details_for_students_v']['fee_type'] = array(
   	'title' => t('fee_type'),
   	'help' => t("fee_type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_activities_details_for_students_v']['fee_description'] = array(
   	'title' => t('fee_description'),
   	'help' => t("fee_description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_activities_details_for_students_v']['total_amount'] = array(
   	'title' => t('total_amount'),
   	'help' => t("total_amount"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_activities_details_for_students_v']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),
   	'help' => t("account_grade_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_activities_details_for_students_v']['standard'] = array(
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
	$data['qpn_activities_details_for_students_v']['section'] = array(
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
	
	$data['qpn_activities_details_for_students_v']['year_id'] = array(
   	'title' => t('year_id'),
   	'help' => t("year_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_activities_details_for_students_v']['activity_id'] = array(
   	'title' => t('activity_id'),
   	'help' => t("activity_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	
	$data['qpn_activities_details_for_students_v']['fee_detail_id'] = array(
   	'title' => t('fee_detail_id'),
   	'help' => t("fee_detail_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_activities_details_for_students_v']['msg_registration_start_date'] = array(
   	'title' => t('msg_registration_start_date'),
   	'help' => t("msg_registration_start_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_activities_details_for_students_v']['msg_registration_end_date'] = array(
   	'title' => t('msg_registration_end_date'),
   	'help' => t("msg_registration_end_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qpn_activities_details_for_students_v']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("student_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_activities_details_for_students_v']['student_identifier'] = array(
   	'title' => t('student_identifier'),
   	'help' => t("student_identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_activities_details_for_students_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("account_student_map_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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

	
	
	
 $data['qpn_payment_v']['table']['group']  = t('Qpn Payment');
 
 $data['Qpn activities_details_for_students_v']['table']['base'] = array(
   'title' => t('Qpn Payment'),
     'database' => 'qtxt_db',
   'help' => t('Qpn Payment'),
    	);

		
 
$data['qpn_payment_v']['activity_name'] = array(
   	'title' => t('activity_name'),
   	'help' => t("activity_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	

	
$data['qpn_payment_v']['activity_desc'] = array(
   	'title' => t('activity_desc'),
   	'help' => t("activity_desc"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_payment_v']['payment_date'] = array(
   	'title' => t('payment_date'),
   	'help' => t("payment_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_payment_v']['msg_payment_date'] = array(
   	'title' => t('msg_payment_date'),
   	'help' => t("msg_payment_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	$data['qpn_payment_v']['payment_status'] = array(
   	'title' => t('payment_status'),
   	'help' => t("payment_status"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_payment_v']['mandatory_flag'] = array(
   	'title' => t('mandatory_flag'),
   	'help' => t("mandatory_flag"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

$data['qpn_payment_v']['account_id'] = array(
   	'title' => t('account_id'),
   	'help' => t("account_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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

$data['qpn_payment_v']['mode_of_payment'] = array(
   	'title' => t('mode_of_payment'),
   	'help' => t("mode_of_payment"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_payment_v']['additional_information'] = array(
   	'title' => t('additional_information'),
   	'help' => t("additional_information"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	
	$data['qpn_payment_v']['fee_type'] = array(
   	'title' => t('fee_type'),
   	'help' => t("fee_type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_payment_v']['fee_description'] = array(
   	'title' => t('fee_description'),
   	'help' => t("fee_description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_payment_v']['total_amount'] = array(
   	'title' => t('total_amount'),
   	'help' => t("total_amount"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_payment_v']['actual_payment_amount'] = array(
   	'title' => t('actual_payment_amount'),
   	'help' => t("actual_payment_amount"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	$data['qpn_payment_v']['standard'] = array(
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
	$data['qpn_payment_v']['section'] = array(
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
	
	$data['qpn_payment_v']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),
   	'help' => t("account_grade_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	
	$data['qpn_payment_v']['fee_detail_id'] = array(
   	'title' => t('fee_detail_id'),
   	'help' => t("fee_detail_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	

$data['qpn_payment_v']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("student_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_payment_v']['student_identifier'] = array(
   	'title' => t('student_identifier'),
   	'help' => t("student_identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_payment_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("account_student_map_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	
 $data['qpn_payment_summary_v']['table']['group']  = t('Qpn Payment Summary');
 
 $data['qpn_payment_summary_v']['table']['base'] = array(
   'title' => t('Qpn Payment Summary'),
     'database' => 'qtxt_db',
   'help' => t('Qpn Payment Summary'),
    	);

		
 	
	
	
	$data['qpn_payment_summary_v']['fee_detail_id'] = array(
   	'title' => t('fee_detail_id'),
   	'help' => t("fee_detail_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_payment_summary_v']['fee_type'] = array(
   	'title' => t('fee_type'),
   	'help' => t("fee_type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_payment_summary_v']['fee_description'] = array(
   	'title' => t('fee_description'),
   	'help' => t("fee_description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_payment_summary_v']['total_paid_amount'] = array(
   	'title' => t('total_paid_amount'),
   	'help' => t("total_paid_amount"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_payment_summary_v']['standard'] = array(
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
	$data['qpn_payment_summary_v']['section'] = array(
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
	
	

$data['qpn_payment_summary_v']['student_name'] = array(
   	'title' => t('student_name'),
   	'help' => t("student_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_payment_summary_v']['student_identifier'] = array(
   	'title' => t('student_identifier'),
   	'help' => t("student_identifier"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_payment_summary_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("account_student_map_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
		



 $data['qpn_pending_amount_by_student_v']['table']['group']  = t('Qpn activities_details_for_students_v');
 
 $data['Qpn activities_details_for_students_v']['table']['base'] = array(
   'title' => t('Qpn activities_details_for_students_v'),
     'database' => 'qtxt_db',
   'help' => t('Qpn activities_details_for_students_v'),
    	);

 
$data['qpn_pending_amount_by_student_v']['activity_name'] = array(
   	'title' => t('activity_name'),
   	'help' => t("activity_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	$data['qpn_pending_amount_by_student_v']['coordinator_name'] = array(
   	'title' => t('coordinator_name'),
   	'help' => t("coordinator_name"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field_string',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_pending_amount_by_student_v']['activity_desc'] = array(
   	'title' => t('activity_desc'),
   	'help' => t("activity_desc"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);


	
$data['qpn_pending_amount_by_student_v']['registration_start_date'] = array(
   	'title' => t('registration_start_date'),
   	'help' => t("registration_start_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_pending_amount_by_student_v']['registration_end_date'] = array(
   	'title' => t('registration_end_date'),
   	'help' => t("registration_end_date"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	
	$data['qpn_pending_amount_by_student_v']['special_instructions'] = array(
   	'title' => t('special_instructions'),
   	'help' => t("special_instructions"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
$data['qpn_pending_amount_by_student_v']['mandatory_flag'] = array(
   	'title' => t('mandatory_flag'),
   	'help' => t("mandatory_flag"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);

	
	
	
	$data['qpn_pending_amount_by_student_v']['fee_type'] = array(
   	'title' => t('fee_type'),
   	'help' => t("fee_type"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	
	$data['qpn_pending_amount_by_student_v']['fee_description'] = array(
   	'title' => t('fee_description'),
   	'help' => t("fee_description"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_pending_amount_by_student_v']['total_amount'] = array(
   	'title' => t('total_amount'),
   	'help' => t("total_amount"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
   			),
	   'argument' => array(
	     'handler' => 'views_handler_argument_string',
	   ),
	   'filter' => array(
	     'handler' => 'views_handler_filter_string',
	   ),
	   'sort' => array(
	     'handler' => 'views_handler_sort',
	   ),
 	);
	$data['qpn_pending_amount_by_student_v']['account_id'] = array(
   	'title' => t('account_id'),
   	'help' => t("account_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	$data['qpn_pending_amount_by_student_v']['fee_detail_id'] = array(
   	'title' => t('fee_detail_id'),
   	'help' => t("fee_detail_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	$data['qpn_pending_amount_by_student_v']['activity_id'] = array(
   	'title' => t('activity_id'),
   	'help' => t("activity_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	$data['qpn_pending_amount_by_student_v']['year_id'] = array(
   	'title' => t('year_id'),
   	'help' => t("year_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_pending_amount_by_student_v']['account_grade_id'] = array(
   	'title' => t('account_grade_id'),
   	'help' => t("account_grade_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	
	
	
$data['qpn_pending_amount_by_student_v']['account_student_map_id'] = array(
   	'title' => t('account_student_map_id'),
   	'help' => t("account_student_map_id"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	$data['qpn_pending_amount_by_student_v']['exemption_amount'] = array(
   	'title' => t('exemption_amount'),
   	'help' => t("exemption_amount"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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
	
	$data['qpn_pending_amount_by_student_v']['total_paid_amount'] = array(
   	'title' => t('total_paid_amount'),
   	'help' => t("total_paid_amount"), // The help that appears on the UI,
   	'field' => array(
     				'handler' => 'views_handler_field',
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