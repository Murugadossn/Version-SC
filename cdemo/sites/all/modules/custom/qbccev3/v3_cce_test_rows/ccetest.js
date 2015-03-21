    $(document).ready(function() {
        $('#edit-submit10000').click(function() {
		
			var oldLength =$('#myid >tbody >tr').length;
			var oldName = $('#myid tbody tr:last [id^=edit-access-index]').attr('name' ) + "";
		
		// create a new row
          $('#myid tbody tr:last').clone(true).insertAfter('#myid tbody tr:last');
					//	  $('#tableID >tbody >tr').length;

					// get the value of Index attr
		var myval = $('#myid tbody tr:last [id^=edit-access-index]').val();
//		 alert("welcome - " + myval);
		// get new length
		  var newLength =$('#myid >tbody >tr').length;
//		  		 alert("welcome - " + newLength);
// Set the index value with the new value
			$('#myid tbody tr:last [id^=edit-access-index]').val(newLength) ; 
// change the name of the object
			var newName = oldName.replace(oldLength, newLength);
			$('#myid tbody tr:last [id^=edit-access-index]').attr('name', newName );
	 
			return false;
        });
    });
	