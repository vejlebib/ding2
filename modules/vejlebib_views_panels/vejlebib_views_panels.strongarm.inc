<?php
/**
 * @file
 * vejlebib_views_panels.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vejlebib_views_panels_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'vejlebib_frontpage';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
