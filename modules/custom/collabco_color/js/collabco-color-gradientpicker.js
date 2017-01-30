/**
 * Provides a gradient picker for the widget.
 */
(function ($) {

  "use strict"

  Drupal.behaviors.collabco_color_gradient = {
    attach: function (context) {

      var gradientInput = $('.form-type-collabco-color-gradient-picker input');
      // gradientInput.attr('readonly', true);
      var navMobile = 'nav-mobile';
      var pageChallenge = 'challenge';
      var pageCollaboration = 'collaboration';
      var pageIdeas = 'ideas';
      var myHub = 'my-hub';

      gradientPicker(navMobile);
      gradientPicker(pageChallenge);
      gradientPicker(pageCollaboration);
      gradientPicker(pageIdeas);
      gradientPicker(myHub);

      //Hide input used only for cross-browser compatiblity
      $("[class*=-webkit-gradient]").css('display', 'none');
      $("[class*=background-color]").css('display', 'none');

    }
  }

   function gradientPicker(pageType) {

        // Init Gradient Picker
        var formItemGradient = $(".form-item-" + pageType + "-gradient");
        var formItemGradientInput = $(".form-item-" + pageType + "-gradient input");
        var formItemGradientInputValue = formItemGradientInput.val();
        var formItemGradientWebkitInput =  $("#edit-" + pageType + "-webkit-gradient");
        var formItemGradientBackground = $("#edit-" + pageType + "-background-color");
        
        try {
          //Parse gradient from 
          var gradientParsed = GradientParser.parse(formItemGradientInputValue);
        } catch (e) {
          console.error(e);
        }

        var linearGradientParsed  = getParsedLinearGradient(JSON.stringify(gradientParsed, null, 4));

        formItemGradient.siblings('.grad_ex').gradientPicker({
          change: function(points, styles) {
            formItemGradientInput.val(styles[0]);
            formItemGradientWebkitInput.val('-webkit-' + styles[0]);
            formItemGradientBackground.val(getFirstColor(styles[0]));
            console.log('webkit ejemplo: ' + styles[1]);

            for (var i = 0; i < styles.length; ++i) {
              formItemGradient.siblings('.prev').css("background-image", styles[i]);
            }
          },
          fillDirection: linearGradientParsed.fillDirection,
          controlPoints: linearGradientParsed.controlPoints
        });

  }



  function getParsedLinearGradient(gradientParsed) { 
    var linearGradient = new Object();
    linearGradient.controlPoints = [];

    try {
       var gradientParsed = JSON.parse(gradientParsed);
       var index = 0;


      if( index < gradientParsed.length ) {
        var gradient = gradientParsed[index];

        for(var i = 0; i < gradient.colorStops.length; i++) {
          var colorStops = gradient.colorStops[i];
          var colorType = colorStops.type;
          var color = getColorByColorType(colorType, colorStops);

          if( color ) {
            linearGradient.controlPoints[i] = color + colorStops.length.value + colorStops.length.type;
          }

          if( i == 0 ) {
            linearGradient.firstColor = color; 
          }
        }

        linearGradient.fillDirection = gradient.orientation.value;

        if (gradient.orientation.type == 'angular') {
          linearGradient.fillDirection += 'deg';
        }

      }
    
      return linearGradient;
    }
    catch (e) {
       console.error(e)
    }
  }  


  function getFirstColor(gradient) {

    var gradientParsed = JSON.parse(JSON.stringify(GradientParser.parse(gradient), null, 4));
    var firstColor = '';
    var indexZero = 0;

    if( gradientParsed.length > indexZero ) {
      var colorStops = gradientParsed[indexZero].colorStops[indexZero];
      firstColor = getColorByColorType(colorStops.type, colorStops)
    }
    
    return firstColor;

  }

  function getColorByColorType(colorType, colorStops) {
    var color = '';

    switch(colorType) {
      case 'rgb':
        color = colorType + '(' + colorStops.value[0] + ',' + colorStops.value[1] + ',' + colorStops.value[2] + ') ';
        break;
      case 'rgba':
        color = colorType + '(' + colorStops.value[0] + ',' + colorStops.value[1] + ',' + colorStops.value[2] + ',' + colorStops.value[3] +  ') ';
        break;
    }

    return color;
  }


})(jQuery);
