(function ($) { 

  "use strict";
  var win = $(window);
  var doc = $(document);

  win.load(function() {
     resizeCard() //Set equal columns to cards
  });

  doc.ready(function() {


  //Add class to discussion and documents
  if ($('*').find('.node-type-conversation').length >0){
    $( ".ui-menu-collaboration-discussion" ).addClass( "active" );  
  }
  if ($('*').find('.node-type-knowledge-object').length >0){
    $( ".ui-menu-collaboration-documents" ).addClass( "active" );
  }
    
  //CARDS
 // Cockade animations for card   

  $('.cockade').hover(function() {
     $(this).next().stop().animate(
         { "max-width": "100%", "padding": "5px 6px 5px 40px" }
        ,'fast');
  }, function() {
     $(this).next().stop().animate(
        { "max-width": "0", "padding": "5px 0" }
        ,'fast');
  });

  // Set card imgs as a background on the link to help responsiveness
  $('.card .feat-img img, .full-width-card .feat-img img').each(function(index, el) {
    var imgSrc = $(this).attr('src');
    var imgHeight = $(this).closest('.feat-img').css('height');

    $(this).parent('a').css({
      'background-image': 'url("' + imgSrc + '")',
      'background-size': 'cover',
      'background-repeat': 'no-repeat',
      'background-position': 'center center' ,
      'height': imgHeight,
      'width': '100%',
      'display': 'inline-block'
    });

    $(this).remove();

  });

  //Add hover on card footer/aside
  $('.card-large-link, .card-full-link, .small-card-link, .sidebar-2 .stat-label, .sidebar-2 .nav li ').hover(function() {
    $(this).find('a , .value').css('color', '#7bb8b2');
  }, function() {
    $(this).find('a , .value').css('color', 'inherit');
  });

  //Move secondary tab page on search below advanced search.
  $('.page-search .nav-tabs').insertAfter('#search-form');

  //Tooltip for publishing a promote idea 
  $('.page-node-edit.node-type-hub .nav a[href="#edit-options"]').tooltip({
    placement: 'right',
    title: 'Please review the publishing options before finalising the promotion of this idea. By default, it will be unpublished and thus not visible on the website.'
  })

  //Change Background and add image to Header on invidual collaborate, challenge and ideas
  $('.full-width-top .container').updateBackgroundHeader();

  //Trigger support/follow event when click on icon
   $('.event a[class^="icon-"], .event a[class*=" icon-"]').click(function(event) {
      event.preventDefault();
      $(this).parent().find('.flag-wrapper a').trigger('click');
      event.stopPropagation();
  });

// Trigger to fire event on div on follow and support event
  var elemToClick = '.follow.event, .follow.event .flag-wrapper, .support.event, .support.event .flag-wrapper ';

  doc.on('click', elemToClick , function(e) {
    if(e.target == this) {
      e.preventDefault();
      $(this).find('a').trigger('click');
    }
  });


  $('.follow.event, .support.event').on('click', '.flag-wrapper a', function(event) {
    event.stopPropagation();
  }); 

 // Fire comment link on cards

  $('.comment').filter('.small-card-link,.card-large-link,.card-full-link').click(function(){    
    event.preventDefault();
    var comment_url = $(this).find('.icon-dialogue').attr('href');
    window.location.href = comment_url;
  }); 

//Links On individual challenge, idea and collaboration pages
//Link Large card ideas
  $(".ideas.card-large-link, .share .stat-label, .mail .stat-label, .sidebar-2 ul li").click(function(){
    event.preventDefault();
    var link = $(this).find('a').attr('href'); 
    window.location.href = link;
  });


  /* FLAG Support/Follow Response */
  doc.bind('flagGlobalAfterLinkUpdate', function(event, data) {

    var status = data.flagStatus; 
    var flagClass = '';
    var flagType = '';
    var cardType = '';


    switch (data.flagName) {
      case 'support_collaboration': //Card on Collaboration page
        flagClass = '.flag-support-collaboration-' + data.contentId;
        flagType = 'support';
        break;

      case 'follow_collaboration': //Card on Collaboration page 
        flagClass = '.flag-follow-collaboration-' + data.contentId;
        flagType = 'follow';
        break;

      case 'challenge_flag': //Individual challenge page
        flagClass = '.flag-challenge-flag-' + data.contentId;
        flagType = 'follow';
        
        break;

      case 'support_idea': //Card on Collaboration page
        flagClass = '.flag-support-idea-' + data.contentId;
        flagType = 'support'
        break;

      case 'following_idea': //Card on Collaboration page
        flagClass = '.flag-following-idea-' + data.contentId;
        flagType = 'follow'; 
        break;
    }

    //Get Card Type
    cardType = getCardType(flagClass);
    iconSupportAndFollowInteraction(flagType, flagClass, status, cardType);  

  });

  // resize breakpoints
  win.on('resize', resizeCard);

});

//Changes flag icons on support/unsupport and follow/unfollow
function iconSupportAndFollowInteraction(flagType, flagClass, flagStatus, cardType) {
  var classSimple = '';
  var classFull = '';
  var valueClass = '';
  var counter = 0;
  var classFlag = 'flagged';

  if (flagType === 'follow') {
    classSimple = 'icon-eye';
    classFull = 'icon-eye-full flagged';

  } else if ( flagType === 'support'  ) {
    classSimple = 'icon-heart';
    classFull = 'icon-heart-full flagged';
  }

  if(cardType == 'sidebar') {
    valueClass = $(flagClass).parent().siblings('.value');
  } else {
    valueClass = $(flagClass).siblings('.value');
  }

  console.log(valueClass);

  var counter =  parseInt( valueClass.first().text() );

  if( flagStatus == 'flagged' ) {
    $(flagClass).siblings('[class^="icon-"]').addClass(classFull);
    valueClass.addClass(classFlag);
    $(flagClass).siblings('[class^="icon-"]').removeClass(classSimple);
    counter =  counter + 1;
  } else {
    $(flagClass).siblings('[class^="icon-"]').addClass(classSimple); 
    $(flagClass).siblings('[class^="icon-"]').removeClass(classFull);
    valueClass.removeClass(classFlag);
    counter =  counter - 1; 
  }    

  valueClass.text( counter );

}  

//Get the card type based on the link type
function getCardType(flagClass){
  var flagParent = $(flagClass).parent();

  if( flagParent.hasClass('sidebar-link') ){
    return 'sidebar';
  } else if( flagParent.hasClass('card-full-link') ){
    return 'card-full';  
  } else if ( flagParent.hasClass('card-large-link') ) {
    return 'card-large';
  } else if ( flagParent.hasClass('card-small-link') ) {
    return 'card-small'
  }  

  return null;
}


//Center large cards
function centerLargeCards() {
  $('.view').each(function(index, el) {
    var largeCard = '.card.large';
    var nCards = $(this).find(largeCard).length;
    console.log('nCards' + nCards);
    
    if( nCards == 1) {
      $(largeCard).css({
        'margin-left': 'auto',
        'margin-right': 'auto',
        'float': 'none'
      });
    } else if ( nCards == 2 ) {
      $(largeCard).first().addClass('col-sm-offset-2');
    }

  });
}

// Resize card on winresize and under 768px for tablet/phones
function resizeCard() {
  var winWidth = win.width(); 
  $('.card.large .content').outerHeight('auto'); 
  
  if( winWidth > 768 ) {
    setCardsHeight();
  }

}

//For Each view, set the highest height to all cards.
function setCardsHeight(){
  $('.view').each(function(index, el) {
    $(this).find('.card.large .content').outerHeight( 
      $(this).find('.card.large .content').equalHeights()  );
  });

}

//Update backgorund headers on challenge/collaborate/ideas
$.fn.updateBackgroundHeader = function () {
  if( $(this).data('background') ){
    var container = $(this);
    var dataBg = container.data('background');
    var dataType = container.data('type');
    var closestFullWidthTop = container.closest('.full-width-top');
    var colorBackground =  '';

    switch(dataType) {
      case 'challenge':
      case 'idea':
        colorBackground = 'linear-gradient(135deg, rgba(74, 56, 88, .9) 0%, rgba(180, 115, 190, .9) 100%)';
        break;
        
      case 'collaborate':
        colorBackground = 'linear-gradient(135deg, rgba(125, 23, 77, .9) 0%, rgba(192, 85, 210, .9) 100%)';
        break;
    }
    
    closestFullWidthTop.
    css('background-image', 'url(" "),' + colorBackground + ', url("' + dataBg + '")');
  }
}

//Stop body scrolling
$.fn.stopBodyScroll =  function() {
  $(this).closest('body').toggleClass('stop-scrolling');
}

//Calculate and assign the same height to the card based on the highest card on the page
$.fn.equalHeights = function() {
  var tallestHeight = 0;
  $(this).each(function(index, el) {
    var height = $(this).outerHeight(true);
    if( height > tallestHeight ){
      tallestHeight = height;
    }  
  });

  return tallestHeight;
};

})(jQuery);
