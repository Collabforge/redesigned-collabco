<?php
/**
 * @file
 * Default theme implementation for Single Collaboration header block.
 */
?>

<div class="container" data-background="<?php echo $image; ?>" data-type="collaborate"></div>

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
<i class="icon-beaker"></i>
  <h2><?php echo $collaborate ?></h2>
<p><?php echo $short ?></p>
