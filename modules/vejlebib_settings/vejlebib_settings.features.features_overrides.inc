<?php
/**
 * @file
 * vejlebib_settings.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function vejlebib_settings_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_material_details|ting_object|ting_object|default.data|children|26"] = 'all_anvendelighed';
  $overrides["field_group.group_material_details|ting_object|ting_object|default.data|children|27"] = 'all_hvor';
  $overrides["field_group.group_material_details|ting_object|ting_object|default.data|children|28"] = 'all_let_tal';
  $overrides["field_group.group_material_details|ting_object|ting_object|default.data|children|29"] = 'all_lix_tal';
  $overrides["field_group.group_material_details|ting_object|ting_object|default.data|children|30"] = 'all_note';
  $overrides["field_group.group_material_details|ting_object|ting_object|default.data|children|31"] = 'cd_musik_529u';

 return $overrides;
}
