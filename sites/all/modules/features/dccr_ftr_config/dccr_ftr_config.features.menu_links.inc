<?php
/**
 * @file
 * dccr_ftr_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dccr_ftr_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-left-menu_agenda:schedule
  $menu_links['menu-left-menu_agenda:schedule'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'schedule',
    'router_path' => 'schedule',
    'link_title' => 'Agenda',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_agenda:schedule',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_charlas-propuestas:schedule
  $menu_links['menu-left-menu_charlas-propuestas:schedule'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'schedule',
    'router_path' => 'schedule',
    'link_title' => 'Charlas Propuestas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_charlas-propuestas:schedule',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_conference:conference
  $menu_links['menu-left-menu_conference:conference'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'conference',
    'router_path' => 'conference',
    'link_title' => 'Conference',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_conference:conference',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_conferencia:conference
  $menu_links['menu-left-menu_conferencia:conference'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'conference',
    'router_path' => 'conference',
    'link_title' => 'Conferencia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_conferencia:conference',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_home:<front>
  $menu_links['menu-left-menu_home:<front>'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_inicio:<front>
  $menu_links['menu-left-menu_inicio:<front>'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_proposed-sessions:schedule
  $menu_links['menu-left-menu_proposed-sessions:schedule'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'schedule',
    'router_path' => 'schedule',
    'link_title' => 'Proposed Sessions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_proposed-sessions:schedule',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_schedule:schedule
  $menu_links['menu-left-menu_schedule:schedule'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'schedule',
    'router_path' => 'schedule',
    'link_title' => 'Schedule',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_schedule:schedule',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_talleres:<front>
  $menu_links['menu-left-menu_talleres:<front>'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'workshops',
    'router_path' => '',
    'link_title' => 'Talleres',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_talleres:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-left-menu_workshops:<front>
  $menu_links['menu-left-menu_workshops:<front>'] = array(
    'menu_name' => 'menu-left-menu',
    'link_path' => 'workshops',
    'router_path' => '',
    'link_title' => 'Workshops',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-left-menu_workshops:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-right-menu_contact:contact-us
  $menu_links['menu-right-menu_contact:contact-us'] = array(
    'menu_name' => 'menu-right-menu',
    'link_path' => 'contact-us',
    'router_path' => 'contact-us',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-right-menu_contact:contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-right-menu_contacto:contact-us
  $menu_links['menu-right-menu_contacto:contact-us'] = array(
    'menu_name' => 'menu-right-menu',
    'link_path' => 'contact-us',
    'router_path' => 'contact-us',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-right-menu_contacto:contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-right-menu_patrocinadores:sponsors
  $menu_links['menu-right-menu_patrocinadores:sponsors'] = array(
    'menu_name' => 'menu-right-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'Patrocinadores',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-right-menu_patrocinadores:sponsors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-right-menu_register:register
  $menu_links['menu-right-menu_register:register'] = array(
    'menu_name' => 'menu-right-menu',
    'link_path' => 'register',
    'router_path' => 'register',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-right-menu_register:register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-right-menu_registro:register
  $menu_links['menu-right-menu_registro:register'] = array(
    'menu_name' => 'menu-right-menu',
    'link_path' => 'register',
    'router_path' => 'register',
    'link_title' => 'Registro',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-right-menu_registro:register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-right-menu_sede:venue
  $menu_links['menu-right-menu_sede:venue'] = array(
    'menu_name' => 'menu-right-menu',
    'link_path' => 'venue',
    'router_path' => 'venue',
    'link_title' => 'Sede',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-right-menu_sede:venue',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-right-menu_sponsors:sponsors
  $menu_links['menu-right-menu_sponsors:sponsors'] = array(
    'menu_name' => 'menu-right-menu',
    'link_path' => 'sponsors',
    'router_path' => 'sponsors',
    'link_title' => 'Sponsors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-right-menu_sponsors:sponsors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-right-menu_venue:venue
  $menu_links['menu-right-menu_venue:venue'] = array(
    'menu_name' => 'menu-right-menu',
    'link_path' => 'venue',
    'router_path' => 'venue',
    'link_title' => 'Venue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-right-menu_venue:venue',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  t('Charlas Propuestas');
  t('Conference');
  t('Conferencia');
  t('Contact');
  t('Contacto');
  t('Home');
  t('Inicio');
  t('Patrocinadores');
  t('Proposed Sessions');
  t('Register');
  t('Registro');
  t('Schedule');
  t('Sede');
  t('Sponsors');
  t('Talleres');
  t('Venue');
  t('Workshops');


  return $menu_links;
}
