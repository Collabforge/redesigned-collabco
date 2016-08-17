<?php
/**
 * @file
 * collabco_myhub_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function collabco_myhub_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'my_hub_collaborations';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'My hub - Following';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_58d3927b971796abc69e11439f33772c',
      'hide_title' => 1,
      'title' => 'Ideas',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_4ccc1111af4f2f935b67816191fdb2c0',
      'hide_title' => 1,
      'title' => 'Co-Labs',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_challenges_you_follow-block',
      'hide_title' => 1,
      'title' => 'Challenges',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Challenges');
  t('Co-Labs');
  t('Ideas');
  t('My hub - Following');

  $export['my_hub_collaborations'] = $quicktabs;

  return $export;
}
