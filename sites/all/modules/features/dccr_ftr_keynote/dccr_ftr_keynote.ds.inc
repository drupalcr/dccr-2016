<?php
/**
 * @file
 * dccr_ftr_keynote.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dccr_ftr_keynote_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|keynote|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'keynote';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|keynote|default'] = $ds_fieldsetting;

  return $export;
}
