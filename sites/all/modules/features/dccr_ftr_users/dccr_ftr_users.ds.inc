<?php
/**
 * @file
 * dccr_ftr_users.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dccr_ftr_users_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|teaser';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_keynote_frontpage',
    ),
  );
  $export['user|user|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dccr_ftr_users_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|teaser';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
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
  $export['user|user|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function dccr_ftr_users_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser';
  $ds_view_mode->label = 'Teaser';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['teaser'] = $ds_view_mode;

  return $export;
}
