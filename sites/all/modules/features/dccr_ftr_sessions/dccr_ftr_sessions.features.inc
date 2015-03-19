<?php
/**
 * @file
 * dccr_ftr_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function dccr_ftr_sessions_field_default_field_bases_alter(&$data) {
  if (isset($data['field_location'])) {
    $data['field_location']['field_permissions'] = array(
      'type' => 2,
    ); /* WAS: '' */
  }
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
