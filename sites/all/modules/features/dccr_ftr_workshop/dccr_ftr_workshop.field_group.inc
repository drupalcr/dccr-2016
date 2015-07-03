<?php
/**
 * @file
 * dccr_ftr_workshop.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dccr_ftr_workshop_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker_time|node|workshop|teaser';
  $field_group->group_name = 'group_speaker_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'speaker-time',
    'weight' => '2',
    'children' => array(
      0 => 'field_speaker',
      1 => 'field_workshop_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'speaker-time',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-speaker-time field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_speaker_time|node|workshop|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workshop_intro|node|workshop|default';
  $field_group->group_name = 'group_workshop_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'workshop';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workshop intro',
    'weight' => '2',
    'children' => array(
      0 => 'field_availability',
      1 => 'field_level',
      2 => 'field_location',
      3 => 'field_speaker',
      4 => 'field_track',
      5 => 'field_workshop_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Workshop intro',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-workshop-intro field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_workshop_intro|node|workshop|default'] = $field_group;

  return $export;
}
