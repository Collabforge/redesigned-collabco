<?php 

/**
*  SMALL CARDS SLIDESHOW of Contrib
*
*
*/

?>


<?php 

$node_type = $fields['type']->content;
//print_r($node_type);

 if (strpos($node_type,'Idea')!==FALSE) {
 	include($directory."/templates/includes/card-small-slideshow-ideas.php");
 }
  else {
 	include($directory."/templates/includes/card-small-slideshow-collaboration.php");
  //	print("Collaboration");
  }
