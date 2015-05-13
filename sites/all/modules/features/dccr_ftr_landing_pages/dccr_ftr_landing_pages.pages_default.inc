<?php
/**
 * @file
 * dccr_ftr_landing_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dccr_ftr_landing_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'conference';
  $page->task = 'page';
  $page->admin_title = 'Conference';
  $page->admin_description = '';
  $page->path = 'conference';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_conference__panel_context_e5167f2e-204e-4627-8e95-e78127fc512a';
  $handler->task = 'page';
  $handler->subtask = 'conference';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Spanish',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Conferencia';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e4153ecc-54ca-4135-b1ef-21e67281a709';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:66867e50-a290-4be1-ad97-eda17f384d67';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4153ecc-54ca-4135-b1ef-21e67281a709';
    $display->content['new-e4153ecc-54ca-4135-b1ef-21e67281a709'] = $pane;
    $display->panels['left_above'][0] = 'new-e4153ecc-54ca-4135-b1ef-21e67281a709';
    $pane = new stdClass();
    $pane->pid = 'new-47db481a-fc60-4597-94ff-aebd87cdd3b8';
    $pane->panel = 'left_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_important_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '47db481a-fc60-4597-94ff-aebd87cdd3b8';
    $display->content['new-47db481a-fc60-4597-94ff-aebd87cdd3b8'] = $pane;
    $display->panels['left_above'][1] = 'new-47db481a-fc60-4597-94ff-aebd87cdd3b8';
    $pane = new stdClass();
    $pane->pid = 'new-6b1703c6-d675-42d7-96a6-72cef56a74c7';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:2b1abccd-79a9-4189-b891-e23de4b04dfd';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6b1703c6-d675-42d7-96a6-72cef56a74c7';
    $display->content['new-6b1703c6-d675-42d7-96a6-72cef56a74c7'] = $pane;
    $display->panels['left_above'][2] = 'new-6b1703c6-d675-42d7-96a6-72cef56a74c7';
    $pane = new stdClass();
    $pane->pid = 'new-62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $display->content['new-62bd2741-0a8a-400b-a878-fa9afa81d64c'] = $pane;
    $display->panels['right_above'][0] = 'new-62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane = new stdClass();
    $pane->pid = 'new-96b23f53-7470-46bd-af2d-ce296f99f212';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '96b23f53-7470-46bd-af2d-ce296f99f212';
    $display->content['new-96b23f53-7470-46bd-af2d-ce296f99f212'] = $pane;
    $display->panels['right_above'][4] = 'new-96b23f53-7470-46bd-af2d-ce296f99f212';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_conference__panel_context_6ef25cdb-7137-4461-b435-edfaee3bebdd';
  $handler->task = 'page';
  $handler->subtask = 'conference';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'English',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Conference';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa85703c-91ab-4a0b-9ca9-e6d7bafa9d7a';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:c943ba76-dfe9-471d-82a4-47526ec727fb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa85703c-91ab-4a0b-9ca9-e6d7bafa9d7a';
    $display->content['new-fa85703c-91ab-4a0b-9ca9-e6d7bafa9d7a'] = $pane;
    $display->panels['left_above'][0] = 'new-fa85703c-91ab-4a0b-9ca9-e6d7bafa9d7a';
    $pane = new stdClass();
    $pane->pid = 'new-079f225a-d57b-421d-840a-1966ef03d0fb';
    $pane->panel = 'left_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_important_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '079f225a-d57b-421d-840a-1966ef03d0fb';
    $display->content['new-079f225a-d57b-421d-840a-1966ef03d0fb'] = $pane;
    $display->panels['left_above'][1] = 'new-079f225a-d57b-421d-840a-1966ef03d0fb';
    $pane = new stdClass();
    $pane->pid = 'new-54a14ea1-3b2b-4554-9b6f-c1240e742051';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:237c7a3a-823e-4b6b-a7a2-02ee26d1d6a9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '54a14ea1-3b2b-4554-9b6f-c1240e742051';
    $display->content['new-54a14ea1-3b2b-4554-9b6f-c1240e742051'] = $pane;
    $display->panels['left_above'][2] = 'new-54a14ea1-3b2b-4554-9b6f-c1240e742051';
    $pane = new stdClass();
    $pane->pid = 'new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $display->content['new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048'] = $pane;
    $display->panels['right_above'][0] = 'new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['conference'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'conference_center';
  $page->task = 'page';
  $page->admin_title = 'Venue';
  $page->admin_description = '';
  $page->path = 'venue';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_conference_center__panel_context_c6dade1c-cb7f-4f34-96fe-8c6853e5290d';
  $handler->task = 'page';
  $handler->subtask = 'conference_center';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Spanish',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sede';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e2a7a1b-20f5-4254-a16a-32f406600590';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:01ba1b0c-78df-43dd-bc34-6c15fe25eca8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e2a7a1b-20f5-4254-a16a-32f406600590';
    $display->content['new-7e2a7a1b-20f5-4254-a16a-32f406600590'] = $pane;
    $display->panels['left_above'][0] = 'new-7e2a7a1b-20f5-4254-a16a-32f406600590';
    $pane = new stdClass();
    $pane->pid = 'new-5a9f3545-d28d-4c05-9abd-4b0588909f5f';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:0e422d9b-ba2c-473d-898f-ce1fa581920b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5a9f3545-d28d-4c05-9abd-4b0588909f5f';
    $display->content['new-5a9f3545-d28d-4c05-9abd-4b0588909f5f'] = $pane;
    $display->panels['left_above'][1] = 'new-5a9f3545-d28d-4c05-9abd-4b0588909f5f';
    $pane = new stdClass();
    $pane->pid = 'new-0e15fd2c-1425-4480-a930-ba9ce6bb1df2';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:fc34488b-f7f0-43c4-b9fa-c7490275c047';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0e15fd2c-1425-4480-a930-ba9ce6bb1df2';
    $display->content['new-0e15fd2c-1425-4480-a930-ba9ce6bb1df2'] = $pane;
    $display->panels['left_above'][2] = 'new-0e15fd2c-1425-4480-a930-ba9ce6bb1df2';
    $pane = new stdClass();
    $pane->pid = 'new-c64e36bb-7c47-4d4c-87b0-f3df24f9374b';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:e6685593-84fd-42dc-bf99-3648a4ae35ea';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c64e36bb-7c47-4d4c-87b0-f3df24f9374b';
    $display->content['new-c64e36bb-7c47-4d4c-87b0-f3df24f9374b'] = $pane;
    $display->panels['left_above'][3] = 'new-c64e36bb-7c47-4d4c-87b0-f3df24f9374b';
    $pane = new stdClass();
    $pane->pid = 'new-62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $display->content['new-62bd2741-0a8a-400b-a878-fa9afa81d64c'] = $pane;
    $display->panels['right_above'][0] = 'new-62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane = new stdClass();
    $pane->pid = 'new-96b23f53-7470-46bd-af2d-ce296f99f212';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '96b23f53-7470-46bd-af2d-ce296f99f212';
    $display->content['new-96b23f53-7470-46bd-af2d-ce296f99f212'] = $pane;
    $display->panels['right_above'][4] = 'new-96b23f53-7470-46bd-af2d-ce296f99f212';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_conference_center__panel_context_1e2596bb-4823-415f-aad1-1abb4faaf2d1';
  $handler->task = 'page';
  $handler->subtask = 'conference_center';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'English',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Venue';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-75d9b08a-5a66-4dbe-99f9-77a3a7894019';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:d5636df1-fbbb-4a6e-811a-0c2548a337ae';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '75d9b08a-5a66-4dbe-99f9-77a3a7894019';
    $display->content['new-75d9b08a-5a66-4dbe-99f9-77a3a7894019'] = $pane;
    $display->panels['left_above'][0] = 'new-75d9b08a-5a66-4dbe-99f9-77a3a7894019';
    $pane = new stdClass();
    $pane->pid = 'new-53afe065-5c20-4f17-855d-233a0f7121d8';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:81eed993-9b36-41a8-8377-dacaf8a2ace9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53afe065-5c20-4f17-855d-233a0f7121d8';
    $display->content['new-53afe065-5c20-4f17-855d-233a0f7121d8'] = $pane;
    $display->panels['left_above'][1] = 'new-53afe065-5c20-4f17-855d-233a0f7121d8';
    $pane = new stdClass();
    $pane->pid = 'new-d71f3f1e-6448-4947-9ec3-7d863e548b5d';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:2272932d-fd61-4fc2-b546-90f8edaa23b6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd71f3f1e-6448-4947-9ec3-7d863e548b5d';
    $display->content['new-d71f3f1e-6448-4947-9ec3-7d863e548b5d'] = $pane;
    $display->panels['left_above'][2] = 'new-d71f3f1e-6448-4947-9ec3-7d863e548b5d';
    $pane = new stdClass();
    $pane->pid = 'new-c9a5e331-685d-4977-80e5-5801a3f5ee84';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:e6685593-84fd-42dc-bf99-3648a4ae35ea';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c9a5e331-685d-4977-80e5-5801a3f5ee84';
    $display->content['new-c9a5e331-685d-4977-80e5-5801a3f5ee84'] = $pane;
    $display->panels['left_above'][3] = 'new-c9a5e331-685d-4977-80e5-5801a3f5ee84';
    $pane = new stdClass();
    $pane->pid = 'new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $display->content['new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048'] = $pane;
    $display->panels['right_above'][0] = 'new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['conference_center'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_us';
  $page->task = 'page';
  $page->admin_title = 'Contact Us';
  $page->admin_description = '';
  $page->path = 'contact-us';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_us__panel_context_a8a2ad31-ed64-4a7a-b0bf-859f616144cb';
  $handler->task = 'page';
  $handler->subtask = 'contact_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Spanish',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contáctenos';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $display->content['new-62bd2741-0a8a-400b-a878-fa9afa81d64c'] = $pane;
    $display->panels['right_above'][0] = 'new-62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane = new stdClass();
    $pane->pid = 'new-96b23f53-7470-46bd-af2d-ce296f99f212';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '96b23f53-7470-46bd-af2d-ce296f99f212';
    $display->content['new-96b23f53-7470-46bd-af2d-ce296f99f212'] = $pane;
    $display->panels['right_above'][4] = 'new-96b23f53-7470-46bd-af2d-ce296f99f212';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_us__panel_context_ee8f6378-8d95-422b-ba94-64c1a82b7c2e';
  $handler->task = 'page';
  $handler->subtask = 'contact_us';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'English',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact Us';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $display->content['new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048'] = $pane;
    $display->panels['right_above'][0] = 'new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'how_to_sponsor';
  $page->task = 'page';
  $page->admin_title = 'How to sponsor';
  $page->admin_description = '';
  $page->path = 'how-to-sponsor';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_how_to_sponsor__panel_context_77804f55-3613-4f17-9adc-b0aba099d0cb';
  $handler->task = 'page';
  $handler->subtask = 'how_to_sponsor';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Spanish',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Cómo Patrocinar?';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $display->content['new-62bd2741-0a8a-400b-a878-fa9afa81d64c'] = $pane;
    $display->panels['right_above'][0] = 'new-62bd2741-0a8a-400b-a878-fa9afa81d64c';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane = new stdClass();
    $pane->pid = 'new-96b23f53-7470-46bd-af2d-ce296f99f212';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '96b23f53-7470-46bd-af2d-ce296f99f212';
    $display->content['new-96b23f53-7470-46bd-af2d-ce296f99f212'] = $pane;
    $display->panels['right_above'][4] = 'new-96b23f53-7470-46bd-af2d-ce296f99f212';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_how_to_sponsor__panel_context_cb036e50-d422-4536-b147-708abdadd86b';
  $handler->task = 'page';
  $handler->subtask = 'how_to_sponsor';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'English',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'How to Sponsor?';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_register_image_link_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $display->content['new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048'] = $pane;
    $display->panels['right_above'][0] = 'new-d3671fbd-ef1d-4282-b7f2-1c34fa6c7048';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['how_to_sponsor'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'register';
  $page->task = 'page';
  $page->admin_title = 'Register';
  $page->admin_description = '';
  $page->path = 'register';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_register__panel_context_429bf82a-6a3c-42b8-a2e3-1d8e5cbd7890';
  $handler->task = 'page';
  $handler->subtask = 'register';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Spanish',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Registro';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d64bdd42-bfe9-458e-aa3b-502d129b60fb';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:1419d112-bb6c-4a32-a9e1-cae0a6404b7f';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd64bdd42-bfe9-458e-aa3b-502d129b60fb';
    $display->content['new-d64bdd42-bfe9-458e-aa3b-502d129b60fb'] = $pane;
    $display->panels['left_above'][0] = 'new-d64bdd42-bfe9-458e-aa3b-502d129b60fb';
    $pane = new stdClass();
    $pane->pid = 'new-c3311c47-11fe-4d48-98d1-229ac7b1ca5e';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:14dfc4a0-8ca9-4f41-8152-6d5a9be4b7a5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c3311c47-11fe-4d48-98d1-229ac7b1ca5e';
    $display->content['new-c3311c47-11fe-4d48-98d1-229ac7b1ca5e'] = $pane;
    $display->panels['left_above'][1] = 'new-c3311c47-11fe-4d48-98d1-229ac7b1ca5e';
    $pane = new stdClass();
    $pane->pid = 'new-64c85494-6fd2-4044-a58d-a15955a5b932';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:91150805-d758-4dd8-a539-7e6f08e5168a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '64c85494-6fd2-4044-a58d-a15955a5b932';
    $display->content['new-64c85494-6fd2-4044-a58d-a15955a5b932'] = $pane;
    $display->panels['left_above'][2] = 'new-64c85494-6fd2-4044-a58d-a15955a5b932';
    $pane = new stdClass();
    $pane->pid = 'new-fab3854c-d1b5-4562-9c01-e5e951833f6a';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:2d45bb6f-a640-4f56-b357-251f2f0c98e7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fab3854c-d1b5-4562-9c01-e5e951833f6a';
    $display->content['new-fab3854c-d1b5-4562-9c01-e5e951833f6a'] = $pane;
    $display->panels['left_above'][3] = 'new-fab3854c-d1b5-4562-9c01-e5e951833f6a';
    $pane = new stdClass();
    $pane->pid = 'new-415b9a9a-1698-4185-a69e-220e3c1187f7';
    $pane->panel = 'left_above';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Incluye:',
      'body' => '<p class="b" id="cache27" style="line-height:20px;"><span class="b" id="cache28" style="font-family:\'ArialMT\', \'Arial\';font-weight:400;line-height:20px;">• Con tu registro al evento se obtienen los siguientes beneficios:</span></p>
<p class="b" id="cache29" style="line-height:20px;"><span class="b" id="cache30" style="font-family:\'ArialMT\', \'Arial\';font-weight:400;line-height:20px;">• Acceso a las charlas</span></p>
<p class="b" id="cache31" style="line-height:20px;"><span class="b" id="cache32" style="font-family:\'ArialMT\', \'Arial\';font-weight:400;line-height:20px;">• Oportunidad de participar en los talleres organizados por expertos</span></p>
<p class="b" id="cache33" style="line-height:20px;"><span class="b" id="cache34" style="font-family:\'ArialMT\', \'Arial\';font-weight:400;line-height:20px;">• Acceso y participación en el CodeSprint</span></p>
<p class="b" id="cache35" style="line-height:20px;"><span class="b" id="cache36" style="font-family:\'ArialMT\', \'Arial\';font-weight:400;line-height:20px;">• Camiseta y elementos distintivos propios de la actividad</span></p>
<p class="b" id="cache37" style="line-height:20px;"><span class="b" id="cache38" style="font-family:\'ArialMT\', \'Arial\';font-weight:400;line-height:20px;">• Refrigerios</span></p>
<p class="b" id="cache39" style="line-height:20px;"><span class="b" id="cache40" style="font-family:\'ArialMT\', \'Arial\';font-weight:400;line-height:20px;">• Feria de empleo</span></p>
<p class="b" id="cache41" style="line-height:20px;"><span class="b" id="cache42" style="font-family:\'ArialMT\', \'Arial\';font-weight:400;line-height:20px;">• Mucho networking!</span></p>
',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '415b9a9a-1698-4185-a69e-220e3c1187f7';
    $display->content['new-415b9a9a-1698-4185-a69e-220e3c1187f7'] = $pane;
    $display->panels['left_above'][4] = 'new-415b9a9a-1698-4185-a69e-220e3c1187f7';
    $pane = new stdClass();
    $pane->pid = 'new-67167591-b7d5-45c4-ace4-9bc5bed089ee';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:40fae04a-1230-4134-9d0a-97bd1847a561';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '67167591-b7d5-45c4-ace4-9bc5bed089ee';
    $display->content['new-67167591-b7d5-45c4-ace4-9bc5bed089ee'] = $pane;
    $display->panels['left_above'][5] = 'new-67167591-b7d5-45c4-ace4-9bc5bed089ee';
    $pane = new stdClass();
    $pane->pid = 'new-2d84d737-bf3e-46d4-9d7e-6fba84858f71';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:5b1caf6f-d297-43dc-9098-3bf95cb42d59';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '2d84d737-bf3e-46d4-9d7e-6fba84858f71';
    $display->content['new-2d84d737-bf3e-46d4-9d7e-6fba84858f71'] = $pane;
    $display->panels['left_above'][6] = 'new-2d84d737-bf3e-46d4-9d7e-6fba84858f71';
    $pane = new stdClass();
    $pane->pid = 'new-63a9a525-4d7d-4ea0-a18e-e6939d75ffb8';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_create_account_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63a9a525-4d7d-4ea0-a18e-e6939d75ffb8';
    $display->content['new-63a9a525-4d7d-4ea0-a18e-e6939d75ffb8'] = $pane;
    $display->panels['right_above'][0] = 'new-63a9a525-4d7d-4ea0-a18e-e6939d75ffb8';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_register__panel_context_b82f8334-6d02-4afa-b7a1-78f0f4a0f8c4';
  $handler->task = 'page';
  $handler->subtask = 'register';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'English',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Register';
  $display->uuid = '891a719b-c48f-48ba-824f-3cbdb6e49243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b2ff3624-272c-4e0a-8cb3-253d70137e38';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:18f2a342-9dd6-4528-90db-87c4ff8821ad';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b2ff3624-272c-4e0a-8cb3-253d70137e38';
    $display->content['new-b2ff3624-272c-4e0a-8cb3-253d70137e38'] = $pane;
    $display->panels['left_above'][0] = 'new-b2ff3624-272c-4e0a-8cb3-253d70137e38';
    $pane = new stdClass();
    $pane->pid = 'new-aa8cf7e1-47ff-4e07-a522-3301ec0a2700';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:2e144534-5c30-480c-b780-2498b2a11779';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aa8cf7e1-47ff-4e07-a522-3301ec0a2700';
    $display->content['new-aa8cf7e1-47ff-4e07-a522-3301ec0a2700'] = $pane;
    $display->panels['left_above'][1] = 'new-aa8cf7e1-47ff-4e07-a522-3301ec0a2700';
    $pane = new stdClass();
    $pane->pid = 'new-c798a868-5087-43a1-8c95-638810ef267b';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:2b150773-b92e-49a7-a7c2-9df59d9fc0b8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c798a868-5087-43a1-8c95-638810ef267b';
    $display->content['new-c798a868-5087-43a1-8c95-638810ef267b'] = $pane;
    $display->panels['left_above'][2] = 'new-c798a868-5087-43a1-8c95-638810ef267b';
    $pane = new stdClass();
    $pane->pid = 'new-995f31be-7fad-4641-a758-e2997168d3a3';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:782609b4-53c3-45d9-b50e-528814719f08';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '995f31be-7fad-4641-a758-e2997168d3a3';
    $display->content['new-995f31be-7fad-4641-a758-e2997168d3a3'] = $pane;
    $display->panels['left_above'][3] = 'new-995f31be-7fad-4641-a758-e2997168d3a3';
    $pane = new stdClass();
    $pane->pid = 'new-89c8329b-d860-4ec9-a87e-3893b01c32be';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:edf42ecf-f4b5-4c11-8a5d-db6059e91b9f';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '89c8329b-d860-4ec9-a87e-3893b01c32be';
    $display->content['new-89c8329b-d860-4ec9-a87e-3893b01c32be'] = $pane;
    $display->panels['left_above'][4] = 'new-89c8329b-d860-4ec9-a87e-3893b01c32be';
    $pane = new stdClass();
    $pane->pid = 'new-b913c145-6d56-4513-9789-06ab430b2ccb';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:4acee431-6ee9-4930-847c-d11f01bd5c42';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b913c145-6d56-4513-9789-06ab430b2ccb';
    $display->content['new-b913c145-6d56-4513-9789-06ab430b2ccb'] = $pane;
    $display->panels['left_above'][5] = 'new-b913c145-6d56-4513-9789-06ab430b2ccb';
    $pane = new stdClass();
    $pane->pid = 'new-1ea3960a-73c4-4bd9-874c-5c5c1d877619';
    $pane->panel = 'left_above';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:55bbaac3-1a92-4a85-9b7d-36ee9e12272c';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1ea3960a-73c4-4bd9-874c-5c5c1d877619';
    $display->content['new-1ea3960a-73c4-4bd9-874c-5c5c1d877619'] = $pane;
    $display->panels['left_above'][6] = 'new-1ea3960a-73c4-4bd9-874c-5c5c1d877619';
    $pane = new stdClass();
    $pane->pid = 'new-63a9a525-4d7d-4ea0-a18e-e6939d75ffb8';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_create_account_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63a9a525-4d7d-4ea0-a18e-e6939d75ffb8';
    $display->content['new-63a9a525-4d7d-4ea0-a18e-e6939d75ffb8'] = $pane;
    $display->panels['right_above'][0] = 'new-63a9a525-4d7d-4ea0-a18e-e6939d75ffb8';
    $pane = new stdClass();
    $pane->pid = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_social_block_sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $display->content['new-69ef329f-f7c9-4eef-8bf0-fd995f226899'] = $pane;
    $display->panels['right_above'][1] = 'new-69ef329f-f7c9-4eef-8bf0-fd995f226899';
    $pane = new stdClass();
    $pane->pid = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-tracks-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $display->content['new-43a4796d-bdc6-4866-bdc7-aab9204547c7'] = $pane;
    $display->panels['right_above'][2] = 'new-43a4796d-bdc6-4866-bdc7-aab9204547c7';
    $pane = new stdClass();
    $pane->pid = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'dccr_blocks-dccr_faq_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
    $display->content['new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9'] = $pane;
    $display->panels['right_above'][3] = 'new-0a64d6f4-9725-44ae-89fc-b0535e35b1b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['register'] = $page;

  return $pages;

}
