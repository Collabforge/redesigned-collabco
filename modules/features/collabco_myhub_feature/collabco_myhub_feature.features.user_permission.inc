<?php
/**
 * @file
 * collabco_myhub_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_myhub_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access collabco dashboard'.
  $permissions['access collabco dashboard'] = array(
    'name' => 'access collabco dashboard',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'collabco_myhubs',
  );

  return $permissions;
}
