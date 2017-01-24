<?php
/**
 * @file
 * collabco_collaboration_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_collaboration_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create conversation content'.
  $permissions['create conversation content'] = array(
    'name' => 'create conversation content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hub content'.
  $permissions['create hub content'] = array(
    'name' => 'create hub content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create knowledge_object content'.
  $permissions['create knowledge_object content'] = array(
    'name' => 'create knowledge_object content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any conversation content'.
  $permissions['delete any conversation content'] = array(
    'name' => 'delete any conversation content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any hub content'.
  $permissions['delete any hub content'] = array(
    'name' => 'delete any hub content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any knowledge_object content'.
  $permissions['delete any knowledge_object content'] = array(
    'name' => 'delete any knowledge_object content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own conversation content'.
  $permissions['delete own conversation content'] = array(
    'name' => 'delete own conversation content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own hub content'.
  $permissions['delete own hub content'] = array(
    'name' => 'delete own hub content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own knowledge_object content'.
  $permissions['delete own knowledge_object content'] = array(
    'name' => 'delete own knowledge_object content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in collaboration_phases'.
  $permissions['delete terms in collaboration_phases'] = array(
    'name' => 'delete terms in collaboration_phases',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Moderator' => 'Moderator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Moderator' => 'Moderator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any conversation content'.
  $permissions['edit any conversation content'] = array(
    'name' => 'edit any conversation content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any hub content'.
  $permissions['edit any hub content'] = array(
    'name' => 'edit any hub content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any knowledge_object content'.
  $permissions['edit any knowledge_object content'] = array(
    'name' => 'edit any knowledge_object content',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own conversation content'.
  $permissions['edit own conversation content'] = array(
    'name' => 'edit own conversation content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own hub content'.
  $permissions['edit own hub content'] = array(
    'name' => 'edit own hub content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own knowledge_object content'.
  $permissions['edit own knowledge_object content'] = array(
    'name' => 'edit own knowledge_object content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in collaboration_phases'.
  $permissions['edit terms in collaboration_phases'] = array(
    'name' => 'edit terms in collaboration_phases',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flag follow_collaboration'.
  $permissions['flag follow_collaboration'] = array(
    'name' => 'flag follow_collaboration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag support_collaboration'.
  $permissions['flag support_collaboration'] = array(
    'name' => 'flag support_collaboration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow_collaboration'.
  $permissions['unflag follow_collaboration'] = array(
    'name' => 'unflag follow_collaboration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag support_collaboration'.
  $permissions['unflag support_collaboration'] = array(
    'name' => 'unflag support_collaboration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
