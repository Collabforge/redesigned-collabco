<?php
/**
 * @file
 * collabco_socialmedia_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function collabco_socialmedia_feature_default_rules_configuration() {
  $items = array();
  $items['rules_hybridauth_account_created'] = entity_import('rules_config', '{ "rules_hybridauth_account_created" : {
      "LABEL" : "HybridAuth account created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "hybridauth" ],
      "ON" : { "hybridauth_identity_added" : [] },
      "DO" : [
        { "data_set" : {
            "data" : [ "hybridauth-user:field-full-name" ],
            "value" : "[hybridauth:displayName]"
          }
        },
        { "data_set" : {
            "data" : [ "hybridauth-user:field-bio" ],
            "value" : "[hybridauth:description]"
          }
        }
      ]
    }
  }');
  return $items;
}
