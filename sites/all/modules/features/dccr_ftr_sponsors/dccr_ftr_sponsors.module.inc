<?php
/**
 * @file
 * Code for the Drupal Camp Sponsors feature.
 */

/**
 * Implements hook_block_info().
 */
function dccr_ftr_sponsors_block_info() {
  return array(
    'sponsors_info' => array(
      'info' => t('Sponsors Info'),
      'cache' => DRUPAL_CACHE_GLOBAL,
    ),
  );
}

/**
 * Implements hook_block_view().
 */
function dccr_ftr_sponsors_block_view($delta) {
  $block = array();
  switch ($delta) {
    case 'sponsors_info':
      $block = dccr_ftr_sponsors_get_sponsors_info_block();
      break;

  }
  return $block;
}

/**
 * Get Sponsors Info Block.
 */
function dccr_ftr_sponsors_get_sponsors_info_block() {
  $subject = t('As a sponsor you can make yourself known at:');
  $places = array(
    t('Sessions'),
    t('Stands'),
    t('Banners'),
    t('Social Networks'),
    t('Event Prints'),
    t('Web Site'),
    t('Or simply give back to the community'),
  );
  $button_main_text = t('Be a sponsor');
  $button_secondary_text = t('Information about sponsorships.');
  $link_markup = '<span class="link-main">' . $button_main_text . '</span><span>' . $button_secondary_text . '</span>';
  $link = l($link_markup, '<front>', array('html' => TRUE));
  $content = theme_item_list(array(
    'items' => $places,
    'title' => '',
    'type' => 'ul',
    'attributes' => array(),
  ));
  $content .= $link;
  $block = array(
    'subject' => $subject,
    'content' => $content,
  );
  return $block;
}
