<?php
/**
 * @file
 * dccr_ftr_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dccr_ftr_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_english:node
  $menu_links['main-menu_english:node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'English',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_english:node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_espaol:node
  $menu_links['main-menu_espaol:node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'Español',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_espaol:node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('English');
  t('Español');
  t('Home');


  return $menu_links;
}
