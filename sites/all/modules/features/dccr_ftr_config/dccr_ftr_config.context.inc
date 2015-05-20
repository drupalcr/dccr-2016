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
        'views-sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_2',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'dccr_blocks-dccr_login_link' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_login_link',
          'region' => 'featured',
          'weight' => '-9',
        ),
        'menu-menu-left-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-left-menu',
          'region' => 'featured',
          'weight' => '-8',
        ),
        'dccr_blocks-dccr_main_logo' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_main_logo',
          'region' => 'featured',
          'weight' => '-7',
        ),
        'menu-menu-right-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-right-menu',
          'region' => 'featured',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
