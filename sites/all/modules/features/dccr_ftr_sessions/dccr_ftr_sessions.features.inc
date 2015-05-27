<?php
/**
 * @file
 * dccr_ftr_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function dccr_ftr_sessions_flag_default_flags() {
  $flags = array();
  // Exported flag: "Add to favorites".
  $flags['add_to_favorites'] = array(
    'entity_type' => 'node',
    'title' => 'Add to favorites',
    'global' => 0,
    'types' => array(
      0 => 'dccr_session',
    ),
    'flag_short' => 'Add to favorites',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove from favorites',
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
      'time_slot' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 1,
    'module' => 'dccr_ftr_sessions',
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
function dccr_ftr_sessions_node_info() {
  $items = array(
    'dccr_session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Drupal Camp Session Proposal'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
