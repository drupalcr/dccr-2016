<?php
/**
 * @file
 * dccr_ftr_sponsors.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function dccr_ftr_sponsors_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dccr_sponsor|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dccr_sponsor';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_sponsor_header',
        1 => 'field_image',
        2 => 'field_sponsor_link',
        3 => 'field_sponsorship_level_ref',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'group_sponsor_header' => 'ds_content',
      'field_image' => 'ds_content',
      'field_sponsor_link' => 'ds_content',
      'field_sponsorship_level_ref' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|dccr_sponsor|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dccr_sponsor|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dccr_sponsor';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
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
  $export['node|dccr_sponsor|teaser'] = $ds_layout;

  return $export;
}
