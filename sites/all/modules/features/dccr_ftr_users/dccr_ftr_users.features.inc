<?php
/**
 * @file
 * dccr_ftr_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function dccr_ftr_users_default_entityform_type() {
  $items = array();
  $items['dccr_payment_submission_form'] = entity_import('entityform_type', '{
    "type" : "dccr_payment_submission_form",
    "label" : "Payment Submission",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "manati_texto_formato" },
      "submit_button_text" : "Send",
      "submit_confirm_msg" : "\\u003Cnone\\u003E",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thanks for submitting your payment receipt.",
      "submission_text" : {
        "value" : "You will receive a confirmation email when it\\u0027s approved and then you will be fully registered to Drupal Camp Costa Rica 2015.\\r\\nSee you there!",
        "format" : "plain_text"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0, "3" : 0 },
      "resubmit_action" : "disallow",
      "redirect_path" : "user",
      "instruction_pre" : {
        "value" : "This form is intended for submitting the payment receipt. You can upload an image or a pdf document with the information of your payment.\\r\\nOnce submitted; it will be reviewed and you will receive a confirmation e-mail saying that you are fully-registered to Drupal Camp Costa Rica 2015.\\r\\n\\r\\nSee you there!",
        "format" : "plain_text"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/dccr-payment-submission-form",
        "alias" : "enviar-comprobante",
        "language" : "und"
      }
    }
  }');
  return $items;
}

/**
 * Implements hook_flag_default_flags().
 */
function dccr_ftr_users_flag_default_flags() {
  $flags = array();
  // Exported flag: "Registration Complete".
  $flags['dccr_registration_complete'] = array(
    'entity_type' => 'user',
    'title' => 'Registration Complete',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Mark [user:name] as Registration Complete',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unmark [user:name] as Registration Complete',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 0,
    'access_uid' => 'others',
    'module' => 'dccr_ftr_users',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function dccr_ftr_users_default_message_type() {
  $items = array();
  $items['dccr_admin_notification_payment_submit_form'] = entity_import('message_type', '{
    "name" : "dccr_admin_notification_payment_submit_form",
    "description" : "Admin notification payment submit form",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "es",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "User [message:field-submission:user:name] has sent payment receipt.\\n",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EUser [message:field-submission:user:name] has sent payment receipt.\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "You can review the [message:field-submission:user:name]\\u0027s submission in this url: [message:field-submission:url].",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EYou can review the [message:field-submission:user:name]\\u0026#039;s submission in this url: [message:field-submission:url].\\u003C\\/p\\u003E\\n"
        }
      ],
      "es" : [
        {
          "value" : "El usuario [message:field-submitter-user:name] ha enviado el comprobante de pago.",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EEl usuario [message:field-submitter-user:name] ha enviado el comprobante de pago.\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Usted puede revisar el env\\u00edo de [message:field-submission:user:name] en la url: [message:field-submission:url]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EUsted puede revisar el env\\u00edo de [message:field-submission:user:name] en la url: [message:field-submission:url]\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['user_payment_approved'] = entity_import('message_type', '{
    "name" : "user_payment_approved",
    "description" : "User Payment Approved",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "Your payment has been approved",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EYour payment has been approved\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Dear [message:field-approved-user:name],\\r\\n\\r\\nYou payment for Drupal Camp Costa Rica 2015 has been approved. You are now ready for going to this event!\\r\\n\\r\\nWe\\u0027ll see you there",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EDear [message:field-approved-user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003EYou payment for Drupal Camp Costa Rica 2015 has been approved. You are now ready for going to this event!\\u003C\\/p\\u003E\\n\\u003Cp\\u003EWe\\u0026#039;ll see you there\\u003C\\/p\\u003E\\n"
        }
      ],
      "es" : [
        {
          "value" : "Tu pago ha sido aprobado",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ETu pago ha sido aprobado\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Estimado [message:field-approved-user:name],\\n\\nSu pago para el Drupal Camp Costa Rica 2015 ha sido aprobado. Ya est\\u00e1s listo para asistir a este evento!\\n\\nTe veremos ah\\u00ed",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EEstimado [message:field-approved-user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003ESu pago para el Drupal Camp Costa Rica 2015 ha sido aprobado. Ya est\\u00e1s listo para asistir a este evento!\\u003C\\/p\\u003E\\n\\u003Cp\\u003ETe veremos ah\\u00ed\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
