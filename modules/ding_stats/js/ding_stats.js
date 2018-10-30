/**
 * Handle posting of event data on page views.
 */

(function($) {

  // Post event data to the backend.
  var settings = Drupal.settings.dingStats;
  var data = { data: settings };
  $.post(Drupal.settings.basePath + 'ding_stats.php', data, function(result) {
    console.log(result);
    // Update cookie if the server generated a new session id for us.
    if (result.dingStatsId) {
      var expire =  new Date(new Date().getTime() + 15 * 60 * 1000);
      Cookies.set('dingStatsId', result.dingStatsId, {
        expires: expire
      });
    }
  }, 'json');

})(jQuery);
