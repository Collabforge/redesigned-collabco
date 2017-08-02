<?php $nid = $fields['nid']->raw;
 $flag_vars = array(
   'after_flagging' => TRUE,
 );
$user_flags = flag_get_user_flags('node',$nid);
$follow_flag  = FALSE;
$support_flag = FALSE;
if (array_key_exists('follow_collaboration', $user_flags)){
  $follow_flag = TRUE;
}
if (array_key_exists('support_collaboration', $user_flags)){
  $support_flag = TRUE;
}
$follow_classes = $follow_flag?'icon-eye-full flagged':'icon-eye';
$support_classes = $support_flag?'icon-heart-full flagged':'icon-heart';

$follow_count_classes = $follow_flag?'value flagged':'value';
$support_count_classes = $support_flag?'value flagged':'value';

 $node_path = drupal_get_path_alias('node/'.$nid);
 $comment_url = url($node_path,array('fragment'=>'comment-form'));
 $comment_link = l('Comment',$node_path,array('fragment'=>'comment-form'));
 $total_items = count( $view->result );

 ?>
<div class="card large collaborations">

  <article>

    <div class="feat-img">
      <div class="img-icon icon-beaker"></div>
      <?php echo $fields['field_featured_hub_image']->content;  ?>
    </div>

    <div class="content">
      <span class="title"><?php echo $fields['title']->content;  ?></span>
      <?php echo $fields['field_tag_line']->content; ?>

      <?php
        if (isset($fields['field_collaboration_phase'])) {
          switch ($fields['field_collaboration_phase']->content) {
            case '1':
              echo "<div class='cockade tool'></div>
                    <div class='tag green-dark'>Building & prototyping</div>";
              break;

            case '2':
              echo "<div class='cockade sinth'></div>
                    <div class='tag orange'>Testing</div>";
            break;

            case '3':
              echo "<div class='cockade paper-pencil'></div>
                    <div class='tag blue'>In Review/div>";
            break;
          }
        }
     ?>
    </div>

    <footer>
      <div class="support event card-large-link">
        <a href="#" class='<?php echo $support_classes ?>'></a>
        <span class='<?php echo $support_count_classes ?>'><?php echo $fields['count_1']->content; ?></span>
        <?php echo flag_create_link('support_collaboration', $nid, $flag_vars); ?>
      </div>
      <div class="follow event card-large-link">
        <a href="#" class='<?php echo $follow_classes ?>'></a>
        <span class='<?php echo $follow_count_classes ?>'><?php echo $fields['count']->content; ?></span>
        <?php echo flag_create_link('follow_collaboration', $nid, $flag_vars); ?>
      </div>
      <div class="comment card-large-link">
        <a href='<?php echo $comment_url ?>' class="icon-dialogue"></a>
        <span class="value"><?php echo $fields['comment_count']->content; ?></span>
        <span class="flag-wrapper"><?php echo $comment_link ?></span>
      </div>
    </footer>

  </article>

</div>




