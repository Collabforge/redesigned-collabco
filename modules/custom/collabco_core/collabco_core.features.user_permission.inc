<?php
/**
 * @file
 * collabco_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access connections tab'.
  $permissions['access connections tab'] = array(
    'name' => 'access connections tab',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'connector',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'book',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer own book outlines'.
  $permissions['administer own book outlines'] = array(
    'name' => 'administer own book outlines',
    'roles' => array(),
    'module' => 'book_helper',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create conversation content'.
  $permissions['create conversation content'] = array(
    'name' => 'create conversation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hub content'.
  $permissions['create hub content'] = array(
    'name' => 'create hub content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Division Contact Point' => 'Division Contact Point',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ia_comment content'.
  $permissions['create ia_comment content'] = array(
    'name' => 'create ia_comment content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create knowledge_object content'.
  $permissions['create knowledge_object content'] = array(
    'name' => 'create knowledge_object content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Division Contact Point' => 'Division Contact Point',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'book',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete any conversation content'.
  $permissions['delete any conversation content'] = array(
    'name' => 'delete any conversation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hub content'.
  $permissions['delete any hub content'] = array(
    'name' => 'delete any hub content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ia_comment content'.
  $permissions['delete any ia_comment content'] = array(
    'name' => 'delete any ia_comment content',
    'roles' => array(
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any knowledge_object content'.
  $permissions['delete any knowledge_object content'] = array(
    'name' => 'delete any knowledge_object content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own conversation content'.
  $permissions['delete own conversation content'] = array(
    'name' => 'delete own conversation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hub content'.
  $permissions['delete own hub content'] = array(
    'name' => 'delete own hub content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ia_comment content'.
  $permissions['delete own ia_comment content'] = array(
    'name' => 'delete own ia_comment content',
    'roles' => array(
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own knowledge_object content'.
  $permissions['delete own knowledge_object content'] = array(
    'name' => 'delete own knowledge_object content',
    'roles' => array(
      'Admin' => 'Admin',
      'Division Contact Point' => 'Division Contact Point',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in challenge'.
  $permissions['delete terms in challenge'] = array(
    'name' => 'delete terms in challenge',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in implementation_area'.
  $permissions['delete terms in implementation_area'] = array(
    'name' => 'delete terms in implementation_area',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in strategic_priority'.
  $permissions['delete terms in strategic_priority'] = array(
    'name' => 'delete terms in strategic_priority',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any conversation content'.
  $permissions['edit any conversation content'] = array(
    'name' => 'edit any conversation content',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hub content'.
  $permissions['edit any hub content'] = array(
    'name' => 'edit any hub content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Division Contact Point' => 'Division Contact Point',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ia_comment content'.
  $permissions['edit any ia_comment content'] = array(
    'name' => 'edit any ia_comment content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any knowledge_object content'.
  $permissions['edit any knowledge_object content'] = array(
    'name' => 'edit any knowledge_object content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any profile profile'.
  $permissions['edit any profile profile'] = array(
    'name' => 'edit any profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'IRG Member' => 'IRG Member',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own conversation content'.
  $permissions['edit own conversation content'] = array(
    'name' => 'edit own conversation content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hub content'.
  $permissions['edit own hub content'] = array(
    'name' => 'edit own hub content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Division Contact Point' => 'Division Contact Point',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ia_comment content'.
  $permissions['edit own ia_comment content'] = array(
    'name' => 'edit own ia_comment content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own knowledge_object content'.
  $permissions['edit own knowledge_object content'] = array(
    'name' => 'edit own knowledge_object content',
    'roles' => array(
      'Admin' => 'Admin',
      'Division Contact Point' => 'Division Contact Point',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own profile profile'.
  $permissions['edit own profile profile'] = array(
    'name' => 'edit own profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Division Contact Point' => 'Division Contact Point',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit terms in challenge'.
  $permissions['edit terms in challenge'] = array(
    'name' => 'edit terms in challenge',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in implementation_area'.
  $permissions['edit terms in implementation_area'] = array(
    'name' => 'edit terms in implementation_area',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in strategic_priority'.
  $permissions['edit terms in strategic_priority'] = array(
    'name' => 'edit terms in strategic_priority',
    'roles' => array(),
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

  // Exported permission: 'flag flag_stories'.
  $permissions['flag flag_stories'] = array(
    'name' => 'flag flag_stories',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow'.
  $permissions['flag follow'] = array(
    'name' => 'flag follow',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow_idea'.
  $permissions['flag follow_idea'] = array(
    'name' => 'flag follow_idea',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Division Contact Point' => 'Division Contact Point',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow_wiki'.
  $permissions['flag follow_wiki'] = array(
    'name' => 'flag follow_wiki',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag hide_content'.
  $permissions['flag hide_content'] = array(
    'name' => 'flag hide_content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'IRG Member' => 'IRG Member',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for entityform'.
  $permissions['show format selection for entityform'] = array(
    'name' => 'show format selection for entityform',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for flagging'.
  $permissions['show format selection for flagging'] = array(
    'name' => 'show format selection for flagging',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for og_membership'.
  $permissions['show format selection for og_membership'] = array(
    'name' => 'show format selection for og_membership',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for og_membership_type'.
  $permissions['show format selection for og_membership_type'] = array(
    'name' => 'show format selection for og_membership_type',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for profile2'.
  $permissions['show format selection for profile2'] = array(
    'name' => 'show format selection for profile2',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'developer' => 'developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'IRG Member' => 'IRG Member',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'unflag challenge_flag'.
  $permissions['unflag challenge_flag'] = array(
    'name' => 'unflag challenge_flag',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag flag_stories'.
  $permissions['unflag flag_stories'] = array(
    'name' => 'unflag flag_stories',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow'.
  $permissions['unflag follow'] = array(
    'name' => 'unflag follow',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow_idea'.
  $permissions['unflag follow_idea'] = array(
    'name' => 'unflag follow_idea',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'Division Contact Point' => 'Division Contact Point',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow_wiki'.
  $permissions['unflag follow_wiki'] = array(
    'name' => 'unflag follow_wiki',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag hide_content'.
  $permissions['unflag hide_content'] = array(
    'name' => 'unflag hide_content',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'view any profile profile'.
  $permissions['view any profile profile'] = array(
    'name' => 'view any profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own profile profile'.
  $permissions['view own profile profile'] = array(
    'name' => 'view own profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Division Contact Point' => 'Division Contact Point',
      'Super Admin' => 'Super Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
