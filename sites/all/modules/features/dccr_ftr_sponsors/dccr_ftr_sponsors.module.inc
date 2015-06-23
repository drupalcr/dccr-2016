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
 * Implements hook_field_formatter_info_alter().
 */
function dccr_ftr_sponsors_field_formatter_info_alter(&$info) {
  $info['image']['module'] = 'dccr_ftr_sponsors';
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function dccr_ftr_sponsors_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $element = image_field_formatter_settings_form($field, $instance, $view_mode, $form, $form_state);
  $element['image_link']['#options']['field_sponsor_link'] = t('Sponsor Link');
  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function dccr_ftr_sponsors_field_formatter_settings_summary($field, $instance, $view_mode) {
  $summary = image_field_formatter_settings_summary($field, $instance, $view_mode);
  $element['image_link']['#options']['field_sponsor_link'] = t('Sponsor Link');
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  if (isset($settings['image_link']) && $settings['image_link'] == 'field_sponsor_link') {
    $summary .=  '<br/>' . t('Sponsor Link');
  }
  return $summary;
}

/**
 * Implements hook_field_formatter_view().
 */
function dccr_ftr_sponsors_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();

  // Check if the formatter involves a link.
  if ($display['settings']['image_link'] == 'content') {
    $uri = entity_uri($entity_type, $entity);
  }
  elseif ($display['settings']['image_link'] == 'file') {
    $link_file = TRUE;
  }
  elseif ($display['settings']['image_link'] == 'field_sponsor_link') {
    $uri = array(
      'path' => $entity->field_sponsor_link[LANGUAGE_NONE][0]['url'],
      'options' => array(
        'attributes' => array(
          'target' => '_blank',
        ),
      ),
    );
  }

  foreach ($items as $delta => $item) {
    if (isset($link_file)) {
      $uri = array(
        'path' => file_create_url($item['uri']),
        'options' => array(),
      );
    }
    $element[$delta] = array(
      '#theme' => 'image_formatter',
      '#item' => $item,
      '#image_style' => $display['settings']['image_style'],
      '#path' => isset($uri) ? $uri : '',
    );
  }

  return $element;
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
  $button_main_text = t('Become a sponsor');
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
