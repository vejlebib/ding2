<?php
/**
 * @file
 * vejlebib_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function vejlebib_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer adresse';
  $fe_block_boxes->format = 'ding_wysiwyg';
  $fe_block_boxes->machine_name = 'footer_adresse';
  $fe_block_boxes->body = '<p>Vejle Bibliotekerne</p><p>Willy Sørensens Plads 1 - 7100 Vejle</p><p><a href="tel:+4576813200">76 81 32 00</a></p><p><a href="mailto:vejlebib@vejlebib.dk">vejlebib@vejlebib.dk</a></p>';

  $export['footer_adresse'] = $fe_block_boxes;

  return $export;
}
