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

  // Exported overrides for: field_group
  $overrides["field_group.group_holdings_available|ting_object|ting_object|default.data|format_settings|formatter"] = 'collapsible';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.required"] = 1;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.required"] = 1;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context_5.conf|display|content|new-162f6ba7-45ad-44f3-8ef6-5302990b1842"] = (object) array(
      'pid' => 'new-162f6ba7-45ad-44f3-8ef6-5302990b1842',
      'panel' => 'main_content',
      'type' => 'views_panes',
      'subtype' => 'vejlebib_ding_event-vejlebib_ding_event_groups_list',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'argument_entity_id:node_1',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'ding-group-events',
      ),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '162f6ba7-45ad-44f3-8ef6-5302990b1842',
    );
  $overrides["page_manager_handlers.node_view_panel_context_5.conf|display|content|new-3bc42ce7-ca5f-4e5c-9176-2bcbaecc961a"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context_5.conf|display|panels|main_content|2"] = 'new-162f6ba7-45ad-44f3-8ef6-5302990b1842';
  $overrides["page_manager_handlers.node_view_panel_context_6.conf|display|content|new-26f08b87-616d-45db-97f9-6bf0ec2e0ca1|position"] = 4;
  $overrides["page_manager_handlers.node_view_panel_context_6.conf|display|content|new-79cc1770-c0c7-4b00-9938-4312b64282c5"] = (object) array(
      'pid' => 'new-79cc1770-c0c7-4b00-9938-4312b64282c5',
      'panel' => 'main_content',
      'type' => 'entity_field',
      'subtype' => 'node:field_ding_library_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'link_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(),
        'context' => 'argument_entity_id:node_1',
        'override_title' => 1,
        'override_title_text' => 'Links',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '79cc1770-c0c7-4b00-9938-4312b64282c5',
    );
  $overrides["page_manager_handlers.node_view_panel_context_6.conf|display|content|new-a03269f4-7286-4752-af8e-239f14bf6182|position"] = 6;
  $overrides["page_manager_handlers.node_view_panel_context_6.conf|display|content|new-ce52c1a0-de29-45b5-83ef-03a71a32ff5d|position"] = 5;
  $overrides["page_manager_handlers.node_view_panel_context_6.conf|display|panels|main_content|3"] = 'new-79cc1770-c0c7-4b00-9938-4312b64282c5';
  $overrides["page_manager_handlers.node_view_panel_context_6.conf|display|panels|main_content|4"] = 'new-26f08b87-616d-45db-97f9-6bf0ec2e0ca1';
  $overrides["page_manager_handlers.node_view_panel_context_6.conf|display|panels|main_content|5"] = 'new-ce52c1a0-de29-45b5-83ef-03a71a32ff5d';
  $overrides["page_manager_handlers.node_view_panel_context_6.conf|display|panels|main_content|6"] = 'new-a03269f4-7286-4752-af8e-239f14bf6182';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-37d18c98-64ec-448f-ac62-ad0cc199fe06"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-54ccde0a-233f-48a8-9b8a-a612fae26038"] = (object) array(
      'pid' => 'new-54ccde0a-233f-48a8-9b8a-a612fae26038',
      'panel' => 'bottom',
      'type' => 'block',
      'subtype' => 'gtranslate-gtranslate',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '54ccde0a-233f-48a8-9b8a-a612fae26038',
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|bottom|1"] = 'new-54ccde0a-233f-48a8-9b8a-a612fae26038';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|content|new-b14f0ccc-f81c-4267-b843-2fd333f260f8"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_frontpage.default_handlers|page_ding_frontpage_panel_context|conf|display|panels|tertiary|1"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|content|new-6171a17a-4789-4aac-86de-eb9c76dee003"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|content|new-ea6b2837-b81a-4750-bb37-0fd27ab49e8e"] = (object) array(
      'pid' => 'new-ea6b2837-b81a-4750-bb37-0fd27ab49e8e',
      'panel' => 'main_content',
      'type' => 'views_panes',
      'subtype' => 'vejlebib_ding_staff-ding_staff_list_library',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => '%slug:title: Staff',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'ea6b2837-b81a-4750-bb37-0fd27ab49e8e',
    );
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|panels|main_content|1"] = 'new-ea6b2837-b81a-4750-bb37-0fd27ab49e8e';
  $overrides["page_manager_pages.ding_staff_library.default_handlers|page_ding_staff_library_panel_context|conf|display|title_pane"] = 'new-ea6b2837-b81a-4750-bb37-0fd27ab49e8e';

  // Exported overrides for: variable
  $overrides["variable.ding_varnish_content_types.value|ding_eresource"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_event"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_group"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_inspiration_list"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_library"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_news"] = 0;
  $overrides["variable.ding_varnish_content_types.value|ding_page"] = 0;
  $overrides["variable.ding_varnish_content_types.value|genre_page"] = 0;
  $overrides["variable.ding_varnish_content_types.value|new_materials"] = 0;
  $overrides["variable.ding_varnish_content_types.value|webform"] = 0;
  $overrides["variable.ding_varnish_paths.value"] = '';

  // Exported overrides for: views_view
  $overrides["views_view.ding_news.display|ding_news_frontpage_list|display_options|fields|field_ding_news_list_image|settings|image_style"] = 'vejlebib_list';
  $overrides["views_view.ding_news.display|ding_news_frontpage_list|display_options|fields|field_ding_news_list_image|settings|styles"]["DELETED"] = TRUE;
  $overrides["views_view.ding_news.display|ding_news_frontpage_list|display_options|fields|field_ding_news_list_image|type"]["DELETED"] = TRUE;
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|fields|field_ding_news_list_image|settings|image_style"] = 'vejlebib_list';
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|fields|field_ding_news_list_image|settings|styles"]["DELETED"] = TRUE;
  $overrides["views_view.ding_news.display|ding_news_groups_list|display_options|fields|field_ding_news_list_image|type"]["DELETED"] = TRUE;

 return $overrides;
}