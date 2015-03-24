<?php
/**
 * @file
 * dccr_ftr_keynote.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dccr_ftr_keynote_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create keynote content'.
  $permissions['create keynote content'] = array(
    'name' => 'create keynote content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any keynote content'.
  $permissions['delete any keynote content'] = array(
    'name' => 'delete any keynote content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own keynote content'.
  $permissions['delete own keynote content'] = array(
    'name' => 'delete own keynote content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any keynote content'.
  $permissions['edit any keynote content'] = array(
    'name' => 'edit any keynote content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own keynote content'.
  $permissions['edit own keynote content'] = array(
    'name' => 'edit own keynote content',
    'roles' => array(
      'administrator' => 'administrator',
      'drupal_administrator' => 'drupal_administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
