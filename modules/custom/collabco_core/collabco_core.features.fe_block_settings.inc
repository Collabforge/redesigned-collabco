<?php
/**
 * @file
 * collabco_core.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_core_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-aboutpagetitle'] = array(
    'cache' => -1,
    'css_class' => 'new-idea-text full-width-title-block page-title-strip whitetxt smallpad-block',
    'custom' => 0,
    'machine_name' => 'aboutpagetitle',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'node/add/knowledge-object/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_theme',
        'weight' => 0,
      ),
      'flip_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'flip_theme',
        'weight' => 3,
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

  $export['block-bottom_logo'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'bottom_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'custom_theme',
        'weight' => 0,
      ),
      'flip_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'flip_theme',
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

  $export['block-challenges'] = array(
    'cache' => -1,
    'css_class' => 'container',
    'custom' => 0,
    'machine_name' => 'challenges',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'challenges',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_theme',
        'weight' => 0,
      ),
      'flip_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'flip_theme',
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

  $export['block-hubs_header'] = array(
    'cache' => -1,
    'css_class' => 'fullwidthvp frontfradientbkgd-backend ideas-browse-large-block whitetxt',
    'custom' => 0,
    'machine_name' => 'hubs_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'ideas',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'custom_theme',
        'weight' => 0,
      ),
      'flip_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'flip_theme',
        'weight' => 10,
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

  $export['block-library_header'] = array(
    'cache' => -1,
    'css_class' => 'topics_header title_block',
    'custom' => 0,
    'machine_name' => 'library_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'library',
    'roles' => array(
      'Admin' => 7,
      'authenticated user' => 2,
      'Community Moderator' => 4,
      'Content Manager' => 5,
      'developer' => 6,
      'Super Admin' => 3,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_theme',
        'weight' => 0,
      ),
      'flip_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'flip_theme',
        'weight' => 11,
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

  $export['block-show_hide_register'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'show_hide_register',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'user/register',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -44,
      ),
      'custom_theme' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'custom_theme',
        'weight' => -44,
      ),
      'flip_theme' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'flip_theme',
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

  $export['block-topics_header'] = array(
    'cache' => -1,
    'css_class' => 'topics_header title_block',
    'custom' => 0,
    'machine_name' => 'topics_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'Admin' => 7,
      'authenticated user' => 2,
      'Community Moderator' => 4,
      'Content Manager' => 5,
      'developer' => 6,
      'Super Admin' => 3,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -42,
      ),
      'custom_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'custom_theme',
        'weight' => -42,
      ),
      'flip_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'flip_theme',
        'weight' => 2,
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

  return $export;
}
