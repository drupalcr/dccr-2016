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
        'dccr_blocks-dccr_login_link' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_login_link',
          'region' => 'utility_bar',
          'weight' => '-10',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'utility_bar_menus';
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
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'utility_bar',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['utility_bar_menus'] = $context;

  return $export;
}
