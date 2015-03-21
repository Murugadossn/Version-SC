// $Id

/**
 * @file profile_taxonomy.js
 * Exports taxonomy terms to profile field options when the
 * user selects a certain vocabulary.
 */
Drupal.behaviors.ProfileTaxonomy = function(context) {
   
  $('#edit-vocabulary:not(.profile-taxonomy-processed)', context) 
    .change(function(event) { //drop down selection changes
      if ($(this).val() != 0) {
    	var voc_id = $(this).val();
    	//get all taxonomy terms of a specific vocabulary via a JSON request
    	var path = '?q=profile_taxonomy/list_vocabulary_terms/' + voc_id;
    	$.getJSON(path, function(data, textStatus) {
    	  $('#edit-options').val(data.join("\r\n")); //explode response, e. g. array(1, 2) to 1\r\n2\r\n
    	  $('#edit-options').attr('disabled', 'disabled'); //make options list uneditable now
    	});
      }
      else { //"None selected", reset values
    	$('#edit-options').removeAttr('disabled');
    	$('#edit-options').val('');
      }
    }
  ).addClass('profile-taxonomy-processed'); //add css class to surrounding wrapper, needed for theming
  
  //if a vocabulary is selected, make options list uneditable
  if ($('#edit-vocabulary').val() != 0) {
    $('#edit-options').attr('disabled', 'disabled');
  }
}