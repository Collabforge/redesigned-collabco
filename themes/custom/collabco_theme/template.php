<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


/**
 * Implements hook_preprocess_maintenance_page().
 */
function collabco_theme_preprocess_maintenance_page(&$variables) {
  $t_function = get_t();
  if (drupal_installation_attempted()) {
    $variables['site_name'] = $t_function('Collabco IMS');
  }
}


/**
 *  Remove labels and add HTML5 placeholder attribute to
 *  User login, New account, New password, comments form.
 */
function collabco_theme_form_alter(&$form, &$form_state, $form_id) {
  // For altering the advanced search content type setting.
  if ($form_id == 'search_form') {
    if (isset($form['module']) && $form['module']['#value'] == 'node') {
      if (isset($form['advanced'])) {
        $names = array_keys(node_type_get_names());
        foreach ($names as $name) {
          if (!in_array($name, array('idea', 'hub', 'conversation', 'knowledge_object'))) {
            unset($form['advanced']['type']['#options'][$name]);
          }
        }
      }
    }
  }
  elseif ($form_id == 'search_block_form') {
    $form['search_block_form']['#attributes']['placeholder'] = t('SEARCH...');
  }
  elseif (in_array($form_id, array('comment_node_idea_form', 'comment_node_hub_form'))) {
    if (arg(1) == 'reply' && is_numeric(arg(2)) && is_numeric(arg(3))) {
      $comment_id = 'comment-' . arg(3);
      $destination = '/node/' . arg(2);
      $form['actions']['cancel'] = array(
        '#markup' => l(t('Cancel'), $destination, array(
          'attributes' => array(
            'class' => array('btn btn-default')),
        'fragment' => $comment_id)),
        '#weight' => 100,
      );
    }
  }
  elseif ( in_array( $form_id, array( 'views_exposed_form') ) ) {
      $form['combine']['#attributes']['placeholder'] = 'Search '.csl('challenges',1);
    }
  elseif ( in_array( $form_id, array( 'user_login', 'user_login_block') ) ) {

    $welcome_desc ="<div class='welcome-demo'><center><h1>Welcome to the Collabco IMS Demo!</h1></center>

We recommend creating an account to trial the full experience. If you are time-poor or simply want to jump straight in, please feel free to use the below credentials:<br><br>

<b>Email:</b> test@collabco.com.au<br>
<b>Pass:</b> test123
<br><br>
We have populated the website with some rich demonstration content. Please keep in mind that registrations are open to the public and so you may find content that was posted by other users - we are not responsible for this content. For this reason, all data/content is reset every 24 hours.

If you have any questions, <a href='http://collabco.com.au/index.php/contact/''>please reach out to us here!</a>

<br><br>&nbsp;&nbsp; <br></div>";

   $form['title'] = array(
    '#markup' => $welcome_desc,
    '#weight' => -10,
  );
    $form['name']['#attributes']['placeholder'] = t( 'E-mail' );
    $form['pass']['#attributes']['placeholder'] = t( 'Password' );
    $form['name']['#title_display'] = "invisible";
    $form['pass']['#title_display'] = "invisible";
    $form['name']['#description'] = t('');
    $form['pass']['#description'] = t('');
  }

  elseif ( in_array( $form_id, array('user_pass') ) ) {
    $form['name']['#attributes']['placeholder'] = t( 'E-mail' );
    $form['name']['#title_display'] = "invisible";
    $form['name']['#description'] = t('');
  }

  elseif ( in_array( $form_id, array('user_register_form')) ){
    $form['field_full_name'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] =
      $form['field_full_name'][LANGUAGE_NONE]['#title'];
    unset($form['field_full_name'][LANGUAGE_NONE][0]['value']['#title']);

    $form['account']['name']['#attributes']['placeholder'] = t('E-mail');
    $form['account']['name']['#title_display'] = 'invisible';
    unset($form['account']['name']['#description']);

    $form['field_key_skills'][LANGUAGE_NONE]['#attributes']['placeholder'] =
      $form['field_key_skills'][LANGUAGE_NONE]['#title'];
    unset($form['field_key_skills'][LANGUAGE_NONE]['#title']);
  }

  elseif ( in_array( $form_id, array('user_profile_form')) ){
    $form['actions']['cancel']['#access'] = FALSE;  // removing the cancel account for moderator
    if (arg(0)=='user' && is_numeric(arg(1))) {
      $destination = $_SERVER['HTTP_REFERER'];
    }
    $form['actions']['cancel'] = array(
        '#markup' => l(t('Cancel'), $destination, array(
          'attributes' => array(
            'class' => array('btn btn-default')),
        'fragment' => isset($comment_id) ? $comment_id : NULL)),
        '#weight' => 100,
      );


    $form['account']['name']['#attributes']['placeholder'] = t( 'E-mail' );
    $form['account']['current_pass']['#attributes']['placeholder'] = t( 'Current Password' );
    $form['account']['pass[pass1]']['#attributes']['placeholder'] = t( 'Password' );
    $form['pass[pass2]']['#attributes']['placeholder'] = t( 'Confirm Password' );

    $form['account']['name']['#title_display'] = "invisible";
    $form['account']['current_pass']['#title_display'] = "invisible";
    $form['account']['pass[pass1]']['#title_display'] = "invisible";
    $form['pass[pass2]']['#title_display'] = "invisible";

    $form['account']['name']['#description'] = t('');
    $form['account']['current_pass']['#description'] = t('');
    $form['account']['pass[pass1]']['#description'] = t('');
    $form['pass[pass2]']['#description'] = t('');
  }

}
/**
 * to hide the tabs on user page, idea and collaboration page
 */

function collabco_theme_menu_local_tasks_alter(&$data, $router_item, $root_path) {
  if (is_numeric(arg(1))) {
    $node = node_load(arg(1));
    if (empty($node)) {
      return;
    }
    $ntype = $node->type;
    if (isset($data['tabs'][0]['output'])) {
      foreach ($data['tabs'][0]['output'] as $key => $value) {
        if ($ntype == 'idea' || $ntype == 'hub') {
          unset($data['tabs'][0]['output'][$key]);
        }
      }
    }
  }
  if (arg(0) == 'user' && is_numeric(arg(1)) && arg(2) == FALSE) {
    $data['tabs'][0]['count'] = 0;
  }
}

/** Change column size */

function collabco_theme_preprocess_page(&$variables) {
  if(!$variables['user']->uid && arg(0)!='user' && arg(1)!='login') {
    drupal_set_header('HTTP/1.1 200 OK');
    drupal_goto('user/login');
  }
  if(isset($variables['page']['content']['system_main']['no_content'])) {

      $variables['page']['content']['system_main']['no_content']['#markup'] = 'No ideas have been shared yet, be the first to create your idea';
  }

  // Add information about the number of sidebars.

  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-7"';
  }
  else {
    $variables['content_column_class'] = ' class="col-sm-12"';
  }

  if (bootstrap_setting('fluid_container') == 1) {
    $variables['container_class'] = 'container-fluid';
  }
  else {
    $variables['container_class'] = 'container';
  }

  // Primary nav.
  $variables['primary_nav'] = FALSE;
  if ($variables['main_menu']) {
    // Build links.
    $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    // Provide default theme wrapper function.
    $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
  }

  // Secondary nav.
  $variables['secondary_nav'] = FALSE;
  if ($variables['secondary_menu']) {
    // Build links.
    $variables['secondary_nav'] = menu_tree(variable_get('menu_secondary_links_source', 'user-menu'));
    // Provide default theme wrapper function.
    $variables['secondary_nav']['#theme_wrappers'] = array('menu_tree__secondary');
  }

  $variables['navbar_classes_array'] = array('navbar');

  if (bootstrap_setting('navbar_position') !== '') {
    $variables['navbar_classes_array'][] = 'navbar-' . bootstrap_setting('navbar_position');
  }
  elseif (bootstrap_setting('fluid_container') == 1) {
    $variables['navbar_classes_array'][] = 'container-fluid';
  }
  else {
    $variables['navbar_classes_array'][] = 'container';
  }
  if (bootstrap_setting('navbar_inverse')) {
    $variables['navbar_classes_array'][] = 'navbar-inverse';
  }
  else {
    $variables['navbar_classes_array'][] = 'navbar-default';
  }

  if (isset($variables['body_classes']) && arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2)))
  {
    $variables['body_classes'] .= " teens" . arg(2);
  }
}

/**
 * Implements template_preprocess_html().
 */
function collabco_theme_preprocess_html(&$variables) {
  $path = drupal_get_path_alias();
  $aliases = explode('/', $path);
  if (in_array('about', $aliases) || in_array('help', $aliases)) {
    foreach($aliases as $alias) {
      $variables['classes_array'][] = drupal_clean_css_identifier($alias);
    }
  }
}

/**
 * Implements template_process_html().
 *
 * Override or insert variables into the page template for HTML output.
 */
function collabco_theme_process_html(&$variables) {
 // Hook into color.module.
 if (module_exists('color')) {
 _color_html_alter($variables);
 }
}

/*
 * Implements template_process_page().
 */
function collabco_theme_process_page(&$variables, $hook) {
 // Hook into color.module.
 if (module_exists('color')) {
 _color_page_alter($variables);
 }
}

/**
 * Implements template_preprocess_block().
 * Override or insert variables into the block template
 */
function collabco_theme_preprocess_block(&$vars) {

  // var_dump($vars);

  $block = $vars['block'];

  if ($block->delta == 'likes') {
    $vars['title_attributes_array']['class'][] = 'like-this-collaboration';
  }

}
