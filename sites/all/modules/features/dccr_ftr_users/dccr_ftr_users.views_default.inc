<?php
/**
 * @file
 * dccr_ftr_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dccr_ftr_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dccr_attendees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_dccr_users_index';
  $view->human_name = 'Attendees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendees';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all community';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Sort criterion: Indexed User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Indexed User: Whether the entity is flagged with flag dccr_registration_complete */
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['id'] = 'flag_dccr_registration_complete';
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['field'] = 'flag_dccr_registration_complete';
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['value'] = '1';
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['group'] = 1;
  /* Filter criterion: Indexed User: Full Name */
  $handler->display->display_options['filters']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['filters']['field_full_name']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['filters']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['filters']['field_full_name']['group'] = 1;
  $handler->display->display_options['filters']['field_full_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_full_name']['expose']['operator_id'] = 'field_full_name_op';
  $handler->display->display_options['filters']['field_full_name']['expose']['label'] = 'Full Name';
  $handler->display->display_options['filters']['field_full_name']['expose']['operator'] = 'field_full_name_op';
  $handler->display->display_options['filters']['field_full_name']['expose']['identifier'] = 'field_full_name';
  $handler->display->display_options['filters']['field_full_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Indexed User: Company */
  $handler->display->display_options['filters']['field_company']['id'] = 'field_company';
  $handler->display->display_options['filters']['field_company']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['filters']['field_company']['field'] = 'field_company';
  $handler->display->display_options['filters']['field_company']['group'] = 1;
  $handler->display->display_options['filters']['field_company']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company']['expose']['operator_id'] = 'field_company_op';
  $handler->display->display_options['filters']['field_company']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company']['expose']['operator'] = 'field_company_op';
  $handler->display->display_options['filters']['field_company']['expose']['identifier'] = 'field_company';
  $handler->display->display_options['filters']['field_company']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Indexed User: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all community';
  $handler->display->display_options['path'] = 'attendees';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'community');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Community';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'attendees';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed User: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed User: Whether the entity is flagged with flag dccr_registration_complete */
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['id'] = 'flag_dccr_registration_complete';
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['field'] = 'flag_dccr_registration_complete';
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['value'] = '1';
  $handler->display->display_options['filters']['flag_dccr_registration_complete']['group'] = 1;
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_dccr_users_index';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    5 => '5',
  );
  $translatables['dccr_attendees'] = array(
    t('Master'),
    t('Attendees'),
    t('View all community'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User ID'),
    t('.'),
    t(','),
    t('Full Name'),
    t('Company'),
    t('Username'),
    t('Page'),
    t('Block'),
    t('Community'),
    t('more'),
  );
  $export['dccr_attendees'] = $view;

  return $export;
}
