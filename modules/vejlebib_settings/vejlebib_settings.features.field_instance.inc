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

  // Exported field_instance: 'profile2-provider_fbs-field_fbs_mailchimp'.
  $field_instances['profile2-provider_fbs-field_fbs_mailchimp'] = array(
    'bundle' => 'provider_fbs',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
        'interest_groups' => array(
          'c1ddb76b13' => array(
            '3678c036cd' => 0,
            '57677c3112' => 0,
            'c215611168' => 0,
            'd51a32b428' => 0,
          ),
        ),
        'is_default' => TRUE,
      ),
    ),
    'deleted' => 0,
    'description' => 'Vælg "Tilmeld" nedenunder og tryk "Gem". Du kan afmelde dig igen ved at fjerne valget.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_fbs_mailchimp',
    'label' => 'Tilmeld dig Vejle Bibliotekernes nyhedsbrev',
    'required' => 0,
    'settings' => array(
      'hide_subscribe_checkbox' => 0,
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => '[profile2:field-fbs-mail]',
        'FNAME' => '[profile2:field-fbs-name]',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-section-field_ding_section_paragraphs'.
  $field_instances['taxonomy_term-section-field_ding_section_paragraphs'] = array(
    'bundle' => 'section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_ding_section_paragraphs',
    'label' => 'Paragraphs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'ding_paragraphs_carousel' => 'ding_paragraphs_carousel',
        'ding_paragraphs_image' => 'ding_paragraphs_image',
        'ding_paragraphs_image_and_text' => 'ding_paragraphs_image_and_text',
        'ding_paragraphs_material_list' => 'ding_paragraphs_material_list',
        'ding_paragraphs_single_material' => 'ding_paragraphs_single_material',
        'ding_paragraphs_text' => 'ding_paragraphs_text',
        'ding_paragraphs_text_box' => 'ding_paragraphs_text_box',
      ),
      'bundle_weights' => array(
        'ding_paragraphs_carousel' => 2,
        'ding_paragraphs_image' => 3,
        'ding_paragraphs_image_and_text' => 4,
        'ding_paragraphs_material_list' => 5,
        'ding_paragraphs_single_material' => 6,
        'ding_paragraphs_text' => 7,
        'ding_paragraphs_text_box' => 8,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

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
      'paragraphs_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'paragraphs_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'paragraphs_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'paragraphs_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'paragraphs_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'paragraphs_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
  t('Paragraphs');

  return $field_instances;
}
