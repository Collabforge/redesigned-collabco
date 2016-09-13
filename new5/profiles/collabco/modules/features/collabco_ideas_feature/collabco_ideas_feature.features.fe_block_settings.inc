<?php
/**
 * @file
 * collabco_ideas_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_ideas_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['collabco_idea-collaborations'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collaborations',
    'module' => 'collabco_idea',
    'node_types' => array(),
    'pages' => 'node/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 2,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_idea-header_archived_ideas'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_archived_ideas',
    'module' => 'collabco_idea',
    'node_types' => array(),
    'pages' => 'ideas_archived',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 3,
      ),
      'collabco_theme' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -33,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_idea-likes'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'likes',
    'module' => 'collabco_idea',
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

  $export['collabco_idea-promote'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'promote',
    'module' => 'collabco_idea',
    'node_types' => array(
      0 => 'idea',
    ),
    'pages' => 'node/*',
    'roles' => array(
      'authenticated user' => 2,
      'Moderator' => 3,
    ),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 15,
      ),
      'collabco_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => 15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 15,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['collabco_idea-single_idea_actions'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'single_idea_actions',
    'module' => 'collabco_idea',
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

  $export['collabco_idea-single_idea_breadcrumb'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'single_idea_breadcrumb',
    'module' => 'collabco_idea',
    'node_types' => array(),
    'pages' => 'idea/*',
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
        'weight' => -38,
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

  $export['collabco_idea-single_idea_header'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'single_idea_header',
    'module' => 'collabco_idea',
    'node_types' => array(),
    'pages' => 'idea/*',
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
        'weight' => -44,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['collabco_idea-tags'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tags',
    'module' => 'collabco_idea',
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

  $export['collabco_idea-team'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'team',
    'module' => 'collabco_idea',
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

  $export['quicktabs-my_hub_ideas'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'my_hub_ideas',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'myhub/developing',
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

  $export['views-4c7e53542b2c60de5c995bef592abef4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '4c7e53542b2c60de5c995bef592abef4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'challenge',
    'roles' => array(
      'authenticated user' => 2,
    ),
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
    'visibility' => 0,
  );

  $export['views-58d3927b971796abc69e11439f33772c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '58d3927b971796abc69e11439f33772c',
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

  $export['views-677c72a6794e6179ffa2946914e89964'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '677c72a6794e6179ffa2946914e89964',
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

  $export['views-8057de6ae37fa6fb676e14c306088c3f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8057de6ae37fa6fb676e14c306088c3f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'challenge/*',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'content_middle',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-af1a856ad23ecaccfd1929ab5b2d5c15'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'af1a856ad23ecaccfd1929ab5b2d5c15',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'challenge/*',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'content_middle',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -40,
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

  $export['views-archieved_ideas-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'archieved_ideas-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'challenge',
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

  $export['views-collaborations_of_an_idea-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collaborations_of_an_idea-block',
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

  $export['views-latest_ideas-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'latest_ideas-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'challenge',
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
        'weight' => -41,
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

  $export['views-profile_badges-idea_badges'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'profile_badges-idea_badges',
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
