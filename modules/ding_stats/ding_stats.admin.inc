<?php

/**
 * @file
 * Administration form builder and handlers.
 */

/**
 * Ding stats admin settings form builder.
 */
function ding_stats_admin_settings_form($form, &$form_state) {
  $form = [];

  $ips = implode(', ', variable_get('ding_stats_excluded_ips', []));
  $form['ding_stats_excluded_ips'] = [
    '#type' => 'textfield',
    '#title' => t('Exclude IPs'),
    '#description' => t('Enter a comma-separated list of IPs to be excluded from event recording.'),
    '#default_value' => $ips,
  ];

  $form = system_settings_form($form);

  $form['#validate'][] = 'ding_stats_admin_settings_form_validate';
  $form['#submit'][] = 'ding_stats_admin_settings_form_submit';

  return $form;
}

/**
 * Validate handler for ding stats admin settings form.
 */
function ding_stats_admin_settings_form_validate($form, &$form_state) {
  //dpm($form_state['values']);
  $ips = explode(',', $form_state['values']['ding_stats_excluded_ips']);
  foreach ($ips as $ip) {
    if (filter_var(trim($ip), FILTER_VALIDATE_IP) === FALSE) {
      form_set_error('ding_stats_excluded_ips', t('Invalid IP in list.'));
    }
  }
}

/**
 * Submit handler for ding stats admin settings form.
 */
function ding_stats_admin_settings_form_submit($form, &$form_state) {
  $ips = explode(',', $form_state['values']['ding_stats_excluded_ips']);
  $ips = array_map('trim', $ips);
  variable_set('ding_stats_excluded_ips', $ips);
}
