<?php
/**
 * @file
 * dccr_ftr_workshop.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dccr_ftr_workshop_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|workshop|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'workshop';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|workshop|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dccr_ftr_workshop_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|workshop|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'workshop';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_availability',
        2 => 'field_speaker',
        3 => 'field_workshop_date',
        4 => 'group_speaker_time',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_availability' => 'ds_content',
      'field_speaker' => 'ds_content',
      'field_workshop_date' => 'ds_content',
      'group_speaker_time' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|workshop|teaser'] = $ds_layout;

  return $export;
}
