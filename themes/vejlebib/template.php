<?php

/**
 * @file
 * Template file for Vejlebib sub-theme.
 */

/**
 * Implements hook_preprocess_html().
 */
function vejlebib_preprocess_html(&$vars) {
  // Ensure the search field is shown on vejlebib frontpage. Note that this
  // wouldn't be an issue if ddbasic used drupal_is_front_page() instead of
  // checking for specific path. At this point in the code's life cycle it makes
  // sense to just handle it here in our own sub-theme.
  if (drupal_is_front_page()) {
    $key = array_search('extended-search-is-not-open', $vars['classes_array']);
    if ($key !== FALSE) {
      unset($vars['classes_array'][$key]);
    }
  }
}

/**
 * Implements hook_preprocess_panels_pane().
 */
function vejlebib_preprocess_panels_pane(&$vars) {
  // Add notice icon before title on vejlebib notification panel panes.
  if (isset($vars['pane']->css['css_class']) && $vars['pane']->css['css_class'] === 'vejlebib-notification') {
    $vars['title'] = '<span class="vejlebib-icon-exclamation-circle"></span>' . $vars['title'];
  }
}
