<?php
/**
 * @file
 * dccr_ftr_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dccr_ftr_users_user_default_roles() {
  $roles = array();

  // Exported role: drupal_administrator.
  $roles['drupal_administrator'] = array(
    'name' => 'drupal_administrator',
    'weight' => 3,
  );

  return $roles;
}
