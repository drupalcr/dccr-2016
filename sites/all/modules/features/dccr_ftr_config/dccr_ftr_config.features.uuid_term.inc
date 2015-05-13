<?php
/**
 * @file
 * dccr_ftr_config.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function dccr_ftr_config_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Business',
    'description' => '',
    'format' => 'manati_texto_formato',
    'weight' => 0,
    'uuid' => '0c143d62-7db2-4f88-8a50-2923b15d50d2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tracks',
  );
  $terms[] = array(
    'name' => 'Front-end',
    'description' => '',
    'format' => 'manati_texto_formato',
    'weight' => 0,
    'uuid' => '0df96213-5df4-4763-a799-95b8fc2d26f1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tracks',
  );
  $terms[] = array(
    'name' => 'Projects',
    'description' => '',
    'format' => 'manati_texto_formato',
    'weight' => 0,
    'uuid' => 'b5dc3afc-1f2c-4e3e-821e-b8a0784c0454',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tracks',
  );
  $terms[] = array(
    'name' => 'Development',
    'description' => '',
    'format' => 'manati_texto_formato',
    'weight' => 0,
    'uuid' => 'e6aad68b-c463-4249-b737-ab83ba16f3ca',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tracks',
  );
  return $terms;
}
