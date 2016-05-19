<?php
/**
 * @file
 * collabco_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function collabco_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'challenge_individual_page_header';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'challenge individual page header';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'challenge individual page header';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: challenge_flag counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'challenge_flag';
  /* Relationship: Flags: challenge_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'challenge_flag';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Challenge_Image */
  $handler->display->display_options['fields']['field_challenge_image']['id'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['table'] = 'field_data_field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['field'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_challenge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_challenge_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_challenge_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_type'] = '0';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h1>[name]<h1> 
Want to add a solution for this challenge? <a href=/node/add/hub/[tid]>Click here</a>
[field_challenge_image]
<div>[description]</div> 
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['count']['suffix'] = ' staff have joined';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Core Team */
  $handler->display->display_options['fields']['field_core_team']['id'] = 'field_core_team';
  $handler->display->display_options['fields']['field_core_team']['table'] = 'field_data_field_core_team';
  $handler->display->display_options['fields']['field_core_team']['field'] = 'field_core_team';
  $handler->display->display_options['fields']['field_core_team']['label'] = '';
  $handler->display->display_options['fields']['field_core_team']['element_type'] = '0';
  $handler->display->display_options['fields']['field_core_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_core_team']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_url']['empty'] = 'no_video_link';
  /* Field: Taxonomy term: Brief PDF */
  $handler->display->display_options['fields']['field_brief_pdf']['id'] = 'field_brief_pdf';
  $handler->display->display_options['fields']['field_brief_pdf']['table'] = 'field_data_field_brief_pdf';
  $handler->display->display_options['fields']['field_brief_pdf']['field'] = 'field_brief_pdf';
  $handler->display->display_options['fields']['field_brief_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_brief_pdf']['element_type'] = '0';
  $handler->display->display_options['fields']['field_brief_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brief_pdf']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_brief_pdf']['empty'] = 'no_pdf_link';
  $handler->display->display_options['fields']['field_brief_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_brief_pdf']['type'] = 'file_url_plain';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'draft_ideas_count';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'submitted_ideas_count';
  $handler->display->display_options['fields']['view_1']['display'] = 'block';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!tid]';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'challenge' => 'challenge',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['challenge_individual_page_header'] = array(
    t('Master'),
    t('challenge individual page header'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('counter'),
    t('flag'),
    t('.'),
    t(','),
    t('<h1>[name]<h1> 
Want to add a solution for this challenge? <a href=/node/add/hub/[tid]>Click here</a>
[field_challenge_image]
<div>[description]</div> 
'),
    t(' staff have joined'),
    t('no_video_link'),
    t('no_pdf_link'),
    t('All'),
    t('Block'),
  );
  $export['challenge_individual_page_header'] = $view;

  $view = new view();
  $view->name = 'challenges';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'challenges page view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Challenges';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create ia_comment content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: challenge_flag counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'challenge_flag';
  /* Relationship: Flags: challenge_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'challenge_flag';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Challenge_Image */
  $handler->display->display_options['fields']['field_challenge_image']['id'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['table'] = 'field_data_field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['field'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_challenge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_challenge_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_challenge_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['suffix'] = ' staff have joined';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['label'] = '';
  $handler->display->display_options['fields']['field_video_url']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_video_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_url']['empty'] = 'no_video_link';
  $handler->display->display_options['fields']['field_video_url']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Taxonomy term: Brief PDF */
  $handler->display->display_options['fields']['field_brief_pdf']['id'] = 'field_brief_pdf';
  $handler->display->display_options['fields']['field_brief_pdf']['table'] = 'field_data_field_brief_pdf';
  $handler->display->display_options['fields']['field_brief_pdf']['field'] = 'field_brief_pdf';
  $handler->display->display_options['fields']['field_brief_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_brief_pdf']['element_type'] = '0';
  $handler->display->display_options['fields']['field_brief_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brief_pdf']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_brief_pdf']['empty'] = 'no_pdf_link';
  $handler->display->display_options['fields']['field_brief_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_brief_pdf']['type'] = 'file_url_plain';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'challenge' => 'challenge',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'challenges';
  $translatables['challenges'] = array(
    t('Master'),
    t('Challenges'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('counter'),
    t('flag'),
    t('.'),
    t(','),
    t(' staff have joined'),
    t('no_video_link'),
    t('no_pdf_link'),
    t('Page'),
  );
  $export['challenges'] = $view;

  $view = new view();
  $view->name = 'challenges_not_followed_by_user';
  $view->description = 'Challenges - Not Followed by User';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Challenges - Not Followed by User';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="no-results-challenge">
<h2>Challenges</h3>
<h3>There’s nothing here, yet!</h3>

<p>Please join one or more of the <a href="/challenges">Challenges</a> to see new ideas and comments relevant to your interests.</p>

 <a href="/challenges">Learn more about Ideas 2.0</a>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Flags: challenge_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'challenge_flag';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="hidden"></div>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'challenge' => 'challenge',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'challenges_no_results');
  $handler->display->display_options['block_description'] = 'Challenges Dashboard - no results';
  $translatables['challenges_not_followed_by_user'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="no-results-challenge">
<h2>Challenges</h3>
<h3>There’s nothing here, yet!</h3>

<p>Please join one or more of the <a href="/challenges">Challenges</a> to see new ideas and comments relevant to your interests.</p>

 <a href="/challenges">Learn more about Ideas 2.0</a>
</div>'),
    t('flag'),
    t('<div class="hidden"></div>'),
    t('Block'),
    t('Challenges Dashboard - no results'),
  );
  $export['challenges_not_followed_by_user'] = $view;

  $view = new view();
  $view->name = 'comments_on_your_ideas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Comments on Your ideas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comments on Your ideas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access comments';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  /* Field: Comment: Delete link */
  $handler->display->display_options['fields']['delete_comment']['id'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['delete_comment']['field'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['label'] = '';
  $handler->display->display_options['fields']['delete_comment']['element_label_colon'] = FALSE;
  /* Field: Comment: Edit link */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['label'] = '';
  $handler->display->display_options['fields']['edit_comment']['element_label_colon'] = FALSE;
  /* Field: Comment: Post date (with login date filter option) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Comment: Reply-to link */
  $handler->display->display_options['fields']['replyto_comment']['id'] = 'replyto_comment';
  $handler->display->display_options['fields']['replyto_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['replyto_comment']['field'] = 'replyto_comment';
  $handler->display->display_options['fields']['replyto_comment']['label'] = '';
  $handler->display->display_options['fields']['replyto_comment']['element_label_colon'] = FALSE;
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Comment: View link */
  $handler->display->display_options['fields']['view_comment']['id'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['view_comment']['field'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['label'] = '';
  $handler->display->display_options['fields']['view_comment']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['empty'] = '0';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Sort criterion: Comment: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Comment: Post date (with login date filter option) */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'comment';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['type'] = 'last_login';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['comments_on_your_ideas'] = array(
    t('Master'),
    t('Comments on Your ideas'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content'),
    t('author'),
    t('All'),
    t('Block'),
  );
  $export['comments_on_your_ideas'] = $view;

  $view = new view();
  $view->name = 'dashboard_ideas_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard Ideas View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: follow_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_idea';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => '150x150',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Strategic Priority */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Implementation Area */
  $handler->display->display_options['fields']['field_implementation_area']['id'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['field'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_implementation_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br>
[field_featured_hub_image]<br>
[field_tag_line]<br>
[field_strategic_priority]<br>
[field_implementation_area]<br>
[comment_count]<br>
[count]<br>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );

  /* Display: Trending */
  $handler = $view->new_display('block', 'Trending', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="../sites/default/themes/flip_theme/img/placeholder-mini.png">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_tag_line']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Implementation Area */
  $handler->display->display_options['fields']['field_implementation_area']['id'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['field'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_implementation_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row complete">
<div class="span12">
<div class="image">[field_featured_hub_image]</div>
<div class="title"><h3>[title]</h3></div>
<div class="info-padding">
<div class="body">[field_tag_line]</div>
<div class="social">[comment_count] <br>[count] </div> 
Implementation Area: <div class="strategic-priority">[field_implementation_area]</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['order'] = 'DESC';
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';

  /* Display: Recent */
  $handler = $view->new_display('block', 'Recent', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="../sites/default/themes/flip_theme/img/placeholder-mini.png" style="width: 184px !important; height: 100px;">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_tag_line']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Implementation Area */
  $handler->display->display_options['fields']['field_implementation_area']['id'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['field'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_implementation_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row complete">
<div class="span12">
<div class="image">[field_featured_hub_image]</div>
<div class="title"><h3>[title]</h3></div>
<div class="info-padding">
<div class="body">[field_tag_line]</div>
<div class="social">[comment_count] <br>[count] </div> 
Implementation Area: <div class="strategic-priority">[field_implementation_area]</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $translatables['dashboard_ideas_view'] = array(
    t('Master'),
    t('Recent'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('counter'),
    t('Strategic Priority'),
    t('Implementation Area'),
    t('.'),
    t(','),
    t('[title]<br>
[field_featured_hub_image]<br>
[field_tag_line]<br>
[field_strategic_priority]<br>
[field_implementation_area]<br>
[comment_count]<br>
[count]<br>
'),
    t('Trending'),
    t('<img src="../sites/default/themes/flip_theme/img/placeholder-mini.png">'),
    t('<div class="row complete">
<div class="span12">
<div class="image">[field_featured_hub_image]</div>
<div class="title"><h3>[title]</h3></div>
<div class="info-padding">
<div class="body">[field_tag_line]</div>
<div class="social">[comment_count] <br>[count] </div> 
Implementation Area: <div class="strategic-priority">[field_implementation_area]</div>
</div>
</div>
</div>'),
    t('<img src="../sites/default/themes/flip_theme/img/placeholder-mini.png" style="width: 184px !important; height: 100px;">'),
  );
  $export['dashboard_ideas_view'] = $view;

  $view = new view();
  $view->name = 'dashboard_your_ideas';
  $view->description = 'Show ideas of a user.';
  $view->tag = 'ideas';
  $view->base_table = 'og_membership';
  $view->human_name = 'Dashboard - Your ideas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
   echo challenge_dashboard_block_get_count_comments_since_last_login() . \' new comments since your last login\';
?>
';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row-fluid">
<div class="span3"><img src="/sites/default/files/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_content_html';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Group node';
  /* Relationship: OG membership: OG Roles from membership */
  $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['label'] = 'OG Roles';
  /* Relationship: Flags: follow_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_idea';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group Privacy */
  $handler->display->display_options['fields']['meta_group_access']['id'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['field'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_group_access']['label'] = '';
  $handler->display->display_options['fields']['meta_group_access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['meta_group_access']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = '';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Field: Content: Post date (with login date filter option) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]/add/member/co-owner">Invite</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]/add/member/co-owner';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: User: Full Name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['empty'] = 'no comment author';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/default/themes/flip_theme/img/projects-cross.png">';
  $handler->display->display_options['fields']['picture']['image_style'] = 'square_thumbnail';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = '';
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'long';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'ia_comment_check';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* Filter criterion: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['value'] = array(
    'administrator member' => 'administrator member',
  );

  /* Display: Your Ideas - Dashboard New */
  $handler = $view->new_display('block', 'Your Ideas - Dashboard New', 'dashboard_your_ideas');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row-fluid no-results-dashboard">
<div class="span12">
<div class="nothing-here">
<p><strong>There’s nothing here, yet!</strong></p>
<p>Once you create an idea, you will also be able to see new comments on your ideas appear here as they are submitted.</p>

</div>

<div class="suggestion">
<p>To learn more about the Ideas Challenge 2, find ideas and share ideas, please visit the <a href="/challenges">Challenges Overview</a> page</p>
</div>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_content_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = '';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Field: Content: Post date (with login date filter option) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]/add/member/co-owner';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'comments_on_your_ideas';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['value'] = array(
    'administrator member' => 'administrator member',
    'Implementing Area Member' => 'Implementing Area Member',
    'Sponser' => 'Sponser',
  );
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['block_description'] = 'Your ideas of Dashboard with comments';
  $translatables['dashboard_your_ideas'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="row-fluid">
<div class="span3"><img src="/sites/default/files/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>'),
    t('Group node'),
    t('OG Roles'),
    t('counter'),
    t('<a href="/node/[nid]/add/member/co-owner">Invite</a>'),
    t('.'),
    t(','),
    t('no comment author'),
    t('<img src="/sites/default/themes/flip_theme/img/projects-cross.png">'),
    t('All'),
    t('Your Ideas - Dashboard New'),
    t('<div class="row-fluid no-results-dashboard">
<div class="span12">
<div class="nothing-here">
<p><strong>There’s nothing here, yet!</strong></p>
<p>Once you create an idea, you will also be able to see new comments on your ideas appear here as they are submitted.</p>

</div>

<div class="suggestion">
<p>To learn more about the Ideas Challenge 2, find ideas and share ideas, please visit the <a href="/challenges">Challenges Overview</a> page</p>
</div>
</div>
</div>'),
    t('<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">'),
    t('Your ideas of Dashboard with comments'),
  );
  $export['dashboard_your_ideas'] = $view;

  $view = new view();
  $view->name = 'draft_ideas_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Draft ideas count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Draft ideas count';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<li>@total draft ideas</li>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    0 => '0',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['draft_ideas_count'] = array(
    t('Master'),
    t('Draft ideas count'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<li>@total draft ideas</li>'),
    t('All'),
    t('Block'),
  );
  $export['draft_ideas_count'] = $view;

  $view = new view();
  $view->name = 'flag_follow';
  $view->description = 'A page listing the current user\'s bookmarks at /bookmarks.';
  $view->tag = 'flag';
  $view->base_table = 'node';
  $view->human_name = 'flag_follow of Ideas';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Updates from topics you\'re following';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'flag follow_idea';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'name' => 'name',
    'comment_count' => 'comment_count',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = 'comment_count';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = TRUE;
  $handler->display->display_options['empty']['text']['content'] = '<div class="row-fluid">
<div class="span4"><img src="/sites/default/files/follow.png" style="height: 160px"></div>
<div class="span7"><p><strong>There’s nothing here, yet!</strong></p>
<p>You can follow a topic by replying or by using the follow button. Any replies to that topic end up here. </p>
<p>So get out there and <a href="/topics">explore topics</a>, or if you haven’t yet <a href="/news-update/welcome-please-introduce-yourself">introduce yourself</a>. </p>
</div>
</div>';
  $handler->display->display_options['empty']['text']['format'] = 'full_html';
  $handler->display->display_options['empty']['text']['tokenize'] = TRUE;
  /* Relationship: Flags: follow_idea */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'bookmarks';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow_idea';
  /* Relationship: Flags: follow_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_idea';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last Post';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count_1']['id'] = 'comment_count_1';
  $handler->display->display_options['fields']['comment_count_1']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count_1']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count_1']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count_1']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count_1']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count_1']['format_plural_plural'] = '@count Comments';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Votes';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php //print flag_create_link(\'follow_idea\', $data->nid); ?>
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: List of Ideas your are following */
  $handler = $view->new_display('page', 'List of Ideas your are following', 'list_of_topics');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ideas you\'re following';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = TRUE;
  $handler->display->display_options['empty']['text']['content'] = '<div class="row-fluid no-results-dashboard">
<div class="span12 generic-type">
<div class="nothing-here">
<p><strong>You haven\'t supported any ideas yet!</strong></p>
<p>You can <a href="/ideas">browse ideas</a> to find one you like.</p>
</div>
</div>
</div>';
  $handler->display->display_options['empty']['text']['format'] = 'full_html';
  $handler->display->display_options['empty']['text']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  $handler->display->display_options['path'] = 'ideas-you-follow';
  $translatables['flag_follow'] = array(
    t('Defaults'),
    t('Updates from topics you\'re following'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="row-fluid">
<div class="span4"><img src="/sites/default/files/follow.png" style="height: 160px"></div>
<div class="span7"><p><strong>There’s nothing here, yet!</strong></p>
<p>You can follow a topic by replying or by using the follow button. Any replies to that topic end up here. </p>
<p>So get out there and <a href="/topics">explore topics</a>, or if you haven’t yet <a href="/news-update/welcome-please-introduce-yourself">introduce yourself</a>. </p>
</div>
</div>'),
    t('bookmarks'),
    t('counter'),
    t('Type'),
    t('Title'),
    t('Last Post'),
    t('Comments'),
    t('.'),
    t(','),
    t('Votes'),
    t('List of Ideas your are following'),
    t('Ideas you\'re following'),
    t('<div class="row-fluid no-results-dashboard">
<div class="span12 generic-type">
<div class="nothing-here">
<p><strong>You haven\'t supported any ideas yet!</strong></p>
<p>You can <a href="/ideas">browse ideas</a> to find one you like.</p>
</div>
</div>
</div>'),
  );
  $export['flag_follow'] = $view;

  $view = new view();
  $view->name = 'hub_owner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'hub_owner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: Content: Organisation Image (field_organisation_image:fid) */
  $handler->display->display_options['relationships']['field_organisation_image_fid']['id'] = 'field_organisation_image_fid';
  $handler->display->display_options['relationships']['field_organisation_image_fid']['table'] = 'field_data_field_organisation_image';
  $handler->display->display_options['relationships']['field_organisation_image_fid']['field'] = 'field_organisation_image_fid';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_organisation_ref_target_id']['id'] = 'field_organisation_ref_target_id';
  $handler->display->display_options['relationships']['field_organisation_ref_target_id']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['relationships']['field_organisation_ref_target_id']['field'] = 'field_organisation_ref_target_id';
  $handler->display->display_options['relationships']['field_organisation_ref_target_id']['relationship'] = 'profile';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<div class="featured-image no-image"><img src="sites/default/themes/custom_theme/images/placeholder_square.jpg"></div>';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'small_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position']['id'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_position']['label'] = '';
  $handler->display->display_options['fields']['field_business_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_position']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_organisation_ref']['id'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organisation_ref']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_ref']['element_label_colon'] = FALSE;
  /* Field: Content: Organisation Image */
  $handler->display->display_options['fields']['field_organisation_image']['id'] = 'field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['table'] = 'field_data_field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['field'] = 'field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['relationship'] = 'field_organisation_ref_target_id';
  $handler->display->display_options['fields']['field_organisation_image']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organisation_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organisation_image']['empty'] = '<div class="featured-image no-image"><img src="sites/default/themes/custom_theme/images/placeholder_square.jpg"></div>';
  $handler->display->display_options['fields']['field_organisation_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_organisation_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="index_item row-fluid">
  <div class="span2">
    [field_featured_hub_image]
  </div>
  <div class="span10 topic_item">
    <h3>[title]</h3>
    <div class="article_text">[field_tag_line]</div>
    <div class="article_host">
      <div class="topic_feature_body"> </div>
      <table class="user_block">
        <tr>
          <td>
            <div class="user-picture-small">[picture]</div>
          </td>
          <td>
            <p>
              Hosted by <span class="article_host_name"><a href="#">[name]</a></span><br />
              [field_business_position] &#64; [field_organisation_ref]
            </p>
          </td>
          <td>
          &nbsp;&nbsp;[field_organisation_image] 
          </td>
         <td>
&nbsp;&nbsp;Members 
</td>
        </tr>
      </table>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );

  /* Display: Hub header */
  $handler = $view->new_display('block', 'Hub header', 'hub_header_display');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position']['id'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_position']['label'] = '';
  $handler->display->display_options['fields']['field_business_position']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_organisation_ref']['id'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organisation_ref']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref']['element_label_colon'] = FALSE;
  /* Field: Content: Organisation Image */
  $handler->display->display_options['fields']['field_organisation_image']['id'] = 'field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['table'] = 'field_data_field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['field'] = 'field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['relationship'] = 'field_organisation_ref_target_id';
  $handler->display->display_options['fields']['field_organisation_image']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organisation_image']['empty'] = '<div class="featured-image no-image"><img src="sites/default/themes/custom_theme/images/placeholder_square.jpg"></div>';
  $handler->display->display_options['fields']['field_organisation_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_organisation_image']['settings'] = array(
    'image_style' => 'org_logo_feature',
    'image_link' => '',
  );
  /* Field: Content: Group Privacy */
  $handler->display->display_options['fields']['meta_group_access']['id'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['field'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['label'] = '';
  $handler->display->display_options['fields']['meta_group_access']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = '';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<div class="featured-image no-image"><img src="/profiles/collabco/themes/collabco_theme/images/hub-image-not-found.png"></div>
';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'featured_img_large',
    'image_link' => '',
  );
  $translatables['hub_owner'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('Profile'),
    t('image from field_organisation_image'),
    t('field_organisation_ref_target_id'),
    t('<div class="featured-image no-image"><img src="sites/default/themes/custom_theme/images/placeholder_square.jpg"></div>'),
    t('<div class="index_item row-fluid">
  <div class="span2">
    [field_featured_hub_image]
  </div>
  <div class="span10 topic_item">
    <h3>[title]</h3>
    <div class="article_text">[field_tag_line]</div>
    <div class="article_host">
      <div class="topic_feature_body"> </div>
      <table class="user_block">
        <tr>
          <td>
            <div class="user-picture-small">[picture]</div>
          </td>
          <td>
            <p>
              Hosted by <span class="article_host_name"><a href="#">[name]</a></span><br />
              [field_business_position] &#64; [field_organisation_ref]
            </p>
          </td>
          <td>
          &nbsp;&nbsp;[field_organisation_image] 
          </td>
         <td>
&nbsp;&nbsp;Members 
</td>
        </tr>
      </table>
    </div>
  </div>
</div>'),
    t('All'),
    t('Hub header'),
    t('<div class="featured-image no-image"><img src="/profiles/collabco/themes/collabco_theme/images/hub-image-not-found.png"></div>
'),
  );
  $export['hub_owner'] = $view;

  $view = new view();
  $view->name = 'hubs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'hubs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<div class="featured-image no-image"><img src="/profiles/collabco/themes/collabco_theme/images/placeholder_square.jpg"></div>
';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'small_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position']['id'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_position']['label'] = '';
  $handler->display->display_options['fields']['field_business_position']['element_label_colon'] = FALSE;
  /* Field: Content: Group Privacy */
  $handler->display->display_options['fields']['meta_group_access']['id'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['field'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['label'] = '';
  $handler->display->display_options['fields']['meta_group_access']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'browse';

  /* Display: Featured Hub */
  $handler = $view->new_display('block', 'Featured Hub', 'featured_hub');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<div class="featured-image no-image"><img src="/profiles/collabco/themes/collabco_theme/images/placeholder.jpg"></div>';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'featured_article',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Business Position */
  $handler->display->display_options['fields']['field_business_position']['id'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['table'] = 'field_data_field_business_position';
  $handler->display->display_options['fields']['field_business_position']['field'] = 'field_business_position';
  $handler->display->display_options['fields']['field_business_position']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_business_position']['label'] = '';
  $handler->display->display_options['fields']['field_business_position']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_organisation_ref']['id'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['table'] = 'field_data_field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['field'] = 'field_organisation_ref';
  $handler->display->display_options['fields']['field_organisation_ref']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_organisation_ref']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_ref']['element_label_colon'] = FALSE;
  /* Field: Content: Organisation Image */
  $handler->display->display_options['fields']['field_organisation_image']['id'] = 'field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['table'] = 'field_data_field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['field'] = 'field_organisation_image';
  $handler->display->display_options['fields']['field_organisation_image']['relationship'] = 'field_organisation_ref_target_id';
  $handler->display->display_options['fields']['field_organisation_image']['label'] = '';
  $handler->display->display_options['fields']['field_organisation_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organisation_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_organisation_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Group Privacy */
  $handler->display->display_options['fields']['meta_group_access']['id'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['field'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['label'] = '';
  $handler->display->display_options['fields']['meta_group_access']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $translatables['hubs'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('Profile'),
    t('<div class="featured-image no-image"><img src="/profiles/collabco/themes/collabco_theme/images/placeholder_square.jpg"></div>
'),
    t('Page'),
    t('Featured Hub'),
    t('<div class="featured-image no-image"><img src="/profiles/collabco/themes/collabco_theme/images/placeholder.jpg"></div>'),
  );
  $export['hubs'] = $view;

  $view = new view();
  $view->name = 'ia_comment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IA Comment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IA Comment';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No IA Comment yet. <a style="border-bottom: 1px solid #96ca4f; display: inline;" class="colorbox-node" href="/node/add/ia-comment/<?php echo arg(1);?>?width=600&height=600&destination=node/<?php echo arg(1); ?>">Add one?</a>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[body]
<div class="date">[changed] | <a class="colorbox-node" href="/node/[nid]/edit?width=600&height=600&destination=node/!1">Edit</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ia_comment' => 'ia_comment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ia_comment'] = array(
    t('Master'),
    t('IA Comment'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No IA Comment yet. <a style="border-bottom: 1px solid #96ca4f; display: inline;" class="colorbox-node" href="/node/add/ia-comment/<?php echo arg(1);?>?width=600&height=600&destination=node/<?php echo arg(1); ?>">Add one?</a>'),
    t('OG membership from node'),
    t('[body]
<div class="date">[changed] | <a class="colorbox-node" href="/node/[nid]/edit?width=600&height=600&destination=node/!1">Edit</a></div>'),
    t('All'),
    t('Block'),
  );
  $export['ia_comment'] = $view;

  $view = new view();
  $view->name = 'ia_comment_check';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IA Comment Check';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IA Comment Check';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="status-needed">Comment Needed</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="status-completed">Comment Completed</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: gid (field_gid) */
  $handler->display->display_options['arguments']['field_gid_target_id']['id'] = 'field_gid_target_id';
  $handler->display->display_options['arguments']['field_gid_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['field_gid_target_id']['field'] = 'field_gid_target_id';
  $handler->display->display_options['arguments']['field_gid_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_gid_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ia_comment' => 'ia_comment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ia_comment_check'] = array(
    t('Master'),
    t('IA Comment Check'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="status-needed">Comment Needed</div>'),
    t('<div class="status-completed">Comment Completed</div>'),
    t('All'),
    t('Block'),
  );
  $export['ia_comment_check'] = $view;

  $view = new view();
  $view->name = 'ideas_about_challenge_page';
  $view->description = 'Ideas main view with all filters';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ideas About Challenge Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ideas main view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: follow_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_idea';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Implementation Area */
  $handler->display->display_options['fields']['field_implementation_area']['id'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['field'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['label'] = '';
  $handler->display->display_options['fields']['field_implementation_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_implementation_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Strategic Priority */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_strategic_priority']['delta_limit'] = 'all';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image_1']['id'] = 'field_featured_hub_image_1';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image_1']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 follower';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count followers';
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );

  /* Display: Ideas About Challenge Page */
  $handler = $view->new_display('block', 'Ideas About Challenge Page', 'ideas_newest_first');
  $handler->display->display_options['block_description'] = 'Ideas Newest first';

  /* Display: About Ideas Challenge Page Block */
  $handler = $view->new_display('block', 'About Ideas Challenge Page Block', 'block_1');
  $translatables['ideas_about_challenge_page'] = array(
    t('Master'),
    t('Ideas main view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('counter'),
    t('<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">'),
    t('.'),
    t(','),
    t('All'),
    t('Ideas About Challenge Page'),
    t('Ideas Newest first'),
    t('About Ideas Challenge Page Block'),
  );
  $export['ideas_about_challenge_page'] = $view;

  $view = new view();
  $view->name = 'ideas_by_challenge';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ideas by Challenge';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ideas of Challenge you are following';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
   $new_comments = 0;
   $new_ideas = 0;
   foreach ($results as $result) {
     $nid = $result->nid;
     $new_comments += challenge_dashboard_block_get_count_comments_since_last_login($nid);
     $new_ideas += challenge_dashboard_block_get_count_new_ideas_since_login($nid);
  }
  echo "$new_comments new comments &amp; $new_ideas new ideas, since your last login";
?>';
  /* Relationship: Flags: follow_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_idea';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'challenge' => 'challenge',
    'areas_of_participant_expertise' => 0,
    'capabilities' => 0,
    'implementation_area' => 0,
    'industries' => 0,
    'innovation_capabilities' => 0,
    'membership_type' => 0,
    'newsletter' => 0,
    'organization_type' => 0,
    'post' => 0,
    'precinct' => 0,
    'strategic_priority' => 0,
  );
  /* Relationship: Flags: challenge_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'challenge_flag';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'comments_on_your_ideas';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: For which problem are you providing a solution? */
  $handler->display->display_options['fields']['field_challenge']['id'] = 'field_challenge';
  $handler->display->display_options['fields']['field_challenge']['table'] = 'field_data_field_challenge';
  $handler->display->display_options['fields']['field_challenge']['field'] = 'field_challenge';
  $handler->display->display_options['fields']['field_challenge']['label'] = '';
  $handler->display->display_options['fields']['field_challenge']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_challenge']['alter']['text'] = '<a href="/taxonomy/term/[field_challenge-tid]">Go to Challenge</a>';
  $handler->display->display_options['fields']['field_challenge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge']['element_default_classes'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    822 => '822',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'challenge';

  /* Display: Challenge 1 */
  $handler = $view->new_display('block', 'Challenge 1', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    821 => '821',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'challenge';

  /* Display: Challenge 2 */
  $handler = $view->new_display('block', 'Challenge 2', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    822 => '822',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'challenge';

  /* Display: Challenge 3 */
  $handler = $view->new_display('block', 'Challenge 3', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    823 => '823',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'challenge';

  /* Display: Challenge 4 */
  $handler = $view->new_display('block', 'Challenge 4', 'block_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    824 => '824',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'challenge';

  /* Display: Challenge 5 */
  $handler = $view->new_display('block', 'Challenge 5', 'block_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    825 => '825',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'challenge';
  $translatables['ideas_by_challenge'] = array(
    t('Master'),
    t('Ideas of Challenge you are following'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('counter'),
    t('term'),
    t('flag'),
    t('<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">'),
    t('.'),
    t(','),
    t('<a href="/taxonomy/term/[field_challenge-tid]">Go to Challenge</a>'),
    t('Challenge 1'),
    t('Challenge 2'),
    t('Challenge 3'),
    t('Challenge 4'),
    t('Challenge 5'),
  );
  $export['ideas_by_challenge'] = $view;

  $view = new view();
  $view->name = 'ideas_in_your_ia';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Ideas in your IA';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ideas in your IA';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_tag_line' => 'field_tag_line',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tag_line' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nothing found - Either update your user profile with your Implementing Area <i>or</i> there are no ideas in your implementing area. ';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  /* Relationship: Profile: Division (field_implementing_area) */
  $handler->display->display_options['relationships']['field_implementing_area_tid']['id'] = 'field_implementing_area_tid';
  $handler->display->display_options['relationships']['field_implementing_area_tid']['table'] = 'field_data_field_implementing_area';
  $handler->display->display_options['relationships']['field_implementing_area_tid']['field'] = 'field_implementing_area_tid';
  $handler->display->display_options['relationships']['field_implementing_area_tid']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_implementing_area_tid']['required'] = TRUE;
  /* Relationship: Taxonomy term: Content using Implementation Area */
  $handler->display->display_options['relationships']['reverse_field_implementation_area_node']['id'] = 'reverse_field_implementation_area_node';
  $handler->display->display_options['relationships']['reverse_field_implementation_area_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_implementation_area_node']['field'] = 'reverse_field_implementation_area_node';
  $handler->display->display_options['relationships']['reverse_field_implementation_area_node']['relationship'] = 'field_implementing_area_tid';
  $handler->display->display_options['relationships']['reverse_field_implementation_area_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_implementation_area_node';
  $handler->display->display_options['fields']['title']['label'] = 'Idea';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Post date (with login date filter option) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_implementation_area_node';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'reverse_field_implementation_area_node';
  $handler->display->display_options['fields']['field_tag_line']['label'] = 'Description';
  $handler->display->display_options['fields']['field_tag_line']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['alter']['text'] = '[field_tag_line]
<div class="date"><b>Date started:</b> [created]</div>';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_implementation_area_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Status';
  $handler->display->display_options['fields']['view']['view'] = 'ia_comment_check';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Invite';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<a href="/node/<?php echo $row->nid; ?>/add/member/ia-member" class="btn">Recommend</a>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row-fluid no-results-dashboard">
<div class="span12">
<div class="nothing-here">
<p><strong>There’s nothing here, yet!</strong></p>
<p>You should update your user profile with your Implementing Area.</p>
</div>

<div class="suggestion">
<p>Or there are no ideas in your implementing area.</p>
</div>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $translatables['ideas_in_your_ia'] = array(
    t('Master'),
    t('Ideas in your IA'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nothing found - Either update your user profile with your Implementing Area <i>or</i> there are no ideas in your implementing area. '),
    t('Profile'),
    t('term from field_implementing_area'),
    t('field_implementation_area'),
    t('Idea'),
    t('Description'),
    t('[field_tag_line]
<div class="date"><b>Date started:</b> [created]</div>'),
    t('Status'),
    t('Invite'),
    t('All'),
    t('Block'),
    t('<div class="row-fluid no-results-dashboard">
<div class="span12">
<div class="nothing-here">
<p><strong>There’s nothing here, yet!</strong></p>
<p>You should update your user profile with your Implementing Area.</p>
</div>

<div class="suggestion">
<p>Or there are no ideas in your implementing area.</p>
</div>
</div>
</div>'),
  );
  $export['ideas_in_your_ia'] = $view;

  $view = new view();
  $view->name = 'ideas_main_view';
  $view->description = 'Ideas main view with all filters';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ideas main view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ideas main view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: follow_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_idea';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Implementation Area */
  $handler->display->display_options['fields']['field_implementation_area']['id'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['field'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['label'] = '';
  $handler->display->display_options['fields']['field_implementation_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_implementation_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Strategic Priority */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_strategic_priority']['delta_limit'] = 'all';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image_1']['id'] = 'field_featured_hub_image_1';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image_1']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count supporters';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="btn" href="[path]#comments"><i class="icon-comment">&nbsp;</i> Comment</a>';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]#comments';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '<=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';

  /* Display: Ideas Newest first */
  $handler = $view->new_display('block', 'Ideas Newest first', 'ideas_newest_first');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field Tracker: Creation Date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Ideas Newest first';

  /* Display: Ideas Most discussed */
  $handler = $view->new_display('block', 'Ideas Most discussed', 'ideas_most_discussed');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Ideas most discussed';

  /* Display: Ideas Most liked */
  $handler = $view->new_display('block', 'Ideas Most liked', 'ideas_most_liked');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Ideas most liked';

  /* Display: Ideas by Implementing area */
  $handler = $view->new_display('block', 'Ideas by Implementing area', 'ideas_by_implementing_area');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Implementation Area (field_implementation_area) */
  $handler->display->display_options['filters']['field_implementation_area_tid']['id'] = 'field_implementation_area_tid';
  $handler->display->display_options['filters']['field_implementation_area_tid']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['filters']['field_implementation_area_tid']['field'] = 'field_implementation_area_tid';
  $handler->display->display_options['filters']['field_implementation_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_implementation_area_tid']['expose']['operator_id'] = 'field_implementation_area_tid_op';
  $handler->display->display_options['filters']['field_implementation_area_tid']['expose']['label'] = 'By Implementation Area ';
  $handler->display->display_options['filters']['field_implementation_area_tid']['expose']['operator'] = 'field_implementation_area_tid_op';
  $handler->display->display_options['filters']['field_implementation_area_tid']['expose']['identifier'] = 'field_implementation_area_tid';
  $handler->display->display_options['filters']['field_implementation_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_implementation_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_implementation_area_tid']['vocabulary'] = 'implementation_area';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '<=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  $handler->display->display_options['block_description'] = 'Ideas by implementing area';

  /* Display: Ideas by Strategic Priority */
  $handler = $view->new_display('block', 'Ideas by Strategic Priority', 'block_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Strategic Priority (field_strategic_priority) */
  $handler->display->display_options['filters']['field_strategic_priority_tid']['id'] = 'field_strategic_priority_tid';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['field'] = 'field_strategic_priority_tid';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['operator_id'] = 'field_strategic_priority_tid_op';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['label'] = 'By Strategic Priority';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['operator'] = 'field_strategic_priority_tid_op';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['identifier'] = 'field_strategic_priority_tid';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_strategic_priority_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['vocabulary'] = 'strategic_priority';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '<=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  $handler->display->display_options['block_description'] = 'Ideas by Strategic Priority';

  /* Display: Ideas Search Filter */
  $handler = $view->new_display('block', 'Ideas Search Filter', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Implementation Area */
  $handler->display->display_options['fields']['field_implementation_area']['id'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['field'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['label'] = '';
  $handler->display->display_options['fields']['field_implementation_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_implementation_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Strategic Priority */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_strategic_priority']['delta_limit'] = 'all';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image_1']['id'] = 'field_featured_hub_image_1';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image_1']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count supporters';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="btn" href="[path]#comments"><i class="icon-comment">&nbsp;</i> Comment</a>';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]#comments';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Searches the title, summary and description.';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_tag_line' => 'field_tag_line',
    'body' => 'body',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '<=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  $handler->display->display_options['block_description'] = 'Ideas Search Filter';
  $translatables['ideas_main_view'] = array(
    t('Master'),
    t('Ideas main view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('counter'),
    t('<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">'),
    t('.'),
    t(','),
    t('<a class="btn" href="[path]#comments"><i class="icon-comment">&nbsp;</i> Comment</a>'),
    t('Ideas Newest first'),
    t('Ideas Most discussed'),
    t('Ideas most discussed'),
    t('Ideas Most liked'),
    t('Ideas most liked'),
    t('Ideas by Implementing area'),
    t('By Implementation Area '),
    t('Ideas by implementing area'),
    t('Ideas by Strategic Priority'),
    t('By Strategic Priority'),
    t('Ideas Search Filter'),
    t('Search'),
    t('Searches the title, summary and description.'),
  );
  $export['ideas_main_view'] = $view;

  $view = new view();
  $view->name = 'ideas_you_follow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ideas - You follow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ideas - You follow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ideas_you_follow'] = array(
    t('Master'),
    t('Ideas - You follow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Block'),
  );
  $export['ideas_you_follow'] = $view;

  $view = new view();
  $view->name = 'ideas_yours_follow';
  $view->description = 'Show ideas of a user.';
  $view->tag = 'ideas';
  $view->base_table = 'og_membership';
  $view->human_name = 'Your ideas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row-fluid">
<div class="span3"><img src="/sites/default/files/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_content_html';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Group node';
  /* Relationship: OG membership: OG Roles from membership */
  $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['label'] = 'OG Roles';
  /* Relationship: Flags: follow_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_idea';
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  $handler->display->display_options['relationships']['cid']['relationship'] = 'og_membership_related_node_group';
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'cid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Comment author';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group Privacy */
  $handler->display->display_options['fields']['meta_group_access']['id'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['field'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_group_access']['label'] = '';
  $handler->display->display_options['fields']['meta_group_access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['meta_group_access']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = '';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Field: Content: Post date (with login date filter option) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]/add/member/co-owner">Invite</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]/add/member/co-owner';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: User: Full Name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['empty'] = 'no comment author';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/default/themes/flip_theme/img/projects-cross.png">';
  $handler->display->display_options['fields']['picture']['image_style'] = 'square_thumbnail';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = '';
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'long';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'ia_comment_check';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* Filter criterion: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['value'] = array(
    'administrator member' => 'administrator member',
  );

  /* Display: Your Ideas */
  $handler = $view->new_display('block', 'Your Ideas', 'block_your_ideas');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row-fluid no-results-dashboard">
<div class="span12">
<div class="nothing-here">
<p><strong>There’s nothing here, yet!</strong></p>
</div>

<div class="suggestion">
<p>To learn more about the Ideas Challenge 2, find ideas and share ideas, please visit the <a href="/challenges">Challenges Overview</a> page</p>
</div>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_content_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group Privacy */
  $handler->display->display_options['fields']['meta_group_access']['id'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['field'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_group_access']['label'] = '';
  $handler->display->display_options['fields']['meta_group_access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['meta_group_access']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = '';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Field: Content: Post date (with login date filter option) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]/add/member/co-owner">Invite</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]/add/member/co-owner';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: User: Full Name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['empty'] = 'no comment author';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/dfat/files/default_images/avatar-blank_1.jpg">';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = '';
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'long';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['value'] = array(
    'administrator member' => 'administrator member',
    'Implementing Area Member' => 'Implementing Area Member',
    'Sponser' => 'Sponser',
  );
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  $handler->display->display_options['block_description'] = 'Your ideas';

  /* Display: Your Ideas About Challenge Page */
  $handler = $view->new_display('block', 'Your Ideas About Challenge Page', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row-fluid no-results-dashboard">
<div class="span12">
<div class="nothing-here">
<p><strong>There’s nothing here, yet!</strong></p>
<p>You can <a href="/node/add/hub">create a new Idea</a> if you have a question you want others to answer, or an initiative you want them to support</p>
</div>

<div class="suggestion">
<p>Or if  you are not sure on what a Idea is? Then you can <a href="/ideas">Learn about Ideas</a></p>
</div>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_content_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group Privacy */
  $handler->display->display_options['fields']['meta_group_access']['id'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['field'] = 'meta_group_access';
  $handler->display->display_options['fields']['meta_group_access']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_group_access']['label'] = '';
  $handler->display->display_options['fields']['meta_group_access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['meta_group_access']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = '';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Field: Content: Post date (with login date filter option) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]/add/member/co-owner">Invite</a>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]/add/member/co-owner';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: User: Full Name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['empty'] = 'no comment author';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/dfat/files/default_images/avatar-blank_1.jpg">';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = '';
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'long';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'ia_comment_check';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['value'] = array(
    'administrator member' => 'administrator member',
    'Implementing Area Member' => 'Implementing Area Member',
    'Sponser' => 'Sponser',
  );
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['block_description'] = 'Your ideas';
  $translatables['ideas_yours_follow'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="row-fluid">
<div class="span3"><img src="/sites/default/files/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>'),
    t('Group node'),
    t('OG Roles'),
    t('counter'),
    t('Last Comment'),
    t('Comment author'),
    t('<a href="/node/[nid]/add/member/co-owner">Invite</a>'),
    t('.'),
    t(','),
    t('no comment author'),
    t('<img src="/sites/default/themes/flip_theme/img/projects-cross.png">'),
    t('All'),
    t('Your Ideas'),
    t('<div class="row-fluid no-results-dashboard">
<div class="span12">
<div class="nothing-here">
<p><strong>There’s nothing here, yet!</strong></p>
</div>

<div class="suggestion">
<p>To learn more about the Ideas Challenge 2, find ideas and share ideas, please visit the <a href="/challenges">Challenges Overview</a> page</p>
</div>
</div>
</div>'),
    t('<img src="/sites/dfat/files/default_images/avatar-blank_1.jpg">'),
    t('Your ideas'),
    t('Your Ideas About Challenge Page'),
    t('<div class="row-fluid no-results-dashboard">
<div class="span12">
<div class="nothing-here">
<p><strong>There’s nothing here, yet!</strong></p>
<p>You can <a href="/node/add/hub">create a new Idea</a> if you have a question you want others to answer, or an initiative you want them to support</p>
</div>

<div class="suggestion">
<p>Or if  you are not sure on what a Idea is? Then you can <a href="/ideas">Learn about Ideas</a></p>
</div>
</div>
</div>'),
  );
  $export['ideas_yours_follow'] = $view;

  $view = new view();
  $view->name = 'list_of_idea_supporters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'List of Idea Supporters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List of Idea Supporters';
  $handler->display->display_options['css_class'] = 'list-supporters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    5 => '5',
    6 => '6',
    8 => '8',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>List of Idea Supporters</h1>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There aren\'t any idea supporters found for this idea. Alternatively, the URL is missing the Unique ID of the Idea you\'re looking for (i.e. the URL should be /list-of-idea-supporters/[number] )';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Flags: User's flaggings */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'follow_idea';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Flags: Entity ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'flagging';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['relationship'] = 'flag_user_content_rel';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entity_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list-of-idea-supporters';
  $translatables['list_of_idea_supporters'] = array(
    t('Master'),
    t('List of Idea Supporters'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h1>List of Idea Supporters</h1>
'),
    t('There aren\'t any idea supporters found for this idea. Alternatively, the URL is missing the Unique ID of the Idea you\'re looking for (i.e. the URL should be /list-of-idea-supporters/[number] )'),
    t('user flagged content'),
    t('All'),
    t('Page'),
  );
  $export['list_of_idea_supporters'] = $view;

  $view = new view();
  $view->name = 'my_library';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hubs You Joined';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_tag_line' => 'field_tag_line',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tag_line' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: flag_stories */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'flag_stories';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = '';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'approaches' => 'approaches',
    'case_studies' => 'case_studies',
    'frameworks' => 'frameworks',
    'learnings_patterns' => 'learnings_patterns',
  );

  /* Display: Library Items you follow */
  $handler = $view->new_display('page', 'Library Items you follow', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Items you follow';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="row-fluid">
<div class="span3"><img src="/profiles/collabco/themes/collabco_theme/images/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>You can <a href="/node/add/hub">create a new Hub</a> if you have a question you want others to answer, or an initiative you want them to support</p>
<p>Or if  you are not sure on what a hub is? Then you can <a href="/hubs">Learn about Hubs</a></p>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = 'Description';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = 'Status';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['path'] = 'my-library';

  /* Display: Hubs you joined */
  $handler = $view->new_display('block', 'Hubs you joined', 'hubs_you_joined');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row-fluid">
<div class="span3"><img src="/sites/default/files/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Og membership ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['id']['validate_options']['type'] = 'either';
  $translatables['my_library'] = array(
    t('Master'),
    t('Hubs You Joined'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('flag'),
    t('All'),
    t('Library Items you follow'),
    t('<br />
<div class="row-fluid">
<div class="span3"><img src="/profiles/collabco/themes/collabco_theme/images/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>You can <a href="/node/add/hub">create a new Hub</a> if you have a question you want others to answer, or an initiative you want them to support</p>
<p>Or if  you are not sure on what a hub is? Then you can <a href="/hubs">Learn about Hubs</a></p>
</div>
</div>'),
    t('Name'),
    t('Description'),
    t('Status'),
    t('Edit'),
    t('Hubs you joined'),
    t('<div class="row-fluid">
<div class="span3"><img src="/sites/default/files/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>'),
  );
  $export['my_library'] = $view;

  $view = new view();
  $view->name = 'share_this_idea';
  $view->description = 'Shows only for published ideas';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Share this idea';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'ideas-challenge';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'If the invitee isn\'t registered on the website yet, use the Invite button below to invite them to the Ideas Challenge.

They\'ll be prompted to contact you once they register. At that point, use the Add User button to the right.';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<center><a class="btn colorbox-node" href="/share-idea/!1?width=600&height=600&destination=node/!1"><i class="icon-envelope">&nbsp;</i> Invite</a></center>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );

  /* Display: Share Button on Invite Page */
  $handler = $view->new_display('block', 'Share Button on Invite Page', 'block');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<center><a class="btn colorbox-node" href="/share-idea/!1?width=600&height=600&destination=node/!1"><i class="icon-envelope">&nbsp;</i> Invite</a></center>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['block_description'] = 'Share this idea';

  /* Display: Share Button in Idea Page */
  $handler = $view->new_display('block', 'Share Button in Idea Page', 'block_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Click invite to share this Idea with a DFAT staff member who is not yet part of the Ideas Challenge.';
  $handler->display->display_options['footer']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a class="btn-ideas-challenge" href="/share-idea-general/!1?width=600&height=350&destination=node/!1"><i class="icon-envelope">&nbsp;</i> Share this idea</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['block_description'] = 'Share this idea on Idea Page';
  $translatables['share_this_idea'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('If the invitee isn\'t registered on the website yet, use the Invite button below to invite them to the Ideas Challenge.

They\'ll be prompted to contact you once they register. At that point, use the Add User button to the right.'),
    t('<center><a class="btn colorbox-node" href="/share-idea/!1?width=600&height=600&destination=node/!1"><i class="icon-envelope">&nbsp;</i> Invite</a></center>'),
    t('All'),
    t('Share Button on Invite Page'),
    t('Share this idea'),
    t('Share Button in Idea Page'),
    t('Click invite to share this Idea with a DFAT staff member who is not yet part of the Ideas Challenge.'),
    t('<a class="btn-ideas-challenge" href="/share-idea-general/!1?width=600&height=350&destination=node/!1"><i class="icon-envelope">&nbsp;</i> Share this idea</a>'),
    t('Share this idea on Idea Page'),
  );
  $export['share_this_idea'] = $view;

  $view = new view();
  $view->name = 'solutions_by_challenge_for_challenge_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'solutions by challenge for challenge page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'solutions by challenge for challenge page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['solutions_by_challenge_for_challenge_page'] = array(
    t('Master'),
    t('solutions by challenge for challenge page'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['solutions_by_challenge_for_challenge_page'] = $view;

  $view = new view();
  $view->name = 'solutions_main_view';
  $view->description = 'Ideas main view with all filters';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'solutions main view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ideas main view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: follow_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_idea';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image_1']['id'] = 'field_featured_hub_image_1';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image_1']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count supporters';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="btn" href="[path]#comments"><i class="icon-comment">&nbsp;</i> Comment</a>';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]#comments';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';

  /* Display: Ideas Newest first */
  $handler = $view->new_display('block', 'Ideas Newest first', 'ideas_newest_first');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field Tracker: Creation Date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'track_field_changes_audit';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Solutions Newest first';

  /* Display: Ideas Most discussed */
  $handler = $view->new_display('block', 'Ideas Most discussed', 'ideas_most_discussed');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Solutions most discussed';

  /* Display: Ideas Most liked */
  $handler = $view->new_display('block', 'Ideas Most liked', 'ideas_most_liked');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Solutions most liked';

  /* Display: Ideas by Strategic Priority */
  $handler = $view->new_display('block', 'Ideas by Strategic Priority', 'block_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Strategic Priority (field_strategic_priority) */
  $handler->display->display_options['filters']['field_strategic_priority_tid']['id'] = 'field_strategic_priority_tid';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['field'] = 'field_strategic_priority_tid';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['operator_id'] = 'field_strategic_priority_tid_op';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['label'] = 'By Strategic Priority';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['operator'] = 'field_strategic_priority_tid_op';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['identifier'] = 'field_strategic_priority_tid';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_strategic_priority_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_strategic_priority_tid']['vocabulary'] = 'strategic_priority';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  $handler->display->display_options['block_description'] = 'Solutions by Strategic Priority';

  /* Display: Ideas Search Filter */
  $handler = $view->new_display('block', 'Ideas Search Filter', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Implementation Area */
  $handler->display->display_options['fields']['field_implementation_area']['id'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['field'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['label'] = '';
  $handler->display->display_options['fields']['field_implementation_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_implementation_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Strategic Priority */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_strategic_priority']['delta_limit'] = 'all';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_type'] = '0';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image_1']['id'] = 'field_featured_hub_image_1';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image_1']['empty'] = '<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image_1']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 supporter';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count supporters';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a class="btn" href="[path]#comments"><i class="icon-comment">&nbsp;</i> Comment</a>';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]#comments';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Group Privacy (meta_group_access) */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Searches the title, summary and description.';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    8 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_tag_line' => 'field_tag_line',
    'body' => 'body',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  $handler->display->display_options['block_description'] = 'Solutions Search Filter';
  $translatables['solutions_main_view'] = array(
    t('Master'),
    t('Ideas main view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('counter'),
    t('<img src="/sites/default/themes/flip_theme/img/placeholder-landscape.jpg">'),
    t('.'),
    t(','),
    t('<a class="btn" href="[path]#comments"><i class="icon-comment">&nbsp;</i> Comment</a>'),
    t('All'),
    t('Ideas Newest first'),
    t('Solutions Newest first'),
    t('Ideas Most discussed'),
    t('Solutions most discussed'),
    t('Ideas Most liked'),
    t('Solutions most liked'),
    t('Ideas by Strategic Priority'),
    t('By Strategic Priority'),
    t('Solutions by Strategic Priority'),
    t('Ideas Search Filter'),
    t('Search'),
    t('Searches the title, summary and description.'),
    t('Solutions Search Filter'),
  );
  $export['solutions_main_view'] = $view;

  $view = new view();
  $view->name = 'solutions_of_challenge';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Solutions by challenge';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Solutions by challenge - Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No solutions available. ';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: For which problem are you providing a solution? (field_challenge) */
  $handler->display->display_options['arguments']['field_challenge_tid']['id'] = 'field_challenge_tid';
  $handler->display->display_options['arguments']['field_challenge_tid']['table'] = 'field_data_field_challenge';
  $handler->display->display_options['arguments']['field_challenge_tid']['field'] = 'field_challenge_tid';
  $handler->display->display_options['arguments']['field_challenge_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_challenge_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_challenge_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_challenge_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_challenge_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['solutions_of_challenge'] = array(
    t('Master'),
    t('Solutions by challenge - Dashboard'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No solutions available. '),
    t('All'),
    t('Block'),
  );
  $export['solutions_of_challenge'] = $view;

  $view = new view();
  $view->name = 'sp_ia';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SP & IA';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SP & IA';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Strategic Priority */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['delta_limit'] = 'all';
  /* Field: Content: Implementation Area */
  $handler->display->display_options['fields']['field_implementation_area']['id'] = 'field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['table'] = 'field_data_field_implementation_area';
  $handler->display->display_options['fields']['field_implementation_area']['field'] = 'field_implementation_area';
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: For which problem are you providing a solution? */
  $handler->display->display_options['fields']['field_challenge']['id'] = 'field_challenge';
  $handler->display->display_options['fields']['field_challenge']['table'] = 'field_data_field_challenge';
  $handler->display->display_options['fields']['field_challenge']['field'] = 'field_challenge';
  $handler->display->display_options['fields']['field_challenge']['label'] = 'Challenge';
  $handler->display->display_options['fields']['field_challenge']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_challenge']['type'] = 'taxonomy_term_reference_plain';
  $translatables['sp_ia'] = array(
    t('Master'),
    t('SP & IA'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Strategic Priority'),
    t('Implementation Area'),
    t('All'),
    t('Block'),
    t('Challenge'),
  );
  $export['sp_ia'] = $view;

  $view = new view();
  $view->name = 'submitted_ideas_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Submitted ideas count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Submitted ideas count';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<li>@total submitted ideas</li>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '8191';
  /* Filter criterion: Content: Group state (meta_og_state_state) */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['submitted_ideas_count'] = array(
    t('Master'),
    t('Submitted ideas count'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<li>@total submitted ideas</li>'),
    t('All'),
    t('Block'),
  );
  $export['submitted_ideas_count'] = $view;

  $view = new view();
  $view->name = 'your_hubs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Your Hubs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hubs You Joined';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_tag_line' => 'field_tag_line',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tag_line' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = '';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date (with login date filter option) */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );

  /* Display: Hubs you host */
  $handler = $view->new_display('page', 'Hubs you host', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hubs you host';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<br />
<div class="row-fluid">
<div class="span3"><img src="/profiles/collabco/themes/collabco_theme/images/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>You can <a href="/node/add/hub">create a new Hub</a> if you have a question you want others to answer, or an initiative you want them to support</p>
<p>Or if  you are not sure on what a hub is? Then you can <a href="/hubs">Learn about Hubs</a></p>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = 'Description';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Group state */
  $handler->display->display_options['fields']['meta_og_state_state']['id'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['field'] = 'meta_og_state_state';
  $handler->display->display_options['fields']['meta_og_state_state']['label'] = 'Status';
  $handler->display->display_options['fields']['meta_og_state_state']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['path'] = 'my-hubs';

  /* Display: Hubs you joined */
  $handler = $view->new_display('block', 'Hubs you joined', 'hubs_you_joined');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row-fluid">
<div class="span3"><img src="/profiles/collabco/themes/collabco_theme/images/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Og membership ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['id']['validate_options']['type'] = 'either';
  $translatables['your_hubs'] = array(
    t('Master'),
    t('Hubs You Joined'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('All'),
    t('Hubs you host'),
    t('<br />
<div class="row-fluid">
<div class="span3"><img src="/profiles/collabco/themes/collabco_theme/images/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>You can <a href="/node/add/hub">create a new Hub</a> if you have a question you want others to answer, or an initiative you want them to support</p>
<p>Or if  you are not sure on what a hub is? Then you can <a href="/hubs">Learn about Hubs</a></p>
</div>
</div>'),
    t('Name'),
    t('Description'),
    t('Status'),
    t('Edit'),
    t('Hubs you joined'),
    t('<div class="row-fluid">
<div class="span3"><img src="/profiles/collabco/themes/collabco_theme/images/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>'),
  );
  $export['your_hubs'] = $view;

  return $export;
}
