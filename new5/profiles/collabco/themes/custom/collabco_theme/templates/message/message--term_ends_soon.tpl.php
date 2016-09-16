<?php

/**
 * @file
 * Default theme implementation for message entities.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_message()
 * @see template_process()
 */
?>
<?php
$language = LANGUAGE_NONE;
$short_desc = "";
$tid = $message->field_term_ref[$language][0]['tid'];
$time_ago = format_interval((time() - $message->timestamp), 1) . ' ' . t('ago');
$icon_class = "";
$header_text = "";
$img_url = "";

if (!empty($tid)) {
  $days_left = collabco_challenge_days_left($tid);
  if ($days_left == 1){
    $days_left = "challenge closes tomorrow for new ideas";
  } elseif ($days_left == 0) {
    $days_left = "challenge closes today for new ideas";
  }else {
     $days_left = "challenge is closing for new ideas in ". $days_left . " days "; 
  }
  $term = taxonomy_term_load($tid);
  $term_uri = taxonomy_term_uri($term);
  $term_title = taxonomy_term_title($term);
  $term_path = $term_uri['path'];
  $term_link = l($term_title, $term_path);
  $short_desc = truncate_utf8($term->description, 100, TRUE, TRUE);
  if (!empty($term->field_challenge_image)) {
      $img_url = $term->field_challenge_image[$language][0]['uri'];
   }
   $add_idea_link = '/node/add/idea/' . $tid;
   $header_text = $term_link ." ". $days_left . "! Add your idea " .
   l(t('now'), $add_idea_link);

 print "<div class='card-updates row' >"; 
        print "<div class='col-sm-1 icon'>";  
          print "<i class='icon-watch'></i>";
        print "</div>";
        
        print "<div class='col-sm-11 content '>";
          echo "<p class='resume'>" . $header_text ."</p>";


        if ( !empty($img_url) ) { 
          echo "<div class='feat-img'>";
            echo "<a href='" . $term_path . "'> <img class='img-responsive' src='" . image_style_url('medium', $img_url) . "' /></a>";
            echo "<i class='" . $icon_class . "'></i>";
          echo "</div>";  

          echo "<div class='info'>";  
        }  else { echo "<div class='info no-image'>"; } 

            echo "<h3 class='title'>". $term_link ."</h3>";
            echo "<p class='desc'>" . $short_desc ."</p>";
            echo "<p class='time-elapsed'>" . $time_ago . "</p>";
          echo "</div>";
          echo "<div class='clearfix'></div>";  
        echo "</div>";  
      
  print "</div>"; // </card-updates>

} ?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
   <div class="separator-updates"></div>

 </div>
