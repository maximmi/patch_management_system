<?php
/**
 * @file
 * feature_general_entities.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_general_entities_user_default_permissions() {
  $permissions = array();

  // Exported permission: create issue content.
  $permissions['create issue content'] = array(
    'name' => 'create issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create module content.
  $permissions['create module content'] = array(
    'name' => 'create module content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create module_release content.
  $permissions['create module_release content'] = array(
    'name' => 'create module_release content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create patch content.
  $permissions['create patch content'] = array(
    'name' => 'create patch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create patch_file content.
  $permissions['create patch_file content'] = array(
    'name' => 'create patch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any issue content.
  $permissions['delete any issue content'] = array(
    'name' => 'delete any issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any module content.
  $permissions['delete any module content'] = array(
    'name' => 'delete any module content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any module_release content.
  $permissions['delete any module_release content'] = array(
    'name' => 'delete any module_release content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any patch content.
  $permissions['delete any patch content'] = array(
    'name' => 'delete any patch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any patch_file content.
  $permissions['delete any patch_file content'] = array(
    'name' => 'delete any patch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own issue content.
  $permissions['delete own issue content'] = array(
    'name' => 'delete own issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own module content.
  $permissions['delete own module content'] = array(
    'name' => 'delete own module content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own module_release content.
  $permissions['delete own module_release content'] = array(
    'name' => 'delete own module_release content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own patch content.
  $permissions['delete own patch content'] = array(
    'name' => 'delete own patch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own patch_file content.
  $permissions['delete own patch_file content'] = array(
    'name' => 'delete own patch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any issue content.
  $permissions['edit any issue content'] = array(
    'name' => 'edit any issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any module content.
  $permissions['edit any module content'] = array(
    'name' => 'edit any module content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any module_release content.
  $permissions['edit any module_release content'] = array(
    'name' => 'edit any module_release content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any patch content.
  $permissions['edit any patch content'] = array(
    'name' => 'edit any patch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any patch_file content.
  $permissions['edit any patch_file content'] = array(
    'name' => 'edit any patch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own issue content.
  $permissions['edit own issue content'] = array(
    'name' => 'edit own issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own module content.
  $permissions['edit own module content'] = array(
    'name' => 'edit own module content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own module_release content.
  $permissions['edit own module_release content'] = array(
    'name' => 'edit own module_release content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own patch content.
  $permissions['edit own patch content'] = array(
    'name' => 'edit own patch content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own patch_file content.
  $permissions['edit own patch_file content'] = array(
    'name' => 'edit own patch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
