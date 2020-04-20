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

  // Exported field_base: 'field_ding_section_paragraphs'.
  $field_bases['field_ding_section_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ding_section_paragraphs',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_fbs_mailchimp'.
  $field_bases['field_fbs_mailchimp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fbs_mailchimp',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'mc_list_id' => '3a8f96e687',
      'profile2_private' => 0,
      'unsubscribe_action' => 'unsubscribe',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
