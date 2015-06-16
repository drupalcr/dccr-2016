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
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'utility_bar',
          'weight' => '-10',
        ),
        'dccr_blocks-dccr_login_link' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_login_link',
          'region' => 'utility_bar',
          'weight' => '-9',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'utility_bar',
          'weight' => '-8',
        ),
        'menu-menu-left-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-left-menu',
          'region' => 'header',
          'weight' => '-9',
        ),
        'menu-menu-right-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-right-menu',
          'region' => 'header',
          'weight' => '-8',
        ),
        'views-sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_2',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'dccr_blocks-dccr_footer' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
