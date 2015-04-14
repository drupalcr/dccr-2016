<?php
/**
 * @file
 * dccr_ftr_sessions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dccr_ftr_sessions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create dccr_session content'.
  $permissions['create dccr_session content'] = array(
    'name' => 'create dccr_session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_location'.
  $permissions['create field_location'] = array(
    'name' => 'create field_location',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_session_approved'.
  $permissions['create field_session_approved'] = array(
    'name' => 'create field_session_approved',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_time'.
  $permissions['create field_time'] = array(
    'name' => 'create field_time',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any dccr_session content'.
  $permissions['delete any dccr_session content'] = array(
    'name' => 'delete any dccr_session content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dccr_session content'.
  $permissions['delete own dccr_session content'] = array(
    'name' => 'delete own dccr_session content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dccr_session content'.
  $permissions['edit any dccr_session content'] = array(
    'name' => 'edit any dccr_session content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_location'.
  $permissions['edit field_location'] = array(
    'name' => 'edit field_location',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_session_approved'.
  $permissions['edit field_session_approved'] = array(
    'name' => 'edit field_session_approved',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_time'.
  $permissions['edit field_time'] = array(
    'name' => 'edit field_time',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own dccr_session content'.
  $permissions['edit own dccr_session content'] = array(
    'name' => 'edit own dccr_session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_location'.
  $permissions['edit own field_location'] = array(
    'name' => 'edit own field_location',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_session_approved'.
  $permissions['edit own field_session_approved'] = array(
    'name' => 'edit own field_session_approved',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_time'.
  $permissions['edit own field_time'] = array(
    'name' => 'edit own field_time',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'flag add_to_favorites'.
  $permissions['flag add_to_favorites'] = array(
    'name' => 'flag add_to_favorites',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag add_to_favorites'.
  $permissions['unflag add_to_favorites'] = array(
    'name' => 'unflag add_to_favorites',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'view field_location'.
  $permissions['view field_location'] = array(
    'name' => 'view field_location',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_session_approved'.
  $permissions['view field_session_approved'] = array(
    'name' => 'view field_session_approved',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_time'.
  $permissions['view field_time'] = array(
    'name' => 'view field_time',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_location'.
  $permissions['view own field_location'] = array(
    'name' => 'view own field_location',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_session_approved'.
  $permissions['view own field_session_approved'] = array(
    'name' => 'view own field_session_approved',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_time'.
  $permissions['view own field_time'] = array(
    'name' => 'view own field_time',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
