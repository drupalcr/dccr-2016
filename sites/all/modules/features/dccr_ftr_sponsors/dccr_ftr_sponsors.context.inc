<?php
/**
 * @file
 * dccr_ftr_sponsors.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dccr_ftr_sponsors_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsors_landing_page';
  $context->description = 'Sponsor Landing Page';
  $context->tag = 'landing_pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'sponsors:page' => 'sponsors:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dccr_ftr_sponsors-sponsors_info' => array(
          'module' => 'dccr_ftr_sponsors',
          'delta' => 'sponsors_info',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sponsor Landing Page');
  t('landing_pages');
  $export['sponsors_landing_page'] = $context;

  return $export;
}
