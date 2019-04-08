<?php
/**
 * @file
 * vejlebib_settings.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vejlebib_settings_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'all_anvendelighed'.
  $field_bases['all_anvendelighed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'default_widget' => 'hidden',
    'deleted' => 0,
    'entity_types' => array(
      0 => 'ting_object',
    ),
    'field_name' => 'all_anvendelighed',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'ting_marc',
    'no_ui' => TRUE,
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'virtual_field',
    ),
    'translatable' => 0,
    'type' => 'ting_marc',
  );

  // Exported field_base: 'all_hvor'.
  $field_bases['all_hvor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'default_widget' => 'hidden',
    'deleted' => 0,
    'entity_types' => array(
      0 => 'ting_object',
    ),
    'field_name' => 'all_hvor',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'ting_marc',
    'no_ui' => TRUE,
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'virtual_field',
    ),
    'translatable' => 0,
    'type' => 'ting_marc',
  );

  // Exported field_base: 'all_let_tal'.
  $field_bases['all_let_tal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'default_widget' => 'hidden',
    'deleted' => 0,
    'entity_types' => array(
      0 => 'ting_object',
    ),
    'field_name' => 'all_let_tal',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'ting_marc',
    'no_ui' => TRUE,
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'virtual_field',
    ),
    'translatable' => 0,
    'type' => 'ting_marc',
  );

  // Exported field_base: 'all_lix_tal'.
  $field_bases['all_lix_tal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'default_widget' => 'hidden',
    'deleted' => 0,
    'entity_types' => array(
      0 => 'ting_object',
    ),
    'field_name' => 'all_lix_tal',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'ting_marc',
    'no_ui' => TRUE,
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'virtual_field',
    ),
    'translatable' => 0,
    'type' => 'ting_marc',
  );

  // Exported field_base: 'all_note'.
  $field_bases['all_note'] = array(
    'active' => 1,
    'cardinality' => 1,
    'default_widget' => 'hidden',
    'deleted' => 0,
    'entity_types' => array(
      0 => 'ting_object',
    ),
    'field_name' => 'all_note',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'ting_marc',
    'no_ui' => TRUE,
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'virtual_field',
    ),
    'translatable' => 0,
    'type' => 'ting_marc',
  );

  // Exported field_base: 'cd_musik_529u'.
  $field_bases['cd_musik_529u'] = array(
    'active' => 1,
    'cardinality' => 1,
    'default_widget' => 'hidden',
    'deleted' => 0,
    'entity_types' => array(
      0 => 'ting_object',
    ),
    'field_name' => 'cd_musik_529u',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'ting_marc',
    'no_ui' => TRUE,
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'virtual_field',
    ),
    'translatable' => 0,
    'type' => 'ting_marc',
  );

  return $field_bases;
}
