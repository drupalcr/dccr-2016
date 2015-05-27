<?php
/**
 * @file
 * dccr_ftr_global_activities.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dccr_ftr_global_activities_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|global_activity|time_slot';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'global_activity';
  $ds_fieldsetting->view_mode = 'time_slot';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|global_activity|time_slot'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dccr_ftr_global_activities_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|global_activity|time_slot';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'global_activity';
  $ds_layout->view_mode = 'time_slot';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_subtitle',
        2 => 'field_place',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_place' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|global_activity|time_slot'] = $ds_layout;

  return $export;
}
