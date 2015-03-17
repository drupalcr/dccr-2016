<?php
/**
 * @file
 * Custom Code for the Drupal Camp Users feature.
 */

/**
 * Implements hook_field_extra_fields().
 */
function dccr_ftr_users_field_extra_fields() {
  $extra['entityform']['dccr_payment_submission_form']['display']['dccr_approve_user'] = array(
    'label' => t('Mark User as Approved'),
    'description' => t('Flag submitter user as approved'),
    'weight' => 1,
  );
  return $extra;
}

/**
 * Implements hook_entityform_view().
 */
function dccr_ftr_users_entityform_view($entityform, $view_mode, $langcode) {
  if ($entityform->type == 'dccr_payment_submission_form') {
    $markup = dccr_ftr_users_get_registration_complete_flag_link($entityform->uid);
    $entityform->content['dccr_approve_user'] = array(
      '#type' => 'item',
      '#title' => '',
      '#markup' => $markup,
    );
  }
}

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
    $form['field_paid_users']['#states'] = array(
      'invisible' => array(
        ':input[name="field_paying_others[und]"]' => array('checked' => FALSE),
      ),
    );
  }
}

/**
 * Return registration complete flag link.
 */
function dccr_ftr_users_get_registration_complete_flag_link($uid) {
  $wrapper = entity_metadata_wrapper('user', $uid);
  $markup = '<div class ="user-information"><span>' . t('User: %user', array('%user' => $wrapper->label())) . '</span></div>';
  $flag_name = 'dccr_registration_complete';
  $markup .= flag_create_link($flag_name, $uid);
  return $markup;
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
