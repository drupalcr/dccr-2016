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
    'timestamp' => 1433643725,
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
          'value' => '<iframe class="location-map" width="100%" height="450" frameborder="0" style="border:0"
src="https://www.google.com/maps/embed/v1/place?q=Ciudad%20de%20la%20Investigacion%2C%20Sabanilla%2C%20San%20Jose%2C%20Costa%20Rica&key=AIzaSyC1WtX40GST0Nc7JxiweLxNCv62aeUOrsE"></iframe> ',
          'format' => 'full_html',
        ),
      ),
    ),
    'rdf_mapping' => array(),
    'user_uuid' => 'a6293ab8-3d72-4eaa-ba13-23b48b00b8ea',
  );
  return $fpps;
}
