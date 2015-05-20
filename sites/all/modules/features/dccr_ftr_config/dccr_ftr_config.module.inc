<?php

/**
 * Main code file for dccr_ftr_config.
 */

/**
 * Implements hook_entity_info_alter().
 */
function dccr_ftr_config_entity_info_alter(&$entity_info) {
  $entity_info['fieldable_panels_pane']['bundles']['dccr_embed_fpp'] = array(
    'label' => t('Embed'),
    'pane category' => t('DCCR'),
    'pane top level' => FALSE,
    'pane icon' => NULL,
    'admin' => array(
      'path' => 'admin/structure/fieldable-panels-panes/manage/%fieldable_panels_panes_type',
      'bundle argument' => 4,
      'real path' => 'admin/structure/fieldable-panels-panes/manage/dccr-embed-fpp',
      'access arguments' => array('administer fieldable panels panes'),
    ),
  );

  $entity_info['fieldable_panels_pane']['bundles']['dccr_images_fpp'] = array(
    'label' => t('Images'),
    'pane category' => t('DCCR'),
    'pane top level' => FALSE,
    'pane icon' => NULL,
    'admin' => array(
      'path' => 'admin/structure/fieldable-panels-panes/manage/%fieldable_panels_panes_type',
      'bundle argument' => 4,
      'real path' => 'admin/structure/fieldable-panels-panes/manage/dccr-images-fpp',
      'access arguments' => array('administer fieldable panels panes'),
    ),
  );

  $entity_info['fieldable_panels_pane']['bundles']['dccr_simple_fpp'] = array(
    'label' => t('Simple'),
    'pane category' => t('DCCR'),
    'pane top level' => FALSE,
    'pane icon' => NULL,
    'admin' => array(
      'path' => 'admin/structure/fieldable-panels-panes/manage/%fieldable_panels_panes_type',
      'bundle argument' => 4,
      'real path' => 'admin/structure/fieldable-panels-panes/manage/dccr-simple-fpp',
      'access arguments' => array('administer fieldable panels panes'),
    ),
  );
}

/**
 * Implements hook_date_formats().
 */
function dccr_ftr_config_date_formats() {
  return array(
    // Creates a new format for a Hour-Minute.
    array(
      'type' => 'hour_minute',
      'format' => 'h:i a',
      'locales' => array(),
    ),
  );
}

/**
 * Implements hook_date_format_types().
 */
function dccr_ftr_config_date_format_types() {
  return array(
    'hour_minute' => t('Hour Minute'),
  );
}
