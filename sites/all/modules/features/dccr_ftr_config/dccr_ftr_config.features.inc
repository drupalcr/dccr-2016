<?php
/**
 * @file
 * dccr_ftr_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dccr_ftr_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function dccr_ftr_config_default_search_api_index() {
  $items = array();
  $items['nodes_index'] = entity_import('search_api_index', '{
    "name" : "Nodes Index",
    "machine_name" : "nodes_index",
    "description" : null,
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "created" : { "type" : "date" },
        "field_availability" : { "type" : "integer" },
        "field_level" : { "type" : "integer" },
        "field_location" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_speaker_title" : { "type" : "text" },
        "field_speakers:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_time:duration" : { "type" : "duration" },
        "field_time:value" : { "type" : "date" },
        "field_time:value2" : { "type" : "date" },
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

/**
 * Implements hook_default_search_api_server().
 */
function dccr_ftr_config_default_search_api_server() {
  $items = array();
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "Solr",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8888",
      "path" : "\\/solr\\/dccr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
