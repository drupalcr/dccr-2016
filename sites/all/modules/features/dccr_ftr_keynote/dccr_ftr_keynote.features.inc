<?php
/**
 * @file
 * dccr_ftr_keynote.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_keynote_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function dccr_ftr_keynote_image_default_styles() {
  $styles = array();

  // Exported image style: keynote_frontpage.
  $styles['keynote_frontpage'] = array(
    'label' => 'keynote frontpage',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function dccr_ftr_keynote_node_info() {
  $items = array(
    'keynote' => array(
      'name' => t('Keynote'),
      'base' => 'node_content',
      'description' => t('Drupal Camp Keynote'),
      'has_title' => '1',
      'title_label' => t('Speaker name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
