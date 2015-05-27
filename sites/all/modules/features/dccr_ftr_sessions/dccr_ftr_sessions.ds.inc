<?php
/**
 * @file
 * dccr_ftr_sessions.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dccr_ftr_sessions_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dccr_session|time_slot';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dccr_session';
  $ds_fieldsetting->view_mode = 'time_slot';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|dccr_session|time_slot'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dccr_ftr_sessions_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dccr_session|time_slot';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dccr_session';
  $ds_layout->view_mode = 'time_slot';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_level',
        2 => 'field_speakers',
        3 => 'flag_add_to_favorites',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_level' => 'ds_content',
      'field_speakers' => 'ds_content',
      'flag_add_to_favorites' => 'ds_content',
      'node_link' => 'ds_content',
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
  $export['node|dccr_session|time_slot'] = $ds_layout;

  return $export;
}
