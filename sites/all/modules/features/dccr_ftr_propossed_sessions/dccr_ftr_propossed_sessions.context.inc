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

  return $export;
}
