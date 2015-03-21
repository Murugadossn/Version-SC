<?php
		$dbhost = 'localhost:3306';
		$dbuser = 'igradeno_urcdemo';
		$dbpass = 'T6UrLXLf92hW';
		$dbname = 'igradeno_cdemodb';
		$mysql = mysql_connect($dbhost, $dbuser, $dbpass, false, 65536);
		if (!$mysql) {
			echo "<p>Could not connect to the server --> " . $hostname . "<BR>";
        	echo mysql_error();
        	die($message);
      	}
		mysql_select_db($dbname, $mysql);
?>

