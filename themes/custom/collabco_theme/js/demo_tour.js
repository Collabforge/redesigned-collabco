
function home_ride_callback(index, tip) {
  window.location.href = "/myhub";
}

function challenge_ride_callback(index, tip){
  console.log("Challege post function called");
  window.location.href = "/challenge/brainstorm";
}
function single_idea_ride_callback(index, tip) {
  window.location.href = "/collaborate";
}

function post_ride_callback(index, tip) {
console.log(window.location.href);	
var redirect_url ="";
  if (window.location.href.indexOf("myhub") > -1) {
    redirect_url = "/challenge";
  }	else if (window.location.href.indexOf("challenge/brainstorm") > -1) {
  	//redirect_url = "/idea/create-design-thinking-toolkit";
  	redirect_url = "/idea/test-idwerasdf";
  } else if (window.location.href.indexOf("collaborate") > -1) {
  	redirect_url = "/collaboration/test-collaboration";
  }
  if (redirect_url !="") {
  	window.location.href = redirect_url;
  }	  
}



