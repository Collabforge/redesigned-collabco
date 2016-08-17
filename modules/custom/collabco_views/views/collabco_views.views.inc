<?php

/**
 * @file
 * Provide short-cut handlers for Viewd data that is hard to retrieve.
 */

/**
 * @defgroup views handlers
 *
 * @{
 */

/**
 * Implements of hook_views_data_alter().
 */
function collabco_views_views_data_alter(&$data) {

  $data['users']['comments_posted'] = array(
    'title' => t('Comments posted'),
    'help' =>t('Number of comments posted by user.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_comments_posted',
    ),
  );

  $data['users']['flag_count'] = array(
    'title' => t('Flag count, all flags') ,
    'help' => t('Total number of items flagged by user via any flag.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_flag_count',
      'click sortable' => TRUE,
    ),
  );
  $data['users']['login_count'] = array(
    'title' => t('Login count') ,
    'help' => t('Total number of logins by any given user'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_login_count',
      'click sortable' => TRUE,
    ),
  );
  $data['users']['flag_count_1'] = array(
    'title' => t('Flag1 count') ,
    'help' => t('Number of items flagged by user via flag 1.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_flag1_count',
    ),
  );
  $data['users']['flag_count_2'] = array(
    'title' => t('Flag2 count') ,
    'help' => t('Number of items flagged by user via flag 2.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_flag2_count',
    ),
  );

  $data['users']['groups_hosted'] = array(
    'title' => t('No. groups hosted') ,
    'help' => t('Number of groups hosted.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_groups_hosted',
    ),
  );

  $data['users']['groups_joined'] = array(
    'title' => t('No. groups joined') ,
    'help' => t('Number of groups joined.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_groups_joined',
    ),
  );

  $data['users']['ideas_followed'] = array(
    'title' => t('Ideas followed') ,
    'help' => t('Number of items flagged by user via ideas followed.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_follow_idea_count',
    ),
  );
  $data['users']['ideas_supported'] = array(
    'title' => t('Ideas supported') ,
    'help' => t('Number of items flagged by user via ideas supported.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_support_idea_count',
    ),
  );
  $data['users']['collaborations_followed'] = array(
    'title' => t('Collaborations followed') ,
    'help' => t('Number of items flagged by user via collaborations followed.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_follow_collaboration_count',
    ),
  );
  $data['users']['collaborations_supported'] = array(
    'title' => t('Collaborations supported') ,
    'help' => t('Number of items flagged by user via collaborations supported.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_support_collaboration_count',
    ),
  );
  $data['taxonomy_term_data']['ideas_count_in_challenge'] = array(
    'title' => t('Ideas count in Challenge') ,
    'help' => t('Number of ideas in a challenge'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_idea_challenge_count',
   ),
  );
  $data['taxonomy_term_data']['ideas_promoted_count_in_challenge'] = array(
    'title' => t('Ideas promoted count in Challenge') ,
    'help' => t('Number of ideas which are promoted in a challenge'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_idea_promoted_challenge_count',
   ),
  );
  $data['users']['ideas_created'] = array(
    'title' => t('Ideas Created') ,
    'help' => t('Number of ideas created by a given user.'),
    'field' => array(
      'handler' => 'collabco_views_handler_field_user_ideas_created',
    ),
  );
}

/**
 * @}
 */
