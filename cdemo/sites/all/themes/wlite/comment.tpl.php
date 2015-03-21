
<div class="comment<?php print ($comment->new) ? ' comment-new' : ''; print ' '. $status; print ' '. $zebra; ?>">

  <div class="clear-block">


  <?php if ($comment->new) : ?>
    <span class="new"><?php print drupal_ucfirst($new) ?></span>
  <?php endif; ?>
<div class="comment_info">
  <?php print $picture ?>
  <?php if ($submitted): ?>
    <span class="submitted"><?php print $submitted; ?></span>
  <?php endif; ?>
 </div>
 
 <div class="comment_right">
    
<h3><?php print $title ?></h3>
    <div class="content">
      <?php print $content ?>
      <?php if ($signature): ?>
      <div class="clear-block">
        <div>—</div>
        <?php print $signature ?>
      </div>
      <?php endif; ?>
    </div>
      <?php if ($links): ?>
    <div class="links"><?php print $links ?></div>
  <?php endif; ?>
</div>
  </div>


</div>
