<?php
/**
 * @file
 * vejlebib_views_panels.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function vejlebib_views_panels_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-information-menu.
  $menus['menu-information-menu'] = array(
    'menu_name' => 'menu-information-menu',
    'title' => 'Information menu',
    'description' => 'A menu placed right under the search bar, intended to hold links to important information for the users of the website.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu placed right under the search bar, intended to hold links to important information for the users of the website.');
  t('Information menu');

  return $menus;
}
