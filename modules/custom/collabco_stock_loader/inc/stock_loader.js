
(function ($) {
  var doc = $(document);
  doc.ready(function() {

  $(document).on('click', '.pexel_icon', function() { 
    var imgSrc = $(this).attr('src');
    $("edit-field-featured-hub-image-und-0-filefield-pexels-url").val(imgSrc);
    //alert(imgSrc);
  });

});
})(jQuery);