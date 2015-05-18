<?php
/**
 * @file
 * dccr_ftr_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function dccr_ftr_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-left-menu.
  $menus['menu-left-menu'] = array(
    'menu_name' => 'menu-left-menu',
    'title' => 'Left Menu',
    'description' => 'Left part of the main menu',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-right-menu.
  $menus['menu-right-menu'] = array(
    'menu_name' => 'menu-right-menu',
    'title' => 'Right Menu',
    'description' => 'Right part of the Menu',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Left Menu');
  t('Left part of the main menu');
  t('Right Menu');
  t('Right part of the Menu');


  return $menus;
}
