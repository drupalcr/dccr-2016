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

  // Exported role: active_member.
  $roles['active_member'] = array(
    'name' => 'active_member',
    'weight' => 4,
  );

  // Exported role: drupal_administrator.
  $roles['drupal_administrator'] = array(
    'name' => 'drupal_administrator',
    'weight' => 3,
  );

  // Exported role: entityforms_manager.
  $roles['entityforms_manager'] = array(
    'name' => 'entityforms_manager',
    'weight' => 5,
  );

  return $roles;
}
