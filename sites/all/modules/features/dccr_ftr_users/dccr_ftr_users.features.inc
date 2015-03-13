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
        "language" : "es"
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
    'show_as_field' => 0,
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
