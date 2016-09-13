<?php
/**
 * @file
 * collabco_ideas_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_ideas_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_idea_state'.
  $permissions['create field_idea_state'] = array(
    'name' => 'create field_idea_state',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create idea content'.
  $permissions['create idea content'] = array(
    'name' => 'create idea content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any idea content'.
  $permissions['delete any idea content'] = array(
    'name' => 'delete any idea content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own idea content'.
  $permissions['delete own idea content'] = array(
    'name' => 'delete own idea content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any idea content'.
  $permissions['edit any idea content'] = array(
    'name' => 'edit any idea content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_idea_state'.
  $permissions['edit field_idea_state'] = array(
    'name' => 'edit field_idea_state',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_idea_state'.
  $permissions['edit own field_idea_state'] = array(
    'name' => 'edit own field_idea_state',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own idea content'.
  $permissions['edit own idea content'] = array(
    'name' => 'edit own idea content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag following_idea'.
  $permissions['flag following_idea'] = array(
    'name' => 'flag following_idea',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag support_idea'.
  $permissions['flag support_idea'] = array(
    'name' => 'flag support_idea',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag following_idea'.
  $permissions['unflag following_idea'] = array(
    'name' => 'unflag following_idea',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag support_idea'.
  $permissions['unflag support_idea'] = array(
    'name' => 'unflag support_idea',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'view field_idea_state'.
  $permissions['view field_idea_state'] = array(
    'name' => 'view field_idea_state',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_idea_state'.
  $permissions['view own field_idea_state'] = array(
    'name' => 'view own field_idea_state',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
