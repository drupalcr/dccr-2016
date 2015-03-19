<?php
/**
 * @file
 * dccr_ftr_workshop.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dccr_ftr_workshop_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag workshop_registration'.
  $permissions['flag workshop_registration'] = array(
    'name' => 'flag workshop_registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag workshop_registration'.
  $permissions['unflag workshop_registration'] = array(
    'name' => 'unflag workshop_registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
