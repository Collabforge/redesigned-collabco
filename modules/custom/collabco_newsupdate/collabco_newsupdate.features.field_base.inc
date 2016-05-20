<?php
/**
 * @file
 * collabco_newsupdate.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function collabco_newsupdate_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_video_link'.
  $field_bases['field_video_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_link',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
