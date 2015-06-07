<?php
/**
 * @file
 * dccr_ftr_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dccr_ftr_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_networks|user|user|form';
  $field_group->group_name = 'group_social_networks';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Networks',
    'weight' => '9',
    'children' => array(
      0 => 'field_facebook_profile',
      1 => 'field_linkedin_profile',
      2 => 'field_twitter_profile',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_social_networks|user|user|form'] = $field_group;

  return $export;
}
