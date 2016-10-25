document.addEventListener("DOMContentLoaded", function(event) {
    document.getElementById('input_val').onkeyup = function(event) {
        var str = document.getElementById("input_val").value;
        if (window.XMLHttpRequest) {
            xmlhttp=new XMLHttpRequest();
        } else {
            xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
        }
        xmlhttp.onreadystatechange=function() {
            if (xmlhttp.readyState==4 && xmlhttp.status==200) {
                  document.getElementById("created").innerHTML=xmlhttp.responseText;
                    // document.getElementById('pexels').onclick = function() {
                    //     alert("h");
                    //     storeURL()};


                    // function storeURL() {
                    //     document.getElementById("edit-field-featured-hub-image-und-0-filefield-remote-url").value = document.getElementById("pexels").src;
                    // }
            }
        }
        xmlhttp.open("GET","/profiles/collabco/modules/custom/collabco_stock_loader/inc/call.php?input_val="+str,true);
        xmlhttp.send();
    }


});


(function ($) {
  var doc = $(document);
  doc.ready(function() {

  $(document).on('click', '.pexel_icon', function() { 
    var imgSrc = $(this).attr('src');
    $("#edit-field-featured-hub-image-und-0-filefield-remote-url").val(imgSrc);
    //alert(imgSrc);
  });

});
})(jQuery);



