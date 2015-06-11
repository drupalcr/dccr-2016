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
  $ds_layout->id = 'node|workshop|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'workshop';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'extra_field_workshop_register',
        1 => 'group_workshop_intro',
        2 => 'field_workshop_date',
        3 => 'field_track',
        4 => 'body',
        5 => 'field_availability',
        6 => 'field_level',
        7 => 'field_location',
        8 => 'field_speaker',
      ),
    ),
    'fields' => array(
      'extra_field_workshop_register' => 'ds_content',
      'group_workshop_intro' => 'ds_content',
      'field_workshop_date' => 'ds_content',
      'field_track' => 'ds_content',
      'body' => 'ds_content',
      'field_availability' => 'ds_content',
      'field_level' => 'ds_content',
      'field_location' => 'ds_content',
      'field_speaker' => 'ds_content',
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
  $export['node|workshop|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
        1 => 'flag_dccr_registration_complete',
      ),
      'right' => array(
        2 => 'field_full_name',
        3 => 'field_company',
        4 => 'field_about_me',
        5 => 'field_drupal_org',
        6 => 'field_facebook_profile',
        7 => 'field_twitter_profile',
        8 => 'field_linkedin_profile',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'flag_dccr_registration_complete' => 'left',
      'field_full_name' => 'right',
      'field_company' => 'right',
      'field_about_me' => 'right',
      'field_drupal_org' => 'right',
      'field_facebook_profile' => 'right',
      'field_twitter_profile' => 'right',
      'field_linkedin_profile' => 'right',
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
  $export['user|user|full'] = $ds_layout;

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
