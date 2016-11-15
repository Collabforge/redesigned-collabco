<?php
/**
 * @file
 * Default theme implementation for My Hub header block.
 */
?>
<i class="icon-squares"></i>
<h2>Welcome to your Hub, <?php echo $user_name ?></h2>
<p>This is your space where you can view ideas that interest you and manage<br> notifications for the <?=csl('ideas',1,0);?> you <?=csl('follow');?>.</p>

<?php
  $picture = theme('user_picture', array('account' => $user));
  echo $picture;
?>
