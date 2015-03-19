<?php
/**
 * @file
 * dccr_ftr_sponsors.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dccr_ftr_sponsors_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__dccr_sponsor';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__dccr_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_dccr_sponsor';
  $strongarm->value = '2';
  $export['language_content_type_dccr_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_dccr_sponsor';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_dccr_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_dccr_sponsor';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_dccr_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dccr_sponsor';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_dccr_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_dccr_sponsor';
  $strongarm->value = '1';
  $export['node_preview_dccr_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_dccr_sponsor';
  $strongarm->value = 0;
  $export['node_submitted_dccr_sponsor'] = $strongarm;

  return $export;
}
