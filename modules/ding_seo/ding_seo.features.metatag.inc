<?php
/**
 * @file
 * ding_seo.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function ding_seo_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: ting_object:book.
  $config['ting_object:book'] = array(
    'instance' => 'ting_object:book',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'schema_book.@type' => array(
        'value' => 'Book',
      ),
      'schema_book.name' => array(
        'value' => '[ting_object:title]',
      ),
      'schema_book.author' => array(
        'value' => 'a:3:{s:5:"pivot";s:1:"1";s:5:"@type";s:6:"Person";s:4:"name";s:36:"[ting_object:creators_contributers],";}',
      ),
      'schema_book.@id' => array(
        'value' => '[ting_object:ding_seo_work_url]',
      ),
      'schema_book.description' => array(
        'value' => '[ting_object:ting_abstract]',
      ),
      'schema_book.image' => array(
        'value' => 'a:5:{s:5:"@type";s:11:"ImageObject";s:20:"representativeOfPage";s:4:"True";s:3:"url";s:37:"[ting_object:ding_seo_ting_cover:url]";s:5:"width";s:39:"[ting_object:ding_seo_ting_cover:width]";s:6:"height";s:40:"[ting_object:ding_seo_ting_cover:height]";}',
      ),
      'schema_book.url' => array(
        'value' => '[ting_object:ding_seo_work_url]',
      ),
      'schema_book.workExample' => array(
        'value' => 'a:7:{s:5:"@type";s:4:"Book";s:3:"@id";s:27:"[current-page:url:absolute]";s:3:"url";s:27:"[current-page:url:absolute]";s:13:"datePublished";s:18:"[ting_object:year]";s:4:"isbn";s:18:"[ting_object:isbn]";s:11:"bookEdition";s:21:"[ting_object:version]";s:10:"bookFormat";s:34:"[ting_object:ding_seo_book_format]";}',
      ),
    ),
  );

  // Exported Metatag config instance: ting_object:movie.
  $config['ting_object:movie'] = array(
    'instance' => 'ting_object:movie',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'schema_movie.@type' => array(
        'value' => 'Movie',
      ),
      'schema_movie.name' => array(
        'value' => '[ting_object:title]',
      ),
      'schema_movie.@id' => array(
        'value' => '[current-page:url]',
      ),
      'schema_movie.description' => array(
        'value' => '[ting_object:abstract]',
      ),
    ),
  );

  return $config;
}