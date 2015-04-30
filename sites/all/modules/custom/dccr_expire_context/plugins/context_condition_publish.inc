<?php

/**
 * @file
 * context_condition_publish.inc
 */

/**
 * Class for creating and handling a publish condition in contexts.
 */
class context_condition_publish extends context_condition {

  /**
   * Condition_values.
   */
  function condition_values() {
    return array();
  }

  function condition_form($context) {
    $form = parent::condition_form($context);

    if (!empty($form['#default_value'])) {
      $form['#default_value'] = array(
        'year' => date('Y', $form['#default_value'][0]),
        'month' => date('n', $form['#default_value'][0]),
        'day' => date('j', $form['#default_value'][0]),
      );
    }
    else {
      $form['#default_value'] = array(
        'year' => date('Y', time()),
        'month' => date('n', time()),
        'day' => date('j', time()),
      );
    }

    unset($form['#options']);
    $form['#type'] = 'date';
    return $form;
  }

  function condition_form_submit($values) {
    return array(
      mktime(
        0,
        0,
        0,
        $values['month'],
        $values['day'],
        $values['year']
      ),
    );
  }

  function execute($value = NULL) {
    if (empty($value)) {
      $value = time();
    }

    foreach (context_enabled_contexts() as $context) {
      if ($date_time = $this->fetch_from_context($context, 'values')) {
        if ($date_time[0] <= $value) {
          $this->condition_met($context, $value);
        }
      }
    }
  }
}
