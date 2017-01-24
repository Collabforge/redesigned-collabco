<?php
/**
 * @file
 * collabco_myhub_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_myhub_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
