<?php

/**
 * @file
 * Idea likes block.
 */
 $flag_vars = array(
   'after_flagging' => TRUE,
 );
 $follow_classes = $follow_flag?'icon-eye-full flagged':'icon-eye';
 $support_classes = $support_flag?'icon-heart-full flagged':'icon-heart';

 $follow_count_classes = $follow_flag?'value flagged':'value';
 $support_count_classes = $support_flag?'value flagged':'value';

 $idea_title = str_replace(' ', '&nbsp;', $idea_title);
 $share_content = "mailto:?subject=Sharing&nbsp;&nbsp;".csl('ideas',1,0)."&body=Hi,%0DI&nbsp;found&nbsp;this&nbsp;".csl('ideas',1,0)."&nbsp;and&nbsp;thought&nbsp;you&nbsp;might&nbsp;like&nbsp;it&nbsp;%0D" . $share_link;
 $request_to_join_content = "mailto:" . $mail ."?subject=Request&nbsp;to&nbsp;join:&nbsp;" . $idea_title;
?>

  <div class="sidebar-stats">

    <div class="stat clearfix">
      <div class='<?php echo $support_count_classes ?>'>
      <?php echo $support; ?></div>
      <div class="stat-label support event sidebar-link">
        <?php echo flag_create_link('support_idea', $nid, $flag_vars); ?>
        <a href="#" class='<?php echo $support_classes ?>'></a>
      </div>
    </div>

    <div class="stat clearfix">
      <div class='<?php echo $follow_count_classes ?>'>
      <?php echo $follow; ?></div>
      <div class="stat-label follow event sidebar-link">
        <?php echo flag_create_link('following_idea', $nid, $flag_vars); ?>
        <a href="#" class='<?php echo $follow_classes ?>'></a>
      </div>
    </div>

    <div class="share stat clearfix">
      <div class="stat-label sidebar-link clearfix">
        <a href=<?php echo $share_content;?>><?php echo t('Share') ?></a>
        <a href=<?php echo $share_content;?> class="icon-share"></a>
      </div>
    </div>

    <div class="stat clearfix mail">
      <div class="stat-label sidebar-link clearfix">
        <a href="<?php echo $request_to_join_content; ?>">Request to join / contact </a>
        <a href="<?php echo $request_to_join_content; ?>" class='icon-mail'></a>
      </div>
    </div>

  </div>
