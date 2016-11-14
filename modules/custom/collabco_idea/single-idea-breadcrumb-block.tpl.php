<?php
/**
 * @file
 * Default theme implementation for Idea Breadcrum block.
 */
?>

<div class="breadcrumb-container">
  <ol class="breadcrumb" style="background-color:white;">
    <li><a href="/">Home</a></li>
    <li><a href="/challenge"><?php echo ucfirst(variable_get('csl_challenges'));?></a></li>
    <li><?php echo $challenge; ?></li>
    <li><?php echo $idea; ?></li>
  </ol>
</div>
