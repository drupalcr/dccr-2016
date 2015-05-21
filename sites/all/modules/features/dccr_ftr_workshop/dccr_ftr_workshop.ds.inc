<?php
/**
 * @file
 * dccr_ftr_workshop.ds.inc
 */

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
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'group_speaker_time',
        1 => 'body',
        2 => 'field_speaker',
        3 => 'field_workshop_date',
      ),
      'right' => array(
        4 => 'field_availability',
      ),
    ),
    'fields' => array(
      'group_speaker_time' => 'left',
      'body' => 'left',
      'field_speaker' => 'left',
      'field_workshop_date' => 'left',
      'field_availability' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
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
