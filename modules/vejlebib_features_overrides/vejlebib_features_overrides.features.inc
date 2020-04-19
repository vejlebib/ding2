<?php
/**
 * @file
 * vejlebib_features_overrides.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function vejlebib_features_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_news-field_ding_news_list_image'])) {
    $data['node-ding_news-field_ding_news_list_image']['required'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-ding_news-field_ding_news_title_image'])) {
    $data['node-ding_news-field_ding_news_title_image']['required'] = 1; /* WAS: 0 */
  }
  if (isset($data['ting_object-ting_object-ting_cover'])) {
    $data['ting_object-ting_object-ting_cover']['display']['ting_reference_preview']['type'] = 'hidden'; /* WAS: 'ting_cover_default' */
    unset($data['ting_object-ting_object-ting_cover']['display']['ting_reference_preview']['module']);
    unset($data['ting_object-ting_object-ting_cover']['display']['ting_reference_preview']['settings']['image_style']);
    unset($data['ting_object-ting_object-ting_cover']['display']['ting_reference_preview']['settings']['link_type']);
  }
}

/**
 * Implements hook_flag_default_flags_alter().
 */
function vejlebib_features_overrides_flag_default_flags_alter(&$data) {
  if (isset($data['mobile_app'])) {
    $data['mobile_app']['roles']['flag'][0] = 4; /* WAS: 3 */
    $data['mobile_app']['roles']['flag'][1] = 6; /* WAS: 4 */
    $data['mobile_app']['roles']['flag'][2] = 9; /* WAS: 6 */
    $data['mobile_app']['roles']['flag'][3] = 10; /* WAS: 7 */
    $data['mobile_app']['roles']['unflag'][0] = 4; /* WAS: 3 */
    $data['mobile_app']['roles']['unflag'][1] = 6; /* WAS: 4 */
    $data['mobile_app']['roles']['unflag'][2] = 9; /* WAS: 6 */
    $data['mobile_app']['roles']['unflag'][3] = 10; /* WAS: 7 */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function vejlebib_features_overrides_node_info_alter(&$data) {
  if (isset($data['ding_eresource'])) {
    $data['ding_eresource']['name'] = 'Netmedie'; /* WAS: 'E-resource' */
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function vejlebib_features_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['search_node_panel_context'])) {
    $data['search_node_panel_context']->conf['display']->content['new-097acc39-287b-48dd-9622-ca3098cc478c']->cache['method'] = 0; /* WAS: 'lazy' */
    unset($data['search_node_panel_context']->conf['display']->content['new-097acc39-287b-48dd-9622-ca3098cc478c']->cache['settings']['load_strategy']);
    unset($data['search_node_panel_context']->conf['display']->content['new-097acc39-287b-48dd-9622-ca3098cc478c']->cache['settings']['load_text']);
    unset($data['search_node_panel_context']->conf['display']->content['new-097acc39-287b-48dd-9622-ca3098cc478c']->cache['settings']['show_spinner']);
  }
  if (isset($data['site_template_panel_context'])) {
    $data['site_template_panel_context']->conf['display']->content['new-f720f7d6-6151-4704-8ed5-6f3b59a3bfc8'] = (object) array(
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
        ); /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->panels['footer'][6] = 'new-f720f7d6-6151-4704-8ed5-6f3b59a3bfc8'; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function vejlebib_features_overrides_default_page_manager_pages_alter(&$data) {
  if (isset($data['ding_eresources'])) {
    $data['ding_eresources']->menu['name'] = 'main-menu'; /* WAS: '' */
    $data['ding_eresources']->menu['parent'] = array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => 0,
    ); /* WAS: '' */
    $data['ding_eresources']->menu['title'] = 'Netmedier'; /* WAS: '' */
    $data['ding_eresources']->menu['type'] = 'normal'; /* WAS: '' */
    $data['ding_eresources']->menu['weight'] = -45; /* WAS: '' */
    $data['ding_eresources']->path = 'netmedier'; /* WAS: 'e-materialer' */
  }
  if (isset($data['ding_staff_library'])) {
    $data['ding_staff_library']->default_handlers['page_ding_staff_library_panel_context']->conf['display']->content['new-0911dfbe-f34c-484a-b9e3-7a6c4ffa7192'] = (object) array(
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
        ); /* WAS: '' */
    $data['ding_staff_library']->default_handlers['page_ding_staff_library_panel_context']->conf['display']->panels['main_content'][0] = 'new-0911dfbe-f34c-484a-b9e3-7a6c4ffa7192'; /* WAS: 'new-6171a17a-4789-4aac-86de-eb9c76dee003' */
    $data['ding_staff_library']->default_handlers['page_ding_staff_library_panel_context']->conf['display']->title_pane = 'new-0911dfbe-f34c-484a-b9e3-7a6c4ffa7192'; /* WAS: 'new-6171a17a-4789-4aac-86de-eb9c76dee003' */
    unset($data['ding_staff_library']->default_handlers['page_ding_staff_library_panel_context']->conf['display']->content['new-6171a17a-4789-4aac-86de-eb9c76dee003']);
  }
}

/**
 * Implements hook_default_search_api_index_alter().
 */
function vejlebib_features_overrides_default_search_api_index_alter(&$data) {
  if (isset($data['default_multiple_index'])) {
    $data['default_multiple_index']->options['data_alter_callbacks']['ding_frontend_role_filter']['settings']['roles'][8] = 8; /* WAS: '' */
    unset($data['default_multiple_index']->options['data_alter_callbacks']['ding_frontend_role_filter']['settings']['roles'][9]);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function vejlebib_features_overrides_strongarm_alter(&$data) {
  if (isset($data['ding_varnish_content_types'])) {
    $data['ding_varnish_content_types']->value['ding_campaign_plus'] = 0; /* WAS: '' */
    $data['ding_varnish_content_types']->value['ding_eresource'] = 'ding_eresource'; /* WAS: '' */
    $data['ding_varnish_content_types']->value['ding_search_context_link'] = 0; /* WAS: '' */
    $data['ding_varnish_content_types']->value['webform'] = 0; /* WAS: '' */
  }
  if (isset($data['ding_varnish_paths'])) {
    $data['ding_varnish_paths']->value = '<front>
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
ting/collection/*'; /* WAS: '<front>
arrangementer\/*
biblioteker\/*
nyematerialer\/*
nyheder\/*
search\/*
temaer\/*' */
  }
  if (isset($data['ding_varnish_role'])) {
    $data['ding_varnish_role']->value = 7; /* WAS: 2 */
  }
}
