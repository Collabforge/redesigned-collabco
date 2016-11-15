<?php
/**
 * @file
 * collabco_demo_tour.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function collabco_demo_tour_user_default_roles() {
  $roles = array();

  // Exported role: test role for demo.
  $roles['test role for demo'] = array(
    'name' => 'test role for demo',
    'weight' => 3,
  );

  return $roles;
}
