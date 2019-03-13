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

  // Exported overrides for: page_manager_handlers
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
