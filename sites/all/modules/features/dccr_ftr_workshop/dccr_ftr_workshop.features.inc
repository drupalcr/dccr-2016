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
    'link_type' => 'toggle',
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
    'show_as_field' => 1,
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
