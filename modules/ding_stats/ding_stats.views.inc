<?php

/**
 * @file
 * Views-hook implementations.
 */

/**
 * Implements hook_views_data().
 *
 * TODO: Add field metadata for ct events.
 */
function ding_stats_views_data() {
  $data = [];

  $data['ding_stats_event']['table'] = [
    'group' => t('Ding stats'),
    'base' => [
      'field' => 'id',
      'title' => t('Ding stats base events'),
      'help' => t('Contains the base definition for ding stats events.'),
    ],
  ];

  $data['ding_stats_search_event']['table'] = [
    'group' => t('Ding stats'),
    'base' => [
      'field' => 'id',
      'title' => t('Ding stats search events'),
      'help' => t('Contains Ding stats search event definitions.'),
    ],
  ];

  $data['ding_stats_ct_event']['table'] = [
    'group' => t('Ding stats'),
    'base' => [
      'field' => 'id',
      'title' => t('Ding stats click-through events'),
      'help' => t('Contains Ding stats click-through event definitions.'),
    ],
  ];

  // Relationships.
  $data['ding_stats_event']['search'] = [
    'title' => t('Search event'),
    'help' => t('Connect base events with search events.'),
    'relationship' => [
      'base' => 'ding_stats_search_event',
      'base field' => 'id',
      'field' => 'id',
      'handler' => 'views_handler_relationship',
      'label' => t('Search event'),
      'title' => t('Search event'),
      'help' => t('Connect base events with search events.'),
    ],
  ];
  $data['ding_stats_event']['ct'] = [
    'title' => t('Click-through event'),
    'help' => t('Connect base events with click-through events.'),
    'relationship' => [
      'base' => 'ding_stats_ct_event',
      'base field' => 'id',
      'field' => 'id',
      'handler' => 'views_handler_relationship',
      'label' => t('Click-through event'),
      'title' => t('Click-through event'),
      'help' => t('Connect base events with click-through events.'),
    ],
  ];

  // Base fields.
  $data['ding_stats_event']['id'] = [
    'title' => t('Event ID'),
    'help' => t('The primary database ID of the event.'),
    'field' => [
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ],
    'filter' => [
      'handler' => 'views_handler_filter_numeric',
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];
  $data['ding_stats_event']['sid'] = [
    'title' => t('Event session ID'),
    'help' => t('Session ID for the event.'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  $data['ding_stats_event']['count'] = [
    'title' => t('Event count'),
    'help' => t('The number of times the event has been recorded in the session.'),
    'field' => [
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ],
    'filter' => [
      'handler' => 'views_handler_filter_numeric',
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];
  $data['ding_stats_event']['event_start'] = [
    'title' => t('Event start time'),
    'help' => t('The time of the first request of the event.'),
    'field' => [
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort_date',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_date',
    ],
  ];
  $data['ding_stats_event']['event_end'] = [
    'title' => t('Event end time'),
    'help' => t('The time of the last request of the event.'),
    'field' => [
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort_date',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_date',
    ],
  ];

  // Search event fields.
  $data['ding_stats_search_event']['id'] = [
    'title' => t('Event ID'),
    'help' => t('The primary database ID of the event.'),
    'field' => [
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ],
    'filter' => [
      'handler' => 'views_handler_filter_numeric',
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];
  $data['ding_stats_search_event']['search_key'] = [
    'title' => t('Search key'),
    'help' => t('The search key of the search event.'),
    'field' => [
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
    'filter' => [
      'handler' => 'views_handler_filter_string',
    ],
    'argument' => [
      'handler' => 'views_handler_argument_string',
    ],
  ];
  $data['ding_stats_search_event']['facet_used'] = [
    'title' => t('Facet used'),
    'help' => t('Whether the UI-facets was used during this search event.'),
    'field' => [
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ],
    'filter' => [
      'handler' => 'views_handler_filter_boolean_operator',
      'type' => 'yes-no',
      'use equal' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];
  $data['ding_stats_search_event']['profile_used'] = [
    'title' => t('Profile used'),
    'help' => t('Whether search profiles was used during this search event.'),
    'field' => [
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ],
    'filter' => [
      'handler' => 'views_handler_filter_boolean_operator',
      'type' => 'yes-no',
      'use equal' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];
  $data['ding_stats_search_event']['sort_changed'] = [
    'title' => t('Sort changed'),
    'help' => t('Whether the sorting method was changed during this search event.'),
    'field' => [
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ],
    'filter' => [
      'handler' => 'views_handler_filter_boolean_operator',
      'type' => 'yes-no',
      'use equal' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];
  $data['ding_stats_search_event']['size_changed'] = [
    'title' => t('Size changed'),
    'help' => t('Whether the search result size was changed during this search event.'),
    'field' => [
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ],
    'filter' => [
      'handler' => 'views_handler_filter_boolean_operator',
      'type' => 'yes-no',
      'use equal' => TRUE,
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];
  $data['ding_stats_search_event']['page_max'] = [
    'title' => t('Page max'),
    'help' => t('The maximum pagination achived during this search event.'),
    'field' => [
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ],
    'filter' => [
      'handler' => 'views_handler_filter_numeric',
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];
  $data['ding_stats_search_event']['size_max'] = [
    'title' => t('Size max'),
    'help' => t('The maximum search size achived during this search event.'),
    'field' => [
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ],
    'filter' => [
      'handler' => 'views_handler_filter_numeric',
    ],
    'sort' => [
      'handler' => 'views_handler_sort',
    ],
  ];

  return $data;
}
