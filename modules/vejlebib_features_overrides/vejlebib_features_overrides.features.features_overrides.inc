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

  // Exported overrides for: search_api_index
  $overrides["search_api_index.default_multiple_index.options|data_alter_callbacks|ding_frontend_role_filter|settings|roles|8"] = 8;
  $overrides["search_api_index.default_multiple_index.options|data_alter_callbacks|ding_frontend_role_filter|settings|roles|9"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.ding_varnish_content_types.value|ding_campaign_plus"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_eresource"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_event"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_group"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_library"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_news"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_page"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_search_context_link"] = 0;
  $overrides["variable.ding_varnish_content_types.value|webform"] = 0;
  $overrides["variable.ding_varnish_paths.value"] = '';

  // Exported overrides for: views_view
  $overrides["views_view.ding_event.display|ding_event_groups_list|display_options|link_url"] = 'inspiration/!1/arrangementer';
  $overrides["views_view.ding_groups.display|panel_pane_frontpage|display_options|link_url"] = 'inspiration';
  $overrides["views_view.ding_groups.display|panel_pane_frontpage|display_options|use_more_text"] = 'Mere inspiration';
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|link_url"] = 'inspiration/!1/nyheder';

 return $overrides;
}
