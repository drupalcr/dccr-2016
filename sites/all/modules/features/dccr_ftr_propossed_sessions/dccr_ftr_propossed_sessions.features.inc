<?php
/**
 * @file
 * dccr_ftr_propossed_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_propossed_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function dccr_ftr_propossed_sessions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
