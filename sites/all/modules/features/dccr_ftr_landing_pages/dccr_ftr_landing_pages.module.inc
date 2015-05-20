<?php
/**
 * @file
 * Code for the Drupal Camp Landing Pages feature.
 */

/**
 * Implements hook_ctools_plugin_directory().
 */
function dccr_ftr_landing_pages_ctools_plugin_directory($module, $plugin) {
  if ($module == 'ctools' && !empty($plugin)) {
    return "plugins/$plugin";
  }
}
