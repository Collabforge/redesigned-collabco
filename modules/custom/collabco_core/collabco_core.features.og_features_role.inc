<?php
/**
 * @file
 * collabco_core.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function collabco_core_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:hub:Friendly Face'.
  $roles['node:hub:Friendly Face'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'hub',
    'name' => 'Friendly Face',
  );

  // Exported OG Role: 'node:hub:Implementing Area Member'.
  $roles['node:hub:Implementing Area Member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'hub',
    'name' => 'Implementing Area Member',
  );

  // Exported OG Role: 'node:hub:Sponser'.
  $roles['node:hub:Sponser'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'hub',
    'name' => 'Sponser',
  );

  return $roles;
}
