<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
    <title><?php print $head_title ?></title>
    <?php print $head ?>
    <?php print $styles ?>
	 <style type="text/css" media="all">@import "<?php print base_path() . path_to_theme() ?>/master.css";</style>  
    <?php print $scripts ?>    
</head>
<body class="<?php print $body_classes; ?>">

<div id="primary_menu_bar">
	<?php if (isset($primary_links)) print menu_tree($menu_name = variable_get('menu_primary_links_source', 'primary-links')); ?>
</div>


<div id="container">
	<div id="header" class="clear-block">
		<?php if ($logo) { ?><div id="logocontainer"><a href="<?php print $base_path ?>" title="<?php print t('Home') ?>"><img src="<?php print $logo ?>" alt="<?php print t('Home') ?>" /></a></div><?php } ?>
		<?php if($site_name || $site_slogan) { ?>
			<div id="texttitles">
			  <?php if ($site_name) { ?><h1 class='site-name'><a href="<?php print $base_path ?>" title="<?php print t('Home') ?>"><?php print $site_name ?></a></h1><?php } ?>
		      <?php if ($site_slogan) { ?><div class='site-slogan'><?php print $site_slogan ?></div><?php } ?>
			</div>
		<?php } ?>
		
		
		<?php if ($search_box){ ?>
		<div id="head_right">
			<div id="search_box">
				<?php  print $search_box; ?>
			</div>
		</div>
		<?php } ?>
	</div>
	
	<div id="wrap" class="clear-block <?php if(!$left_sidebar && !$right_sidebar) print ' no-sidebar '; elseif($left_sidebar && !$right_sidebar) print ' only-left '; elseif(!$left_sidebar && $right_sidebar) print ' only-right '?>" >
	
		<?php if($left_sidebar) { ?>
		<div id="left_sidebar"><?php print $left_sidebar ?></div>
		<?php } ?>
		
		<div id="contentarea">
			<?php if ($mission): print '<div id="mission">'. $mission .'</div>'; endif; ?>
			
			<?php if($content_top) {?>
	        	<div id="content_top"><?php print $content_top; ?></div>
	        <?php } ?>
			
			<?php if($breadcrumb){ ?><?php print $breadcrumb ?><?php } ?>
			<?php if($title){ ?><h1 class="title"><?php print $title ?></h1><?php } ?>
	        <?php if($tabs){ ?><div class="tabs"><?php print $tabs ?></div> <?php } ?>
	        <?php if ($show_messages) { print $messages; } ?>
	        <?php if($help){ ?><?php print $help ?><?php } ?>
	        <?php print $content; ?>
	        <?php print $feed_icons ?>
	        
	        <?php if($under_content) {?>
	        	<div id="under_content"><?php print $under_content; ?></div>
	        <?php } ?>
		</div>
		
		<?php if($right_sidebar) { ?>
		<div id="right_sidebar"><?php print $right_sidebar ?></div>
		<?php } ?>
		
	</div>
	
</div>

<div id="container_bottom"></div>

<div id="footer"><?php if($footer_message) print $footer_message . '. '; ?> <!-- Please do not remove this credit line. This encourage us to update, contribute more themes to the community. --><span class="credit">Powered by <a href="http://www.worthapost.com/" title="Drupal themes">Drupal Themes</a>, <a href="http://drupal.org/">Drupal</a>. </span></div>

<?php print $closure ?>
</body>
</html>