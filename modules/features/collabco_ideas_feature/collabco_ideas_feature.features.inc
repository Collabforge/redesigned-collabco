<?php
/**
 * @file
 * collabco_ideas_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_ideas_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function collabco_ideas_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow Idea".
  $flags['following_idea'] = array(
    'entity_type' => 'node',
    'title' => 'Follow Idea',
    'global' => 0,
    'types' => array(
      0 => 'idea',
    ),
    'flag_short' => '[variable:follow]',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Un[variable:follow]',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'collabco_ideas_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Support Idea".
  $flags['support_idea'] = array(
    'entity_type' => 'node',
    'title' => 'Support Idea',
    'global' => 0,
    'types' => array(
      0 => 'idea',
    ),
    'flag_short' => '[variable:support]',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Un[variable:support]',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'collabco_ideas_feature',
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
function collabco_ideas_feature_node_info() {
  $items = array(
    'idea' => array(
      'name' => t('Idea'),
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
