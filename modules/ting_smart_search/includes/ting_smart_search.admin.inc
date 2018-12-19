<?php

/**
 * @file
 * Admin related backend.
 */

/**
 * Admin page menu callback.
 *
 * @return array
 *   Admin form.
 */
function ting_smart_search_admin_page() {
  $output = '';

  $output = drupal_get_form('ting_smart_search_admin_form');

  return $output;
}

/**
 * Admin settings form for basic smart search function.
 */
function ting_smart_search_admin_form($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Smart search settings'),
  );

  $form['settings']['ting_smart_search_active_toggle'] = array(
    '#title' => t('Show smart search'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('ting_smart_search_active_toggle', 0),
    '#required' => FALSE,
    '#description' => t('Toggle whether smart searches are displayed or not.'),
  );

  $form['well_index_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Well index'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['well_index_settings']['ting_smart_search_well_index_records'] = array(
    '#title' => t('Well index records'),
    '#type' => 'textarea',
    '#default_value' => variable_get('ting_smart_search_well_index_records', "term.acSource\nterm.creator\nterm.date\nterm.language\nterm.type\nterm.identifier\nterm.subject\nfacet.dk5"),
    '#required' => FALSE,
    '#description' => t('Indtast hvert brøndindeks på ny linie.'),
  );

  $form['webtrekk_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Webtrekk account settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['webtrekk_settings']['ting_smart_search_webtrekk_customerid'] = array(
    '#title' => t('Webtrekk customerId'),
    '#type' => 'textfield',
    '#default_value' => variable_get('ting_smart_search_webtrekk_customerid', 0),
    '#required' => FALSE,
    '#description' => t('The customer Id for the webtrekk account.'),
  );

  $form['webtrekk_settings']['ting_smart_search_webtrekk_customerlogin'] = array(
    '#title' => t('Webtrekk customer login'),
    '#type' => 'textfield',
    '#default_value' => variable_get('ting_smart_search_webtrekk_customerlogin', ''),
    '#required' => FALSE,
    '#description' => t('The customer login for the webtrekk account.'),
  );

  $form['webtrekk_settings']['ting_smart_search_webtrekk_customerpassword'] = array(
    '#title' => t('Webtrekk customer password'),
    '#type' => 'textfield',
    '#default_value' => variable_get('ting_smart_search_webtrekk_customerpassword', ''),
    '#required' => FALSE,
    '#description' => t('The customer password for the webtrekk account.'),
  );

  $form['compile_stats'] = array(
    '#type' => 'fieldset',
    '#title' => t('Compile statistics'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['compile_stats']['submit_stats'] = array(
    '#value' => t('Compile statfiles'),
    '#type' => 'submit',
    '#submit' => array('ting_smart_search_compilestats_form_submit'),
  );

  $form['compile_stats']['submit_placing'] = array(
    '#value' => t('Compile placings'),
    '#type' => 'submit',
    '#submit' => array('ting_smart_search_compileplacings_form_submit'),
  );


  return system_settings_form($form);
}

/**
 * A form for executing python script compilestats.py to calculate and prepare
 * a file for importing hitscores for search terms
 */
function ting_smart_search_compilestats_form($form, &$form_state) {
  $form = array();

  $form['submit'] = array(
    '#value' => t('Compile statfiles'),
    '#type' => 'submit',
  );

  return $form;
}

function ting_smart_search_compilestats_form_submit($form, &$form_state) {
  drupal_set_message('Kapow!');
  drupal_set_message($_SERVER["SCRIPT_FILENAME"]);
  $command = escapeshellcmd('python /var/www/drupal7vm/drupal/web/'.drupal_get_path('module', 'ting_smart_search').'/extras/compilestats.py');
  $return_value = shell_exec($command);
  drupal_set_message($command);
  drupal_set_message($return_value);
}

function ting_smart_search_compileplacings_form_submit($form, &$form_state) {
  drupal_set_message('Placings being compiled');
  drupal_set_message($_SERVER["SCRIPT_FILENAME"]);
  $command = escapeshellcmd('python /var/www/drupal7vm/drupal/web/'.drupal_get_path('module', 'ting_smart_search').'/extras/compilestats_placing.py');
  $return_value = shell_exec($command);
  drupal_set_message($command);
  drupal_set_message($return_value);
}
