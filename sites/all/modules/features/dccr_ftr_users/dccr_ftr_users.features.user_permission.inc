<?php
/**
 * @file
 * dccr_ftr_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dccr_ftr_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag dccr_registration_complete'.
  $permissions['flag dccr_registration_complete'] = array(
    'name' => 'flag dccr_registration_complete',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag dccr_registration_complete'.
  $permissions['unflag dccr_registration_complete'] = array(
    'name' => 'unflag dccr_registration_complete',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
