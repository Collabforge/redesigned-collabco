<?php
/**
 * @file
 * collabco_core.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function collabco_core_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashboard';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Dashboard Challenges';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_7144e8560e2d68e992ae46c317fa74c3',
      'hide_title' => 1,
      'title' => 'Your ideas',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_ideas_by_challenge-block',
      'hide_title' => 1,
      'title' => 'Creating future diplomats',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_ideas_by_challenge-block_1',
      'hide_title' => 1,
      'title' => 'Shaping the aid narrative',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_ideas_by_challenge-block_2',
      'hide_title' => 1,
      'title' => 'Engaging Latin America',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_ideas_by_challenge-block_3',
      'hide_title' => 1,
      'title' => 'Better Smartraveller',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_ideas_by_challenge-block_4',
      'hide_title' => 1,
      'title' => 'Engaging diasporas',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 0,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Better Smartraveller');
  t('Creating future diplomats');
  t('Dashboard Challenges');
  t('Engaging Latin America');
  t('Engaging diasporas');
  t('Shaping the aid narrative');
  t('Your ideas');

  $export['dashboard'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'ideas_browse_page';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Ideas browse quicktabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_943af59e04628e01ceefd59d925c8e9e',
      'hide_title' => 1,
      'title' => 'Newest',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_95d3d84ae9c822287101df76326db1f2',
      'hide_title' => 1,
      'title' => 'Most Discussed',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_ed48401daa99ca487f58e0867457178e',
      'hide_title' => 1,
      'title' => 'Most Supported',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_75a0956e6c59e9c37e2f759271ea4f44',
      'hide_title' => 1,
      'title' => 'By Implementing Area',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_ideas_main_view-block_1',
      'hide_title' => 1,
      'title' => 'By Strategic Priority',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_ideas_main_view-block_2',
      'hide_title' => 1,
      'title' => 'Search',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('By Implementing Area');
  t('By Strategic Priority');
  t('Ideas browse quicktabs');
  t('Most Discussed');
  t('Most Supported');
  t('Newest');
  t('Search');

  $export['ideas_browse_page'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'library_filter';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Library Filter';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_recent_files-block_1',
      'hide_title' => 1,
      'title' => 'All',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_recent_files-block_2',
      'hide_title' => 1,
      'title' => 'Most recent',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_recent_files-block_3',
      'hide_title' => 1,
      'title' => 'Alphabetical',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All');
  t('Alphabetical');
  t('Library Filter');
  t('Most recent');

  $export['library_filter'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'library_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Library Quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_recent_files-block_1',
      'hide_title' => 1,
      'title' => 'All',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_recent_files-block_4',
      'hide_title' => 1,
      'title' => 'Stories',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_recent_files-block_5',
      'hide_title' => 1,
      'title' => 'Patterns',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_recent_files-block_6',
      'hide_title' => 1,
      'title' => 'Frameworks',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_recent_files-block_7',
      'hide_title' => 1,
      'title' => 'Approaches',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_recent_files-block_8',
      'hide_title' => 1,
      'title' => 'Resources',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All');
  t('Approaches');
  t('Frameworks');
  t('Library Quicktab');
  t('Patterns');
  t('Resources');
  t('Stories');

  $export['library_quicktab'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'solutions_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Solutions Quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'solutions_main_view',
      'display' => 'ideas_newest_first',
      'args' => '%2',
      'title' => 'Newest',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'solutions_main_view',
      'display' => 'ideas_most_discussed',
      'args' => '%2',
      'title' => 'Most Discussed',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'solutions_main_view',
      'display' => 'ideas_most_liked',
      'args' => '%2',
      'title' => 'Most Supported',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'bid' => 'views_delta_solutions_main_view-block_2',
      'hide_title' => 1,
      'title' => 'Search',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Most Discussed');
  t('Most Supported');
  t('Newest');
  t('Search');
  t('Solutions Quicktab');

  $export['solutions_quicktab'] = $quicktabs;

  return $export;
}
