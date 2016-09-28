<?php
/**
 * @file
 * collabco_core_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_core_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-44cc33472dd9db1a4a41dd297f5a1e55'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '44cc33472dd9db1a4a41dd297f5a1e55',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'tags/*',
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
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Content relating to this tag:',
    'visibility' => 1,
  );

  $export['views-messages_digest-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'messages_digest-block',
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

  $export['views-profile_badges-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'profile_badges-block_1',
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

  $export['views-profile_badges-collab_badges'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'profile_badges-collab_badges',
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

  $export['views-your_contrib-mobile_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'your_contrib-mobile_block',
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

  $export['views-your_contrib-your_contrib'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'your_contrib-your_contrib',
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
