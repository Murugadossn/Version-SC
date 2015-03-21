text/x-generic GetBulkUploadDetails.php
HTML document text

<html>
<body>
<?php 

	$target_path = "upload/";
	$target_path = $target_path . basename( $_FILES['uploadedfile']['name']); 
    echo "<br> Target_path   : ".$target_path;
    echo "<br> Temp Path : ".$_FILES['uploadedfile']['tmp_name'];
    
	if(move_uploaded_file($_FILES['uploadedfile']['tmp_name'], $target_path)) {
    	echo "<br> The file ".  basename( $_FILES['uploadedfile']['name'])." has been uploaded";
	} else{
   		echo "<br> There was an error uploading the file, please try again!";
	}
?> 
</body>
</html>

