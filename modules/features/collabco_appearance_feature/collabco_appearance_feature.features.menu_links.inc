<?php
/**
 * @file
 * collabco_appearance.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function collabco_appearance_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-for-moderators_basic-page:node/add/basic-page.
  $menu_links['menu-menu-for-moderators_basic-page:node/add/basic-page'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'node/add/basic-page',
    'router_path' => 'node/add/basic-page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_basic-page:node/add/basic-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_create:admin/content',
  );
  // Exported menu link: menu-menu-for-moderators_challenge-report:admin/reports/challenge-report.
  $menu_links['menu-menu-for-moderators_challenge-report:admin/reports/challenge-report'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/reports/challenge-report',
    'router_path' => 'admin/reports/challenge-report',
    'link_title' => 'Challenge Report',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_challenge-report:admin/reports/challenge-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_view:<front>',
  );
  // Exported menu link: menu-menu-for-moderators_challenge:admin/structure/taxonomy/challenge/add.
  $menu_links['menu-menu-for-moderators_challenge:admin/structure/taxonomy/challenge/add'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/structure/taxonomy/challenge/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Challenge',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_challenge:admin/structure/taxonomy/challenge/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_create:admin/content',
  );
  // Exported menu link: menu-menu-for-moderators_collaboration:node/add/hub.
  $menu_links['menu-menu-for-moderators_collaboration:node/add/hub'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'node/add/hub',
    'router_path' => 'node/add/hub',
    'link_title' => 'Collaboration',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_collaboration:node/add/hub',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_create:admin/content',
  );
  // Exported menu link: menu-menu-for-moderators_comment:admin/content/comment.
  $menu_links['menu-menu-for-moderators_comment:admin/content/comment'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comment',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_comment:admin/content/comment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_edit:admin/content/comment',
  );
  // Exported menu link: menu-menu-for-moderators_create:admin/content.
  $menu_links['menu-menu-for-moderators_create:admin/content'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Create',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => 'flagged',
        'style' => 'flagged',
      ),
      'identifier' => 'menu-menu-for-moderators_create:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-for-moderators_edit:admin/content/comment.
  $menu_links['menu-menu-for-moderators_edit:admin/content/comment'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Edit',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => 'edit',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_edit:admin/content/comment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-for-moderators_idea:node/add/idea.
  $menu_links['menu-menu-for-moderators_idea:node/add/idea'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'node/add/idea',
    'router_path' => 'node/add/idea',
    'link_title' => 'Idea',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_idea:node/add/idea',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_create:admin/content',
  );
  // Exported menu link: menu-menu-for-moderators_member-report:admin/reports/member-report.
  $menu_links['menu-menu-for-moderators_member-report:admin/reports/member-report'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/reports/member-report',
    'router_path' => 'admin/reports/member-report',
    'link_title' => 'Member report',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_member-report:admin/reports/member-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_view:<front>',
  );
  // Exported menu link: menu-menu-for-moderators_on-going--miscellaneous-challenge:admin/config/collabco-settings/challenge.
  $menu_links['menu-menu-for-moderators_on-going--miscellaneous-challenge:admin/config/collabco-settings/challenge'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/config/collabco-settings/challenge',
    'router_path' => 'admin/config/collabco-settings/challenge',
    'link_title' => 'On-going / miscellaneous challenge',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_on-going--miscellaneous-challenge:admin/config/collabco-settings/challenge',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_edit:admin/content/comment',
  );
  // Exported menu link: menu-menu-for-moderators_open-challenges:admin/structure/term_queue/open_challenges.
  $menu_links['menu-menu-for-moderators_open-challenges:admin/structure/term_queue/open_challenges'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/structure/term_queue/open_challenges',
    'router_path' => 'admin/structure/term_queue/%',
    'link_title' => 'Open '.ucfirst(variable_get('csl_challenges')).'s',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_open-challenges:admin/structure/term_queue/open_challenges',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_edit:admin/content/comment',
  );
  // Exported menu link: menu-menu-for-moderators_user:admin/people/create.
  $menu_links['menu-menu-for-moderators_user:admin/people/create'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'User',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_user:admin/people/create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-for-moderators_create:admin/content',
  );
  // Exported menu link: menu-menu-for-moderators_view:<front>.
  $menu_links['menu-menu-for-moderators_view:<front>'] = array(
    'menu_name' => 'menu-menu-for-moderators',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'View',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-for-moderators_view:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic page');
  t('Challenge');
  t('Challenge Report');
  t('Collaboration');
  t('Comment');
  t('Create');
  t('Edit');
  t('Idea');
  t('Member report');
  t('On-going / miscellaneous challenge');
  t('Open '.ucfirst(variable_get('csl_challenges')).'s');
  t('User');
  t('View');

  return $menu_links;
}
