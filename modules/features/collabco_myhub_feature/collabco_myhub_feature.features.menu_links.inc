<?php
/**
 * @file
 * collabco_myhub_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function collabco_myhub_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-home-menu',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_my-hub:myhub.
  $menu_links['main-menu_my-hub:myhub'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'myhub',
    'router_path' => 'myhub',
    'link_title' => 'My Hub',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-squares-menu',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_my-hub:myhub',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('My Hub');

  return $menu_links;
}
