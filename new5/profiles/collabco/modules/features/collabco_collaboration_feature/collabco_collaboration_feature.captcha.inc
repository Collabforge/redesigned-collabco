<?php
/**
 * @file
 * collabco_collaboration_feature.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function collabco_collaboration_feature_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_hub_form';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['comment_node_hub_form'] = $captcha;

  return $export;
}
