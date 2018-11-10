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

  $timings = drupal_map_assoc(array(
     900,
     1800,
     3600,
     7200,
     18000,
     43200,
     86400,
   ), 'format_interval');

  $form['ding_stats_session_keep_alive'] = [
    '#type' => 'select',
    '#title' => t('Session keep-alive time'),
    '#description' => t('Select the amount of time a session should be kept alive. When this times is exceeded before recieving a new request in the session, all the events that was recorded during the session are also ended, as they will not be updated on new requests from the same client. Be sure not to set it too low, to allow the user to use a reasonable time between event updates. If set to high, the likeleness of it being the same user decreases (obviously), and it may be more appropiate to start a new session. One hour should be a good middle ground and it is also the default, but it may not be appropiate for some usage patterns. Note that changing this value requires a cache clear to take effect.'),
    '#options' => $timings,
    '#default_value' => variable_get('ding_stats_session_keep_alive', 3600),
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
