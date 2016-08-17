<?php
/**
 * @file
 * Default theme implementation for Idea header block.
 */
?>

<div class="container" data-background="<?php echo $image?>" data-type="idea"></div>

<!-- Support, Follow and Comments icons in top-right -->
  <div class="stats clearfix">
      <!-- Supports -->
      <div class="stat icon-svg-heart-white"><?php  echo $support; ?></div>
      <!-- Follow -->
      <div class="stat icon-svg-eye-white"><?php echo $follow; ?></div>
      <!-- Comments -->
      <div class="stat icon-svg-dialogue-white"><?php  echo $comments; ?></div>
  </div>

<!-- Main block region -->
<i class="icon-diamond"></i>
  <h2>
    <?php print $idea; ?>
  </h2>
<p><?php print $short; ?></p>

</div>
