<?php
/**
 * @file
 * vejlebib_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vejlebib_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_agency_mail';
  $strongarm->value = 'info@vejlebib.dk';
  $export['ask_vopros_agency_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_answer_preference';
  $strongarm->value = 'mail';
  $export['ask_vopros_answer_preference'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_color';
  $strongarm->value = '#005f8c';
  $export['ask_vopros_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_opening_hours';
  $strongarm->value = array(
    'open' => array(
      0 => '10:00',
      1 => '10:00',
      2 => '10:00',
      3 => '10:00',
      4 => '10:00',
      5 => '10:00',
      6 => '10:00',
    ),
    'close' => array(
      0 => '19:00',
      1 => '19:00',
      2 => '19:00',
      3 => '19:00',
      4 => '19:00',
      5 => '19:00',
      6 => '19:00',
    ),
  );
  $export['ask_vopros_opening_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_right';
  $strongarm->value = '';
  $export['ask_vopros_right'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_secondary_uri';
  $strongarm->value = 'https://adm.biblioteksvagten.dk';
  $export['ask_vopros_secondary_uri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_uri';
  $strongarm->value = 'https://adm.biblioteksvagten.dk';
  $export['ask_vopros_uri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_visibility_pages';
  $strongarm->value = '<front>';
  $export['ask_vopros_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ask_vopros_visibility_type';
  $strongarm->value = 'on';
  $export['ask_vopros_visibility_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cards_supported';
  $strongarm->value = array(
    'Dankort' => 'Dankort',
    'eDankort' => 'eDankort',
    'VISA' => 'VISA',
    'VISA Electron' => 'VISA Electron',
    'Mastercard' => 'Mastercard',
    'JCB' => 0,
    'Diners Club' => 0,
    'American Express' => 0,
    'Maestro' => 'Maestro',
    'Forbrugforeningen' => 0,
    'Danske Netbetaling' => 0,
    'Nordea Sol-E' => 0,
    'SEB' => 0,
    'SHB direktbetaling' => 0,
    'Swedbank direktbetaling' => 0,
    'PayPal' => 0,
    'Bank Einzug' => 0,
    'iDEAL' => 0,
    'Aktia' => 0,
    'OKO' => 0,
    'Sampo' => 0,
    'BankAxess' => 0,
    'Getitcard' => 0,
  );
  $export['cards_supported'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_event_currency_type';
  $strongarm->value = 'Kr';
  $export['ding_event_currency_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_event_frontpage_items_per_page';
  $strongarm->value = '12';
  $export['ding_event_frontpage_items_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_event_frontpage_promoted';
  $strongarm->value = 1;
  $export['ding_event_frontpage_promoted'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_event_list_group_by_date';
  $strongarm->value = 1;
  $export['ding_event_list_group_by_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_event_list_items_per_page';
  $strongarm->value = '16';
  $export['ding_event_list_items_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_ting_frontend_group_holdings_available';
  $strongarm->value = 'open';
  $export['ding_ting_frontend_group_holdings_available'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_wagnerguide_debug';
  $strongarm->value = 0;
  $export['ding_wagnerguide_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_wagnerguide_linkbase';
  $strongarm->value = '{
    "Vej":"http://web.wagnerguide.com/2.0/vejleLibrary.aspx"
}';
  $export['ding_wagnerguide_linkbase'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_wagnerguide_transformation_array_Vej';
  $strongarm->value = '{
    "department_id":{},
    "location_id":{
      "bus":{
        "popup":"Materialet er i BUSSEN - og kan findes frem til dig næste gang bussen er hjemme. Spørg personalet"
      },
      "dagpleje":{},
      "depot":{
        "popup":"Materialet er i DEPOT - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      },
      "kontor":{},
      "magasin":{
        "ignore_mtype":"cdrom,dvd,data",
        "popup":"Materialet er i MAGASIN - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      },
      "magasin1":{
        "ignore_mtype":"data,videoGame",
        "popup":"Se i skuffen under CD-krybben eller spørg personalet"
      },
      "magasin2":{
        "ignore_mtype":"cdrom,dvd,data",
        "popup":"Materialet er i MAGASIN - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      },
      "magasin3":{
        "popup":"Materialet er i MAGASIN - du kan få personalet på Vejle Bibliotek til at hente det til dig"
      }
    },
    "sublocation_id":{
      "sprog":{
        "popup":"Henvend dig til personalet"
      }
   }
}';
  $export['ding_wagnerguide_transformation_array_Vej'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_zerohit_form';
  $strongarm->value = array(
    'installed_webform_id' => '4',
    'webform_id' => '4',
  );
  $export['ding_zerohit_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_integration';
  $strongarm->value = array(
    'toolbar' => 'toolbar',
    'admin_menu' => 'admin_menu',
    'navbar' => 0,
  );
  $export['environment_indicator_integration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gtranslate_da';
  $strongarm->value = '2';
  $export['gtranslate_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gtranslate_flag_size';
  $strongarm->value = '24';
  $export['gtranslate_flag_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gtranslate_look';
  $strongarm->value = 'flags_dropdown';
  $export['gtranslate_look'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gtranslate_main_lang';
  $strongarm->value = 'da';
  $export['gtranslate_main_lang'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gtranslate_new_window';
  $strongarm->value = 1;
  $export['gtranslate_new_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_ding_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'search_result' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser_highlight' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_ding_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:ding_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:24:"panelizer_node:ding_page";s:23:"allowed_layout_settings";a:12:{s:8:"flexible";b:0;s:8:"25_50_25";b:0;s:13:"ding_layout_1";b:0;s:19:"ding2_site_template";b:0;s:6:"onecol";b:1;s:13:"twocol_bricks";b:0;s:14:"twocol_stacked";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:6:"twocol";b:0;s:17:"threecol_25_50_25";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;}s:10:"form_state";N;}';
  $export['panelizer_node:ding_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ignore_words';
  $strongarm->value = 'og,i,jeg,det,at,en,den,til,er,som,paa,de,med,han,af,for,ikke,der,var,mig,sig,men,et,har,om,vi,min,havde,ham,hun,nu,over,da,fra,ud,sin,dem,os,op,man,hans,hvor,eller,hvad,skal,selv,her,alle,vil,blev,kunne,ind,naar,vaere,dog,noget,ville,jo,deres,efter,ned,skulle,denne,end,dette,mit,ogsaa,under,have,dig,anden,hende,mine,alt,meget,sit,sine,vor,mod,disse,hvis,din,nogle,hos,blive,mange,ad,bliver,hendes,vaeret,thi,jer';
  $export['pathauto_ignore_words'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_ding_rolltab';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_ding_rolltab';
  $strongarm->value = 0;
  $export['scheduler_publish_required_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_ding_rolltab';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_ding_rolltab';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_ding_rolltab';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ding_rolltab';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_ding_rolltab';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_ding_rolltab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'terms_of_sale_da';
  $strongarm->value = 'Gebyrer bliver betalt til: Vejle Bibliotekerne, Willy Sørensens Plads 1, 7100 Vejle. E-mail: vejlebib@vejlebib.dk, CVR nr: 29189900.
Når beløbet er indbetalt, er det ikke muligt at annullere overførslen.';
  $export['terms_of_sale_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'terms_of_sale_en';
  $strongarm->value = 'The debt is paid in full to: Vejle Bibliotekerne, Willy Sørensens Plads 1, 7100 Vejle. E-mail: vejlebib@vejlebib.dk, CVR no: 29189900.
Once the fee is paid, it is not possible to cancel the payment.';
  $export['terms_of_sale_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_vejlebib_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'profiles/ding2/themes/vejlebib/images/logo.png',
    'default_favicon' => 1,
    'favicon_path' => '',
    'ting_object_disable_overlay' => 1,
  );
  $export['theme_vejlebib_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_field_search_search_style';
  $strongarm->value = 'extended_with_profiles';
  $export['ting_field_search_search_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_search_form_style';
  $strongarm->value = 'extended';
  $export['ting_search_form_style'] = $strongarm;

  return $export;
}
