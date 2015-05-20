<?php
/**
 * @file
 * dccr_ftr_workshop.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dccr_ftr_workshop_default_rules_configuration() {
  $items = array();
  $items['rules_notify_admin_full_workshop'] = entity_import('rules_config', '{ "rules_notify_admin_full_workshop" : {
      "LABEL" : "Notify Site Administors on full Workshop",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_bulk_operations", "message_notify", "flag" ],
      "ON" : { "flag_flagged_workshop_registration" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "flagged-node:type" ], "value" : "workshop" } },
        { "data_is" : { "data" : [ "flagged-node:field-availability" ], "value" : "0" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "full_workshop",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "workshop_message_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "workshop-message-created:field-workshop-node" ],
            "value" : [ "flagged-node" ]
          }
        },
        { "entity_save" : { "data" : [ "workshop-message-created" ], "immediate" : "1" } },
        { "views_bulk_operations_action_load_list" : {
            "USING" : { "view" : "site_administrators_list|default" },
            "PROVIDE" : { "entity_list" : { "site_administrators_list" : "A list of entities" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "site-administrators-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "message_notify_process" : {
                  "message" : [ "workshop-message-created" ],
                  "save_on_fail" : "0",
                  "save_on_success" : "0",
                  "mail" : "[list-item:mail]"
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_send_workshop_reminder'] = entity_import('rules_config', '{ "rules_send_workshop_reminder" : {
      "LABEL" : "Send Workshop Reminder",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Notification" ],
      "REQUIRES" : [ "rules", "message_notify", "dccr_ftr_workshop" ],
      "ON" : { "dccr_ftr_workshop_nofications" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "workshop_reminder",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "workshop_reminder_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "workshop-reminder-created:field-workshop-node" ],
            "value" : [ "workshop-node" ]
          }
        },
        { "data_set" : {
            "data" : [ "workshop-reminder-created:field-user-flagger" ],
            "value" : [ "user" ]
          }
        },
        { "data_set" : {
            "data" : [ "workshop-reminder-created:field-days-remaining" ],
            "value" : "[days:value]"
          }
        },
        { "message_notify_process" : { "message" : [ "workshop-reminder-created" ], "mail" : "[user:mail]" } }
      ]
    }
  }');
  $items['rules_user_workshop_application'] = entity_import('rules_config', '{ "rules_user_workshop_application" : {
      "LABEL" : "User workshop application",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "message_notify", "flag" ],
      "ON" : { "flag_flagged_workshop_registration" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "user_application_workshop",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "workshop_message" : "Workshop message" } }
          }
        },
        { "data_set" : {
            "data" : [ "workshop-message:field-workshop-node" ],
            "value" : [ "flagged-node" ]
          }
        },
        { "entity_save" : { "data" : [ "workshop-message" ], "immediate" : "1" } },
        { "message_notify_process" : {
            "message" : [ "workshop-message" ],
            "save_on_fail" : "0",
            "save_on_success" : "0",
            "mail" : "[flagging-user:mail]"
          }
        }
      ]
    }
  }');
  return $items;
}
