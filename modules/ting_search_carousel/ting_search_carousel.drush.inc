<?php

/**
 * @file
 * This file implements support for drush into the module.
 */

/**
 * Implements hook_drush_cache_clear().
 *
 * Add a Drush cache clear option for the carousel cache. We do not implement
 * hook_flush_caches() as we only want the selective part and want to avoid our
 * cache being cleared on every "drush cc all" or from the "Clear cached"
 * button in the admin UI.
 */
function ting_search_carousel_drush_cache_clear(&$types) {
  $types['ting_search_carousel'] = 'ting_search_carousel_flush_cache';
}
