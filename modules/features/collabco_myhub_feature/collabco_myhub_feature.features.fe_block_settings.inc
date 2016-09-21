<?php
/**
 * @file
 * collabco_myhub_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_myhub_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['collabco_myhubs-header_myhubs'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_myhubs',
    'module' => 'collabco_myhubs',
    'node_types' => array(),
    'pages' => 'myhub
myhub/*
users/*',
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

  $export['collabco_myhubs-myhub_links'] = array(
    'cache' => 1,
    'css_class' => 'profile-menu',
    'custom' => 0,
    'delta' => 'myhub_links',
    'module' => 'collabco_myhubs',
    'node_types' => array(),
    'pages' => 'myhub*
users/*',
    'roles' => array(),
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
        'weight' => -41,
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

  $export['collabco_myhubs-myhub_welcome'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'myhub_welcome',
    'module' => 'collabco_myhubs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'collabco_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -41,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['quicktabs-my_hub_collaborations'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'my_hub_collaborations',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'myhub/following',
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

  $export['views-2b14d775fef07b47e68c4e559319dd47'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2b14d775fef07b47e68c4e559319dd47',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'myhub',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'collabco_theme',
        'weight' => -36,
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
