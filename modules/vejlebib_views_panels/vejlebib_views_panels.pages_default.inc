<?php
/**
 * @file
 * vejlebib_views_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vejlebib_views_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Page (inspiration)',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Library',
        'keyword' => 'library_group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library node',
        'keyword' => 'library_node',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'context' => 'argument_entity_id:node_1',
        'vid' => array(
          3 => '3',
          4 => '4',
          1 => '1',
          2 => '2',
        ),
        'concatenator' => ',',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_page' => 'ding_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'inspiration
inspiration/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e4576eaa-237b-4dbb-917b-aba5bff3d8a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a5810ddf-717b-4560-a63a-1ec30c14060a';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a5810ddf-717b-4560-a63a-1ec30c14060a';
    $display->content['new-a5810ddf-717b-4560-a63a-1ec30c14060a'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-a5810ddf-717b-4560-a63a-1ec30c14060a';
    $pane = new stdClass();
    $pane->pid = 'new-b2afcfd3-6561-4a08-9b5d-f493ac9c3938';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b2afcfd3-6561-4a08-9b5d-f493ac9c3938';
    $display->content['new-b2afcfd3-6561-4a08-9b5d-f493ac9c3938'] = $pane;
    $display->panels['left_sidebar'][1] = 'new-b2afcfd3-6561-4a08-9b5d-f493ac9c3938';
    $pane = new stdClass();
    $pane->pid = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
    $pane->panel = 'main_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '33f78b6a-3147-455f-b437-70261fe3426c';
    $display->content['new-33f78b6a-3147-455f-b437-70261fe3426c'] = $pane;
    $display->panels['main_content'][0] = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
    $pane = new stdClass();
    $pane->pid = 'new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $pane->panel = 'right_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'relationship_og_node_from_group_1',
        2 => 'empty',
        3 => 'relationship_terms_from_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '600',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $display->content['new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-0c1b010b-aad2-4a5e-badd-f2fe5334a80c';
    $pane = new stdClass();
    $pane->pid = 'new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'similarterms-ding_content_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
    $display->content['new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-0d732c8e-6a2e-4993-ba6f-7cb2025bada6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-33f78b6a-3147-455f-b437-70261fe3426c';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function vejlebib_views_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_staff';
  $page->task = 'page';
  $page->admin_title = 'Ding staff';
  $page->admin_description = '';
  $page->path = 'personale';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_staff_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ding_staff';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Ding staff',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9113a0a1-50c9-4dca-be73-ed77a5165924';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-274c6b83-7a18-49ed-acfa-1f22bbd23e96';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'vejlebib_ding_staff-ding_staff_list_all';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-medium',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '274c6b83-7a18-49ed-acfa-1f22bbd23e96';
    $display->content['new-274c6b83-7a18-49ed-acfa-1f22bbd23e96'] = $pane;
    $display->panels['main_content'][0] = 'new-274c6b83-7a18-49ed-acfa-1f22bbd23e96';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_staff'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vejlebib_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Vejlebib frontpage';
  $page->admin_description = '';
  $page->path = 'vejlebib_frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vejlebib_frontpage__panel';
  $handler->task = 'page';
  $handler->subtask = 'vejlebib_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Vejlebib frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'ding_layout_1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'primary' => NULL,
      'secondary' => NULL,
      'tertiary' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c6a2ed8c-fac8-48cf-9ef7-c7a3b3e87a14';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c6a58d53-9d8b-4904-84ab-408f61ad170f';
    $pane->panel = 'primary';
    $pane->type = 'interaction_pane';
    $pane->subtype = 'interaction_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c6a58d53-9d8b-4904-84ab-408f61ad170f';
    $display->content['new-c6a58d53-9d8b-4904-84ab-408f61ad170f'] = $pane;
    $display->panels['primary'][0] = 'new-c6a58d53-9d8b-4904-84ab-408f61ad170f';
    $pane = new stdClass();
    $pane->pid = 'new-7b9a3327-9770-485a-aed3-97ed6065cf96';
    $pane->panel = 'primary';
    $pane->type = 'ding_campaign_plus';
    $pane->subtype = 'ding_campaign_plus';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'style' => 'ribbon',
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b9a3327-9770-485a-aed3-97ed6065cf96';
    $display->content['new-7b9a3327-9770-485a-aed3-97ed6065cf96'] = $pane;
    $display->panels['primary'][1] = 'new-7b9a3327-9770-485a-aed3-97ed6065cf96';
    $pane = new stdClass();
    $pane->pid = 'new-4b3b3509-61fb-409a-a419-85c83d4c9e34';
    $pane->panel = 'primary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_tabroll-ding_frontpage_tabroll';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4b3b3509-61fb-409a-a419-85c83d4c9e34';
    $display->content['new-4b3b3509-61fb-409a-a419-85c83d4c9e34'] = $pane;
    $display->panels['primary'][2] = 'new-4b3b3509-61fb-409a-a419-85c83d4c9e34';
    $pane = new stdClass();
    $pane->pid = 'new-bcba6863-2462-4c9b-bbe7-00f19985503b';
    $pane->panel = 'primary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_news-ding_news_frontpage_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Library news',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bcba6863-2462-4c9b-bbe7-00f19985503b';
    $display->content['new-bcba6863-2462-4c9b-bbe7-00f19985503b'] = $pane;
    $display->panels['primary'][3] = 'new-bcba6863-2462-4c9b-bbe7-00f19985503b';
    $pane = new stdClass();
    $pane->pid = 'new-8e871aea-6a6b-4cb6-9360-7d67cc6d7195';
    $pane->panel = 'primary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-ding_event_list_frontpage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8e871aea-6a6b-4cb6-9360-7d67cc6d7195';
    $display->content['new-8e871aea-6a6b-4cb6-9360-7d67cc6d7195'] = $pane;
    $display->panels['primary'][4] = 'new-8e871aea-6a6b-4cb6-9360-7d67cc6d7195';
    $pane = new stdClass();
    $pane->pid = 'new-d7903646-2db7-4c70-8d7a-77a89008bd6a';
    $pane->panel = 'primary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_groups-panel_pane_frontpage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd7903646-2db7-4c70-8d7a-77a89008bd6a';
    $display->content['new-d7903646-2db7-4c70-8d7a-77a89008bd6a'] = $pane;
    $display->panels['primary'][5] = 'new-d7903646-2db7-4c70-8d7a-77a89008bd6a';
    $pane = new stdClass();
    $pane->pid = 'new-66916a45-6cbc-4fea-a543-e00269c24629';
    $pane->panel = 'secondary';
    $pane->type = 'carousel';
    $pane->subtype = 'carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'searches' => array(
        0 => array(
          'title' => 'Film',
          'subtitle' => 'Film',
          'query' => '870970-basis:50713873 OR 870970-basis:53719872 OR 870970-basis:55137196 OR 870970-basis:52097126 OR 870970-basis:54131496 OR 870970-basis:55115087 OR 870970-basis:54533187 OR 870970-basis:53461816 OR 870970-basis:53735894 ',
          'sort' => '',
          'available' => 0,
        ),
        1 => array(
          'title' => 'Musik',
          'subtitle' => '',
          'query' => '55109680 OR 55156409 OR 55110514 OR 55110239 OR 55110352 OR 55128545 OR 55127816 OR 55110727 OR 55139172 OR 55147752 OR 55134332 OR 55110336 OR 55110603 OR 54977921 OR 55109281 OR 54977840 OR 54977840 OR 54978111 OR 55132496',
          'sort' => '',
          'available' => 0,
        ),
      ),
      'settings' => array(
        'transition' => 'fade',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66916a45-6cbc-4fea-a543-e00269c24629';
    $display->content['new-66916a45-6cbc-4fea-a543-e00269c24629'] = $pane;
    $display->panels['secondary'][0] = 'new-66916a45-6cbc-4fea-a543-e00269c24629';
    $pane = new stdClass();
    $pane->pid = 'new-32b76f08-74dd-465a-a79c-ec97b3ed8be3';
    $pane->panel = 'secondary';
    $pane->type = 'popular';
    $pane->subtype = 'popular';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'month' => '',
      'libcode' => 0,
      'override_title' => 1,
      'override_title_text' => 'Læsernes bedst bedømte titler',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '32b76f08-74dd-465a-a79c-ec97b3ed8be3';
    $display->content['new-32b76f08-74dd-465a-a79c-ec97b3ed8be3'] = $pane;
    $display->panels['secondary'][1] = 'new-32b76f08-74dd-465a-a79c-ec97b3ed8be3';
    $pane = new stdClass();
    $pane->pid = 'new-a12a21e6-2e50-4a4f-992c-86ae894bd9d6';
    $pane->panel = 'secondary';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'ding_campaign_style' => 'ding_campaign_full_width',
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a12a21e6-2e50-4a4f-992c-86ae894bd9d6';
    $display->content['new-a12a21e6-2e50-4a4f-992c-86ae894bd9d6'] = $pane;
    $display->panels['secondary'][2] = 'new-a12a21e6-2e50-4a4f-992c-86ae894bd9d6';
    $pane = new stdClass();
    $pane->pid = 'new-d65023bb-2bca-4dec-809d-84a8fdb2a942';
    $pane->panel = 'tertiary';
    $pane->type = 'all_opening_hours';
    $pane->subtype = 'all_opening_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd65023bb-2bca-4dec-809d-84a8fdb2a942';
    $display->content['new-d65023bb-2bca-4dec-809d-84a8fdb2a942'] = $pane;
    $display->panels['tertiary'][0] = 'new-d65023bb-2bca-4dec-809d-84a8fdb2a942';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c6a58d53-9d8b-4904-84ab-408f61ad170f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vejlebib_frontpage'] = $page;

  return $pages;

}
