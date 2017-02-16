<?php
/**
 * @file
 * Default theme implementation for PCP block.
 *
 * Available variables:
 *  $uid: Current user ID.
 *  $current_percent: From 0 to 100% of how much the profile is complete.
 *  $next_percent: The percent if the user filled the next field.
 *  $completed: How many fields the user has filled.
 *  $incomplete: The inverse of $completed, how many empty fields left.
 *  $total: Total number of fields in profile.
 *  $nextfield_title: The name of the suggested next field to fill (human).
 *  $nextfield_name: The name of the suggested next field to fill (machine).
 *  $nextfield_id: The id of the $nextfield.
 *
 * @see template_preprocess_pcp_profile_percent_complete()
 */
?>


<div data-toggle="popover" data-container="span.pop" data-trigger="hover" data-html="true" data-placement="right" data-content="<p><?=csl('collaborations',1,1);?> appear from great <?=csl('ideas',1,0);?>. When the <?=csl('idea');?> has gained enough <?=csl('support');?> and approval, it is promoted by a site moderator into a <?=csl('collaborations',1,1);?>, where the <?=csl('idea');?> can be made a reality. You'll be able to create discussion threads, upload relevant documents and continue to support and follow <?=csl('collaborations',1,1);?>. With a bit of luck and work, they will get upgraded to Projects!</p><i class='icon-beaker'></i>">

<h2 class="icon-beaker"><?=csl('collaborations',1,1);?><span class="pop hidden-xs"></span></h2>

<p>Develop great <?=csl('idea',1);?> further.</p>
</div>
