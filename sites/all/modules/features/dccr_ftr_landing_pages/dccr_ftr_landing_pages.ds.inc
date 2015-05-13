<?php
/**
 * @file
 * dccr_ftr_landing_pages.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function dccr_ftr_landing_pages_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_image_size';
  $ds_view_mode->label = 'Full Image Size';
  $ds_view_mode->entities = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
  );
  $export['full_image_size'] = $ds_view_mode;

  return $export;
}
