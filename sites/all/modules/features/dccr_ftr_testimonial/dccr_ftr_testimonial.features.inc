<?php
/**
 * @file
 * dccr_ftr_testimonial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_testimonial_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
