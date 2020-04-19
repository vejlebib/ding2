<?php
/**
 * @file
 * vejlebib_settings.features.inc
 */

/**
 * Implements hook_entityqueue_api().
 */
function vejlebib_settings_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_ctools_plugin_api().
 */
function vejlebib_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
  if ($module == "menu_block" && $api == "menu_block") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function vejlebib_settings_field_group_info_alter(&$data) {
  if (isset($data['group_material_details|ting_object|ting_object|default'])) {
    $data['group_material_details|ting_object|ting_object|default']->data['children'][26] = 'all_anvendelighed'; /* WAS: '' */
    $data['group_material_details|ting_object|ting_object|default']->data['children'][27] = 'all_hvor'; /* WAS: '' */
    $data['group_material_details|ting_object|ting_object|default']->data['children'][28] = 'all_let_tal'; /* WAS: '' */
    $data['group_material_details|ting_object|ting_object|default']->data['children'][29] = 'all_lix_tal'; /* WAS: '' */
    $data['group_material_details|ting_object|ting_object|default']->data['children'][30] = 'all_note'; /* WAS: '' */
    $data['group_material_details|ting_object|ting_object|default']->data['children'][31] = 'cd_musik_529u'; /* WAS: '' */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function vejlebib_settings_image_default_styles() {
  $styles = array();

  // Exported image style: vejlebib_ding_staff.
  $styles['vejlebib_ding_staff'] = array(
    'label' => 'Vejlebib ding staff',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 250,
          'height' => 250,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'vejlebib_ding_staff',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: vejlebib_list.
  $styles['vejlebib_list'] = array(
    'label' => 'Vejlebib list',
    'effects' => array(
      15 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'vejlebib_list',
        ),
        'weight' => 0,
      ),
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_mailchimp_list().
 */
function vejlebib_settings_default_mailchimp_list() {
  $items = array();
  $items['cb_nyhedsbrev'] = entity_import('mailchimp_list', '{
    "name" : "cb_nyhedsbrev",
    "mc_list_id" : "a51c674e74",
    "label" : "CB-nyhedsbrev",
    "description" : "",
    "settings" : {
      "roles" : [],
      "mergefields" : { "EMAIL" : "mail", "FNAME" : "name", "LNAME" : "" },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 0, "LNAME" : 0 },
      "doublein" : 0,
      "show_register_form" : 1,
      "default_register_form_optin" : 0,
      "show_account_form" : 1,
      "form_label" : "Tilmeld dig CB-nyhedsbrevet",
      "submit_label" : "Submit",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 0,
      "required" : 0
    }
  }');
  $items['nyheder_fra_vejle_bibliotekerne'] = entity_import('mailchimp_list', '{
    "name" : "nyheder_fra_vejle_bibliotekerne",
    "mc_list_id" : "399444734b",
    "label" : "Nyheder fra Vejle Bibliotekerne",
    "description" : "",
    "settings" : {
      "roles" : { "2" : 2, "5" : 5, "6" : 6, "8" : 8, "3" : 3, "7" : 7, "4" : 4 },
      "mergefields" : { "EMAIL" : "mail", "FNAME" : "name", "LNAME" : "" },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 0, "LNAME" : 0 },
      "doublein" : 0,
      "show_register_form" : 1,
      "default_register_form_optin" : 0,
      "show_account_form" : 1,
      "form_label" : "Abonn\\u00e9r p\\u00e5 nyhedsbrevet Nyheder fra Vejle Bibliotekerne",
      "submit_label" : "Submit",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 0,
      "required" : 0
    }
  }');
  return $items;
}
