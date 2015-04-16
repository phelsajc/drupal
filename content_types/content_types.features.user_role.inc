<?php
/**
 * @file
 * content_types.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function content_types_user_default_roles() {
  $roles = array();

  // Exported role: Super administrator.
  $roles['Super administrator'] = array(
    'name' => 'Super administrator',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}
