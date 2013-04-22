<?php
/**
 * @file
 * feature_general_entities.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_general_entities_node_info() {
  $items = array(
    'issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'module' => array(
      'name' => t('Module'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Module name'),
      'help' => '',
    ),
    'module_release' => array(
      'name' => t('Module release'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'patch' => array(
      'name' => t('Patch'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'patch_file' => array(
      'name' => t('Patch file'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
