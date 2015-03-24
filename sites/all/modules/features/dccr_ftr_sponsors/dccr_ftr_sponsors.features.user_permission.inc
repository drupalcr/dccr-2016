<?php
/**
 * @file
 * dccr_ftr_sponsors.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dccr_ftr_sponsors_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create dccr_sponsor content'.
  $permissions['create dccr_sponsor content'] = array(
    'name' => 'create dccr_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dccr_sponsor content'.
  $permissions['delete any dccr_sponsor content'] = array(
    'name' => 'delete any dccr_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dccr_sponsor content'.
  $permissions['delete own dccr_sponsor content'] = array(
    'name' => 'delete own dccr_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dccr_sponsor content'.
  $permissions['edit any dccr_sponsor content'] = array(
    'name' => 'edit any dccr_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dccr_sponsor content'.
  $permissions['edit own dccr_sponsor content'] = array(
    'name' => 'edit own dccr_sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
