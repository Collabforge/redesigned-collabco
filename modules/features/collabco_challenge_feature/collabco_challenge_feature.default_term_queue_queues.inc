<?php
/**
 * @file
 * collabco_challenge_feature.default_term_queue_queues.inc
 */

/**
 * Implements hook_default_term_queue_queue().
 */
function collabco_challenge_feature_default_term_queue_queue() {
  $export = array();

  $queue = new stdClass();
  $queue->api_version = 1;
  $queue->machine_name = 'open_challenges';
  $queue->title = 'Open '.ucfirst(variable_get('csl_challenges')).'s';
  $queue->description = '';
  $queue->vid_machine_name = 'challenge';
  $export['open_challenges'] = $queue;

  return $export;
}
