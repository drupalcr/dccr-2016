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
 * Return registration complete flag link.
 */
function dccr_ftr_users_get_registration_complete_flag_link($uid) {
  $wrapper = entity_metadata_wrapper('user', $uid);
  $markup = '<div class ="user-information"><span>' . t('User: %user', array('%user' => $wrapper->label())) . '</span></div>';
  $flag_name = 'dccr_registration_complete';
  $markup .= flag_create_link($flag_name, $uid);
  return $markup;
}
