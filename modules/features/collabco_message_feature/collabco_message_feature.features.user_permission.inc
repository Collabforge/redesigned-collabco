<?php
/**
 * @file
 * collabco_message_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_message_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer message types'.
  $permissions['administer message types'] = array(
    'name' => 'administer message types',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'message',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'message',
  );

  return $permissions;
}
