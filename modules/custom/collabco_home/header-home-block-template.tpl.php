<?php
/**
 * @file
 * Default theme implementation for home page block.
 *
 * Available variables:
 *  $user_name: user name.
 */
?>

<div id="header-home-title">
  <p> <span>Hi <?php echo $user_name; ?></span>, ready to get started?</p>
</div>

<div class="intro-blocks row ">
  
  <div class="col-sm-4 challenges">
    <i class="icon-flag"></i>
    <a href="/challenge">     
      <p>Explore</p>
      <p class="title"><?=csl('challenges',1,1);?></p>
    </a>
  </div>
  <div class="col-sm-4 ideas">
    <i class="icon-diamond"></i>
    <a href="/challenge/brainstorm">
      <p>Brainstorm</p>
      <p class="title"><?=csl('ideas',1,1); ?></p>
    </a>
  </div>
  <div class="col-sm-4 learn-more">
    <i class="icon-question-mark"></i>
    <a href="/about">
      <p>confused?</p>
      <p class="title">Learn More</p>
    </a>
  </div>
  
</div>
