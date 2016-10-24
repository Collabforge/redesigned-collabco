<?php
/**
 * @file
 * collabco_challenge_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_challenge_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in challenge'.
  $permissions['delete terms in challenge'] = array(
    'name' => 'delete terms in challenge',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in challenge'.
  $permissions['edit terms in challenge'] = array(
    'name' => 'edit terms in challenge',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flag challenge_flag'.
  $permissions['flag challenge_flag'] = array(
    'name' => 'flag challenge_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag support_challenge'.
  $permissions['flag support_challenge'] = array(
    'name' => 'flag support_challenge',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag challenge_flag'.
  $permissions['unflag challenge_flag'] = array(
    'name' => 'unflag challenge_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag support_challenge'.
  $permissions['unflag support_challenge'] = array(
    'name' => 'unflag support_challenge',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
