<?php

/**
 * @file
 * The theme system, which controls the output of Drupal.
 *
 * The theme system allows for nearly all output of the Drupal system to be
 * customized by user themes.
 */
?>
<i class="icon-stormy"></i>
<h2>Square peg, round hole?</h2>

<p>Is your <?=csl('ideas');?> not fitting into a <?=csl('challenges',1,1);?>? Add it to ongoing <?php echo $on_going_challenge_name;?> <?=csl('challenges',0,1);?>!</p>

<a class="btn btn-default add-to-brainstorm" href="<?php echo $on_going_challenge_url?>" title="Add to Brainstorm">Add to <?php echo $on_going_challenge_name;?></a>
