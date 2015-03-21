<?php // $Id$

/**
 * @file
 * Main template file
 *
 * @see template_preprocess_page(), preprocess/preprocess-page.inc
 * http://api.drupal.org/api/function/template_preprocess_page/6
 */

// echo 'deepak' .$node->nid;

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
  <html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language; ?>" xml:lang="<?php print $language->language; ?>">
    <head>
      <?php print $head; ?>
      <title><?php print $head_title; ?></title>
      <?php print $styles; ?>
      <?php print $ie_styles; ?>
      <?php print $scripts; ?>
     <!--style type="text/css" media="all">@import "<?php print base_path() . path_to_theme() ?>/css/user_bar.css";</style-->

    </head>
  <body<?php print $body_attributes; ?>>
  <?php if (!empty($admin)) print $admin; // support for: http://drupal.org/project/admin ?>
  <div id="wrapper">
    <div<?php print $header_attributes; ?>>
      <div id="header-inner">
        <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print $site_name; ?>" id="logo"><img src="<?php print $logo; ?>" alt="<?php if ($site_name): print $site_name;  endif; ?>" /></a>
        <?php endif; ?>
        <?php if ($site_name): ?>
        <span id="site-name"> <a href="<?php print $front_page; ?>" title="<?php print $site_name; ?>"><?php print $site_name; ?></a> </span>
        <?php endif; ?>
        <?php if ($site_slogan): ?>
          <span id="site-slogan"><?php print $site_slogan; ?></span>
        <?php endif; ?>
      </div>
    </div>



<?php loadmyuser() ?>
<?php if ($primary_links): ?>
  <div id="navigation"><?php print $primary_links; ?></div>
<?php endif; ?>


<!--
<?php if (!$user->uid): ?>
	  <div id="dynamicheader"><h2>Sign in <strong></strong></h2><?php print sky_user_bar() ?></div>
<?php endif; ?>
-->


    <div id="container" class="layout-region">
      <?php if ($left): ?>
        <div id="sidebar-left" class="sidebar">
          <div class="inner">
            <?php print $left; ?>
          </div>
        </div>
      <!-- END HEADER -->
      <?php endif; ?>



    <div id="main">
        <div class="main-inner">
        	<?php  global $user; ?>
        	<?php if (in_array('authenticated user', $user->roles)): ?>
        	<span class="headerTinymanName"><?php print "Welcome <b>". $user->profile_user_name ."</b>"; ?></span>
        	<?php endif; ?>

          <?php if ($breadcrumb): ?>
            <div class="breadcrumb clearfix"><?php print $breadcrumb; ?></div>
          <?php endif; ?>
          <?php if ($show_messages && $messages != ""): ?>
          <?php print $messages; ?>
          <?php endif; ?>
          <?php if ($is_front && $mission): ?>
            <div class="mission"><?php print $mission; ?></div>
          <?php endif; ?>

          <?php if ($contenttop): ?>
            <div id="content-top"><?php print $contenttop; ?></div>
            <!-- END CONTENT TOP -->
          <?php endif; ?>
          <?php if ($title): ?>
            <h2 class="title"><?php print $title; ?></h2>
          <?php endif; ?>
          <?php if ($help): ?>
            <div class="help"><?php print $help; ?></div>
          <?php endif; ?>
          <?php print $tabs; ?>


<?php if($qbcontenttype) {?>
 <div id="content-qbtaskpage" class="clearfix qbtaskpage <?php print $qbcontenttype; ?>"><?php print $content; ?></div>
<?php } else {?>
<div id="content" class="clearfix"><?php print $content; ?></div>
<?php }?>






          <!-- END CONTENT -->


          <?php print $feed_icons; ?>
          <?php if ($contentbottom): ?>
            <div id="content-bottom"><?php print $contentbottom; ?></div>
          <?php endif; ?>
        </div>
        <!-- END MAIN INNER -->
      </div>
      <!-- END MAIN -->
      <?php if ($right): ?>
        <div id="sidebar-right" class="sidebar">
          <div class="inner">
          <?php print $right; ?>
          </div>
        </div>
      <!-- END SIDEBAR RIGHT -->
      <?php endif; ?>
    </div>
    <!-- END CONTAINER -->
    <div class="push">&nbsp;</div>
  </div>
  <!-- END WRAPPER -->
  <div id="footer" class="layout-region">
    <div id="footer-inner">
      <?php print $contentfooter; ?>
      <?php print $footer_message; ?>
    </div>
  </div>
  <?php print $closure; ?>
  </body>
</html>