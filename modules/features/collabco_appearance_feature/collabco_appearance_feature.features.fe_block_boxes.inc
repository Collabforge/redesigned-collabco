<?php
/**
 * @file
 * collabco_appearance_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function collabco_appearance_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'IMS Steps Diamond Image';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'ims_steps_diamond_image';
  $fe_block_boxes->body = '<div class="diamond-image">
<img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/employment/ims_three_steps.png">
</div>';

  $export['ims_steps_diamond_image'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'updates alert';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'updates_alert';
  $fe_block_boxes->body = '<style>
/* Define how each icon button should look like */
.alert-badge {
    position: absolute;
    margin-top: -400px;
    margin-left: 350px;
    background: radial-gradient( center -9px, circle closest-side, white 0, red 26px );
    background: -moz-radial-gradient( center -9px, circle closest-side, white 0, red 26px );
    background: -ms-radial-gradient( center -9px, circle closest-side, white 0, red 26px );
    background: -o-radial-gradient( center -9px, circle closest-side, white 0, red 26px );
    background: -webkit-radial-gradient( center -9px, circle, white 0, red 26px );
    background-color: red;
    border: 2px solid white;
    border-radius: 50%;
    box-shadow: 1px 1px 1px black;
    color: white;
    font: bold 13px Helvetica, Verdana, Tahoma;
    height: 25px;
    padding-top: 4px;
    text-align: center;
    width: 25px;
}
</style>
<?php
global $user;
if(arg(0) == "myhub") {
  if(variable_get(\'myhub_timestamp\') == NULL) {
    $myhub_timestamp = array();
    variable_set(\'myhub_timestamp\', $myhub_timestamp);
  }

  $myhub_timestamp = variable_get(\'myhub_timestamp\');
  $myhub_timestamp[$user->uid] = REQUEST_TIME;

  variable_set(\'myhub_timestamp\', $myhub_timestamp);
}
if(variable_get(\'myhub_timestamp\') != NULL) {
  $myhub_timestamp = variable_get(\'myhub_timestamp\');
  if(isset($myhub_timestamp[$user->uid])) {
    $uidtime = $myhub_timestamp[$user->uid];
    $view = views_get_view(\'messages_of_content_followed_by_user\');
    $view->execute();
    $objects = $view->result;

    foreach ($objects as $key=>$value) {
      if($value->message_timestamp < $uidtime) {
        unset($objects[$key]);
      }
    }
  $count = count($objects);

  }
}
?>
<?php if(isset($count) && $count > 0) { ?>
<div class="alert-badge"><?php print $count;?></div>
<?php } ?>

';

  $export['updates_alert'] = $fe_block_boxes;

  return $export;
}
