<?php

/**
 * @file
 * Optimized entry point for data collection with minimal Drupal bootstrap.
 */

// Root directory of Drupal installation.
define('DRUPAL_ROOT', getcwd());

// Load the files we need manually.
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
require_once DRUPAL_ROOT . '/includes/common.inc';
require_once DRUPAL_ROOT . '/includes/module.inc';
require_once DRUPAL_ROOT . '/includes/unicode.inc';

drupal_bootstrap(DRUPAL_BOOTSTRAP_VARIABLES);

drupal_load('module', 'ding_stats');
ding_stats_callback();
