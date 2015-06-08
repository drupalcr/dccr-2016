<?php
/**
 * @file
 * dccr_ftr_propossed_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dccr_ftr_propossed_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'proposed_sessions_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_nodes_index';
  $view->human_name = 'Proposed sessions list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Proposed sessions list';
  $handler->display->display_options['css_class'] = 'proposed-sessions-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_track' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'manati_texto_formato';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_speakers_name' => 'field_speakers_name',
    'field_track' => 'field_track',
    'field_level' => 'field_level',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speakers_name' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_track' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_level' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Speakers: Name (indexed) */
  $handler->display->display_options['fields']['field_speakers_name']['id'] = 'field_speakers_name';
  $handler->display->display_options['fields']['field_speakers_name']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['fields']['field_speakers_name']['field'] = 'field_speakers_name';
  $handler->display->display_options['fields']['field_speakers_name']['label'] = 'Speaker (s)';
  $handler->display->display_options['fields']['field_speakers_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers_name']['link_to_entity'] = 1;
  /* Field: Indexed Node: Track */
  $handler->display->display_options['fields']['field_track']['id'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['fields']['field_track']['field'] = 'field_track';
  $handler->display->display_options['fields']['field_track']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_track']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_track']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_track']['bypass_access'] = 0;
  /* Field: Indexed Node: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dccr_session' => 'dccr_session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Node: Track */
  $handler->display->display_options['filters']['field_track']['id'] = 'field_track';
  $handler->display->display_options['filters']['field_track']['table'] = 'search_api_index_nodes_index';
  $handler->display->display_options['filters']['field_track']['field'] = 'field_track';
  $handler->display->display_options['filters']['field_track']['value'] = array();
  $handler->display->display_options['filters']['field_track']['group'] = 1;
  $handler->display->display_options['filters']['field_track']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_track']['expose']['operator_id'] = 'field_track_op';
  $handler->display->display_options['filters']['field_track']['expose']['operator'] = 'field_track_op';
  $handler->display->display_options['filters']['field_track']['expose']['identifier'] = 'field_track';
  $handler->display->display_options['filters']['field_track']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_track']['expose']['reduce'] = 0;
  $translatables['proposed_sessions_list'] = array(
    t('Master'),
    t('Proposed sessions list'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Block'),
    t('All'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Session'),
    t('Speaker (s)'),
    t('Track'),
    t('Level'),
  );
  $export['proposed_sessions_list'] = $view;

  return $export;
}
