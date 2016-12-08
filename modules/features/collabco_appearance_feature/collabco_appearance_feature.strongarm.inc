<?php
/**
 * @file
 * collabco_appearance_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function collabco_appearance_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = TRUE;
  $export['colorbox_load'] = $strongarm;

  return $export;
}
