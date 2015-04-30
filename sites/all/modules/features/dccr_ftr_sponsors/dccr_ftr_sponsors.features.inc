<?php
/**
 * @file
 * dccr_ftr_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dccr_ftr_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dccr_ftr_sponsors_node_info() {
  $items = array(
    'dccr_sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Drupal Camp Sponsor'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
