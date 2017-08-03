
<div class="header-image-bg" style="background-image: url(<?php echo $fields['field_challenge_image']->content; ?>);"></div>

<div class="container" data-type="challenge">

  <div class="stats clearfix">
      <!-- Ideas Count -->
      <div class="stat icon-diamond"><?php  echo $fields['ideas_count_in_challenge']->content ?></div>
      <!-- Follow -->
      <div class="stat icon-eye"><?php echo $fields['count']->content ?></div>
  </div>

  <i class="icon-flag"></i>
  <h2><?php echo $fields['name']->content; ?></h2>

  <?php
    if (!empty($row->field_field_sponser[0]['raw'])) {
      $sponser_id = $row->field_field_sponser[0]['raw']['target_id'];
      $account = user_load($sponser_id);
      $picture = theme('user_picture', array('account' => $account));
      echo "<div class='sponsor clearfix'>";
        echo $picture;
        echo "<div class='sponsor-name'><span>";
          echo csl('challenges',0,0) . " ". csl('sponsor');
          echo "</span><br>";
          echo theme('username', array('account' => $account));
        echo "</div>";
      echo "</div>";
    }

    $tid = $fields['tid']->raw;
    echo '<div class="corner-ribbon">' . collabco_challenge_status_string($tid) . '</div>';
   ?>

</div>
