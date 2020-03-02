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
  $types['ting_search_carousel'] = 'ting_search_carousel_cache_clear_all';
}

/**
 * Implements hook_drush_command().
 */
function ting_search_carousel_drush_command() {
  $commands = [];

  $commands['ting-search-carousel-list-searches'] = [
    'description' => 'List all configured carousel searches.',
    'aliases' => ['tsc-ls'],
    'drupal dependencies' => ['ting_search_carousel'],
    'outputformat' => [
      'default' => 'table',
      'pipe-format' => 'list',
      'field-labels' => [
        'variant_name' => 'Variant machine-name',
        'variant_title' => 'Variant',
        'title' => dt('Title'),
        'activated' => dt('Activated'),
        'cache_status' => dt('Cache status'),
      ],
      'output-data-type' => 'format-table',
    ],
  ];
  $commands['ting-search-carousel-warmup-all'] = [
    'description' => 'Warmup all configured carousels using Drush batches.',
    'options' => [
      'clear' => 'Clear all carousel cache data before warming up.',
    ],
    'aliases' => ['tsc-wa'],
    'drupal dependencies' => ['ting_search_carousel'],
  ];

  return $commands;
}

/**
 * Drush command callback: get list of all carousel searches.
 */
function drush_ting_search_carousel_list_searches() {
  $searches = ting_search_carousel_get_carousel_searches();

  $rows = array_map(function($search) {
    $row = [];
    $row['title'] = $search['title'];
    $row['variant_title'] = $search['variant_title'];
    $row['variant_name'] = $search['variant_name'];
    $row['activated'] = $search['activated'] ? dt('Yes') : dt('No');

    $query = ting_search_carousel_get_query_object($search);
    $cache_data = ting_search_carousel_get_search_cache($query);
    if ($cache_data && !empty($cache_data['pool'])) {
      $row['cache_status'] = dt('!count entities in cache', [
        '!count' => count($cache_data['pool']),
      ]);
    }
    else {
      $row['cache_status'] = dt('No cache data');
    }

    return $row;
  }, $searches);

  if (version_compare(DRUSH_VERSION, '6.0', '<')) {
    drush_print_table($rows, TRUE);
  }
  return $rows;
}

/**
 * Drush command callback: warmup all carousel search caches.
 */
function drush_ting_search_carousel_warmup_all() {
  if (drush_get_option('clear')) {
    ting_search_carousel_cache_clear_all();
  }

  $searches = ting_search_carousel_get_carousel_searches();

  if (empty($searches)) {
    drush_log(dt('There are no carousel searches in the system to clear. Aborting operation.'), 'ok');
  }

  // Ensure we can iterate the searches numerically.
  $searches = array_values($searches);

  $batch = [
    'operations' => [
      ['ting_search_carousel_warmup_batch', [$searches]],
    ],
    'finished' => 'ting_search_carousel_warmup_batch_finished',
    'title' => t('Ting search carousel search cache warmup'),
    'init_message' => t('Starting cache warmup...'),
    'progress_message' => t('Warming up carousel search cache...'),
    'error_message' => t('There was an error during cache warmup. Check error message and logs.'),
  ];

  batch_set($batch);

  drush_backend_batch_process();
}

/**
 * Warmup carousel search cache batch operation callback.
 */
function ting_search_carousel_warmup_batch($searches, &$context) {
  // Initialize if first run.
  if (empty($context['sandbox'])) {
    $context['sandbox']['warmup_count'] = 0;
    $context['sandbox']['total'] = count($searches);
  }

  $warmup_count = &$context['sandbox']['warmup_count'];
  $total = $context['sandbox']['total'];

  // Warmup next carousel search.
  $search = $searches[$warmup_count];
  $query = ting_search_carousel_get_query_object($search);
  $result = ting_search_carousel_warmup_cache($query);

  ++$warmup_count;

  $message = t('!warmup_count / !warmup_total searches inspected. Found !count / !total entities with cover for @title.', [
    '!count' => count($result['entities']),
    '!total' => TING_SEARCH_CAROUSEL_CHUNK_SIZE,
    '@title' => $search['title'],
    '!warmup_count' => $warmup_count,
    '!warmup_total' => $total,
  ]);

  $context['message'] = $message;

  $context['finished'] = $warmup_count / $total;
}

/**
 * Warmup carousel search cache batch finished callback.
 */
function ting_search_carousel_warmup_batch_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('Carousel search cache warmup finished without errors.'));
  }
  else {
    drupal_set_message(t('Carousel search cache warmup finished with errors.'));
  }
}
