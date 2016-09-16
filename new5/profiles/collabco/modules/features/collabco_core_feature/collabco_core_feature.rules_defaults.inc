<?php
/**
 * @file
 * collabco_core_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function collabco_core_feature_default_rules_configuration() {
  $items = array();
  $items['rules_comment_reported'] = entity_import('rules_config', '{ "rules_comment_reported" : {
      "LABEL" : "Comment Reported",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "abuse", "comments", "report" ],
      "REQUIRES" : [ "rules", "mimemail", "flag" ],
      "ON" : { "flag_flagged_abuse_comment" : [] },
      "DO" : [
        { "mimemail" : {
            "key" : "comment_reported",
            "to" : "InnovationPartnerships@employment.gov.au",
            "bcc" : "webmaster@collabforge.com",
            "subject" : "A comment was reported on [site:name]",
            "body" : "Hi,\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nA comment has been reported by a user of [site:name].\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nHere is the reported comment details:\\u003Cbr\\u003E\\r\\nComment ID: [flagged-comment:cid]\\u003Cbr\\u003E\\r\\nIP when comment was posted: [flagged-comment:hostname]\\u003Cbr\\u003E\\r\\nName: [flagged-comment:field-full-name]\\u003Cbr\\u003E\\r\\nEmail: [flagged-comment:mail]\\u003Cbr\\u003E\\r\\nURL: [flagged-comment:url]\\u003Cbr\\u003E\\r\\nEdit the comment: [flagged-comment:edit-url]\\u003Cbr\\u003E\\r\\nFirst posted: [flagged-comment:created]\\u003Cbr\\u003E\\r\\nComment: [flagged-comment:body]\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nIf the comment was edited since the original, here are the details:\\u003Cbr\\u003E\\r\\nLast edited: [flagged-comment:changed]\\u003Cbr\\u003E\\r\\nOriginal comment: [flagged-comment:original]\\u003Cbr\\u003E\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\n\\r\\nIf you\\u0027d like to contact the reporter, their details are:\\u003Cbr\\u003E\\r\\nUID: [flagging-user:uid]\\u003Cbr\\u003E\\r\\nName: [flagging-user:field-full-name]\\u003Cbr\\u003E\\r\\nEmail: [flagging-user:mail]\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nThank you,\\u003Cbr\\u003E\\r\\n[site:name]",
            "plaintext" : "Hi,\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nA comment has been reported by a user of [site:name].\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nHere is the reported comment details:\\u003Cbr\\u003E\\r\\nComment ID: [flagged-comment:cid]\\u003Cbr\\u003E\\r\\nIP when comment was posted: [flagged-comment:hostname]\\u003Cbr\\u003E\\r\\nName: [flagged-comment:field-full-name]\\u003Cbr\\u003E\\r\\nEmail: [flagged-comment:mail]\\u003Cbr\\u003E\\r\\nURL: [flagged-comment:url]\\u003Cbr\\u003E\\r\\nEdit the comment: [flagged-comment:edit-url]\\u003Cbr\\u003E\\r\\nFirst posted: [flagged-comment:created]\\u003Cbr\\u003E\\r\\nComment: [flagged-comment:body]\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nIf the comment was edited since the original, here are the details:\\u003Cbr\\u003E\\r\\nLast edited: [flagged-comment:changed]\\u003Cbr\\u003E\\r\\nOriginal comment: [flagged-comment:original]\\u003Cbr\\u003E\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\n\\r\\nIf you\\u0027d like to contact the reporter, their details are:\\u003Cbr\\u003E\\r\\nUID: [flagging-user:uid]\\u003Cbr\\u003E\\r\\nName: [flagging-user:field-full-name]\\u003Cbr\\u003E\\r\\nEmail: [flagging-user:mail]\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\r\\nThank you,\\u003Cbr\\u003E\\r\\n[site:name]",
            "language" : [ "flagging-user:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_issue_or_bug_report'] = entity_import('rules_config', '{ "rules_issue_or_bug_report" : {
      "LABEL" : "Issue or Bug Report",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "webform_rules", "rules", "mimemail" ],
      "ON" : { "webform_rules_submit" : [] },
      "IF" : [
        { "webform_has_id" : {
            "form_id" : "webform-client-form-44",
            "selected_webform" : { "value" : { "webform-client-form-44" : "webform-client-form-44" } }
          }
        }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "bug_report",
            "to" : "InnovationPartnerships@employment.gov.au",
            "bcc" : "webmaster@collabforge.com",
            "subject" : "New bug report on Department of Employment IMS",
            "body" : "Hi,\\r\\n\\r\\nA new bug report has been filed on the Department of Employment IMS.\\r\\n\\r\\nView here: [site:url]node\\/44\\/webform-results\\r\\n\\r\\nThank you,\\r\\nDoE IMS\\r\\n\\r\\n",
            "plaintext" : "Hi,\\r\\n\\r\\nA new bug report has been filed on the Department of Employment IMS.\\r\\n\\r\\nView here: [site:url]node\\/44\\/webform-results\\r\\n\\r\\nThank you,\\r\\nDoE IMS\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
