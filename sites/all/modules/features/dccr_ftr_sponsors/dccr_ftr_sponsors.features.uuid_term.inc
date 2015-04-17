<?php
/**
 * @file
 * dccr_ftr_sponsors.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function dccr_ftr_sponsors_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Golden',
    'description' => '',
    'format' => 'manati_texto_formato',
    'weight' => 1,
    'uuid' => '1edd757a-2c1d-4355-ba6d-be6624b4b3d2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sponsorship_level',
  );
  $terms[] = array(
    'name' => 'Silver',
    'description' => '',
    'format' => 'manati_texto_formato',
    'weight' => 2,
    'uuid' => '3b5d1704-5a8f-44db-82fe-303526aca334',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sponsorship_level',
  );
  $terms[] = array(
    'name' => 'Bronze',
    'description' => '',
    'format' => 'manati_texto_formato',
    'weight' => 3,
    'uuid' => 'dd948b2b-bdad-488a-b26d-17f97e22ad7e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sponsorship_level',
  );
  $terms[] = array(
    'name' => 'Platinum',
    'description' => '',
    'format' => 'manati_texto_formato',
    'weight' => 0,
    'uuid' => 'e1d75e0d-d766-449d-a73e-46e698ed3d5f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sponsorship_level',
  );
  return $terms;
}
