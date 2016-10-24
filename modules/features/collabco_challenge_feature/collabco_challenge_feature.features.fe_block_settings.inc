<?php
/**
 * @file
 * collabco_challenge_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_challenge_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['collabco_challenge-add_to_brainstorm'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'add_to_brainstorm',
    'module' => 'collabco_challenge',
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
    'visibility' => 1,
  );

  $export['collabco_challenge-header_challenge'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_challenge',
    'module' => 'collabco_challenge',
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
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -43,
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

  $export['collabco_challenge-header_standard'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_standard',
    'module' => 'collabco_challenge',
    'node_types' => array(),
    'pages' => 'open-challenges
closed-challenges
archived-ideas
help
about
idea-supporters/*',
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

  $export['term_queue-0'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 0,
    'module' => 'term_queue',
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

  $export['views-3ae42aa206ab98b6a1a3d7b5e905e19d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '3ae42aa206ab98b6a1a3d7b5e905e19d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content_upper',
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
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-challenge_page_header-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'challenge_page_header-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'challenge/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
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
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-challenges_you_follow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'challenges_you_follow-block',
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

  $export['views-closed_challenges-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'closed_challenges-block',
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
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
