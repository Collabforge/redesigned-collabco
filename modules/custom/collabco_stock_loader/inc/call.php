<?php
include("simple_html_dom.php");

if(empty($_GET['input_val'])) {
  echo "Please enter a value.";

} else {
  $input_val = $_GET['input_val'];




  $html = file_get_html('https://www.pexels.com/search/'.$input_val);
  //print($html);

  foreach($html->find('h3') as $notfound) {
    if ($notfound->plaintext == "Sorry, no pictures found! Here are some search tips:") {
      echo "No pictures found.";
    }
  }


  // foreach($html->find('img') as $element) {
  //   echo "<img src='".$element->src."'>" . '<br>';
  // }

  $i=1;
  foreach($html->find('article.photo-item') as $article) {

      $item['title']   = $article->find('a', 0)->title;
      $item['src']     = $article->find('img', 0)->src;
      $image_id = "pexel_".$i;
      echo "<img id=" . $image_id ." class='pexel_icon' width='100px' height='100px' src='".$article->find('img', 0)->src."'>";
      $articles[] = $item;
      $i++;
   }

  //echo json_encode($articles);

  // print "<pre>";
  // print_r($articles);

}
