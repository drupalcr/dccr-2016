<?php
/**
 * @file
 * dccr_ftr_sessions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function dccr_ftr_sessions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_location.field_permissions"] = array(
    'type' => 2,
  );

 return $overrides;
}
