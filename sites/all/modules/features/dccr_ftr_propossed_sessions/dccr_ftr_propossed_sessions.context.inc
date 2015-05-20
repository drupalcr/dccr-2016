<?php
/**
 * @file
 * dccr_ftr_propossed_sessions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dccr_ftr_propossed_sessions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'proposed_sessions';
  $context->description = 'Proposed sessions';
  $context->tag = '';
  $context->conditions = array(
    'expire' => array(
      'values' => array(
        0 => 1437285600,
      ),
    ),
    'path' => array(
      'values' => array(
        'schedule' => 'schedule',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dccr_blocks-proposed_sessions_header' => array(
          'module' => 'dccr_blocks',
          'delta' => 'proposed_sessions_header',
          'region' => 'content',
          'weight' => '-10',
        ),
        'dccr_blocks-propose_sessions_link' => array(
          'module' => 'dccr_blocks',
          'delta' => 'propose_sessions_link',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-proposed_sessions_list-block' => array(
          'module' => 'views',
          'delta' => 'proposed_sessions_list-block',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Proposed sessions');
  $export['proposed_sessions'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'schedule';
  $context->description = 'Schedule';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'schedule' => 'schedule',
      ),
    ),
    'publish' => array(
      'values' => array(
        0 => 1437285600,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dccr_blocks-dccr_final_schedule' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_final_schedule',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Schedule');
  $export['schedule'] = $context;

  return $export;
}
