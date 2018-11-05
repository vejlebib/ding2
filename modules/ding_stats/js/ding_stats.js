/**
 * Handle posting of event data on page views.
 */

(function($) {

  // Post event data to the backend.
  var eventData = Drupal.settings.dingStats.eventData;
  console.log(eventData);
  $.post(Drupal.settings.basePath + 'ding_stats.php', { data: eventData }, function(result) {
    // Update cookie if the server generated a new session id for us.
    if (result.dingStatsId) {
      var expire =  new Date(new Date().getTime() + 15 * 60 * 1000);
      Cookies.set('dingStatsId', result.dingStatsId, {
        expires: expire
      });
    }
  }, 'json');

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
  });

})(jQuery);
