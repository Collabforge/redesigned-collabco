<?php
/**
 * @file
 * collabco_ideas_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function collabco_ideas_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:idea:add user'
  $permissions['node:idea:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:idea:administer group'
  $permissions['node:idea:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:idea:approve and deny subscription'
  $permissions['node:idea:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:idea:create conversation content'
  $permissions['node:idea:create conversation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:create knowledge_object content'
  $permissions['node:idea:create knowledge_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:delete any conversation content'
  $permissions['node:idea:delete any conversation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:delete any knowledge_object content'
  $permissions['node:idea:delete any knowledge_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:delete own conversation content'
  $permissions['node:idea:delete own conversation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:delete own knowledge_object content'
  $permissions['node:idea:delete own knowledge_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:invite people'
  $permissions['node:idea:invite people'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:idea:manage members'
  $permissions['node:idea:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:idea:manage permissions'
  $permissions['node:idea:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:idea:manage roles'
  $permissions['node:idea:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:idea:subscribe'
  $permissions['node:idea:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:idea:subscribe without approval'
  $permissions['node:idea:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:idea:unsubscribe'
  $permissions['node:idea:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:update any conversation content'
  $permissions['node:idea:update any conversation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:update any knowledge_object content'
  $permissions['node:idea:update any knowledge_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:update group'
  $permissions['node:idea:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:idea:update own conversation content'
  $permissions['node:idea:update own conversation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:idea:update own knowledge_object content'
  $permissions['node:idea:update own knowledge_object content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
