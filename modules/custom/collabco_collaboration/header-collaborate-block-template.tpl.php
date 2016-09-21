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


<div data-toggle="popover" data-placement="right" data-html="true" data-content="<p>Collaborations appear from great ideas. When an idea has gained enough support and approval, it is promoted by a site moderator into a Collaborations, where the idea can be made a reality. You'll be able to create discussion threads, upload relevant documents and continue to support and follow Collaborations. With a bit of luck and work, they will get upgraded to Projects!</p><i class='icon-beaker'></i>">

<h2 class="icon-beaker">Collaborations<span class="pop hidden-xs"></span></h2>

<p>Develop great ideas further.</p>
</div>
