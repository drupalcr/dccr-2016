<?php
/**
 * @file
 * dccr_ftr_config.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function dccr_ftr_config_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'time_slot';
  $ds_view_mode->label = 'Time Slot';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['time_slot'] = $ds_view_mode;

  return $export;
}
