<?php
/**
 * @file
 * collabco_socialmedia_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_socialmedia_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use hybridauth'.
  $permissions['use hybridauth'] = array(
    'name' => 'use hybridauth',
    'roles' => array(
      'Moderator' => 'Moderator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'hybridauth',
  );

  return $permissions;
}
