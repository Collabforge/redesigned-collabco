<?php
/**
 * @file
 * collabco_core.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function collabco_core_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:hub:add user'
  $permissions['node:hub:add user'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
      'Implementing Area Member' => 'Implementing Area Member',
      'Sponser' => 'Sponser',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:hub:administer group'
  $permissions['node:hub:administer group'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'Sponser' => 'Sponser',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:hub:approve and deny subscription'
  $permissions['node:hub:approve and deny subscription'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
      'Implementing Area Member' => 'Implementing Area Member',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:hub:create book content'
  $permissions['node:hub:create book content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:create conversation content'
  $permissions['node:hub:create conversation content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:create ia_comment content'
  $permissions['node:hub:create ia_comment content'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:create knowledge_object content'
  $permissions['node:hub:create knowledge_object content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:delete any book content'
  $permissions['node:hub:delete any book content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub:delete any conversation content'
  $permissions['node:hub:delete any conversation content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:delete any ia_comment content'
  $permissions['node:hub:delete any ia_comment content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub:delete any knowledge_object content'
  $permissions['node:hub:delete any knowledge_object content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:delete own book content'
  $permissions['node:hub:delete own book content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:delete own conversation content'
  $permissions['node:hub:delete own conversation content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:delete own ia_comment content'
  $permissions['node:hub:delete own ia_comment content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub:delete own knowledge_object content'
  $permissions['node:hub:delete own knowledge_object content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:invite people'
  $permissions['node:hub:invite people'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
    ),
  );

  // Exported og permission: 'node:hub:manage members'
  $permissions['node:hub:manage members'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
      'Implementing Area Member' => 'Implementing Area Member',
      'Sponser' => 'Sponser',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:hub:manage permissions'
  $permissions['node:hub:manage permissions'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:hub:manage roles'
  $permissions['node:hub:manage roles'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:hub:subscribe'
  $permissions['node:hub:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:hub:subscribe without approval'
  $permissions['node:hub:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub:unsubscribe'
  $permissions['node:hub:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:update any book content'
  $permissions['node:hub:update any book content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:hub:update any conversation content'
  $permissions['node:hub:update any conversation content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:update any ia_comment content'
  $permissions['node:hub:update any ia_comment content'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:update any knowledge_object content'
  $permissions['node:hub:update any knowledge_object content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:update group'
  $permissions['node:hub:update group'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
      'Implementing Area Member' => 'Implementing Area Member',
      'Sponser' => 'Sponser',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:hub:update own book content'
  $permissions['node:hub:update own book content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:update own conversation content'
  $permissions['node:hub:update own conversation content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:update own ia_comment content'
  $permissions['node:hub:update own ia_comment content'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:update own knowledge_object content'
  $permissions['node:hub:update own knowledge_object content'] = array(
    'roles' => array(
      'Implementing Area Member' => 'Implementing Area Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:hub:view draft'
  $permissions['node:hub:view draft'] = array(
    'roles' => array(
      'Friendly Face' => 'Friendly Face',
      'Implementing Area Member' => 'Implementing Area Member',
      'Sponser' => 'Sponser',
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
