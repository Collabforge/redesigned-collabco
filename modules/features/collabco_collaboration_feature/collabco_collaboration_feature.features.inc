<?php
/**
 * @file
 * collabco_collaboration_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_collaboration_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function collabco_collaboration_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow Collaboration".
  $flags['follow_collaboration'] = array(
    'entity_type' => 'node',
    'title' => 'Follow Collaboration',
    'global' => 0,
    'types' => array(
      0 => 'hub',
    ),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'collabco_collaboration_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Support Collaboration".
  $flags['support_collaboration'] = array(
    'entity_type' => 'node',
    'title' => 'Support Collaboration',
    'global' => 0,
    'types' => array(
      0 => 'hub',
    ),
    'flag_short' => 'Support',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unsupport',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -9,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'collabco_collaboration_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function collabco_collaboration_feature_node_info() {
  $items = array(
    'conversation' => array(
      'name' => t('Discussion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hub' => array(
      'name' => t('Collaboration'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Collaboration title'),
      'help' => '',
    ),
    'knowledge_object' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
