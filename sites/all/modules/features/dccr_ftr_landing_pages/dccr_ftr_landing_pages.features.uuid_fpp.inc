<?php
/**
 * @file
 * dccr_ftr_landing_pages.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function dccr_ftr_landing_pages_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1434066088,
    'title' => '',
    'log' => '',
    'bundle' => 'dccr_embed_fpp',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
    'admin_title' => 'Embed UCR Map',
    'admin_description' => '',
    'category' => 'DCCR',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1431482006,
    'uuid' => 'e6685593-84fd-42dc-bf99-3648a4ae35ea',
    'language' => 'und',
    'field_embed_code' => array(
      'und' => array(
        0 => array(
          'value' => '<iframe src="https://www.google.com/maps/d/u/0/embed?mid=ztK81UJRU-PA.kchscykCr16w" width="100%" height="480"></iframe>',
          'format' => 'full_html',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'user_uuid' => 'd7e36c51-1606-4bc1-b41e-917cbf3dd667',
  );
  return $fpps;
}
