<?php
/**
 * @file
 * collabco_collaboration_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_collaboration_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['collabco_collaboration-challenge'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'challenge',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-ctags'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ctags',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 10,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-edit_collaboration'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'edit_collaboration',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second_top',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-header_collaboration'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_collaboration',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'collaborate',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -42,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-header_featured_collaborations'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_featured_collaborations',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'featured-collaborations',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-header_parked_collaborations'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_parked_collaborations',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'parked-collaborations',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -36,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-header_turned_collaborations'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_turned_collaborations',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'collaborations-turned-projects',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-how_to_start_collaborate'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'how_to_start_collaborate',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'collaborate',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'content_lower',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-likes'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'likes',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-single_collab_actions'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'single_collab_actions',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-single_collab_add_discussion'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'single_collab_add_discussion',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*/discussions',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-single_collab_add_document'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'single_collab_add_document',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*/documents',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-single_collaboration_breadcrumb'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'single_collaboration_breadcrumb',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'content_upper',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -39,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-single_collaboration_header'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'single_collaboration_header',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 1,
      ),
      'collabco_theme' => array(
        'region' => 'full_width_top',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -43,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_collaboration-team'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'team',
    'module' => 'collabco_collaboration',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 5,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 5,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 5,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-258f84be4390f5316a10e6602678fbf9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '258f84be4390f5316a10e6602678fbf9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'collaborate',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -39,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-31a0bc6da485d9ab564657bb2d9e1023'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '31a0bc6da485d9ab564657bb2d9e1023',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'collabco_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-4ccc1111af4f2f935b67816191fdb2c0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '4ccc1111af4f2f935b67816191fdb2c0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'collabco_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-a574482833f737364236dac3d79883d5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a574482833f737364236dac3d79883d5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'collaborate',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -38,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-latest_collaborations-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'latest_collaborations-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-nodequeue_1-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'nodequeue_1-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'collabco_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
