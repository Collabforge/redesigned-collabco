<?php
/**
 * @file
 * collabco_challenge_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_challenge_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "term_queue" && $api == "default_term_queue_queues") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function collabco_challenge_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow Challenge".
  $flags['challenge_flag'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Follow Challenge',
    'global' => 0,
    'types' => array(
      0 => 'challenge',
    ),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfollow',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -11,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'api_version' => 3,
    'module' => 'collabco_challenge_feature',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Support Challenge".
  $flags['support_challenge'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Support Challenge',
    'global' => 0,
    'types' => array(
      0 => 'challenge',
    ),
    'flag_short' => 'Support',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unsupport',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -12,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'api_version' => 3,
    'module' => 'collabco_challenge_feature',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
