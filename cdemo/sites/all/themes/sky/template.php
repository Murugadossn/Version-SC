<?php
// $Id$

/**
 * @file
 * The guts of the theme :)
 */

require_once('theme-settings.php');

/**
 * Add Custom Generated CSS File
 * This file is generated each time the theme settings page is loaded.
 */
$custom_css = file_directory_path() .'/sky/custom.css';
if (file_exists($custom_css)) {
  drupal_add_css($custom_css, 'theme', 'all', TRUE);
}




/**
 * Implementation of hook_theme().
 * This function provides a one-stop reference for all
 */
function sky_theme(&$existing, $type, $theme, $path) {

  return array(
    'breadcrumb' => array(
      'arguments' => array('breadcrumb' => array()),
      'file' => 'functions/theme-overrides.inc',
    ),
    'conditional_stylesheets' => array(
      'file' => 'functions/theme-custom.inc',
    ),
    'feed_icon' => array(
      'arguments' => array('url' => NULL, 'title' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
    'form_element' => array(
      'arguments' => array('element' => NULL, 'value' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
    'fieldset' => array(
      'arguments' => array('element' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
    'menu_local_tasks' => array(
      'arguments' => NULL,
      'file' => 'functions/theme-overrides.inc',
    ),
    'menu_item_link' => array(
      'arguments' => array('link' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
    'more_link' => array(
      'arguments' => array('url' => array(), 'title' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
    'pager' => array(
      'arguments' => array('tags' => array(), 'limit' => NULL, 'element' => NULL, 'parameters' => array(), 'quantity' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
   'status_messages' => array(
      'arguments' => array('display' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
    'status_report' => array(
      'arguments' => array('requirements' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
    'table' => array(
      'arguments' => array('header' => NULL, 'rows' => NULL, 'attributes' => array(), 'caption' => NULL),
      'file' => 'functions/theme-overrides.inc',
    ),
    'render_attributes' => array(
      'arguments' => array('attributes'),
      'file' => 'functions/theme-custom.inc',
    )
  );
}

/**
 * Implementation of hook_preprocess().
 *
 * @param $vars
 * @param $hook
 * @return Array
 */
function sky_preprocess(&$vars, $hook) {

  // Only add the admin.css file to administrative pages
  if (arg(0) == 'admin') {
    drupal_add_css(path_to_theme() .'/css/admin.css', 'theme', 'all', TRUE);
  }

 /**
  * This function checks to see if a hook has a preprocess file associated with
  * it, and if so, loads it.
  */

  if (is_file(drupal_get_path('theme', 'sky') .'/preprocess/preprocess-'. str_replace('_', '-', $hook) .'.inc')) {
    include('preprocess/preprocess-'. str_replace('_', '-', $hook) .'.inc');
  }
}

function sky_user_bar()
{

	global $user;
	$output = '';

	if (!$user->uid)
	{
		$output .= drupal_get_form('user_login_block');
	}
	else
	{
		$_REQUEST['destination']= getDestinationforRole();//set login destination for this user.
		$output = getDestinationforRole();
	}

	return $output;
}


/**
 * Views Slideshow: "previous" control.
 *
 * @ingroup themeable
 */
function sky_views_slideshow_singleframe_control_previous($vss_id, $view, $options) {
  return l(t('-'), '#', array(
    'attributes' => array(
      'class' => 'qb_views_slideshow_singleframe_previous views_slideshow_previous',
      'id' => "views_slideshow_singleframe_prev_" . $vss_id,
    ),
    'fragment' => ' ',
    'external' => TRUE,
  ));
}


/**
 * Views Slideshow: "next" control.
 *
 * @ingroup themeable
 */
function sky_views_slideshow_singleframe_control_next($vss_id, $view, $options) {

  return l(t('-'), '#', array(
    'attributes' => array(
      'class' => 'qb_views_slideshow_singleframe_next views_slideshow_next',
      'id' => "views_slideshow_singleframe_next_" . $vss_id,
    ),
    'fragment' => ' ',
    'external' => TRUE,
  ));
}


function getDestinationforRole ()
{
global $user;

	if ( in_array( 'parent user', $user->roles ) )
	{
		return 'qtxtdashpagev30parentdash';
	}
	elseif ( in_array( 'principal user', $user->roles ) )
	{
		return 'adash';
	}
	elseif ( in_array( 'student user', $user->roles ) )
	{
		return 'sdash';
	}
	elseif ( in_array( 'teacher user', $user->roles ) )
	{
		return 'tdash';
	}
	elseif ( in_array( 'admin', $user->roles ) )
	{
		return 'adash';
	}

}

function loadmyuser ()
{
	global $user;
	$user=user_load($user->uid);
}