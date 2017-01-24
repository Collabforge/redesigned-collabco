<?php
/**
 * @file
 * collabco_collaboration_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function collabco_collaboration_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_discussion:node/add/conversation.
  $menu_links['navigation_discussion:node/add/conversation'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/conversation',
    'router_path' => 'node/add/conversation',
    'link_title' => 'Discussion',
    'options' => array(
      'identifier' => 'navigation_discussion:node/add/conversation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_document:node/add/knowledge-object.
  $menu_links['navigation_document:node/add/knowledge-object'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/knowledge-object',
    'router_path' => 'node/add/knowledge-object',
    'link_title' => 'Document',
    'options' => array(
      'identifier' => 'navigation_document:node/add/knowledge-object',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Discussion');
  t('Document');

  return $menu_links;
}
