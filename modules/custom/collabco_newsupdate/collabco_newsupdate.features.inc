<?php
/**
 * @file
 * collabco_newsupdate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_newsupdate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function collabco_newsupdate_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function collabco_newsupdate_node_info() {
  $items = array(
    'news_update' => array(
      'name' => t('News Update'),
      'base' => 'node_content',
      'description' => t('For adding blog posts, news updates or media releases.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
