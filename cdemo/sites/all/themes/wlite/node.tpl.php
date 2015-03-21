
<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } if($teaser) print ' teaser'; ?>">
<?php if ($page == 0): ?>
<?php print $picture ?>
<?php endif; ?>
<?php if ($page == 0): ?>
  <h2 class="title"><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

  <?php if ($submitted): ?>
    <div class="submitted"><?php print $submitted; ?> <?php if (($page != 0) && (theme_get_setting('endless_corporate_print') == 1)){ ?><div class="print_node"><a href="javascript:window.print()"><img src="<?php print base_path() . path_to_theme() ?>/images/node/print.png" /></a></div><?php } ?></div>
  <?php endif; ?>
  
      <?php if ($taxonomy): ?>
      <div class="terms nodeterms"><?php if(!empty($terms)) print '<strong>Tags: </strong>' . $terms ?></div>
    <?php endif;?>
 
  <div class="content clear-block">
    <?php print $content ?>
  </div>

  <div class="clear-block">


    <?php if ($links): ?>
      <div class="links"><?php print $links; ?></div>
    <?php endif; ?>
  </div>

</div>

