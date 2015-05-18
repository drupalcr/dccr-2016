<?php
/**
 * @file
 * dccr_ftr_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dccr_ftr_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-left-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-left-menu',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'menu-menu-right-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-right-menu',
          'region' => 'featured',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
