<?php

/**
 * @file
 * Views include file for dccr_ftr_workshop.
 */

/**
 * Implements hook_views_data().
 */
function dccr_ftr_workshop_views_data() {
  $data = array();

  $data['users']['dccr_ftr_workshop_unregister_workshop'] = array(
    'title' => t('Unregister user from workshop'),
    'help' => t('Add this for placing an unregister link'),
    'field' => array(
      'handler' => 'dccr_ftr_workshop_unregister_workshop',
    ),
  );

  return $data;
}
