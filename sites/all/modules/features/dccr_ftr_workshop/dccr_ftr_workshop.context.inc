<?php
/**
 * @file
 * dccr_ftr_workshop.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dccr_ftr_workshop_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workshops_page';
  $context->description = 'Workshops List';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'workshops:page' => 'workshops:page',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Workshops List');
  $export['workshops_page'] = $context;

  return $export;
}
