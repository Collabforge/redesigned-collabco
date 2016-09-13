/* Mobile menu slide */

(function ($) {	
  "use strict";
  var win = $(window);
  var doc = $(document);

  doc.ready(function($) {
  	var nav = $("nav.slider-mobile");
  	var overlay = $('.overlay');
  	var leftNav = nav.css('left');

  	$('#nav-hamburger').click(function(e) {
  		e.preventDefault();
  		openNavAndOverlay();
  	});

  	$('#nav-mobile-close, .overlay').click(function(e) {
  		e.preventDefault();
  		closeNavAndOverlay();
  	});

  	//Display sideNav and  overlay
  	function openNavAndOverlay() {
  	  overlay.css('display', 'block');
  	  overlay.animate({
  	  	opacity: '1' 
  	  }, 100)

  	  nav.animate({
  	    left: '0'
  	  }, 150); 

      //Disable scroll for background page
      $('body').addClass('stop-scrolling');
	  }
	 
  	//Hide sideNav and overlay
  	function closeNavAndOverlay(){
  	  overlay.css({
  	  	display: 'none',
  	  	opacity: '0'
  	  });

  	  nav.animate({
  	   left: leftNav
  	    }, 200); 
      
       //Enable scroll for background page
      $('body').removeClass('stop-scrolling');
  	}
  	
  });

})(jQuery);
