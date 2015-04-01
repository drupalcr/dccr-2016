<?php
/**
 * @file
 * dccr_ftr_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function dccr_ftr_config_default_search_api_index() {
  $items = array();
  $items['proposed_sessions'] = entity_import('search_api_index', '{
    "name" : "Sessions Index",
    "machine_name" : "proposed_sessions",
    "description" : null,
    "server" : "dccr2015",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_availability" : { "type" : "integer" },
        "field_level" : { "type" : "integer" },
        "field_speaker_title" : { "type" : "text" },
        "field_speakers:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_track" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "source" : { "type" : "integer", "entity_type" : "node" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
