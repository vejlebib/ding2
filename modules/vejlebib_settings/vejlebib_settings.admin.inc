<?php
/**
 * @file
 * Admin page callbacks for the Vejlebib settings module.
 */

function vejlebib_settings_google_site_verification_settings($form, &$form_state) {
	$form['google_site_verification_enable'] = array(
	  '#type' => 'checkbox',
	  '#title' => t('Google site verification'),
	  '#description' => t('Enable/disbale Google site verification.'),
	  '#default_value' => variable_get('google_site_verification_enable', FALSE),
	);
	$form['google_site_verification_key'] = array(
		'#type' => 'textfield',
		'#title' => t('Google site verification key'),
		'#description' => t('The Google site verification key to use in meta-tag.'),
		'#default_value' => variable_get('google_site_verification_key', ''),
	);
	return system_settings_form($form);
}
