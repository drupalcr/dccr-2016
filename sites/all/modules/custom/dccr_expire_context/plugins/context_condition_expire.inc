<?php

/**
 * @file
 * context_condition_expire.inc
 */

/**
 * Class for creating and handling an expire condition in contexts.
 */
class context_condition_expire extends context_condition_publish {

  /**
   * {@inheritdoc}
   */
  function execute($value = NULL) {
    if (empty($value)) {
      $value = time();
    }

    foreach (context_enabled_contexts() as $context) {
      if ($date_time = $this->fetch_from_context($context, 'values')) {
        if ($date_time[0] > $value) {
          $this->condition_met($context, $value);
        }
      }
    }
  }
}
