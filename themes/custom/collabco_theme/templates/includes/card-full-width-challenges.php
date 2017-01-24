<?php

/**
 *  MY HUBS --> DEVELOPING --> COLLABORATIONS VIEW
 *
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
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

?>
<div class="full-width-card challenge row">
  <div class="col-sm-12 wrap">
    <div class="border-box clearfix">

      <div class="col-sm-4 feat-img">
          <i class="icon-flag"></i>     
          <?php echo $fields['field_challenge_image']->content; ?>
      </div>

      <div class="col-sm-6 content">
        <?php echo $fields['name']->content; ?>
        <?php echo $fields['description']->content; ?>
      </div>

      <aside class="col-sm-2">
        <div class="follow event card-full-link">
          <a href="#" class='<?php echo $follow_classes ?>'></a>
          <span class='<?php echo $follow_count_classes ?>'><?php echo $fields['count']->content; ?></span>
          <?php echo flag_create_link('challenge_flag', $tid, $flag_vars); ?>
        </div>
        <div class="comment card-full-link">
          <a href='<?php echo $term_url ?>' class="icon-diamond"></a>
          <span class="value"><?php echo $fields['ideas_count_in_challenge']->content; ?></span>
          <span class="flag-wrapper"><?php echo $term_link ?></span>
        </div>
      </aside>

    </div> 
  </div>  

</div>
