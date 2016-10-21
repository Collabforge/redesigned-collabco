<?php
/**
 * @file
 * collabco_appearance_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_appearance_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['collabco_home-header_home'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_home',
    'module' => 'collabco_home',
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
        'region' => 'content_top',
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

  $export['collabco_home-privacy'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'privacy',
    'module' => 'collabco_home',
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
        'region' => 'footer-2-col',
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

  $export['collabco_profile-header_mobile_user_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_mobile_user_block',
    'module' => 'collabco_profile',
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
        'region' => 'nav_actions_mobile',
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

  $export['collabco_profile-header_user_profile_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_user_profile_block',
    'module' => 'collabco_profile',
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
        'region' => 'nav_actions',
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

  return $export;
}
