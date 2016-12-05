<?php

/**
 * @file
 * Displays the Challenge term assoc with the Idea that started this colab.
 */
?>
<div class="item stat">
    <?php echo $challenge_link; ?>
</div>

<h2 class="related-ideas">Related <?=csl('ideas',1,0);?></h2>
<div class="item stat">
    <?php echo $idea_link; ?>
</div>
