<?php
/**
 * @file
 * vejlebib_settings.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function vejlebib_settings_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'ting_object-ting_object-all_anvendelighed'.
  $field_instances['ting_object-ting_object-all_anvendelighed'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'collection_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ting_marc',
        'settings' => array(),
        'type' => 'ting_marc_ajax_formatter',
        'weight' => 74,
      ),
      'reference_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_no_overlay' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ting_reference_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'all_anvendelighed',
    'formatter' => array(
      'type' => 'ting_marc_ajax_formatter',
    ),
    'label' => 'Anvendelighed',
    'required' => FALSE,
    'settings' => array(
      'field_clickable' => 0,
      'link_index' => '',
      'marc_field' => 517,
      'marc_subfield' => 'a',
      'text_processing' => FALSE,
      'ting_type' => 'All',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-all_hvor'.
  $field_instances['ting_object-ting_object-all_hvor'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'collection_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ting_marc',
        'settings' => array(),
        'type' => 'ting_marc_ajax_formatter',
        'weight' => 75,
      ),
      'reference_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_no_overlay' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ting_reference_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'all_hvor',
    'formatter' => array(
      'type' => 'ting_marc_ajax_formatter',
    ),
    'label' => 'Hvor',
    'required' => FALSE,
    'settings' => array(
      'field_clickable' => 0,
      'link_index' => '',
      'marc_field' => 565,
      'marc_subfield' => 'a',
      'text_processing' => FALSE,
      'ting_type' => 'All',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-all_let_tal'.
  $field_instances['ting_object-ting_object-all_let_tal'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'collection_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ting_marc',
        'settings' => array(),
        'type' => 'ting_marc_ajax_formatter',
        'weight' => 73,
      ),
      'reference_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_no_overlay' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ting_reference_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'all_let_tal',
    'formatter' => array(
      'type' => 'ting_marc_ajax_formatter',
    ),
    'label' => 'Let-tal',
    'required' => FALSE,
    'settings' => array(
      'field_clickable' => 0,
      'link_index' => '',
      'marc_field' => '046',
      'marc_subfield' => 'c',
      'text_processing' => FALSE,
      'ting_type' => 'All',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-all_lix_tal'.
  $field_instances['ting_object-ting_object-all_lix_tal'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'collection_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ting_marc',
        'settings' => array(),
        'type' => 'ting_marc_ajax_formatter',
        'weight' => 72,
      ),
      'reference_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_no_overlay' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ting_reference_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'all_lix_tal',
    'formatter' => array(
      'type' => 'ting_marc_ajax_formatter',
    ),
    'label' => 'Lix-tal',
    'required' => FALSE,
    'settings' => array(
      'field_clickable' => 0,
      'link_index' => '',
      'marc_field' => '042',
      'marc_subfield' => 'a',
      'text_processing' => FALSE,
      'ting_type' => 'All',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-all_note'.
  $field_instances['ting_object-ting_object-all_note'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'collection_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ting_marc',
        'settings' => array(),
        'type' => 'ting_marc_ajax_formatter',
        'weight' => 76,
      ),
      'reference_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_no_overlay' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ting_reference_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'all_note',
    'formatter' => array(
      'type' => 'ting_marc_ajax_formatter',
    ),
    'label' => 'Note',
    'required' => FALSE,
    'settings' => array(
      'field_clickable' => 0,
      'link_index' => '',
      'marc_field' => 856,
      'marc_subfield' => 'z',
      'text_processing' => FALSE,
      'ting_type' => 'All',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'ting_object-ting_object-cd_musik_529u'.
  $field_instances['ting_object-ting_object-cd_musik_529u'] = array(
    'bundle' => 'ting_object',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'collection_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'collection_primary' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'ting_marc',
        'settings' => array(),
        'type' => 'ting_marc_ajax_formatter',
        'weight' => 77,
      ),
      'reference_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_no_overlay' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ting_reference_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'user_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'ting_object',
    'field_name' => 'cd_musik_529u',
    'formatter' => array(
      'type' => 'ting_marc_ajax_formatter',
    ),
    'label' => '529.u',
    'required' => FALSE,
    'settings' => array(
      'field_clickable' => 0,
      'link_index' => '',
      'marc_field' => 529,
      'marc_subfield' => 'u',
      'text_processing' => FALSE,
      'ting_type' => 'Cd (musik)',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 44,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('529.u');
  t('Anvendelighed');
  t('Hvor');
  t('Let-tal');
  t('Lix-tal');
  t('Note');

  return $field_instances;
}
