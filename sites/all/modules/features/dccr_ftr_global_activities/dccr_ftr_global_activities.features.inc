<?php
/**
 * @file
 * dccr_ftr_global_activities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_global_activities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dccr_ftr_global_activities_node_info() {
  $items = array(
    'global_activity' => array(
      'name' => t('Global activity'),
      'base' => 'node_content',
      'description' => t('This content type is to add activities (like breaks, lunch and keynotes) that will appear in the schedule. This activities will be shown in all available rooms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Insert the activity name, for example: \'Keynote\', \'Lunch\'.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
