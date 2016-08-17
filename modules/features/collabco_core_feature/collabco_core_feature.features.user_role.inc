<?php
/**
 * @file
 * collabco_core_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function collabco_core_feature_user_default_roles() {
  $roles = array();

  // Exported role: Moderator.
  $roles['Moderator'] = array(
    'name' => 'Moderator',
    'weight' => 2,
  );

  return $roles;
}
