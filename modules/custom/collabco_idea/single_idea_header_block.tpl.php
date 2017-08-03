<?php
/**
 * @file
 * Default theme implementation for Idea header block.
 */
?>


<div class="header-image-bg" style="background-image: url(<?php echo $image; ?>);"></div>

<div class="container" data-type="idea">

<!-- Support, Follow and Comments icons in top-right -->
  <div class="stats clearfix">
      <!-- Supports -->
      <div class="stat icon-heart"><?php  echo $support; ?></div>
      <!-- Follow -->
      <div class="stat icon-eye"><?php echo $follow; ?></div>
      <!-- Comments -->
      <div class="stat icon-dialogue"><?php  echo $comments; ?></div>
  </div>

<!-- Main block region -->
<i class="icon-diamond"></i>
  <h2>
    <?php print $idea; ?>
  </h2>
<p><?php print $short; ?></p>

</div>
