/**
 * Provides a gradient picker for the widget.
 */
(function ($) {
  Drupal.behaviors.collabco_color_gradient = {
    attach: function (context) {
     

      $('.form-type-collabco-color-gradient-picker input').focusin(function(event) {
        $(this).parent().siblings('.collabco-gradient-picker').show();
        console.log('focus in');
      });

      $('.form-type-collabco-color-gradient-picker input').focusout(function(event) {
        $(this).parent().siblings('.collabco-gradient-picker').hide();
        console.log('focus out');
      });


      // $("#ex1").gradientPicker({
      //   change: function(points, styles) {
      //     for (i = 0; i < styles.length; ++i) {
      //       console.log("background-image", styles[i]);
      //     }
      //   },
      //   fillDirection: "45deg",
      //   controlPoints: ["green 0%", "yellow 50%", "green 100%"]
      // });

    }
  }
})(jQuery);
