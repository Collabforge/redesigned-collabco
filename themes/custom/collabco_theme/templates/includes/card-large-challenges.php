<?php $tid = $fields['tid']->raw;
 $flag_vars = array(
   'after_flagging' => TRUE,
 );

$user_flags = flag_get_user_flags('taxonomy_term',$tid);
$follow_flag  = FALSE;
if (array_key_exists('challenge_flag', $user_flags)){
  $follow_flag = TRUE;
}
$follow_classes = $follow_flag?'icon-eye-full flagged':'icon-eye';
$follow_count_classes = $follow_flag?'value flagged':'value';
$term_url = url('/taxonomy/term/'.$tid, array('fragment' => 'ideas'));
$term_link = l('ideas','/taxonomy/term/'.$tid,array('fragment' => 'ideas'));
$total_items = count( $view->result );
?>



<div class="col-xs-12 col-sm-6 col-md-4 card large challenges total-items-<?php echo $total_items; ?>">
  
  <article>
    <div class="feat-img">
      <div class="img-icon icon-flag"></div>
       
       <?php
         echo $fields['field_challenge_image']->content;

         $tid = $fields['tid']->raw;
         $label = collabco_challenge_status_string($tid);
         $days_left = collabco_challenge_days_left($tid);
         if (!collabco_challenge_is_brainstorm($tid)) {
         if ($label == 'Open' && $days_left > 1 ) {
            $label = t('Ends in @days days', array('@days' => $days_left));
         }elseif ($label == 'Open' && $days_left== 1 ) {
             $label = t('Ends Tomorrow');
         }elseif ($label == 'Open' && $days_left== 0) {
             $label = t('Ends Today');
         }
         }
       ?>
      <p class="icon-watch remaining-days"><span><?php echo $label; ?></span></p>
 
    </div>
    
    <div class="content">
      <span class="title"><?php echo $fields['name']->content;  ?></span>
      <p><?php echo $fields['field_tag_line']->content; ?></p>
      <?php $sponser=TRUE;
       if (empty($fields['field_sponser']) || strpos($fields['field_sponser']->content,"no_sponser")!==FALSE) { 
        $sponser = FALSE;
       } 
      if ($sponser) { ?>
      <div class="cockade tick"></div>      
      <div class="tag green">Sponsored</div>
      <?php } ?>
      
    </div>
    <footer>
      <div class="follow event card-large-link">
        <a href="#" class='<?php echo $follow_classes ?>'></a>
        <span class='<?php echo $follow_count_classes ?>'><?php echo $fields['count']->content; ?></span>
         <?php echo flag_create_link('challenge_flag', $tid, $flag_vars); ?>
      </div>
      <div class="ideas card-large-link">
       <a href='<?php echo $term_url ?>' class="icon-diamond"></a>
      <span class="value"><?php echo $fields['ideas_count_in_challenge']->content; ?></span>
      <span class="flag-wrapper"><?php echo $term_link ?></span>
      </div>
    </footer>
  </article>
  
</div>  
