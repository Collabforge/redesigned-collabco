<?php
/**
 * @file
 * collabco_core_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function collabco_core_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'View IP addresses'.
  $permissions['View IP addresses'] = array(
    'name' => 'View IP addresses',
    'roles' => array(),
    'module' => 'user_stats',
  );

  // Exported permission: 'View statistics'.
  $permissions['View statistics'] = array(
    'name' => 'View statistics',
    'roles' => array(),
    'module' => 'user_stats',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'access direct download file'.
  $permissions['access direct download file'] = array(
    'name' => 'access direct download file',
    'roles' => array(),
    'module' => 'download_file',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access statistics'.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comment counter'.
  $permissions['administer comment counter'] = array(
    'name' => 'administer comment counter',
    'roles' => array(),
    'module' => 'comment_counter',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer download file'.
  $permissions['administer download file'] = array(
    'name' => 'administer download file',
    'roles' => array(),
    'module' => 'download_file',
  );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(),
    'module' => 'entityform',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer http response headers'.
  $permissions['administer http response headers'] = array(
    'name' => 'administer http response headers',
    'roles' => array(),
    'module' => 'http_response_headers',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer maintenance mode'.
  $permissions['administer maintenance mode'] = array(
    'name' => 'administer maintenance mode',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'maintenance_mode_permissions',
  );

  // Exported permission: 'administer mandrill'.
  $permissions['administer mandrill'] = array(
    'name' => 'administer mandrill',
    'roles' => array(),
    'module' => 'mandrill',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer pre-approved'.
  $permissions['administer pre-approved'] = array(
    'name' => 'administer pre-approved',
    'roles' => array(),
    'module' => 'register_preapproved',
  );

  // Exported permission: 'administer pre-approved roles'.
  $permissions['administer pre-approved roles'] = array(
    'name' => 'administer pre-approved roles',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'register_preapproved',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer statistics'.
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(),
    'module' => 'statistics',
  );

  // Exported permission: 'administer string overrides'.
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(),
    'module' => 'stringoverrides',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer term queue'.
  $permissions['administer term queue'] = array(
    'name' => 'administer term queue',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'term_queue',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'administer user stats'.
  $permissions['administer user stats'] = array(
    'name' => 'administer user stats',
    'roles' => array(),
    'module' => 'user_stats',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass message access control'.
  $permissions['bypass message access control'] = array(
    'name' => 'bypass message access control',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear flags'.
  $permissions['clear flags'] = array(
    'name' => 'clear flags',
    'roles' => array(),
    'module' => 'flag_clear',
  );

  // Exported permission: 'create a create_comment message instance'.
  $permissions['create a create_comment message instance'] = array(
    'name' => 'create a create_comment message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'create a create_node message instance'.
  $permissions['create a create_node message instance'] = array(
    'name' => 'create a create_node message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'create a term_ends_soon message instance'.
  $permissions['create a term_ends_soon message instance'] = array(
    'name' => 'create a term_ends_soon message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'create a update_node message instance'.
  $permissions['create a update_node message instance'] = array(
    'name' => 'create a update_node message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'create any message instance'.
  $permissions['create any message instance'] = array(
    'name' => 'create any message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete a create_comment message instance'.
  $permissions['delete a create_comment message instance'] = array(
    'name' => 'delete a create_comment message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'delete a create_node message instance'.
  $permissions['delete a create_node message instance'] = array(
    'name' => 'delete a create_node message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'delete a term_ends_soon message instance'.
  $permissions['delete a term_ends_soon message instance'] = array(
    'name' => 'delete a term_ends_soon message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'delete a update_node message instance'.
  $permissions['delete a update_node message instance'] = array(
    'name' => 'delete a update_node message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any comment'.
  $permissions['delete any comment'] = array(
    'name' => 'delete any comment',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'comment_delete',
  );

  // Exported permission: 'delete any comment anytime'.
  $permissions['delete any comment anytime'] = array(
    'name' => 'delete any comment anytime',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'comment_delete',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(),
    'module' => 'entityform',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any message instance'.
  $permissions['delete any message instance'] = array(
    'name' => 'delete any message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete comment replies'.
  $permissions['delete comment replies'] = array(
    'name' => 'delete comment replies',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'comment_delete',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own comment'.
  $permissions['delete own comment'] = array(
    'name' => 'delete own comment',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_delete',
  );

  // Exported permission: 'delete own comment anytime'.
  $permissions['delete own comment anytime'] = array(
    'name' => 'delete own comment anytime',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_delete',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in areas_of_participant_expertise'.
  $permissions['delete terms in areas_of_participant_expertise'] = array(
    'name' => 'delete terms in areas_of_participant_expertise',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in implementation_area'.
  $permissions['delete terms in implementation_area'] = array(
    'name' => 'delete terms in implementation_area',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in post'.
  $permissions['delete terms in post'] = array(
    'name' => 'delete terms in post',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in strategic_priority'.
  $permissions['delete terms in strategic_priority'] = array(
    'name' => 'delete terms in strategic_priority',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit a create_comment message instance'.
  $permissions['edit a create_comment message instance'] = array(
    'name' => 'edit a create_comment message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'edit a create_node message instance'.
  $permissions['edit a create_node message instance'] = array(
    'name' => 'edit a create_node message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'edit a term_ends_soon message instance'.
  $permissions['edit a term_ends_soon message instance'] = array(
    'name' => 'edit a term_ends_soon message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'edit a update_node message instance'.
  $permissions['edit a update_node message instance'] = array(
    'name' => 'edit a update_node message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(),
    'module' => 'entityform',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any message instance'.
  $permissions['edit any message instance'] = array(
    'name' => 'edit any message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in areas_of_participant_expertise'.
  $permissions['edit terms in areas_of_participant_expertise'] = array(
    'name' => 'edit terms in areas_of_participant_expertise',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in implementation_area'.
  $permissions['edit terms in implementation_area'] = array(
    'name' => 'edit terms in implementation_area',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in post'.
  $permissions['edit terms in post'] = array(
    'name' => 'edit terms in post',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in strategic_priority'.
  $permissions['edit terms in strategic_priority'] = array(
    'name' => 'edit terms in strategic_priority',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'flag abuse_comment'.
  $permissions['flag abuse_comment'] = array(
    'name' => 'flag abuse_comment',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_node'.
  $permissions['flag abuse_node'] = array(
    'name' => 'flag abuse_node',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_user'.
  $permissions['flag abuse_user'] = array(
    'name' => 'flag abuse_user',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_whitelist_comment'.
  $permissions['flag abuse_whitelist_comment'] = array(
    'name' => 'flag abuse_whitelist_comment',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_whitelist_node'.
  $permissions['flag abuse_whitelist_node'] = array(
    'name' => 'flag abuse_whitelist_node',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_whitelist_user'.
  $permissions['flag abuse_whitelist_user'] = array(
    'name' => 'flag abuse_whitelist_user',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'flag follow'.
  $permissions['flag follow'] = array(
    'name' => 'flag follow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'move comment replies'.
  $permissions['move comment replies'] = array(
    'name' => 'move comment replies',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'comment_delete',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for entityform'.
  $permissions['show format selection for entityform'] = array(
    'name' => 'show format selection for entityform',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for flagging'.
  $permissions['show format selection for flagging'] = array(
    'name' => 'show format selection for flagging',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for message'.
  $permissions['show format selection for message'] = array(
    'name' => 'show format selection for message',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for message_type'.
  $permissions['show format selection for message_type'] = array(
    'name' => 'show format selection for message_type',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for message_type_category'.
  $permissions['show format selection for message_type_category'] = array(
    'name' => 'show format selection for message_type_category',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for og_membership'.
  $permissions['show format selection for og_membership'] = array(
    'name' => 'show format selection for og_membership',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for og_membership_type'.
  $permissions['show format selection for og_membership_type'] = array(
    'name' => 'show format selection for og_membership_type',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: 'unflag abuse_comment'.
  $permissions['unflag abuse_comment'] = array(
    'name' => 'unflag abuse_comment',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_node'.
  $permissions['unflag abuse_node'] = array(
    'name' => 'unflag abuse_node',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_user'.
  $permissions['unflag abuse_user'] = array(
    'name' => 'unflag abuse_user',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_whitelist_comment'.
  $permissions['unflag abuse_whitelist_comment'] = array(
    'name' => 'unflag abuse_whitelist_comment',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_whitelist_node'.
  $permissions['unflag abuse_whitelist_node'] = array(
    'name' => 'unflag abuse_whitelist_node',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_whitelist_user'.
  $permissions['unflag abuse_whitelist_user'] = array(
    'name' => 'unflag abuse_whitelist_user',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag follow'.
  $permissions['unflag follow'] = array(
    'name' => 'unflag follow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'update tokens'.
  $permissions['update tokens'] = array(
    'name' => 'update tokens',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Moderator' => 'Moderator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Moderator' => 'Moderator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view a create_comment message instance'.
  $permissions['view a create_comment message instance'] = array(
    'name' => 'view a create_comment message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'view a create_node message instance'.
  $permissions['view a create_node message instance'] = array(
    'name' => 'view a create_node message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'view a term_ends_soon message instance'.
  $permissions['view a term_ends_soon message instance'] = array(
    'name' => 'view a term_ends_soon message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'view a update_node message instance'.
  $permissions['view a update_node message instance'] = array(
    'name' => 'view a update_node message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'view all login histories'.
  $permissions['view all login histories'] = array(
    'name' => 'view all login histories',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'login_history',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view any message instance'.
  $permissions['view any message instance'] = array(
    'name' => 'view any message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own login history'.
  $permissions['view own login history'] = array(
    'name' => 'view own login history',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'login_history',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      'Moderator' => 'Moderator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(),
    'module' => 'system',
  );

  return $permissions;
}
