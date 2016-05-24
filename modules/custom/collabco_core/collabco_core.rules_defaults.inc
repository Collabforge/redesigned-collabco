<?php
/**
 * @file
 * collabco_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function collabco_core_default_rules_configuration() {
  $items = array();
  $items['rules_challenge_flagged'] = entity_import('rules_config', '{ "rules_challenge_flagged" : {
      "LABEL" : "Challenge Flagged",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_challenge_flag" : [] },
      "DO" : [ { "redirect" : { "url" : [ "flagged-taxonomy-term:url" ] } } ]
    }
  }');
  return $items;
}
