<?php
/**
 * @file
 * dccr_ftr_workshop.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_workshop_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dccr_ftr_workshop_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function dccr_ftr_workshop_flag_default_flags() {
  $flags = array();
  // Exported flag: "Workshop registration".
  $flags['workshop_registration'] = array(
    'entity_type' => 'node',
    'title' => 'Workshop registration',
    'global' => 0,
    'types' => array(
      0 => 'workshop',
    ),
    'flag_short' => 'Register',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unregister',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 1,
    'module' => 'dccr_ftr_workshop',
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
function dccr_ftr_workshop_default_message_type() {
  $items = array();
  $items['full_workshop'] = entity_import('message_type', '{
    "name" : "full_workshop",
    "description" : "Full Workshop",
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
          "value" : "The workshop [message:field-workshop-node:title] is full",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EThe workshop [message:field-workshop-node:title] is full\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "The workshop [message:field-workshop-node:title] is full.\\nThere are [message:field-workshop-node:flag-workshop-registration-count] people registered.\\nYou can verify this information following this link  [message:field-workshop-node:url:absolute].\\nThanks.",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EThe workshop [message:field-workshop-node:title] is full.\\u003Cbr \\/\\u003E\\nThere are [message:field-workshop-node:flag-workshop-registration-count] people registered.\\u003Cbr \\/\\u003E\\nYou can verify this information following this link  [message:field-workshop-node:url:absolute].\\u003Cbr \\/\\u003E\\nThanks.\\u003C\\/p\\u003E\\n"
        }
      ],
      "es" : [
        {
          "value" : "El taller [message:field-workshop-node:title] est\\u00e1 lleno",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EEl taller [message:field-workshop-node:title] est\\u00e1 lleno\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "El taller [message:field-workshop-node:title] ha completado su cupo.\\r\\nSe han registrado un total de [message:field-workshop-node:flag-workshop-registration-count]  personas.\\r\\nPuede verificar esta informaci\\u00f3n siguiendo el siguiente enlace  [message:field-workshop-node:url:absolute].\\r\\n\\r\\nGracias.",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EEl taller [message:field-workshop-node:title] ha completado su cupo.\\u003Cbr \\/\\u003E\\nSe han registrado un total de [message:field-workshop-node:flag-workshop-registration-count]  personas.\\u003Cbr \\/\\u003E\\nPuede verificar esta informaci\\u00f3n siguiendo el siguiente enlace  [message:field-workshop-node:url:absolute].\\u003C\\/p\\u003E\\n\\u003Cp\\u003EGracias.\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  $items['user_application_workshop'] = entity_import('message_type', '{
    "name" : "user_application_workshop",
    "description" : "User application to workshop",
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
          "value" : "You are registered in the workshop  [message:field-workshop-node:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EYou are registered in the workshop  [message:field-workshop-node:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Dear [current-user:name] \\nYou are registered in the workshop [message:field-workshop-node:title]; it\\u0027s going to be on [message:field-workshop-node:field-workshop-date:value:custom:m\\/d\\/Y - g:i a]\\n\\nThanks.",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EDear [current-user:name]\\u003Cbr \\/\\u003E\\nYou are registered in the workshop [message:field-workshop-node:title]; it\\u0026#039;s going to be on [message:field-workshop-node:field-workshop-date:value:custom:m\\/d\\/Y - g:i a]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EThanks.\\u003C\\/p\\u003E\\n"
        }
      ],
      "es" : [
        {
          "value" : "Usted se ha registrado en el taller de [message:field-workshop-node:title]\\r\\n",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EUsted se ha registrado en el taller de [message:field-workshop-node:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Querido [current-user:name]\\r\\nUsted se ha registrado correctamente en el taller [message:field-workshop-node:title]; el mismo ser\\u00e1 el d\\u00eda [message:field-workshop-node:field-workshop-date:value:custom:d\\/m\\/Y - g:i a].\\r\\n\\r\\nGracias.\\r\\n",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EQuerido [current-user:name]\\u003Cbr \\/\\u003E\\nUsted se ha registrado correctamente en el taller [message:field-workshop-node:title]; el mismo ser\\u00e1 el d\\u00eda [message:field-workshop-node:field-workshop-date:value:custom:d\\/m\\/Y - g:i a].\\u003C\\/p\\u003E\\n\\u003Cp\\u003EGracias.\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function dccr_ftr_workshop_node_info() {
  $items = array(
    'workshop' => array(
      'name' => t('Workshop'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
