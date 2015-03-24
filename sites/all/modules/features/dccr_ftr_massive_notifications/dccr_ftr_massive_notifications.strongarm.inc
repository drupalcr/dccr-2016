<?php
/**
 * @file
 * dccr_ftr_massive_notifications.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dccr_ftr_massive_notifications_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_bcc_d';
  $strongarm->value = 1;
  $export['mass_contact_bcc_d'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_category_display';
  $strongarm->value = 'select';
  $export['mass_contact_category_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_category_override';
  $strongarm->value = 0;
  $export['mass_contact_category_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_character_set';
  $strongarm->value = '';
  $export['mass_contact_character_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_default_sender_email';
  $strongarm->value = '';
  $export['mass_contact_default_sender_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_default_sender_name';
  $strongarm->value = '';
  $export['mass_contact_default_sender_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_include_from_name';
  $strongarm->value = 0;
  $export['mass_contact_include_from_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_include_to_name';
  $strongarm->value = 0;
  $export['mass_contact_include_to_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_message_prefix';
  $strongarm->value = '';
  $export['mass_contact_message_prefix'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mass_contact_message_suffix';
  $strongarm->value = '';
  $export['mass_contact_message_suffix'] = $strongarm;

  return $export;
}
