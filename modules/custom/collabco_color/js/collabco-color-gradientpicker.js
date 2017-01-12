/**
 * @file
 * Javascript for Farbtastic collabco_color widget.
 */

/**
 * Provides a farbtastic colorpicker for the widget.
 */
(function ($) {
  Drupal.behaviors.collabco_color = {
    attach: function (context) {
     

      $('.form-type-collabco-color-gradientpicker input').focusin(function(event) {
        $(this).parent().siblings('.collabco_color-gradient-picker').show();
        console.log('focus in');
      });

      $('.form-type-collabco-color-gradientpicker input').focusout(function(event) {
        $(this).parent().siblings('.collabco_color-gradient-picker').hide();
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
