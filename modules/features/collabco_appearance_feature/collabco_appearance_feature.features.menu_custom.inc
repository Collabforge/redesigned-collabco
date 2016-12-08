<?php
/**
 * @file
 * collabco_appearance_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function collabco_appearance_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-for-moderators.
  $menus['menu-menu-for-moderators'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'title' => 'Menu for Moderators',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu for Moderators');

  return $menus;
}
