<?php
/**
 * @file
 * Custom Code for the Drupal Camp Users feature.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function dccr_ftr_users_form_user_register_form_alter(&$form, &$form_state) {
  $form['#validate'][] = 'dccr_ftr_users_form_user_register_form_validate';
}

/**
 * Implements hook_form_alter().
 */
function dccr_ftr_users_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id === 'dccr_payment_submission_form_entityform_edit_form') {
    global $user;
    $form['field_paid_users'][LANGUAGE_NONE][0]['target_id']['#default_value'] = "$user->name ($user->uid)";
    $form['field_paid_users']['#states'] = array(
      'invisible' => array(
        ':input[name="field_paying_others[und]"]' => array('checked' => FALSE),
      ),
    );
  }
}

/**
 * Implements hook_flag_flag().
 */
function dccr_ftr_users_flag_flag($flag, $entity_id, $account, $flagging) {
  dccr_ftr_users_track_user($flag, $entity_id);
}

/**
 * Implements hook_flag_unflag().
 */
function dccr_ftr_users_flag_unflag($flag, $entity_id, $account, $flagging) {
  dccr_ftr_users_track_user($flag, $entity_id);
}

/**
 * Invoke search_api_track_item_change for recently flagged user.
 */
function dccr_ftr_users_track_user($flag, $entity_id) {
  if ($flag->name === 'dccr_registration_complete') {
    search_api_track_item_change('user', array($entity_id));
  }
}

/**
 * Extra validate for user_register_form.
 */
function dccr_ftr_users_form_user_register_form_validate($form, &$form_state) {
  $name = $form_state['values']['name'];
  $pattern = '/^[a-z0-9_-]{3,16}$/';
  if (!preg_match($pattern, $name)) {
    form_set_error('name][', t('Username can contain only lowercase letters, numbers, "-" and "_"'));
  }
}

/**
 * Implements hook_module_implements_alter().
 */
function dccr_ftr_users_module_implements_alter(&$implementations, $hook) {
  if ($hook == 'user_view' && isset($implementations['dccr_ftr_users'])) {
    $dccr_ftr_users = $implementations['dccr_ftr_users'];
    unset($implementations['dccr_ftr_users']);
    $implementations['dccr_ftr_users'] = $dccr_ftr_users;
  }
}

/**
 * Implements hook_user_view().
 */
function dccr_ftr_users_user_view($account, $view_mode, $language) {
  global $user;
  if ($view_mode == 'teaser' && isset($account->content['summary'])) {
    unset($account->content['summary']);
  }
  if ($user->uid == $account->uid && $view_mode == 'full' && !dccr_ftr_users_form_user_has_completed_registration($account)) {
    $markup = '<div class="payment-upload">';
    $markup .= l(t('Upload payment receipt'), 'payment-submit');
    $markup .= '</div> ';
    $account->content['registration_reminder'] = array(
      '#type' => 'markup',
      '#markup' => $markup,
      '#weight' => 50,
    );
  }
}

/**
 * Determines whether a user hass completed registration or not.
 */
function dccr_ftr_users_form_user_has_completed_registration($account) {
  $flag = flag_get_flag('dccr_registration_complete');
  if ($flag) {
    return $flag->is_flagged($account->uid);
  }
}
