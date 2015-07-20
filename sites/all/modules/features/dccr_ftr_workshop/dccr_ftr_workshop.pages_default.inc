<?php
/**
 * @file
 * dccr_ftr_workshop.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dccr_ftr_workshop_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'workshops';
  $page->task = 'page';
  $page->admin_title = 'Workshops';
  $page->admin_description = '';
  $page->path = 'workshops';
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
  $handler->name = 'page_workshops__panel_context_362968d2-6407-4551-806b-ab67b86e695d';
  $handler->task = 'page';
  $handler->subtask = 'workshops';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Spanish',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'home',
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
  $display->layout = 'twocol';
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
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Talleres';
  $display->uuid = '01ce168f-f339-48a5-b6bf-c53759445702';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c540419b-dbb5-4677-9adf-d9054dd0e660';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="font-size: 13.0080003738403px; line-height: 20.0063037872314px;"><strong>Los talleres tienen cupo limitado, para registrarse a un taller debe:</strong></p><ol style="font-size: 13.0080003738403px; line-height: 20.0063037872314px;"><li><strong>Estar inscrito en el evento ($35)</strong></li><li><strong>Pagar la inscripción a los talleres ($15)</strong></li><li><strong>Solicitar cupo por medio de la página del taller</strong></li></ol><p>&nbsp;</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c540419b-dbb5-4677-9adf-d9054dd0e660';
    $display->content['new-c540419b-dbb5-4677-9adf-d9054dd0e660'] = $pane;
    $display->panels['left'][0] = 'new-c540419b-dbb5-4677-9adf-d9054dd0e660';
    $pane = new stdClass();
    $pane->pid = 'new-eaaa2580-68a3-4747-a16a-9ff35c789bed';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-workshops-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = 'eaaa2580-68a3-4747-a16a-9ff35c789bed';
    $display->content['new-eaaa2580-68a3-4747-a16a-9ff35c789bed'] = $pane;
    $display->panels['left'][1] = 'new-eaaa2580-68a3-4747-a16a-9ff35c789bed';
    $pane = new stdClass();
    $pane->pid = 'new-67a9e356-09b0-4703-93f6-a596bd87b5c6';
    $pane->panel = 'right';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67a9e356-09b0-4703-93f6-a596bd87b5c6';
    $display->content['new-67a9e356-09b0-4703-93f6-a596bd87b5c6'] = $pane;
    $display->panels['right'][0] = 'new-67a9e356-09b0-4703-93f6-a596bd87b5c6';
    $pane = new stdClass();
    $pane->pid = 'new-7ef6d5e1-034d-4d8d-b753-ddc86188716f';
    $pane->panel = 'right';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ef6d5e1-034d-4d8d-b753-ddc86188716f';
    $display->content['new-7ef6d5e1-034d-4d8d-b753-ddc86188716f'] = $pane;
    $display->panels['right'][1] = 'new-7ef6d5e1-034d-4d8d-b753-ddc86188716f';
    $pane = new stdClass();
    $pane->pid = 'new-6359b741-47ae-41f7-98a5-432ee4cad352';
    $pane->panel = 'right';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6359b741-47ae-41f7-98a5-432ee4cad352';
    $display->content['new-6359b741-47ae-41f7-98a5-432ee4cad352'] = $pane;
    $display->panels['right'][2] = 'new-6359b741-47ae-41f7-98a5-432ee4cad352';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_workshops__panel_context_e299b5cf-53b0-419e-9214-783628506052';
  $handler->task = 'page';
  $handler->subtask = 'workshops';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'English',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'home',
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
  $display->layout = 'twocol';
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
      'left' => NULL,
      'right' => NULL,
    ),
    'top' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Workshops';
  $display->uuid = '01ce168f-f339-48a5-b6bf-c53759445702';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d354b2c-6797-4dd0-9621-621e8852d8f2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><strong>Workshops have limited availability, to register you must</strong></p><ol><li><strong>Pay the registration fee for the event ($35)</strong></li><li><strong>Pay the registration fee for the workshops ($15)</strong></li><li><strong>Enroll through the workshop page</strong></li></ol><p>&nbsp;</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8d354b2c-6797-4dd0-9621-621e8852d8f2';
    $display->content['new-8d354b2c-6797-4dd0-9621-621e8852d8f2'] = $pane;
    $display->panels['left'][0] = 'new-8d354b2c-6797-4dd0-9621-621e8852d8f2';
    $pane = new stdClass();
    $pane->pid = 'new-43d0909f-033a-4b53-b0c3-7fcc04058efe';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-workshops-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = '43d0909f-033a-4b53-b0c3-7fcc04058efe';
    $display->content['new-43d0909f-033a-4b53-b0c3-7fcc04058efe'] = $pane;
    $display->panels['left'][1] = 'new-43d0909f-033a-4b53-b0c3-7fcc04058efe';
    $pane = new stdClass();
    $pane->pid = 'new-b7777e1f-e753-4a9f-8e7c-487a112c3ca3';
    $pane->panel = 'right';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b7777e1f-e753-4a9f-8e7c-487a112c3ca3';
    $display->content['new-b7777e1f-e753-4a9f-8e7c-487a112c3ca3'] = $pane;
    $display->panels['right'][0] = 'new-b7777e1f-e753-4a9f-8e7c-487a112c3ca3';
    $pane = new stdClass();
    $pane->pid = 'new-196c9dc1-ff7d-4978-9dd8-da111713d334';
    $pane->panel = 'right';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '196c9dc1-ff7d-4978-9dd8-da111713d334';
    $display->content['new-196c9dc1-ff7d-4978-9dd8-da111713d334'] = $pane;
    $display->panels['right'][1] = 'new-196c9dc1-ff7d-4978-9dd8-da111713d334';
    $pane = new stdClass();
    $pane->pid = 'new-6a14c89b-b1b6-4c34-8433-bede17afdd49';
    $pane->panel = 'right';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6a14c89b-b1b6-4c34-8433-bede17afdd49';
    $display->content['new-6a14c89b-b1b6-4c34-8433-bede17afdd49'] = $pane;
    $display->panels['right'][2] = 'new-6a14c89b-b1b6-4c34-8433-bede17afdd49';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['workshops'] = $page;

  return $pages;

}
