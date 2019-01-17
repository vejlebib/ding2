/**
 * Handle posting of event data on page views.
 */

(function($) {

  var postEventData = function(eventData) {
    $.post(Drupal.settings.basePath + 'ding_stats.php', { data: eventData }, function(result) {
      // Update cookie if the server generated a new session id for us.
      if (result.dingStatsId) {
        lifetime = Drupal.settings.dingStats.settings.sessionKeepAlive;
        var expire =  new Date(new Date().getTime() + lifetime * 1000);
        Cookies.set('dingStatsId', result.dingStatsId, {
          expires: expire
        });
      }
    }, 'json');
  };

  // Post event data to the backend.
  var eventData = Drupal.settings.dingStats.eventData;
  postEventData(eventData);

  $(function() {
    // Add get parameters to search result links, so that we can record
    // important information of click-through events. For example, what search
    // key triggered the event and what rank, page in search result.
    // It would be prefferable to handle this on the server, but this proved to
    // be very problematic and therefore a client solution was chosen.
    if (eventData.event_type === 'search') {
      var suffix = 'search_key=' + encodeURIComponent(eventData.search_key);
      suffix += '&rank=';

      $('.list-item.search-result').each(function(i, result) {
        // Calculate the total rank of the result taking advantage of the fact
        // that jQuery each return elements in order of appearence.
        // See: https://stackoverflow.com/a/25165306.
        var rank = (eventData.search_page * eventData.search_size) + (i + 1);

        $('a[href^="/ting/object/"], a[href^="/ting/collection/"]', result).each(function() {
          var link = $(this).attr('href');
          var seperator = (link.indexOf('?') != -1) ? '&' : '?';
          $(this).attr('href', link + seperator + suffix + rank);
        });
      });
    }

    // Click-through events.
    if (eventData.event_type == 'ct') {
      // For clicked through events flagged as collections, we need to apply
      // query pararmeters to object links in the collection to tranfer the
      // associated data, if the user clicks through the collection.
      if (eventData.material_type == 'collection') {
        var suffix = 'search_key=' + encodeURIComponent(eventData.search_key);
        suffix += '&rank=' + eventData.rank;
        $('.pane-ting-collection a[href^="/ting/object/"]').each(function() {
          var link = $(this).attr('href');
          var seperator = (link.indexOf('?') != -1) ? '&' : '?';
          $(this).attr('href', link + seperator + suffix);
        });
      }

      // For these following AJAX-interaction the events are created client-side
      // and posted when the interaction takes place.
      var ctActionEventData = {};
      ctActionEventData.event_type = 'cta'; // Click-Through-Action event.
      ctActionEventData.pid = eventData.pid;
      ctActionEventData.search_key = eventData.search_key;
      $('.ting-object .action-button.reserve-button').on('touchstart click', function(e) {
        ctActionEventData.action_type = 'reservation';
        postEventData(ctActionEventData);
      });
      $('.ting-object .ding-list-add-button').on('touchstart click', function(e) {
        ctActionEventData.action_type = 'bookmark';
        postEventData(ctActionEventData);
      });
    }
  });

})(jQuery);
