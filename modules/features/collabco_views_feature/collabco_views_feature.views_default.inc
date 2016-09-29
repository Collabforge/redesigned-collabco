<?php
/**
 * @file
 * collabco_views_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function collabco_views_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'archieved_ideas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'archieved ideas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Parked Ideas';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Idea';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
  /* Relationship: Flags: support_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Idea';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_idea';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 follower';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count followers';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Field: Content: Featured_image */
  $handler->display->display_options['fields']['field_featured_picture']['id'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['table'] = 'field_data_field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['field'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['label'] = '';
  $handler->display->display_options['fields']['field_featured_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['empty'] = '<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Idea State */
  $handler->display->display_options['fields']['field_idea_state']['id'] = 'field_idea_state';
  $handler->display->display_options['fields']['field_idea_state']['table'] = 'field_data_field_idea_state';
  $handler->display->display_options['fields']['field_idea_state']['field'] = 'field_idea_state';
  $handler->display->display_options['fields']['field_idea_state']['label'] = '';
  $handler->display->display_options['fields']['field_idea_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_idea_state']['type'] = 'list_key';
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '100',
  );
  /* Sort criterion: Content: Post date */
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
    'idea' => 'idea',
  );
  /* Filter criterion: Content: Idea State (field_idea_state) */
  $handler->display->display_options['filters']['field_idea_state_value']['id'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['table'] = 'field_data_field_idea_state';
  $handler->display->display_options['filters']['field_idea_state_value']['field'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['value'] = array(
    'archived' => 'archived',
    'promoted' => 'promoted',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<br>
<div class="separator"></div>
<i class="icon-music-stop"></i>
<h3>Parked ideas</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'archived-ideas';
  $translatables['archieved_ideas'] = array(
    t('Master'),
    t('Parked Ideas'),
    t('View All'),
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
    t('Follow Idea'),
    t('Support Idea'),
    t('.'),
    t(','),
    t('<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>'),
    t('Block'),
    t('more'),
    t('<br>
<div class="separator"></div>
<i class="icon-music-stop"></i>
<h3>Parked ideas</h3>'),
    t('Page'),
  );
  $export['archieved_ideas'] = $view;

  $view = new view();
  $view->name = 'challenge_page_header';
  $view->description = 'Challenge individual page header';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Challenge Page Header';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Challenge Page Header';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: challenge_flag counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Challenge';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'challenge_flag';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Sponsor */
  $handler->display->display_options['fields']['field_sponser']['id'] = 'field_sponser';
  $handler->display->display_options['fields']['field_sponser']['table'] = 'field_data_field_sponser';
  $handler->display->display_options['fields']['field_sponser']['field'] = 'field_sponser';
  $handler->display->display_options['fields']['field_sponser']['label'] = '';
  $handler->display->display_options['fields']['field_sponser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponser']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_sponser']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Ideas count in Challenge */
  $handler->display->display_options['fields']['ideas_count_in_challenge']['id'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['field'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['label'] = '';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Challenge_Image */
  $handler->display->display_options['fields']['field_challenge_image']['id'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['table'] = 'field_data_field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['field'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_image']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_challenge_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_challenge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_challenge_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_challenge_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['block_description'] = 'Challenge Individual page header';
  $translatables['challenge_page_header'] = array(
    t('Master'),
    t('Challenge Page Header'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Follow Challenge'),
    t('.'),
    t(','),
    t('All'),
    t('Block'),
    t('Challenge Individual page header'),
  );
  $export['challenge_page_header'] = $view;

  $view = new view();
  $view->name = 'challenge_report';
  $view->description = 'Challenge individual page header';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Challenge Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Challenge report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access administration menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'count' => 'count',
    'ideas_count_in_challenge' => 'ideas_count_in_challenge',
    'tid' => 'tid',
    'ideas_promoted_count_in_challenge' => 'ideas_promoted_count_in_challenge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ideas_count_in_challenge' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ideas_promoted_count_in_challenge' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Flags: challenge_flag counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Challenge';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'challenge_flag';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Challenge';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Follow Count';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Ideas count in Challenge */
  $handler->display->display_options['fields']['ideas_count_in_challenge']['id'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['field'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['label'] = 'Ideas Count';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Ideas promoted count in Challenge */
  $handler->display->display_options['fields']['ideas_promoted_count_in_challenge']['id'] = 'ideas_promoted_count_in_challenge';
  $handler->display->display_options['fields']['ideas_promoted_count_in_challenge']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['ideas_promoted_count_in_challenge']['field'] = 'ideas_promoted_count_in_challenge';
  $handler->display->display_options['fields']['ideas_promoted_count_in_challenge']['label'] = 'Ideas promoted count ';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Conversion rate from ideas to collaborations';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '[ideas_promoted_count_in_challenge]/[ideas_count_in_challenge]*100';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'challenge' => 'challenge',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/challenge-report';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Challenge Report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['challenge_report'] = array(
    t('Master'),
    t('Challenge report'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Follow Challenge'),
    t('Challenge'),
    t('Follow Count'),
    t('.'),
    t(','),
    t('Ideas Count'),
    t('Term ID'),
    t('Ideas promoted count '),
    t('Conversion rate from ideas to collaborations'),
    t('%'),
    t('Page'),
  );
  $export['challenge_report'] = $view;

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
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access collabco dashboard';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="icon-flag"></i>
<p>This is where you can view the current Challenges set by our Executive, which address specific issues in our Organisation.</p>

<h3>Featured Challenges</h3>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/open-challenges" class="btn-green" >View all</a>
<br>
<br>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Flags: challenge_flag counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Challenge';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'challenge_flag';
  /* Relationship: Flags: challenge_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'challenge_flag';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Challenge_Image */
  $handler->display->display_options['fields']['field_challenge_image']['id'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['table'] = 'field_data_field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['field'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_challenge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['empty'] = '<a href=\'/taxonomy/term/[tid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>';
  $handler->display->display_options['fields']['field_challenge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_challenge_image']['settings'] = array(
    'image_style' => 'challenge',
    'image_link' => 'content',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['element_default_classes'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Field: Category */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Sponsor */
  $handler->display->display_options['fields']['field_sponser']['id'] = 'field_sponser';
  $handler->display->display_options['fields']['field_sponser']['table'] = 'field_data_field_sponser';
  $handler->display->display_options['fields']['field_sponser']['field'] = 'field_sponser';
  $handler->display->display_options['fields']['field_sponser']['label'] = '';
  $handler->display->display_options['fields']['field_sponser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sponser']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_sponser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponser']['empty'] = 'no_sponser';
  $handler->display->display_options['fields']['field_sponser']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_sponser']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_sponser']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: Ideas count in Challenge */
  $handler->display->display_options['fields']['ideas_count_in_challenge']['id'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['field'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['label'] = '';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['element_label_colon'] = FALSE;
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '150',
  );
  /* Sort criterion: Taxonomy queue: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'term_queue_term';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
    'description' => 'description',
  );
  /* Filter criterion: Taxonomy queue: Machine Name */
  $handler->display->display_options['filters']['machine_name_1']['id'] = 'machine_name_1';
  $handler->display->display_options['filters']['machine_name_1']['table'] = 'term_queue';
  $handler->display->display_options['filters']['machine_name_1']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name_1']['value'] = array(
    'open_challenges' => 'open_challenges',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'challenge';
  $translatables['challenges'] = array(
    t('Master'),
    t('Challenges'),
    t('View All'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<i class="icon-flag"></i>
<p>This is where you can view the current Challenges set by the team, which address specific issues in our organisation.</p>

<h3>Featured Challenges</h3>'),
    t('<a href="/open-challenges" class="btn-green" >View all</a>
<br>
<br>'),
    t('Follow Challenge'),
    t('flag'),
    t('.'),
    t(','),
    t('<a href=\'/taxonomy/term/[tid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>'),
    t('no_sponser'),
    t('Page'),
    t('more'),
  );
  $export['challenges'] = $view;

  $view = new view();
  $view->name = 'challenges_you_follow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Challenges - You Follow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Challenges - You Follow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: challenge_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'challenge_flag';
  /* Relationship: Flags: challenge_flag counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'challenge_flag';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '130';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Challenge_Image */
  $handler->display->display_options['fields']['field_challenge_image']['id'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['table'] = 'field_data_field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['field'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['empty'] = '<a href=\'/taxonomy/term/[tid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>';
  $handler->display->display_options['fields']['field_challenge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_challenge_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Ideas count in Challenge */
  $handler->display->display_options['fields']['ideas_count_in_challenge']['id'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['field'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['label'] = '';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'challenge' => 'challenge',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['challenges_you_follow'] = array(
    t('Master'),
    t('Challenges - You Follow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('counter'),
    t('.'),
    t(','),
    t('<a href=\'/taxonomy/term/[tid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>'),
    t('Block'),
  );
  $export['challenges_you_follow'] = $view;

  $view = new view();
  $view->name = 'closed_challenges';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'closed challenges';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Challenges';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access collabco dashboard';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="icon-flag"></i>
<h3>Closed Challenges</h3>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Relationship: Flags: challenge_flag counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Challenge';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'challenge_flag';
  /* Relationship: Flags: challenge_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'challenge_flag';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Challenge_Image */
  $handler->display->display_options['fields']['field_challenge_image']['id'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['table'] = 'field_data_field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['field'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_challenge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['empty'] = '<a href=\'/taxonomy/term/[tid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>';
  $handler->display->display_options['fields']['field_challenge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_challenge_image']['settings'] = array(
    'image_style' => 'challenge',
    'image_link' => 'content',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Field: Field: Category */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Ideas count in Challenge */
  $handler->display->display_options['fields']['ideas_count_in_challenge']['id'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['field'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['label'] = '';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['element_label_colon'] = FALSE;
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '150',
  );
  /* Sort criterion: Taxonomy term: Challenge open - end date (field_start_date:value2), with "open" option */
  $handler->display->display_options['sorts']['field_start_date_value2']['id'] = 'field_start_date_value2';
  $handler->display->display_options['sorts']['field_start_date_value2']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['sorts']['field_start_date_value2']['field'] = 'field_start_date_value2';
  $handler->display->display_options['sorts']['field_start_date_value2']['order'] = 'DESC';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Challenge open - end date (field_start_date:value2), with "open" option */
  $handler->display->display_options['filters']['field_start_date_value2']['id'] = 'field_start_date_value2';
  $handler->display->display_options['filters']['field_start_date_value2']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['filters']['field_start_date_value2']['field'] = 'field_start_date_value2';
  $handler->display->display_options['filters']['field_start_date_value2']['operator'] = 'is_closed';
  $handler->display->display_options['filters']['field_start_date_value2']['group'] = 1;

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="icon-flag"></i>
<h3>Closed Challenges</h3>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['path'] = 'closed-challenges';
  $translatables['closed_challenges'] = array(
    t('Master'),
    t('Challenges'),
    t('View All'),
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
    t('<i class="icon-flag"></i>
<h3>Closed Challenges</h3>'),
    t('Follow Challenge'),
    t('flag'),
    t('.'),
    t(','),
    t('<a href=\'/taxonomy/term/[tid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>'),
    t('block'),
    t('more'),
    t('Page'),
  );
  $export['closed_challenges'] = $view;

  $view = new view();
  $view->name = 'collaborations_main_view';
  $view->description = 'Collaborations - featured';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collaborations - featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collaborations';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access collabco dashboard';
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="breadcrumb-container">
<ol class="breadcrumb" style="background-color:#FCFCFC; float:left;">
  <li><a href="/">Home</a></li>
  <li>Collaborations</li>
</ol>
</div>
<i class="icon-beaker"></i>
<p>Have the skills and resources to develop these idea into projects? Share them here!</p>
<h3>Featured Collaborations</h3>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link">
  <a href="/featured-collaborations">
    View All  </a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  /* Relationship: Flags: follow_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_collaboration';
  /* Relationship: Flags: support_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_collaboration';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_collaborations' => 'featured_collaborations',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<a href="/node/[nid]"><img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg"></a>';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'challenge',
    'image_link' => 'content',
  );
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['element_default_classes'] = FALSE;
  /* Field: Field: Category */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
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
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 follower';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count followers';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['separator'] = '';
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Collaboration Phase */
  $handler->display->display_options['fields']['field_collaboration_phase']['id'] = 'field_collaboration_phase';
  $handler->display->display_options['fields']['field_collaboration_phase']['table'] = 'field_data_field_collaboration_phase';
  $handler->display->display_options['fields']['field_collaboration_phase']['field'] = 'field_collaboration_phase';
  $handler->display->display_options['fields']['field_collaboration_phase']['label'] = '';
  $handler->display->display_options['fields']['field_collaboration_phase']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collaboration_phase']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_collaboration_phase']['type'] = 'list_key';
  /* Sort criterion: Content: Post date */
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
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: Collaborations featured */
  $handler = $view->new_display('page', 'Collaborations featured', 'collaborations_featured');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['path'] = 'collaborate';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: follow_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_collaboration';
  /* Relationship: Flags: support_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_collaboration';
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
  /* Filter criterion: Content: Turn into Project (field_turn_into_project) */
  $handler->display->display_options['filters']['field_turn_into_project_value']['id'] = 'field_turn_into_project_value';
  $handler->display->display_options['filters']['field_turn_into_project_value']['table'] = 'field_data_field_turn_into_project';
  $handler->display->display_options['filters']['field_turn_into_project_value']['field'] = 'field_turn_into_project_value';
  $handler->display->display_options['filters']['field_turn_into_project_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_turn_into_project_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Parked Collaboration (field_parked_collaboration) */
  $handler->display->display_options['filters']['field_parked_collaboration_value']['id'] = 'field_parked_collaboration_value';
  $handler->display->display_options['filters']['field_parked_collaboration_value']['table'] = 'field_data_field_parked_collaboration';
  $handler->display->display_options['filters']['field_parked_collaboration_value']['field'] = 'field_parked_collaboration_value';
  $handler->display->display_options['filters']['field_parked_collaboration_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_parked_collaboration_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'featured-collaborations';
  $translatables['collaborations_main_view'] = array(
    t('Master'),
    t('Collaborations'),
    t('View All'),
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
    t('<div class="breadcrumb-container">
<ol class="breadcrumb" style="background-color:#FCFCFC; float:left;">
  <li><a href="/">Home</a></li>
  <li>Collaborations</li>
</ol>
</div>
<i class="icon-beaker"></i>
<p>Have the skills and resources to develop these idea into projects? Share them here!</p>
<h3>Featured Collaborations</h3>'),
    t('<div class="more-link">
  <a href="/featured-collaborations">
    View All  </a>
</div>'),
    t('Follow Collaboration'),
    t('Support Collaboration'),
    t('queue'),
    t('<a href="/node/[nid]"><img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg"></a>'),
    t('.'),
    t(','),
    t('Collaborations featured'),
    t('more'),
    t('Page'),
  );
  $export['collaborations_main_view'] = $view;

  $view = new view();
  $view->name = 'collaborations_of_an_idea';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'collaborations of an idea';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'collaborations of an idea';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block-title">Related Co - Lab</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Idea (field_idea) */
  $handler->display->display_options['arguments']['field_idea_target_id']['id'] = 'field_idea_target_id';
  $handler->display->display_options['arguments']['field_idea_target_id']['table'] = 'field_data_field_idea';
  $handler->display->display_options['arguments']['field_idea_target_id']['field'] = 'field_idea_target_id';
  $handler->display->display_options['arguments']['field_idea_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_idea_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_idea_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_idea_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_idea_target_id']['summary_options']['items_per_page'] = '25';
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
  $translatables['collaborations_of_an_idea'] = array(
    t('Master'),
    t('collaborations of an idea'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h2 class="block-title">Related Co - Lab</h2>'),
    t('All'),
    t('Block'),
  );
  $export['collaborations_of_an_idea'] = $view;

  $view = new view();
  $view->name = 'collaborations_turned_projects';
  $view->description = 'Collaborations - Turned projects';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collaborations_turned_projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collaborations';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="icon-todolist-check"></i>
<h3>Collaborations Turned Projects</h3>
<p>These clever idea creators have made a real difference to our work environment. Their Collaborations have been approved to become projects! </p>
<p>You can follow their progress on the intranet. You can also explore here to see how the idea grew over time.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Flags: follow_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_collaboration';
  /* Relationship: Flags: support_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_collaboration';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<a href="/node/[nid]"><img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg"></a>';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'challenge',
    'image_link' => 'content',
  );
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['element_default_classes'] = FALSE;
  /* Field: Field: Category */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 follower';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count followers';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['separator'] = '';
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supporters';
  /* Sort criterion: Content: Post date */
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
  /* Filter criterion: Content: Turn into Project (field_turn_into_project) */
  $handler->display->display_options['filters']['field_turn_into_project_value']['id'] = 'field_turn_into_project_value';
  $handler->display->display_options['filters']['field_turn_into_project_value']['table'] = 'field_data_field_turn_into_project';
  $handler->display->display_options['filters']['field_turn_into_project_value']['field'] = 'field_turn_into_project_value';
  $handler->display->display_options['filters']['field_turn_into_project_value']['value'] = array(
    1 => '1',
  );

  /* Display: Collaborations turned into project */
  $handler = $view->new_display('block', 'Collaborations turned into project', 'collaborations_turned');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'collaborations-turned-projects';
  $translatables['collaborations_turned_projects'] = array(
    t('Master'),
    t('Collaborations'),
    t('View All'),
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
    t('<i class="icon-todolist-check"></i>
<h3>Collaborations Turned Projects</h3>
<p>These clever idea creators have made a real difference to our work environment. Their Collaborations have been approved to become projects! </p>
<p>You can follow their progress on the intranet. You can also explore here to see how the idea grew over time.</p>'),
    t('Follow Collaboration'),
    t('Support Collaboration'),
    t('<a href="/node/[nid]"><img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg"></a>'),
    t('.'),
    t(','),
    t('Collaborations turned into project'),
    t('more'),
    t('Page'),
  );
  $export['collaborations_turned_projects'] = $view;

  $view = new view();
  $view->name = 'collaborations_you_follow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collaborations - You follow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collaborations - You follow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="nothing-here">
<center><p>There’s nothing here, yet!</p></center>
<br>
<br>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Flags: follow_collaboration */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'follow_collaboration';
  /* Relationship: Flags: follow_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_collaboration';
  /* Relationship: Flags: support_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_collaboration';
  /* Relationship: Flags: support_collaboration */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'support_collaboration';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<a href=\'/node/[nid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '130';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '250',
  );
  /* Sort criterion: Content: Post date */
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
  $handler = $view->new_display('block', 'Block', 'collaborations_you_follow');
  $translatables['collaborations_you_follow'] = array(
    t('Master'),
    t('Collaborations - You follow'),
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
    t('<div class="nothing-here">
<center><p>There’s nothing here, yet!</p></center>
<br>
<br>
</div>'),
    t('Follow Collaboration'),
    t('Support Collaboration'),
    t('.'),
    t(','),
    t('<a href=\'/node/[nid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>'),
    t('Block'),
  );
  $export['collaborations_you_follow'] = $view;

  $view = new view();
  $view->name = 'discussions_within_a_collaboration';
  $view->description = 'Discussions within a Collaboration';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Discussions within a Collaboration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Discussions within a Collaboration';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access collabco dashboard';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Discussions in this collaborations yet. 
';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: User: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'image-profile';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Attachment */
  $handler->display->display_options['fields']['field_file_ref']['id'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['table'] = 'field_data_field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['field'] = 'field_file_ref';
  $handler->display->display_options['fields']['field_file_ref']['label'] = '';
  $handler->display->display_options['fields']['field_file_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_ref']['type'] = 'og_list_default';
  $handler->display->display_options['fields']['field_file_ref']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Hosted in (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
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
    'conversation' => 'conversation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/discussions';
  $translatables['discussions_within_a_collaboration'] = array(
    t('Master'),
    t('Discussions within a Collaboration'),
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
    t('No Discussions in this collaborations yet. 
'),
    t('author'),
    t('All'),
    t('Page'),
  );
  $export['discussions_within_a_collaboration'] = $view;

  $view = new view();
  $view->name = 'documents_within_a_collaboration';
  $view->description = 'Discussions within a Collaboration';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents within a Collaboration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documents within a Collaboration';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access collabco dashboard';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No documents in this collaborations yet. 
';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: User: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'image-profile';
  /* Field: Content: File(s) */
  $handler->display->display_options['fields']['field_ko_file']['id'] = 'field_ko_file';
  $handler->display->display_options['fields']['field_ko_file']['table'] = 'field_data_field_ko_file';
  $handler->display->display_options['fields']['field_ko_file']['field'] = 'field_ko_file';
  $handler->display->display_options['fields']['field_ko_file']['label'] = '';
  $handler->display->display_options['fields']['field_ko_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ko_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ko_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_ko_file']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Hosted in (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
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
    'knowledge_object' => 'knowledge_object',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/documents';
  $translatables['documents_within_a_collaboration'] = array(
    t('Master'),
    t('Documents within a Collaboration'),
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
    t('No documents in this collaborations yet. 
'),
    t('author'),
    t('All'),
    t('Page'),
  );
  $export['documents_within_a_collaboration'] = $view;

  $view = new view();
  $view->name = 'featured_challenges_for_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Featured challenges for home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Challenges';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access collabco dashboard';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="icon-flag"></i>
<h3>Featured Challenges</h3>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Relationship: Flags: challenge_flag counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Challenge';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'challenge_flag';
  /* Relationship: Flags: challenge_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'challenge_flag';
  /* Relationship: Flags: support_challenge counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Challenge';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_challenge';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Challenge_Image */
  $handler->display->display_options['fields']['field_challenge_image']['id'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['table'] = 'field_data_field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['field'] = 'field_challenge_image';
  $handler->display->display_options['fields']['field_challenge_image']['label'] = '';
  $handler->display->display_options['fields']['field_challenge_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_challenge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_challenge_image']['empty'] = '<a href=\'/taxonomy/term/[tid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>';
  $handler->display->display_options['fields']['field_challenge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_challenge_image']['settings'] = array(
    'image_style' => 'challenge',
    'image_link' => 'content',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supporters';
  /* Field: Field: Category */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Ideas count in Challenge */
  $handler->display->display_options['fields']['ideas_count_in_challenge']['id'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['field'] = 'ideas_count_in_challenge';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['label'] = '';
  $handler->display->display_options['fields']['ideas_count_in_challenge']['element_label_colon'] = FALSE;
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '150',
  );
  /* Sort criterion: Taxonomy queue: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'term_queue_term';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy queue: Machine Name */
  $handler->display->display_options['filters']['machine_name_1']['id'] = 'machine_name_1';
  $handler->display->display_options['filters']['machine_name_1']['table'] = 'term_queue';
  $handler->display->display_options['filters']['machine_name_1']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name_1']['value'] = array(
    'open_challenges' => 'open_challenges',
  );

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'open_challenges_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'open-challenges';
  $translatables['featured_challenges_for_home'] = array(
    t('Master'),
    t('Challenges'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<i class="icon-flag"></i>
<h3>Featured Challenges</h3>'),
    t('Follow Challenge'),
    t('flag'),
    t('Support Challenge'),
    t('.'),
    t(','),
    t('<a href=\'/taxonomy/term/[tid]\'><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>'),
    t('block'),
    t('View All'),
    t('Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
  );
  $export['featured_challenges_for_home'] = $view;

  $view = new view();
  $view->name = 'ideas_belonging_to_challenge';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ideas belonging to challenge';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent ideas';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'follow counter';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
  /* Relationship: Flags: support_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'support counter';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_idea';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Featured_image */
  $handler->display->display_options['fields']['field_featured_picture']['id'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['table'] = 'field_data_field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['field'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['label'] = '';
  $handler->display->display_options['fields']['field_featured_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['empty'] = '<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_picture']['settings'] = array(
    'image_style' => 'in-challenge-idea-view',
    'image_link' => 'content',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 support';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count support';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 follow';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count follow';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comment';
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '130';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '250',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
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
    'idea' => 'idea',
  );
  /* Filter criterion: Content: Idea State (field_idea_state) */
  $handler->display->display_options['filters']['field_idea_state_value']['id'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['table'] = 'field_data_field_idea_state';
  $handler->display->display_options['filters']['field_idea_state_value']['field'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_idea_state_value']['value'] = array(
    'win' => 'win',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'challenge/%/ideas';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'ideas_of_a_challenge');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Most recent';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'A-Z';
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';
  $handler->display->display_options['sorts']['count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['count']['expose']['label'] = 'Supports';
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['order'] = 'DESC';
  $handler->display->display_options['sorts']['comment_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['comment_count']['expose']['label'] = 'Comments';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Ideas (belonging to challenge)';

  /* Display: Winning ideas of a challenge */
  $handler = $view->new_display('block', 'Winning ideas of a challenge', 'winning_ideas');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Winning ideas';
  $handler->display->display_options['display_description'] = 'Winning ideas of a Challenge';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'challenge' => 'challenge',
  );
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
    'idea' => 'idea',
  );
  /* Filter criterion: Content: Idea State (field_idea_state) */
  $handler->display->display_options['filters']['field_idea_state_value']['id'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['table'] = 'field_data_field_idea_state';
  $handler->display->display_options['filters']['field_idea_state_value']['field'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['value'] = array(
    'win' => 'win',
  );
  $translatables['ideas_belonging_to_challenge'] = array(
    t('Master'),
    t('Recent ideas'),
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
    t('follow counter'),
    t('support counter'),
    t('<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>'),
    t('.'),
    t(','),
    t('All'),
    t('Page'),
    t('Block'),
    t('Most recent'),
    t('A-Z'),
    t('Supports'),
    t('Comments'),
    t('Ideas (belonging to challenge)'),
    t('Winning ideas of a challenge'),
    t('Winning ideas'),
    t('Winning ideas of a Challenge'),
  );
  $export['ideas_belonging_to_challenge'] = $view;

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
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="nothing-here">
<center><p>There’s nothing here, yet!</p></center>
<br>
<br>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Flags: following_idea */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Follow Idea';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'following_idea';
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Idea';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
  /* Relationship: Flags: support_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Idea';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_idea';
  /* Relationship: Flags: support_idea */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'Support Idea';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'support_idea';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  /* Field: Content: Featured_image */
  $handler->display->display_options['fields']['field_featured_picture']['id'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['table'] = 'field_data_field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['field'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['label'] = '';
  $handler->display->display_options['fields']['field_featured_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['empty'] = '<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_2']['id'] = 'ops_2';
  $handler->display->display_options['fields']['ops_2']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_2']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_2']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_2']['label'] = '';
  $handler->display->display_options['fields']['ops_2']['element_label_colon'] = FALSE;
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '250',
  );
  /* Sort criterion: Content: Post date */
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
    'idea' => 'idea',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'ideas_you_follow');
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
    t('<div class="nothing-here">
<center><p>There’s nothing here, yet!</p></center>
<br>
<br>
</div>'),
    t('Follow Idea'),
    t('Support Idea'),
    t('.'),
    t(','),
    t('<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>'),
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="create-new-idea-block"><a class=\'btn-white\' href=\'/node/add/idea/3\'>Create new idea</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_content_html';
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
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow idea';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
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
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
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

  /* Display: Your Ideas latest */
  $handler = $view->new_display('block', 'Your Ideas latest', 'block_your_ideas');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="nothing-here">
<center><p>There’s nothing here, yet!</p></center>
<br>
<br>
</div>

';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Idea';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
  /* Relationship: Flags: support_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Idea';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_idea';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Content: Post date */
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
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Follow';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Follows';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Support';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supports';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
  /* Field: Content: Featured_image */
  $handler->display->display_options['fields']['field_featured_picture']['id'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['table'] = 'field_data_field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['field'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_featured_picture']['label'] = '';
  $handler->display->display_options['fields']['field_featured_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['empty'] = '<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '250',
  );
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'idea' => 'idea',
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['block_description'] = 'Your ideas latest';
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
    t('<div class="create-new-idea-block"><a class=\'btn-white\' href=\'/node/add/idea/3\'>Create new idea</a></div>'),
    t('<div class="row-fluid">
<div class="span3"><img src="/sites/default/files/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>'),
    t('Group node'),
    t('OG Roles'),
    t('Follow idea'),
    t('Last Comment'),
    t('Comment author'),
    t('<a href="/node/[nid]/add/member/co-owner">Invite</a>'),
    t('.'),
    t(','),
    t('<img src="/sites/default/themes/flip_theme/img/projects-cross.png">'),
    t('All'),
    t('Your Ideas latest'),
    t('<div class="nothing-here">
<center><p>There’s nothing here, yet!</p></center>
<br>
<br>
</div>

'),
    t('Follow Idea'),
    t('Support Idea'),
    t('<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>'),
    t('Your ideas latest'),
  );
  $export['ideas_yours_follow'] = $view;

  $view = new view();
  $view->name = 'latest_collaborations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest Collaborations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Collaborations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access collabco dashboard';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_featured_hub_image' => 0,
    'body' => 0,
    'count' => 0,
    'count_1' => 0,
    'comment_count' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_skin'] = 'black_icons';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_featured_hub_image' => 0,
    'body' => 0,
    'count' => 0,
    'count_1' => 0,
    'comment_count' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '5';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '1000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: follow_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_collaboration';
  /* Relationship: Flags: support_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_collaboration';
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
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'featured_article',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '500',
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
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
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
  $translatables['latest_collaborations'] = array(
    t('Master'),
    t('Latest Collaborations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Follow Collaboration'),
    t('Support Collaboration'),
    t('.'),
    t(','),
    t('Block'),
  );
  $export['latest_collaborations'] = $view;

  $view = new view();
  $view->name = 'latest_ideas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest ideas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Ideas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'nid' => 0,
    'body' => 0,
    'count' => 0,
    'count_1' => 0,
    'comment_count' => 0,
    'field_featured_picture' => 0,
    'field_tag_line' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_skin'] = 'black_icons';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'nid' => 0,
    'body' => 0,
    'count' => 0,
    'count_1' => 0,
    'comment_count' => 0,
    'field_featured_picture' => 0,
    'field_tag_line' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '5';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '2000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="icon-diamond"></i>
<h3>Latest ideas</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Idea';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
  /* Relationship: Flags: support_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Idea';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_idea';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 follower';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count followers';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supporters';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Field: Content: Featured_image */
  $handler->display->display_options['fields']['field_featured_picture']['id'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['table'] = 'field_data_field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['field'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['label'] = '';
  $handler->display->display_options['fields']['field_featured_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['empty'] = '<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_picture']['settings'] = array(
    'image_style' => 'small-card-view',
    'image_link' => 'content',
  );
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '80',
  );
  /* Sort criterion: Content: Post date */
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
    'idea' => 'idea',
  );
  /* Filter criterion: Content: Idea State (field_idea_state) */
  $handler->display->display_options['filters']['field_idea_state_value']['id'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['table'] = 'field_data_field_idea_state';
  $handler->display->display_options['filters']['field_idea_state_value']['field'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_idea_state_value']['value'] = array(
    'archived' => 'archived',
    'promoted' => 'promoted',
    'win' => 'win',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Mobile Block */
  $handler = $view->new_display('block', 'Mobile Block', 'latest_ideas_mobile_block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'nid' => 0,
    'body' => 0,
    'count' => 0,
    'count_1' => 0,
    'comment_count' => 0,
    'field_featured_picture' => 0,
    'field_tag_line' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_skin'] = 'black_icons';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'nid' => 0,
    'body' => 0,
    'count' => 0,
    'count_1' => 0,
    'comment_count' => 0,
    'field_featured_picture' => 0,
    'field_tag_line' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '2000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['latest_ideas'] = array(
    t('Master'),
    t('Latest Ideas'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<i class="icon-diamond"></i>
<h3>Latest ideas</h3>'),
    t('Follow Idea'),
    t('Support Idea'),
    t('.'),
    t(','),
    t('<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>'),
    t('Block'),
    t('Mobile Block'),
  );
  $export['latest_ideas'] = $view;

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
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There aren\'t any idea supporters found for this idea. Alternatively, the URL is missing the Unique ID of the Idea you\'re looking for (i.e. the URL should be /idea-supporters/[number] )';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Flags: User's flaggings */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'support_idea';
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
  $handler->display->display_options['path'] = 'idea-supporters';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of Collaboration Supporters';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There aren\'t any supporters found for this Co - lab. Alternatively, the URL is missing the Unique ID of the Co - lab you\'re looking for (i.e. the URL should be /collaboration-supporters/[number] )';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: User's flaggings */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'support_collaboration';
  $handler->display->display_options['path'] = 'collaboration-supporters';
  $translatables['list_of_idea_supporters'] = array(
    t('Master'),
    t('List of Idea Supporters'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('There aren\'t any idea supporters found for this idea. Alternatively, the URL is missing the Unique ID of the Idea you\'re looking for (i.e. the URL should be /idea-supporters/[number] )'),
    t('user flagged content'),
    t('All'),
    t('Page'),
    t('List of Collaboration Supporters'),
    t('There aren\'t any supporters found for this Co - lab. Alternatively, the URL is missing the Unique ID of the Co - lab you\'re looking for (i.e. the URL should be /collaboration-supporters/[number] )'),
  );
  $export['list_of_idea_supporters'] = $view;

  $view = new view();
  $view->name = 'member_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Member Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Member Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access administration menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'access' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'plain_text';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name' => 'name',
    'mail' => 'mail',
    'access' => 'access',
    'login' => 'login',
    'status' => 'status',
    'count' => 'count',
    'count_1' => 'count_1',
    'count_2' => 'count_2',
    'count_3' => 'count_3',
  );
  $handler->display->display_options['style_options']['default'] = 'uid';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<table><tr><td><h4>Total # Idea Supports:</h4>
<p><?php
$results = db_select(\'flag_counts\', \'t\')->fields(\'t\')->condition(\'fid\',7,\'=\')->execute()->fetchAll();
$count = 0;
foreach ($results as $key=>$value) {
  $count += $results[$key]->count;
}
print $count;
?></p>
</td>
<td>
<h4>Total # Collaborations Supports:</h4>
<p><?php
$results = db_select(\'flag_counts\', \'t\')->fields(\'t\')->condition(\'fid\',5,\'=\')->execute()->fetchAll();
$count = 0;
foreach ($results as $key=>$value) {
  $count += $results[$key]->count;
}
print $count;
?></p>
</td>
<td>
<h4>Total # Comments:</h4>
<p><?php
$results = db_select(\'comment\')->fields(NULL, array(\'cid\'))->execute()->fetchAll();
$count = count($results);
print $count;
?></p>
</td>
<td><h4>Total # Ideas:</h4>
<p><?php
$results = db_select(\'node\')->fields(NULL, array(\'nid\'))->condition(\'type\',\'idea\',\'=\')->execute()->fetchAll();
$count = count($results);
print $count;
?></p>
</td>
<td><h4>Total # Co - labs:</h4>
<p><?php
$results = db_select(\'node\')->fields(NULL, array(\'nid\'))->condition(\'type\',\'hub\',\'=\')->execute()->fetchAll();
$count = count($results);
print $count;
?></p>
</td>
<td><h4>Total # Users:</h4>
<p><?php
$results = db_select(\'users\')->fields(NULL, array(\'uid\'))->execute()->fetchAll();
$count = count($results);
print $count;
?></p>
</td></tr></table>

';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'short';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'long';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Comments posted */
  $handler->display->display_options['fields']['comments_posted']['id'] = 'comments_posted';
  $handler->display->display_options['fields']['comments_posted']['table'] = 'users';
  $handler->display->display_options['fields']['comments_posted']['field'] = 'comments_posted';
  /* Field: User: Collaborations followed */
  $handler->display->display_options['fields']['collaborations_followed']['id'] = 'collaborations_followed';
  $handler->display->display_options['fields']['collaborations_followed']['table'] = 'users';
  $handler->display->display_options['fields']['collaborations_followed']['field'] = 'collaborations_followed';
  $handler->display->display_options['fields']['collaborations_followed']['empty'] = '0';
  /* Field: User: Collaborations supported */
  $handler->display->display_options['fields']['collaborations_supported']['id'] = 'collaborations_supported';
  $handler->display->display_options['fields']['collaborations_supported']['table'] = 'users';
  $handler->display->display_options['fields']['collaborations_supported']['field'] = 'collaborations_supported';
  $handler->display->display_options['fields']['collaborations_supported']['empty'] = '0';
  /* Field: User: Ideas followed */
  $handler->display->display_options['fields']['ideas_followed']['id'] = 'ideas_followed';
  $handler->display->display_options['fields']['ideas_followed']['table'] = 'users';
  $handler->display->display_options['fields']['ideas_followed']['field'] = 'ideas_followed';
  $handler->display->display_options['fields']['ideas_followed']['empty'] = '0';
  /* Field: User: Ideas supported */
  $handler->display->display_options['fields']['ideas_supported']['id'] = 'ideas_supported';
  $handler->display->display_options['fields']['ideas_supported']['table'] = 'users';
  $handler->display->display_options['fields']['ideas_supported']['field'] = 'ideas_supported';
  $handler->display->display_options['fields']['ideas_supported']['empty'] = '0';
  /* Field: User: No. groups joined */
  $handler->display->display_options['fields']['groups_joined']['id'] = 'groups_joined';
  $handler->display->display_options['fields']['groups_joined']['table'] = 'users';
  $handler->display->display_options['fields']['groups_joined']['field'] = 'groups_joined';
  $handler->display->display_options['fields']['groups_joined']['label'] = 'Collaborations Membership';
  /* Field: User: Login count */
  $handler->display->display_options['fields']['login_count']['id'] = 'login_count';
  $handler->display->display_options['fields']['login_count']['table'] = 'users';
  $handler->display->display_options['fields']['login_count']['field'] = 'login_count';
  /* Field: User: Ideas Created */
  $handler->display->display_options['fields']['ideas_created']['id'] = 'ideas_created';
  $handler->display->display_options['fields']['ideas_created']['table'] = 'users';
  $handler->display->display_options['fields']['ideas_created']['field'] = 'ideas_created';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Last access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'users';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['operator'] = 'between';
  $handler->display->display_options['filters']['access']['value']['max'] = 'now';
  $handler->display->display_options['filters']['access']['exposed'] = TRUE;
  $handler->display->display_options['filters']['access']['expose']['operator_id'] = 'access_op';
  $handler->display->display_options['filters']['access']['expose']['label'] = 'Last access';
  $handler->display->display_options['filters']['access']['expose']['description'] = 'A date in any machine readable format. CCYY-MM-DD HH:MM:SS is preferred.';
  $handler->display->display_options['filters']['access']['expose']['operator'] = 'access_op';
  $handler->display->display_options['filters']['access']['expose']['identifier'] = 'access';
  $handler->display->display_options['filters']['access']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/member-report';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Member Report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/reports/member-report.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['member_report'] = array(
    t('Master'),
    t('Member Report'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Uid'),
    t('Name'),
    t('E-mail'),
    t('Last access'),
    t('Last login'),
    t('Active'),
    t('Comments posted'),
    t('Collaborations followed'),
    t('Collaborations supported'),
    t('Ideas followed'),
    t('Ideas supported'),
    t('Collaborations Membership'),
    t('Login count'),
    t('Ideas Created'),
    t('A date in any machine readable format. CCYY-MM-DD HH:MM:SS is preferred.'),
    t('Page'),
    t('Data export'),
  );
  $export['member_report'] = $view;

  $view = new view();
  $view->name = 'messages_digest';
  $view->description = 'Messages digest to be mailed to user';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'messages_digest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'message updates of user';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="placeholder"></div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Comment: Parent comment */
  $handler->display->display_options['relationships']['pid']['id'] = 'pid';
  $handler->display->display_options['relationships']['pid']['table'] = 'comment';
  $handler->display->display_options['relationships']['pid']['field'] = 'pid';
  $handler->display->display_options['relationships']['pid']['relationship'] = 'field_parent_comment_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_comment_ref_target_id']['id'] = 'field_parent_comment_ref_target_id';
  $handler->display->display_options['relationships']['field_parent_comment_ref_target_id']['table'] = 'field_data_field_parent_comment_ref';
  $handler->display->display_options['relationships']['field_parent_comment_ref_target_id']['field'] = 'field_parent_comment_ref_target_id';
  /* Field: Message: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* Field: Message: Node Groups Reference */
  $handler->display->display_options['fields']['field_node_groups_ref']['id'] = 'field_node_groups_ref';
  $handler->display->display_options['fields']['field_node_groups_ref']['table'] = 'field_data_field_node_groups_ref';
  $handler->display->display_options['fields']['field_node_groups_ref']['field'] = 'field_node_groups_ref';
  $handler->display->display_options['fields']['field_node_groups_ref']['label'] = '';
  $handler->display->display_options['fields']['field_node_groups_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_groups_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_groups_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Message: Node Reference */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['label'] = '';
  $handler->display->display_options['fields']['field_node_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Message: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'message';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Message: Update Type */
  $handler->display->display_options['fields']['field_node_update_type']['id'] = 'field_node_update_type';
  $handler->display->display_options['fields']['field_node_update_type']['table'] = 'field_data_field_node_update_type';
  $handler->display->display_options['fields']['field_node_update_type']['field'] = 'field_node_update_type';
  $handler->display->display_options['fields']['field_node_update_type']['label'] = '';
  $handler->display->display_options['fields']['field_node_update_type']['element_label_colon'] = FALSE;
  /* Field: Message: Comment Reference */
  $handler->display->display_options['fields']['field_comment_ref']['id'] = 'field_comment_ref';
  $handler->display->display_options['fields']['field_comment_ref']['table'] = 'field_data_field_comment_ref';
  $handler->display->display_options['fields']['field_comment_ref']['field'] = 'field_comment_ref';
  $handler->display->display_options['fields']['field_comment_ref']['label'] = '';
  $handler->display->display_options['fields']['field_comment_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comment_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_comment_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Message: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'message';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Timestamp';
  /* Contextual filter: Message: Node Groups Reference (field_node_groups_ref) */
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['id'] = 'field_node_groups_ref_target_id';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['table'] = 'field_data_field_node_groups_ref';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['field'] = 'field_node_groups_ref_target_id';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['default_argument_options']['code'] = 'global $user;
$user_flags = flag_get_user_flags(\'node\',NULL,$user->uid);
$following_ideas = array();
$following_collaborations = array();
if (isset($user_flags[\'following_idea\']) || array_key_exists(\'following_idea\', $user_flags)) { 
    $following_ideas = array_keys($user_flags[\'following_idea\']);
}
if (isset($user_flags[\'follow_collaboration\']) || array_key_exists(\'follow_collaboration\', $user_flags)) { 
    $following_collaborations = array_keys($user_flags[\'follow_collaboration\']);
}
$gids_followed_by_user = array_merge($following_ideas,$following_collaborations);
if (!empty($gids_followed_by_user)){
  return implode("+",$gids_followed_by_user);
}else 
{
  return \'0\';
}';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Message: Term Reference (field_term_ref) */
  $handler->display->display_options['arguments']['field_term_ref_tid']['id'] = 'field_term_ref_tid';
  $handler->display->display_options['arguments']['field_term_ref_tid']['table'] = 'field_data_field_term_ref';
  $handler->display->display_options['arguments']['field_term_ref_tid']['field'] = 'field_term_ref_tid';
  $handler->display->display_options['arguments']['field_term_ref_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_term_ref_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_term_ref_tid']['default_argument_options']['code'] = 'global $user;
$user_tid_flags = flag_get_user_flags(\'taxonomy_term\',NULL,$user->uid);
$tids_followed_by_user = array();
if (isset($user_tid_flags[\'challenge_flag\']) || array_key_exists(\'challenge_flag\', $user_tid_flags)) { 
     $tids_followed_by_user = array_keys($user_tid_flags[\'challenge_flag\']);
}
if (!empty($tids_followed_by_user)){
  return implode("+",$tids_followed_by_user);
}else 
{
  return \'0\';
}';
  $handler->display->display_options['arguments']['field_term_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_term_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_term_ref_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_term_ref_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Message: Node Reference (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_options']['code'] = 'global $user;
$user_flags = flag_get_user_flags(\'node\',NULL,$user->uid);
$following_ideas = array();
$following_collaborations = array();
if (isset($user_flags[\'following_idea\']) || array_key_exists(\'following_idea\', $user_flags)) { 
    $following_ideas = array_keys($user_flags[\'following_idea\']);
}
if (isset($user_flags[\'follow_collaboration\']) || array_key_exists(\'follow_collaboration\', $user_flags)) { 
    $following_collaborations = array_keys($user_flags[\'follow_collaboration\']);
}
$gids_followed_by_user = array_merge($following_ideas,$following_collaborations);
if (!empty($gids_followed_by_user)){
  return implode("+",$gids_followed_by_user);
}else 
{
  return \'0\';
}';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Comment: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'comment';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_parent_comment_ref_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Message: published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Message: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'message';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = '>';
  $handler->display->display_options['filters']['timestamp']['value']['value'] = '-7 day';
  $handler->display->display_options['filters']['timestamp']['value']['type'] = 'offset';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['messages_digest'] = array(
    t('Master'),
    t('message updates of user'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="placeholder"></div>'),
    t('Parent comment'),
    t('Comment entity referenced from field_parent_comment_ref'),
    t('Message ID'),
    t('.'),
    t(','),
    t('Timestamp'),
    t('All'),
    t('Block'),
  );
  $export['messages_digest'] = $view;

  $view = new view();
  $view->name = 'messages_of_content_followed_by_user';
  $view->description = 'Messages of content followed by the current user';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'message updates of user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'message updates of user';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access collabco dashboard';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="placeholder"></div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Comment: Parent comment */
  $handler->display->display_options['relationships']['pid']['id'] = 'pid';
  $handler->display->display_options['relationships']['pid']['table'] = 'comment';
  $handler->display->display_options['relationships']['pid']['field'] = 'pid';
  $handler->display->display_options['relationships']['pid']['relationship'] = 'field_parent_comment_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_comment_ref_target_id']['id'] = 'field_parent_comment_ref_target_id';
  $handler->display->display_options['relationships']['field_parent_comment_ref_target_id']['table'] = 'field_data_field_parent_comment_ref';
  $handler->display->display_options['relationships']['field_parent_comment_ref_target_id']['field'] = 'field_parent_comment_ref_target_id';
  /* Field: Message: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* Field: Message: Node Groups Reference */
  $handler->display->display_options['fields']['field_node_groups_ref']['id'] = 'field_node_groups_ref';
  $handler->display->display_options['fields']['field_node_groups_ref']['table'] = 'field_data_field_node_groups_ref';
  $handler->display->display_options['fields']['field_node_groups_ref']['field'] = 'field_node_groups_ref';
  $handler->display->display_options['fields']['field_node_groups_ref']['label'] = '';
  $handler->display->display_options['fields']['field_node_groups_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_groups_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_groups_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Message: Node Reference */
  $handler->display->display_options['fields']['field_node_ref']['id'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['field'] = 'field_node_ref';
  $handler->display->display_options['fields']['field_node_ref']['label'] = '';
  $handler->display->display_options['fields']['field_node_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_node_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_node_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Message: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'message';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Message: Update Type */
  $handler->display->display_options['fields']['field_node_update_type']['id'] = 'field_node_update_type';
  $handler->display->display_options['fields']['field_node_update_type']['table'] = 'field_data_field_node_update_type';
  $handler->display->display_options['fields']['field_node_update_type']['field'] = 'field_node_update_type';
  $handler->display->display_options['fields']['field_node_update_type']['label'] = '';
  $handler->display->display_options['fields']['field_node_update_type']['element_label_colon'] = FALSE;
  /* Field: Message: Comment Reference */
  $handler->display->display_options['fields']['field_comment_ref']['id'] = 'field_comment_ref';
  $handler->display->display_options['fields']['field_comment_ref']['table'] = 'field_data_field_comment_ref';
  $handler->display->display_options['fields']['field_comment_ref']['field'] = 'field_comment_ref';
  $handler->display->display_options['fields']['field_comment_ref']['label'] = '';
  $handler->display->display_options['fields']['field_comment_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comment_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_comment_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Message: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'message';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Timestamp';
  /* Contextual filter: Message: Node Groups Reference (field_node_groups_ref) */
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['id'] = 'field_node_groups_ref_target_id';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['table'] = 'field_data_field_node_groups_ref';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['field'] = 'field_node_groups_ref_target_id';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['default_argument_options']['code'] = 'global $user;
$user_flags = flag_get_user_flags(\'node\',NULL,$user->uid);
$following_ideas = array();
$following_collaborations = array();
if (isset($user_flags[\'following_idea\']) || array_key_exists(\'following_idea\', $user_flags)) { 
    $following_ideas = array_keys($user_flags[\'following_idea\']);
}
if (isset($user_flags[\'follow_collaboration\']) || array_key_exists(\'follow_collaboration\', $user_flags)) { 
    $following_collaborations = array_keys($user_flags[\'follow_collaboration\']);
}
$gids_followed_by_user = array_merge($following_ideas,$following_collaborations);
if (!empty($gids_followed_by_user)){
  return implode("+",$gids_followed_by_user);
}else 
{
  return \'0\';
}';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_node_groups_ref_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Message: Term Reference (field_term_ref) */
  $handler->display->display_options['arguments']['field_term_ref_tid']['id'] = 'field_term_ref_tid';
  $handler->display->display_options['arguments']['field_term_ref_tid']['table'] = 'field_data_field_term_ref';
  $handler->display->display_options['arguments']['field_term_ref_tid']['field'] = 'field_term_ref_tid';
  $handler->display->display_options['arguments']['field_term_ref_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_term_ref_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_term_ref_tid']['default_argument_options']['code'] = 'global $user;
$user_tid_flags = flag_get_user_flags(\'taxonomy_term\',NULL,$user->uid);
$tids_followed_by_user = array();
if (isset($user_tid_flags[\'challenge_flag\']) || array_key_exists(\'challenge_flag\', $user_tid_flags)) { 
     $tids_followed_by_user = array_keys($user_tid_flags[\'challenge_flag\']);
}
if (!empty($tids_followed_by_user)){
  return implode("+",$tids_followed_by_user);
}else 
{
  return \'0\';
}';
  $handler->display->display_options['arguments']['field_term_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_term_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_term_ref_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_term_ref_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Message: Node Reference (field_node_ref) */
  $handler->display->display_options['arguments']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['default_argument_options']['code'] = 'global $user;
$user_flags = flag_get_user_flags(\'node\',NULL,$user->uid);
$following_ideas = array();
$following_collaborations = array();
if (isset($user_flags[\'following_idea\']) || array_key_exists(\'following_idea\', $user_flags)) { 
    $following_ideas = array_keys($user_flags[\'following_idea\']);
}
if (isset($user_flags[\'follow_collaboration\']) || array_key_exists(\'follow_collaboration\', $user_flags)) { 
    $following_collaborations = array_keys($user_flags[\'follow_collaboration\']);
}
$gids_followed_by_user = array_merge($following_ideas,$following_collaborations);
if (!empty($gids_followed_by_user)){
  return implode("+",$gids_followed_by_user);
}else 
{
  return \'0\';
}';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_node_ref_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Comment: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'comment';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_parent_comment_ref_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Message: published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['messages_of_content_followed_by_user'] = array(
    t('Master'),
    t('message updates of user'),
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
    t('<div class="placeholder"></div>'),
    t('Parent comment'),
    t('Comment entity referenced from field_parent_comment_ref'),
    t('Message ID'),
    t('.'),
    t(','),
    t('Timestamp'),
    t('All'),
    t('Block'),
  );
  $export['messages_of_content_followed_by_user'] = $view;

  $view = new view();
  $view->name = 'parked_collaborations';
  $view->description = 'Collaborations - Parked';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Parked Collaborations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collaborations';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<br>
<div class="separator"></div>
<br>
<i class="icon-music-stop"></i>
<h3>Parked Collaborations</h3>
<p>While all Collaborations come from great ideas, unfortunately not all ideas are ripe to advance into Collaborations at this time. So, we\'ve parked them in this archive so they can be found again if circumstances change.</p>
<p>Keen to see this idea gain traction again? Contact our team and let\'s get it going. </p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Flags: follow_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_collaboration';
  /* Relationship: Flags: support_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_collaboration';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg">';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'challenge',
    'image_link' => 'content',
  );
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['element_default_classes'] = FALSE;
  /* Field: Field: Category */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 follower';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count followers';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['separator'] = '';
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supporters';
  /* Sort criterion: Content: Post date */
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
  /* Filter criterion: Content: Parked Collaboration (field_parked_collaboration) */
  $handler->display->display_options['filters']['field_parked_collaboration_value']['id'] = 'field_parked_collaboration_value';
  $handler->display->display_options['filters']['field_parked_collaboration_value']['table'] = 'field_data_field_parked_collaboration';
  $handler->display->display_options['filters']['field_parked_collaboration_value']['field'] = 'field_parked_collaboration_value';
  $handler->display->display_options['filters']['field_parked_collaboration_value']['value'] = array(
    1 => '1',
  );

  /* Display: Parked Collaborations */
  $handler = $view->new_display('block', 'Parked Collaborations', 'collaborations_parked');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<a href="/node/[nid]"><img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg"></a>';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'challenge',
    'image_link' => 'content',
  );
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['element_default_classes'] = FALSE;
  /* Field: Field: Category */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 follower';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count followers';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['separator'] = '';
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Supporter';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supporters';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'parked-collaborations';
  $translatables['parked_collaborations'] = array(
    t('Master'),
    t('Collaborations'),
    t('View All'),
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
    t('<br>
<div class="separator"></div>
<br>
<i class="icon-music-stop"></i>
<h3>Parked Collaborations</h3>
<p>While all Collaborations come from great ideas, unfortunately not all ideas are ripe to advance into Collaborations at this time. So, we\'ve parked them in this archive so they can be found again if circumstances change.</p>
<p>Keen to see this idea gain traction again? Contact our team and let\'s get it going. </p>'),
    t('Follow Collaboration'),
    t('Support Collaboration'),
    t('<img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg">'),
    t('.'),
    t(','),
    t('Parked Collaborations'),
    t('more'),
    t('<a href="/node/[nid]"><img src="/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg"></a>'),
    t('Page'),
  );
  $export['parked_collaborations'] = $view;

  $view = new view();
  $view->name = 'profile_badges';
  $view->description = 'Show profile badges of a user';
  $view->tag = 'ideas, badges, profile';
  $view->base_table = 'og_membership';
  $view->human_name = 'profile badges';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Badges';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '14';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
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
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['etid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
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

  /* Display: Idea badge */
  $handler = $view->new_display('block', 'Idea badge', 'idea_badges');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['etid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'idea' => 'idea',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Idea State (field_idea_state) */
  $handler->display->display_options['filters']['field_idea_state_value']['id'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['table'] = 'field_data_field_idea_state';
  $handler->display->display_options['filters']['field_idea_state_value']['field'] = 'field_idea_state_value';
  $handler->display->display_options['filters']['field_idea_state_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_idea_state_value']['value'] = array(
    'win' => 'win',
  );
  $handler->display->display_options['filters']['field_idea_state_value']['group'] = 1;
  $handler->display->display_options['filters']['field_idea_state_value']['expose']['operator_id'] = 'field_idea_state_value_op';
  $handler->display->display_options['filters']['field_idea_state_value']['expose']['label'] = 'Idea State (field_idea_state)';
  $handler->display->display_options['filters']['field_idea_state_value']['expose']['operator'] = 'field_idea_state_value_op';
  $handler->display->display_options['filters']['field_idea_state_value']['expose']['identifier'] = 'field_idea_state_value';
  $handler->display->display_options['block_description'] = 'Idea badges';

  /* Display: Collaborations badge */
  $handler = $view->new_display('block', 'Co-lab badge', 'collab_badges');
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  /* Filter criterion: Content: Turn into Project (field_turn_into_project) */
  $handler->display->display_options['filters']['field_turn_into_project_value']['id'] = 'field_turn_into_project_value';
  $handler->display->display_options['filters']['field_turn_into_project_value']['table'] = 'field_data_field_turn_into_project';
  $handler->display->display_options['filters']['field_turn_into_project_value']['field'] = 'field_turn_into_project_value';
  $handler->display->display_options['filters']['field_turn_into_project_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_turn_into_project_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Co - lab badge';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]/add/member/co-owner';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $translatables['profile_badges'] = array(
    t('Master'),
    t('Badges'),
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
    t('All'),
    t('Idea badge'),
    t('Idea State (field_idea_state)'),
    t('Idea badges'),
    t('Co-lab badge'),
    t('Co - lab badge'),
    t('Block'),
  );
  $export['profile_badges'] = $view;

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
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
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
  /* Field: Field: Short description (max 50 words) */
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
  /* Sort criterion: Content: Post date */
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
    'idea' => 'idea',
  );

  /* Display: Ideas Newest first */
  $handler = $view->new_display('block', 'Ideas Newest first', 'ideas_newest_first');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['meta_og_state_state_value']['id'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['table'] = 'field_data_meta_og_state_state';
  $handler->display->display_options['filters']['meta_og_state_state_value']['field'] = 'meta_og_state_state_value';
  $handler->display->display_options['filters']['meta_og_state_state_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['meta_group_access_value']['id'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['table'] = 'field_data_meta_group_access';
  $handler->display->display_options['filters']['meta_group_access_value']['field'] = 'meta_group_access_value';
  $handler->display->display_options['filters']['meta_group_access_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Field: Category (field_strategic_priority) */
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
  /* Field: Field: Short description (max 50 words) */
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
  /* Field: Field: Category */
  $handler->display->display_options['fields']['field_strategic_priority']['id'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['table'] = 'field_data_field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['field'] = 'field_strategic_priority';
  $handler->display->display_options['fields']['field_strategic_priority']['label'] = '';
  $handler->display->display_options['fields']['field_strategic_priority']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strategic_priority']['type'] = 'taxonomy_term_reference_plain';
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
  $view->name = 'team_belonging_to_collaboration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Team (belonging to a collaboration)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'team';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Content: gid (field_gid) */
  $handler->display->display_options['arguments']['field_gid_target_id']['id'] = 'field_gid_target_id';
  $handler->display->display_options['arguments']['field_gid_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['field_gid_target_id']['field'] = 'field_gid_target_id';
  $handler->display->display_options['arguments']['field_gid_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_gid_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['team_belonging_to_collaboration'] = array(
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
    t('OG membership from user'),
    t('All'),
  );
  $export['team_belonging_to_collaboration'] = $view;

  $view = new view();
  $view->name = 'team_belonging_to_idea';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Team (belonging to an Idea)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Content: gid (field_gid) */
  $handler->display->display_options['arguments']['field_gid_target_id']['id'] = 'field_gid_target_id';
  $handler->display->display_options['arguments']['field_gid_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['field_gid_target_id']['field'] = 'field_gid_target_id';
  $handler->display->display_options['arguments']['field_gid_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_gid_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_gid_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['team_belonging_to_idea'] = array(
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
    t('OG membership from user'),
    t('All'),
  );
  $export['team_belonging_to_idea'] = $view;

  $view = new view();
  $view->name = 'team_idea_og_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'og_membership';
  $view->human_name = 'Team (Idea OG)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: OG membership: Group User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user_group']['id'] = 'og_membership_related_user_group';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['field'] = 'og_membership_related_user_group';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['required'] = TRUE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'og_membership_related_user_group';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'og_membership_related_user_group';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'og_membership_related_user_group';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $translatables['team_idea_og_'] = array(
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
    t('Group user from OG membership'),
    t('Link'),
    t('Name'),
    t('Picture'),
    t('All'),
  );
  $export['team_idea_og_'] = $view;

  $view = new view();
  $view->name = 'view_of_nodes_relating_to_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View of Nodes relating to Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View of Nodes relating to Term';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['alter']['text'] = '[field_tag_line]
<br><br>';
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['view_of_nodes_relating_to_term'] = array(
    t('Master'),
    t('View of Nodes relating to Term'),
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
    t('[field_tag_line]
<br><br>'),
    t('All'),
    t('Block'),
  );
  $export['view_of_nodes_relating_to_term'] = $view;

  $view = new view();
  $view->name = 'your_collaborations';
  $view->description = 'Show collaborations of a user.';
  $view->tag = 'ideas';
  $view->base_table = 'og_membership';
  $view->human_name = 'Your Collaborations';
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow idea';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
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
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
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

  /* Display: Your Collaborations */
  $handler = $view->new_display('block', 'Your Collaborations', 'block_your_collaborations');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="nothing-here">
<center><p>There’s nothing here, yet!</p></center>
<br>
<br>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Relationship: Flags: follow_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow_collaboration';
  /* Relationship: Flags: support_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_collaboration';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Content: Post date */
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
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural_singular'] = '1 Follow';
  $handler->display->display_options['fields']['count']['format_plural_plural'] = '@count Follows';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count_1']['format_plural_singular'] = '1 Support';
  $handler->display->display_options['fields']['count_1']['format_plural_plural'] = '@count Supports';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
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
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '250',
  );
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
  );
  $handler->display->display_options['block_description'] = 'Your Collaborations';
  $translatables['your_collaborations'] = array(
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
    t('Follow idea'),
    t('Last Comment'),
    t('Comment author'),
    t('<a href="/node/[nid]/add/member/co-owner">Invite</a>'),
    t('.'),
    t(','),
    t('<img src="/sites/default/themes/flip_theme/img/projects-cross.png">'),
    t('All'),
    t('Your Collaborations'),
    t('<div class="nothing-here">
<center><p>There’s nothing here, yet!</p></center>
<br>
<br>
</div>'),
    t('Follow Collaboration'),
    t('Support Collaboration'),
    t('<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-full.jpg\' ></a>'),
  );
  $export['your_collaborations'] = $view;

  $view = new view();
  $view->name = 'your_contrib';
  $view->description = 'Show collaborations of a user.';
  $view->tag = 'ideas';
  $view->base_table = 'og_membership';
  $view->human_name = 'your contributions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contributions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_tag_line' => 0,
    'created' => 0,
    'nid' => 0,
    'count' => 0,
    'comment_count' => 0,
    'counter' => 0,
    'count_1' => 0,
    'count_2' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_tag_line' => 0,
    'created' => 0,
    'nid' => 0,
    'count' => 0,
    'comment_count' => 0,
    'counter' => 0,
    'count_1' => 0,
    'count_2' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '5';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '2000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="title contributions clearfix">
<h2 class="block-title contributions">Contributions</h2>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Relationship: Flags: following_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Follow idea';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'following_idea';
  /* Relationship: Flags: support_idea counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel_1']['label'] = 'Support Idea';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'support_idea';
  /* Relationship: Flags: support_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_2']['id'] = 'flag_count_rel_2';
  $handler->display->display_options['relationships']['flag_count_rel_2']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_2']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_2']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel_2']['label'] = 'Support Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_2']['flag'] = 'support_collaboration';
  /* Relationship: Flags: follow_collaboration counter */
  $handler->display->display_options['relationships']['flag_count_rel_3']['id'] = 'flag_count_rel_3';
  $handler->display->display_options['relationships']['flag_count_rel_3']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel_3']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_3']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['flag_count_rel_3']['label'] = 'Follow Collaboration';
  $handler->display->display_options['relationships']['flag_count_rel_3']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_3']['flag'] = 'follow_collaboration';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]/add/member/co-owner';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: Field: Short description (max 50 words) */
  $handler->display->display_options['fields']['field_tag_line']['id'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['table'] = 'field_data_field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['field'] = 'field_tag_line';
  $handler->display->display_options['fields']['field_tag_line']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_tag_line']['label'] = '';
  $handler->display->display_options['fields']['field_tag_line']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_tag_line']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tag_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag_line']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_tag_line']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 Comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count Comments';
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
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel_1';
  $handler->display->display_options['fields']['count_1']['label'] = '';
  $handler->display->display_options['fields']['count_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_2']['id'] = 'count_2';
  $handler->display->display_options['fields']['count_2']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_2']['field'] = 'count';
  $handler->display->display_options['fields']['count_2']['relationship'] = 'flag_count_rel_2';
  $handler->display->display_options['fields']['count_2']['label'] = '';
  $handler->display->display_options['fields']['count_2']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_3']['id'] = 'count_3';
  $handler->display->display_options['fields']['count_3']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_3']['field'] = 'count';
  $handler->display->display_options['fields']['count_3']['relationship'] = 'flag_count_rel_3';
  $handler->display->display_options['fields']['count_3']['label'] = '';
  $handler->display->display_options['fields']['count_3']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_hub_image']['id'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['table'] = 'field_data_field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['field'] = 'field_featured_hub_image';
  $handler->display->display_options['fields']['field_featured_hub_image']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_featured_hub_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hub_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_hub_image']['empty'] = '<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_hub_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_hub_image']['settings'] = array(
    'image_style' => 'small-card-view',
    'image_link' => '',
  );
  /* Field: Content: Featured_image */
  $handler->display->display_options['fields']['field_featured_picture']['id'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['table'] = 'field_data_field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['field'] = 'field_featured_picture';
  $handler->display->display_options['fields']['field_featured_picture']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_featured_picture']['label'] = '';
  $handler->display->display_options['fields']['field_featured_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_picture']['empty'] = '<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>';
  $handler->display->display_options['fields']['field_featured_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_picture']['settings'] = array(
    'image_style' => 'small-card-view',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['etid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hub' => 'hub',
    'idea' => 'idea',
  );

  /* Display: Your Contributions */
  $handler = $view->new_display('block', 'Your Contributions', 'your_contrib');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['etid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['block_description'] = 'Your Contributions';

  /* Display: Mobile Block */
  $handler = $view->new_display('block', 'Mobile Block', 'mobile_block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'title' => 0,
    'type' => 0,
    'field_tag_line' => 0,
    'created' => 0,
    'comment_count' => 0,
    'counter' => 0,
    'count_1' => 0,
    'count_2' => 0,
    'count' => 0,
    'count_3' => 0,
    'field_featured_hub_image' => 0,
    'field_featured_picture' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'title' => 0,
    'type' => 0,
    'field_tag_line' => 0,
    'created' => 0,
    'comment_count' => 0,
    'counter' => 0,
    'count_1' => 0,
    'count_2' => 0,
    'count' => 0,
    'count_3' => 0,
    'field_featured_hub_image' => 0,
    'field_featured_picture' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '2000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Mobile view';
  $translatables['your_contrib'] = array(
    t('Master'),
    t('Contributions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="title contributions clearfix">
<h2 class="block-title contributions">Contributions</h2>
</div>'),
    t('<div class="row-fluid">
<div class="span3"><img src="/sites/default/files/nofollow_bg.png" style="max-height: 160px"></div>
<div class="span8"><p><strong>There’s nothing here, yet!</strong></p>
<p>Click the \'Join\' button, to join the hub and become a member.</p>
<p>So get out there and <a href="/hubs">explore hubs</a>.</p>
</div>
</div>'),
    t('Group node'),
    t('Follow idea'),
    t('Support Idea'),
    t('Support Collaboration'),
    t('Follow Collaboration'),
    t('.'),
    t(','),
    t('<a href="/node/[nid]"><img alt=\'placeholder image\' src=\'/profiles/collabco/themes/custom/collabco_theme/assets/img/placeholder/placeholder-card-large.jpg\' ></a>'),
    t('All'),
    t('Your Contributions'),
    t('Mobile Block'),
    t('Mobile view'),
  );
  $export['your_contrib'] = $view;

  return $export;
}
