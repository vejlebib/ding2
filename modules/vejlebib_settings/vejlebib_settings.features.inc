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
