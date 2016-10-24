<?php

/**
 * @file
 * Provide views data and handlers for Collabco Challenge module.
 *
 * @ingroup views_module_handlers
 */

/**
 * Implements hook_views_data_alter().
 *
 * Extends the Challenge taxonomy term Date filter with an "is open" filter.
 */
function collabco_challenge_views_data_alter(&$data) {
  // Extends the filter_date with an "is open" option.
  $data['field_data_field_start_date']['field_start_date_value']['title'] .= ', ' . t('with "open" option');
  $data['field_data_field_start_date']['field_start_date_value']['filter']['handler'] = 'collabco_challenge_handler_filter_is_open';
  $data['field_data_field_start_date']['field_start_date_value2']['title'] .= ', ' . t('with "open" option');
  $data['field_data_field_start_date']['field_start_date_value2']['filter']['handler'] = 'collabco_challenge_handler_filter_is_open';
}
