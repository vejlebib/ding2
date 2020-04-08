<?php

/**
 * @file
 * Admin pages for ting covers default module.
 */

 /**
  * Default covers form callback.
  */
function ting_covers_default_default_covers_form($form, &$form_state) {
  $form['default_covers'] = [
    '#type' => 'fieldset',
    '#title' => t('Default covers'),
    '#tree' => TRUE,
    '#description' => t('Upload and manage default covers.'),
    '#attributes' => [
      'class' => ['ting-covers-default-fieldset'],
    ],
  ];

  $managed_file_common = [
    '#type' => 'managed_file',
    '#process' => [
      'file_managed_file_process',
      'ting_covers_default_file_process',
    ],
    '#upload_location' => 'public://ting_covers_default/',
    '#upload_validators' => [
      'file_validate_extensions' => ['png jpg jpeg'],
      'file_validate_size' => [2 * 1024 * 1024],
    ],
  ];

  // New default cover.
  $form['default_covers']['new'] = [
    '#type' => 'fieldset',
    '#title' => t('Create new'),
  ];
  $form['default_covers']['new']['name'] = [
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#description' => t('Enter the name of the new default cover.'),
    '#default_value' => '',
  ];
  $form['default_covers']['new']['fid'] = [
    '#default_value' => '',
  ] + $managed_file_common;

  // Existing default covers.
  $default_covers = variable_get('ting_covers_default_default_covers', []);

  $form['default_covers']['existing_title'] = [
    '#type' => 'item',
    '#title' => t('Existing default covers'),
  ];

  foreach ($default_covers as $fid => $name) {
    $form['default_covers'][$fid] = [
      '#type' => 'fieldset',
      '#title' => check_plain($name),
      '#collapsible' => TRUE,
    ];
    $form['default_covers'][$fid]['name'] = [
      '#type' => 'textfield',
      '#title' => t('Name'),
      '#description' => t('Enter the name of the new default cover.'),
      '#default_value' => $name,
    ];
    $form['default_covers'][$fid]['fid'] = [
      '#default_value' => $fid,
    ] + $managed_file_common;
  }

  $form['default_covers']['submit'] = [
    '#type' => 'submit',
    '#value' => t('Update'),
  ];

  $path = drupal_get_path('module', 'ting_covers_default');
  $form['#attached']['css'][] = $path . '/ting_covers_default.admin.css';

  return $form;
}

/**
 * Submit callback for default_covers_form.
 */
function ting_covers_default_default_covers_form_submit($form, &$form_state) {
  $default_covers = [];

  foreach ($form_state['values']['default_covers'] as $value) {
    if (!empty($value['fid'])) {
      $image = file_load($value['fid']);

      // New upload; upgrade to permanent and add file usage.
      if ($image->status == 0) {
        $image->status = FILE_STATUS_PERMANENT;
        file_save($image);
        file_usage_add($image, 'ting_covers_default', 'default_cover', 1);

        drupal_set_message(t('Default cover @cover was uploaded and saved.', [
          '@cover' => $image->filename,
        ]));
      }

      $default_covers[$value['fid']] = $value['name'];
    }
  }
  variable_set('ting_covers_default_default_covers', $default_covers);
}

/**
 * Process function for fallback image managed file element.
 *
 * @see file_managed_file_process()
 */
function ting_covers_default_file_process($element, &$form_state, $form) {
  $image = $element['#file'] ? $element['#file'] : FALSE;

  if ($image) {
    // Clean up file usage when removing permanent files. Also disable AJAX
    // funtionality to give better feedback in the UI.
    // When the user is removing a new upload without "saving", the file will
    // be temporaty and we let the faster default AJAX handling take care of
    // deleting the file.
    if ($image->status == FILE_STATUS_PERMANENT) {
      $element['remove_button']['#submit'] = [
        'ting_covers_default_default_cover_remove_submit',
      ];
      unset($element['remove_button']['#ajax']);
      $element['remove_button']['#prefix'] = '<br>';
      $element['remove_button']['#value'] = t('Remove default cover');
    }
    else {
      $element['remove_button']['#value'] = t('Cancel');
      $element['save_button'] = [
        '#prefix' => '<br>',
        '#type' => 'submit',
        '#value' => t('Save'),
        '#weight' => -6,
      ];
    }

    // Show a preview of the image. It's done here to ensure that it's shown
    // right after AJAX upload.
    $element['preview'] = [
      '#type' => 'markup',
      '#markup' => theme('image_style', [
        'path' => $image->uri,
        'style_name' => 'ding_list_small',
        'attributes' => [
          'class' => 'preview',
        ],
      ]),
      '#weight' => -40,
      '#suffix' => '<br>',
    ];
  }
  else {
    $element['upload_button']['#prefix'] = '<br>';
  }

  return $element;
}

/**
 * Submit callback for remove button on permanent files.
 */
function ting_covers_default_default_cover_remove_submit() {
  // A fancy way to get the triggering remove button element.
  // see: file_managed_file_submit()
  $parents = $form_state['triggering_element']['#array_parents'];
  array_pop($parents);
  $element = drupal_array_get_nested_value($form, $parents);

  $image = $element['#file'];
  file_usage_delete($image, 'ting_covers_default', 'default_cover', 1);
  file_delete($image);

  // Remove the default cover from our array.
  $default_covers = variable_get('ting_covers_default_default_covers', []);
  $name = $default_covers[$image->fid]['name'];
  unset($default_covers[$image->fid]);
  variable_set('ting_covers_default_default_covers', $default_covers);

  drupal_set_message(t('Default cover @name (!filename) was deleted.', [
    '@name' => $name,
    '!filename' => $image->filename,
  ]));
}

/**
 * Default covers mappping form callback.
 */
function ting_covers_default_mapping_form($form, &$form_state) {
  $form['mapping'] = [
    '#type' => 'fieldset',
    '#title' => t('Default covers mapping'),
  ];
  $form['mapping']['description'] = [
    '#type' => 'item',
    '#title' => t('Map material types to default covers.'),
  ];

  $material_types = variable_get('ting_well_types', _ting_fetch_well_types());
  $default_covers = variable_get('ting_covers_default_default_covers', []);
  $defautl_cover_options = [t('- None -')] + $default_covers;

  $rows = [];
  $row_elements = [];
  $index = 0;
  foreach ($material_types as $material_type) {
    $row = [];

    $row[]['data'] = [
      // Material type label. We use internal value for the value of type below.
      '#markup' => check_plain($material_type),
    ];
    $default_cover = ting_covers_default_get_default_cover($material_type);
    $row[]['data'] = [
      '#type' => 'select',
      '#title' => t('Default cover'),
      '#title_display' => 'invisible',
      '#options' => $defautl_cover_options,
      '#default_value' => $default_cover ? $default_cover : 0,
      '#parents' => ['mappings', $index, 'default_cover'],
    ];

    $row_elements[$index] = [
      'default_cover' => &$row[1]['data'],
      'material_type' => [
        '#type' => 'value',
        '#value' => $material_type,
        '#parents' => ['mappings', $index, 'material_type'],
      ],
    ];

    $rows[$index] = ['data' => $row];

    $index++;
  }

  $header = [
    t('Material type'),
    t('Default cover'),
  ];
  $form['mapping']['mappings'] = [
    '#theme' => 'table',
    // The row form elements need to be processed and build, therefore pass
    // them as element children.
    'elements' => $row_elements,
    '#header' => $header,
    '#rows' => $rows,
  ];

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Update'),
  ];

  return $form;
}

/**
 * Submit callback for default covers mappping form.
 */
function ting_covers_default_mapping_form_submit($form, &$form_state) {
  $mappings = [];

  foreach ($form_state['values']['mappings'] as $mapping) {
    $material_type = $mapping['material_type'];
    $default_cover = $mapping['default_cover'];

    if ($default_cover) {
      if (!isset($mappings[$default_cover])) {
        $mappings[$default_cover] = [];
      }
      $mappings[$default_cover][] = $material_type;
    }
  }

  variable_set('ting_covers_default_default_covers_mappings', $mappings);
}
