<?php
/**
 * @file
 * dccr_ftr_sponsors.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dccr_ftr_sponsors_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sponsor_header|node|dccr_sponsor|full';
  $field_group->group_name = 'group_sponsor_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dccr_sponsor';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsor Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_sponsorship_level_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sponsor Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sponsor-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sponsor_header|node|dccr_sponsor|full'] = $field_group;

  return $export;
}
