<?php

/**
 * @file
 * Default theme implementation for Header user profile block
 */

?>

<div class="user-info">
  <div class="row">
    <a class="glyphicon glyphicon-remove col-xs-2" id="nav-mobile-close" href="#"></a>
     <div class="col-xs-8 text-center">
       <?php
        $picture = theme('user_picture', array('account' => $user));
        echo $picture; ?>
    </div>
    <a href="<?php echo "/user/logout"; ?>" title="Log out" class="col-xs-2 icon-music-eject logout"></a>
  </div>
   
    
    <div class="username">
      <a class="icon-profile" href="<?php echo "/user/$user->uid/edit/account"; ?>"><?php echo $name ?></a>
    </div>
</div>
