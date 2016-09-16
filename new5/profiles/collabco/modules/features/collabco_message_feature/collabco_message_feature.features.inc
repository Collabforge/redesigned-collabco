<?php
/**
 * @file
 * collabco_message_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_message_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function collabco_message_feature_default_message_type() {
  $items = array();
  $items['create_comment'] = entity_import('message_type', '{
    "name" : "create_comment",
    "description" : "create comment",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "[message:mid] : Comment cid : [message:field-comment-ref:cid] : is created.",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[message:mid] : Comment cid : [message:field-comment-ref:cid] : is created.\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['create_node'] = entity_import('message_type', '{
    "name" : "create_node",
    "description" : "create node",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "[message:mid] : A [message:field-node-ref:title] is added : Nid : [message:field-node-ref:nid]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[message:mid] : A [message:field-node-ref:title] is added : Nid : [message:field-node-ref:nid]\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['term_ends_soon'] = entity_import('message_type', '{
    "name" : "term_ends_soon",
    "description" : "challenge ends soon",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "[message:mid] Challenge [message:field-term-ref] ends soon.",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[message:mid] Challenge [message:field-term-ref] ends soon.\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['update_node'] = entity_import('message_type', '{
    "name" : "update_node",
    "description" : "update node",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "[message:mid] : [message:field-node-ref:title] : Nid : [message:field-node-ref:nid]  is updated [message:field-node-update-type]\\r\\n",
          "format" : "php_code"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
