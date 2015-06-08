<?php
/**
 * @file
 * dccr_ftr_sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dccr_ftr_sponsors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sponsorship_level_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Sponsorship Level (field_sponsorship_level_ref) */
  $handler->display->display_options['relationships']['field_sponsorship_level_ref_tid']['id'] = 'field_sponsorship_level_ref_tid';
  $handler->display->display_options['relationships']['field_sponsorship_level_ref_tid']['table'] = 'field_data_field_sponsorship_level_ref';
  $handler->display->display_options['relationships']['field_sponsorship_level_ref_tid']['field'] = 'field_sponsorship_level_ref_tid';
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_sponsorship_level_ref']['id'] = 'field_sponsorship_level_ref';
  $handler->display->display_options['fields']['field_sponsorship_level_ref']['table'] = 'field_data_field_sponsorship_level_ref';
  $handler->display->display_options['fields']['field_sponsorship_level_ref']['field'] = 'field_sponsorship_level_ref';
  $handler->display->display_options['fields']['field_sponsorship_level_ref']['label'] = '';
  $handler->display->display_options['fields']['field_sponsorship_level_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsorship_level_ref']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_sponsorship_level_ref_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dccr_sponsor' => 'dccr_sponsor',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sponsors-view';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Become a Sponsor';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'how-to-sponsor';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '11';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $translatables['sponsors'] = array(
    t('Master'),
    t('Sponsors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_sponsorship_level_ref'),
    t('Page'),
    t('Block'),
    t('Be a Sponsor'),
  );
  $export['sponsors'] = $view;

  return $export;
}
