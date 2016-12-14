<?php $nid = $fields['nid']->raw;
 $flag_vars = array(
   'after_flagging' => TRUE,
   'title' => 'slide_show',
   'link_title' =>'slide_show'
 );
$user_flags = flag_get_user_flags('node',$nid);
$follow_flag  = FALSE;
$support_flag = FALSE;
if (array_key_exists('following_idea', $user_flags)){
  $follow_flag = TRUE;
}
if (array_key_exists('support_idea', $user_flags)){
  $support_flag = TRUE;
}  
$follow_classes = $follow_flag?'icon-eye-full flagged':'icon-eye';
$support_classes = $support_flag?'icon-ignition-thumbs-up flagged':'icon-ignition-thumbs-o-up';

$follow_count_classes = $follow_flag?'value flagged':'value';
$support_count_classes = $support_flag?'value flagged':'value';

 $node_path = drupal_get_path_alias('node/'.$nid);
 $comment_url = url($node_path,array('fragment'=>'comment-form'));

 ?> 

 <div class="card small slideshow">
  <article>
    <div class="feat-img">
      <div class="img-icon icon-diamond"></div>
      <?php echo $fields['field_featured_picture']->content;  ?>
    </div>
    <div class="content">
      <span class="title"><?php echo $fields['title']->content;  ?></span>
      <?php echo $fields['field_tag_line']->content; ?> 
    </div>
    <footer>
      <div class="support event small-card-link">
       <a href="#" class='<?php echo $support_classes ?>'></a>
        <span class='<?php echo $support_count_classes ?>'><?php echo $fields['count_1']->content; ?></span>
         <?php echo flag_create_link('support_idea', $nid, $flag_vars); ?>
      </div>
      <div class="follow event small-card-link">
        <a href="#" class='<?php echo $follow_classes ?>'></a>
        <span class='<?php echo $follow_count_classes ?>'><?php echo $fields['count']->content; ?></span>
        <?php echo flag_create_link('following_idea', $nid, $flag_vars); ?>
      </div>
      <div class="comment small-card-link">
        <a href='<?php echo $comment_url ?>' class="icon-dialogue"></a>
        <span class="value"><?php echo $fields['comment_count']->content; ?></span>
      </div>

    </footer>
  </article>

</div>
