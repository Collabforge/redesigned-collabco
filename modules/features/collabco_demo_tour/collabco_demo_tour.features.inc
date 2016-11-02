<?php
/**
 * @file
 * collabco_demo_tour.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_demo_tour_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
