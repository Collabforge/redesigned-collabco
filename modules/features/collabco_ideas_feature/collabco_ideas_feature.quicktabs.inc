<?php
/**
 * @file
 * collabco_ideas_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function collabco_ideas_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'my_hub_ideas';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'My hub - Developing';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_677c72a6794e6179ffa2946914e89964',
      'hide_title' => 1,
      'title' => 'Ideas',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_31a0bc6da485d9ab564657bb2d9e1023',
      'hide_title' => 1,
      'title' => 'Co-Labs',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Co-Labs');
  t('Ideas');
  t('My hub - Developing');

  $export['my_hub_ideas'] = $quicktabs;

  return $export;
}
