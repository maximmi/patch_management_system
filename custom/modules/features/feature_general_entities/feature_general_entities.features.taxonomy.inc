<?php
/**
 * @file
 * feature_general_entities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_general_entities_taxonomy_default_vocabularies() {
  return array(
    'core_version' => array(
      'name' => 'Core version',
      'machine_name' => 'core_version',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'major_version' => array(
      'name' => 'Major version',
      'machine_name' => 'major_version',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'minor_version' => array(
      'name' => 'Minor version',
      'machine_name' => 'minor_version',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
