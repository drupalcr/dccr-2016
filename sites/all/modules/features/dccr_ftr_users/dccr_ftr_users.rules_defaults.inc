<?php
/**
 * @file
 * dccr_ftr_users.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dccr_ftr_users_default_rules_configuration() {
  $items = array();
  $items['rules_dccr_new_payment_receipt_submission'] = entity_import('rules_config', '{ "rules_dccr_new_payment_receipt_submission" : {
      "LABEL" : "New Payment Receipt Submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "users_register" ],
      "REQUIRES" : [ "rules", "message_notify", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "dccr_admin_notification_payment_submit_form",
              "param_user" : [ "entityform:user" ]
            },
            "PROVIDE" : { "entity_created" : { "message" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "message:user" ], "value" : [ "entityform:user" ] } },
        { "data_set" : { "data" : [ "message:field-submission" ], "value" : [ "entityform" ] } },
        { "entity_save" : { "data" : [ "message" ], "immediate" : "1" } },
        { "message_notify_process" : {
            "message" : [ "message" ],
            "save_on_fail" : "0",
            "save_on_success" : "0",
            "mail" : "kevin@estudiomanati.com"
          }
        }
      ]
    }
  }');
  return $items;
}
