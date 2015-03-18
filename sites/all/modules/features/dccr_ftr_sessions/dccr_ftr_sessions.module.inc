<?php
/**
 * @file
 * Code for the Drupal Camp Sessions feature.
 */

/**
 * Implements hook_form_alter().
 */
function dccr_ftr_sessions_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id === 'dccr_session_node_form') {
    // Set actual user as speaker by default.
    global $user;
    $form['field_speakers'][LANGUAGE_NONE][0]['target_id']['#default_value'] = "$user->name ($user->uid)";
  }
}
