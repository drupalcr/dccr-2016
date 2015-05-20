(function ($) {
  $(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {
    location.reload();
  });
})(jQuery);
