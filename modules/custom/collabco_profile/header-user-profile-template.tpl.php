<?php

/**
 * @file
 * Default theme implementation for Header user profile block
 */

?>

<div class="clearfix" id="nav-profile-dropdown" >
  <div class="dropdown" id="navigation-profile-details">

    <a class="dropdown-toggle" id="profile-caret" aria-label="User profile menu" data-toggle="dropdown">
      <?php echo $name ?>
      <span class="caret"></span>
    </a>
    <ul class="dropdown-menu user-nav">
      <li class="first leaf user-nav-my-profile" ><a href="<?php echo "/user/$user->uid/edit/account"; ?>" class="icon-profile"><?php echo t('Edit your profile'); ?></a></li>
      <li class="last leaf user-nav-logout" ><a href="<?php echo "/user/logout"; ?>" title="Log out" class="icon-music-eject"><?php echo t('Log out'); ?></a></li>
    </ul>
  </div>
    <?php
      $picture = theme('user_picture', array('account' => $user));
      echo $picture;
    ?>
</div>
