<?php
/**
 * @file
 * collabco_challenge_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function collabco_challenge_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_challenges:challenge.
  $menu_links['main-menu_challenges:challenge'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'challenge',
    'router_path' => 'challenge',
    'link_title' => ucfirst(variable_get('csl_challenges')).'s',
    'options' => array(
      'identifier' => 'main-menu_challenges:challenge',
      'attributes' => array(
        'class' => array(
          0 => 'icon-flag-menu',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Challenges');

  return $menu_links;
}
