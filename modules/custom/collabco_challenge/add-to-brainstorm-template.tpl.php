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

<p>Is your idea not fitting into a <?php echo variable_get('csl_challenges'); ?>? Add it to ongoing <?php echo $on_going_challenge_name;?> <?php echo variable_get('csl_challenges'); ?>!</p>

<a class="btn btn-default add-to-brainstorm" href="<?php echo $on_going_challenge_url?>" title="Add to Brainstorm">Add to <?php echo $on_going_challenge_name;?></a>
