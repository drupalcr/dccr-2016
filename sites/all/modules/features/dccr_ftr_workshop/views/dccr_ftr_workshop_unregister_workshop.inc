<?php

/**
 * @file
 * dccr_ftr_workshop_unregister_workshop class.
 */

class dccr_ftr_workshop_unregister_workshop extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  function query() {
  }

  /**
   * {@inheritdoc}
   */
  function render($values) {
    $user = $values->_field_data['uid']['entity'];
    $entity_id = check_plain($this->view->args[0]);
    $form = drupal_get_form('dccr_ftr_workshop_unregister_form', $entity_id, $user);
    return $form;
  }
}
