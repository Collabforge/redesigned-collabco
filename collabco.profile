<?php

/**
 * @file
 * Collabco profile.
 */

/**
 * Implements hook_form_FORMID_alter().
 */
function collabco_form_install_configure_form_alter(&$form, &$form_state) {
  _collabco_login_form_alterations($form, $form_state);
  $form['site_information']['site_name']['#default_value'] = 'Collabco IMS';
}
