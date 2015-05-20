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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dccr_blocks-dccr_register_image_link_block' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_register_image_link_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'dccr_blocks-dccr_social_block_sidebar' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_social_block_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-tracks-block' => array(
          'module' => 'views',
          'delta' => 'tracks-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'dccr_blocks-dccr_faq_block' => array(
          'module' => 'dccr_blocks',
          'delta' => 'dccr_faq_block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Workshops List');
  $export['workshops_page'] = $context;

  return $export;
}
