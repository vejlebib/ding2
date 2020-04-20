<?php
/**
 * @file
 * vejlebib_features_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function vejlebib_features_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.required"] = 1;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.required"] = 1;
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|ting_reference_preview|module"]["DELETED"] = TRUE;
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|ting_reference_preview|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|ting_reference_preview|settings|link_type"]["DELETED"] = TRUE;
  $overrides["field_instance.ting_object-ting_object-ting_cover.display|ting_reference_preview|type"] = 'hidden';

  // Exported overrides for: flag
  $overrides["flag.mobile_app.roles|flag|0"] = 4;
  $overrides["flag.mobile_app.roles|flag|1"] = 6;
  $overrides["flag.mobile_app.roles|flag|2"] = 9;
  $overrides["flag.mobile_app.roles|flag|3"] = 10;
  $overrides["flag.mobile_app.roles|unflag|0"] = 4;
  $overrides["flag.mobile_app.roles|unflag|1"] = 6;
  $overrides["flag.mobile_app.roles|unflag|2"] = 9;
  $overrides["flag.mobile_app.roles|unflag|3"] = 10;

  // Exported overrides for: node
  $overrides["node.ding_eresource.name"] = 'Netmedie';

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-097acc39-287b-48dd-9622-ca3098cc478c|cache|method"] = 0;
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-097acc39-287b-48dd-9622-ca3098cc478c|cache|settings|load_strategy"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-097acc39-287b-48dd-9622-ca3098cc478c|cache|settings|load_text"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.search_node_panel_context.conf|display|content|new-097acc39-287b-48dd-9622-ca3098cc478c|cache|settings|show_spinner"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-f720f7d6-6151-4704-8ed5-6f3b59a3bfc8"] = (object) array(
      'pid' => 'new-f720f7d6-6151-4704-8ed5-6f3b59a3bfc8',
      'panel' => 'footer',
      'type' => 'block',
      'subtype' => 'gtranslate-gtranslate',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => 'f720f7d6-6151-4704-8ed5-6f3b59a3bfc8',
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|footer|6"] = 'new-f720f7d6-6151-4704-8ed5-6f3b59a3bfc8';
  $overrides["page_manager_handlers.ting_collection_panel_context.conf|display|content|new-e09e561c-9e65-40aa-a905-4f8c3b6800ac"] = (object) array(
    'pid' => 'new-e09e561c-9e65-40aa-a905-4f8c3b6800ac',
    'panel' => 'left_sidebar',
    'type' => 'recommender',
    'subtype' => 'recommender',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(),
    'cache' => array(),
    'style' => array(
      'settings' => NULL,
    ),
    'css' => array(),
    'extras' => array(),
    'position' => 2,
    'locks' => array(),
    'uuid' => 'e09e561c-9e65-40aa-a905-4f8c3b6800ac',
  );
$overrides["page_manager_handlers.ting_collection_panel_context.conf|display|panels|left_sidebar|2"] = 'new-e09e561c-9e65-40aa-a905-4f8c3b6800ac';
$overrides["page_manager_handlers.ting_object_panel_context.conf|display|content|new-0cef4d86-25a3-4d0f-93d2-9607e99a69e9"] = (object) array(
    'pid' => 'new-0cef4d86-25a3-4d0f-93d2-9607e99a69e9',
    'panel' => 'attachment_1_1',
    'type' => 'recommender',
    'subtype' => 'recommender',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(),
    'cache' => array(),
    'style' => array(
      'settings' => NULL,
    ),
    'css' => array(),
    'extras' => array(),
    'position' => 4,
    'locks' => array(),
    'uuid' => '0cef4d86-25a3-4d0f-93d2-9607e99a69e9',
  );
$overrides["page_manager_handlers.ting_object_panel_context.conf|display|panels|attachment_1_1|4"] = 'new-0cef4d86-25a3-4d0f-93d2-9607e99a69e9';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.ding_eresources.menu|name"] = 'main-menu';
  $overrides["page_manager_pages.ding_eresources.menu|parent"] = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => 0,
  );
  $overrides["page_manager_pages.ding_eresources.menu|title"] = 'Netmedier';
  $overrides["page_manager_pages.ding_eresources.menu|type"] = 'normal';
  $overrides["page_manager_pages.ding_eresources.menu|weight"] = -45;
  $overrides["page_manager_pages.ding_eresources.path"] = 'netmedier';
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|content|new-0911dfbe-f34c-484a-b9e3-7a6c4ffa7192"] = (object) array(
      'pid' => 'new-0911dfbe-f34c-484a-b9e3-7a6c4ffa7192',
      'panel' => 'main_content',
      'type' => 'views_panes',
      'subtype' => 'vejlebib_ding_staff-ding_staff_list_library',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '%slug:title: Personale',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'grid-medium',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '0911dfbe-f34c-484a-b9e3-7a6c4ffa7192',
    );
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|content|new-6171a17a-4789-4aac-86de-eb9c76dee003"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|panels|main_content|0"] = 'new-0911dfbe-f34c-484a-b9e3-7a6c4ffa7192';
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|title_pane"] = 'new-0911dfbe-f34c-484a-b9e3-7a6c4ffa7192';
  $overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|content|new-f2de0f40-065a-4b6f-b737-f9c3a7603ed3"] = (object) array(
    'pid' => 'new-f2de0f40-065a-4b6f-b737-f9c3a7603ed3',
    'panel' => 'left_sidebar',
    'type' => 'recommender',
    'subtype' => 'recommender',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(),
    'cache' => array(),
    'style' => array(
      'settings' => NULL,
    ),
    'css' => array(),
    'extras' => array(),
    'position' => 1,
    'locks' => array(),
    'uuid' => 'f2de0f40-065a-4b6f-b737-f9c3a7603ed3',
  );
$overrides["page_manager_pages.user_loans.default_handlers|page_user_loans_panel_context|conf|display|panels|left_sidebar|1"] = 'new-f2de0f40-065a-4b6f-b737-f9c3a7603ed3';
$overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|content|new-409ab200-4429-4646-9eeb-b7ea1aedb86f"] = (object) array(
    'pid' => 'new-409ab200-4429-4646-9eeb-b7ea1aedb86f',
    'panel' => 'left_sidebar',
    'type' => 'recommender',
    'subtype' => 'recommender',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(),
    'cache' => array(),
    'style' => array(
      'settings' => NULL,
    ),
    'css' => array(),
    'extras' => array(),
    'position' => 1,
    'locks' => array(),
    'uuid' => '409ab200-4429-4646-9eeb-b7ea1aedb86f',
  );
$overrides["page_manager_pages.user_reservations.default_handlers|page_user_reservations_panel_context|conf|display|panels|left_sidebar|1"] = 'new-409ab200-4429-4646-9eeb-b7ea1aedb86f';
$overrides["page_manager_pages.user_reservations_ready.default_handlers|page_user_reservations_ready__panel_context_f0f7c0f4-630a-4389-a7b5-2537a3654bc1|conf|display|content|new-48c67daf-527b-487d-b2c2-71089d66620c"] = (object) array(
    'pid' => 'new-48c67daf-527b-487d-b2c2-71089d66620c',
    'panel' => 'left_sidebar',
    'type' => 'recommender',
    'subtype' => 'recommender',
    'shown' => TRUE,
    'access' => array(),
    'configuration' => array(),
    'cache' => array(),
    'style' => array(
      'settings' => NULL,
    ),
    'css' => array(),
    'extras' => array(),
    'position' => 1,
    'locks' => array(),
    'uuid' => '48c67daf-527b-487d-b2c2-71089d66620c',
  );
$overrides["page_manager_pages.user_reservations_ready.default_handlers|page_user_reservations_ready__panel_context_f0f7c0f4-630a-4389-a7b5-2537a3654bc1|conf|display|panels|left_sidebar|1"] = 'new-48c67daf-527b-487d-b2c2-71089d66620c';

  // Exported overrides for: search_api_index
  $overrides["search_api_index.default_multiple_index.options|data_alter_callbacks|ding_frontend_role_filter|settings|roles|8"] = 8;
  $overrides["search_api_index.default_multiple_index.options|data_alter_callbacks|ding_frontend_role_filter|settings|roles|9"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.ding_varnish_content_types.value|ding_campaign_plus"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_eresource"] = 'ding_eresource';
  $overrides["variable.ding_varnish_content_types.value|ding_search_context_link"] = 0;
  $overrides["variable.ding_varnish_content_types.value|webform"] = 0;
  $overrides["variable.ding_varnish_paths.value"] = '<front>
  arrangementer
  arrangementer/*
  biblioteker
  biblioteker/*
  nyheder
  nyheder/*
  search/*
  temaer
  temaer/*
  inspiration
  inspiration/*
  netmedier
  netmedier/*
  ting/object/*
  ting/collection/*';
  $overrides["variable.ding_varnish_role.value"] = 7;

 return $overrides;
}
