<?php
// $Id: profile_taxonomy.api.inc,v 1.2 2010/05/27 10:15:01 gnindl Exp $

/**
 * @file profile_taxonomy.api.inc
 * The developer's API for this module layers the access
 * and the handling of database transactions.
 */


/**
 * Get a vocabulary associated to a profile field.
 * @param $fid
 *   field id
 * @return
 *   integer of vocabulary id
 */
function profile_taxonomy_get_vocabulary_id($field) {
  $sql = "SELECT * FROM {profile_taxonomy} WHERE fid = '%s'";
  return db_fetch_object(db_query($sql, $field))->vid;
}

/**
 * Get all profile fields which use a certain vocabulary.
 * @param $vid
 *   vocabulary id
 * @return
 *   array of profile field objects (db table profile_fields)
 */
function profile_taxonomy_get_profile_fields($vid) {
  $sql = "SELECT * FROM {profile_taxonomy} WHERE vid = '%s'";
  $result = db_query($sql, $vid);
  $fields = array();
  while (($row = db_fetch_object($result)) != NULL) {
  	$fields[] = db_fetch_object(db_query("SELECT * FROM {profile_fields} WHERE fid = %d", $row->fid));
  }
  return $fields;
}

/**
 * Delete a specific field vocabulary association
 * @param $field
 *   name of the profile field
 */
function profile_taxonomy_delete_by_fid($fid) {
  db_query("DELETE FROM {profile_taxonomy} WHERE fid = %d", $fid);
}

/**
 * Delete all profile fields association of a vocabulary
 * @param $vid
 *   vocabulary id
 */
function profile_taxonomy_delete_by_vid($vid) {
  db_query("DELETE FROM {profile_taxonomy} WHERE vid = %d", $vid);
}

/**
 * Create a field vocabulary association.
 * @param $field
 *   name of the profile field
 * @param $vid
 *   vocabulary id
 */
function profile_taxonomy_add($field, $vid) {
  db_query("INSERT INTO {profile_taxonomy} VALUES (%d, %d)", $field, $vid);
}

/**
 * Get all field vocabulary assignements.
 * @return
 *   profile taxonomy assignements
 */
function profile_taxonomy_get_assignments() {
  $result = db_query('SELECT * FROM {profile_taxonomy}');
  $assignments = array();
  while (($row = db_fetch_object($result)) != NULL) {
    $assignments[] = $row;
  }
  return $assignments;
}