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
$short_desc ="";
$nid = $message->field_node_ref[$language][0]['target_id'];
$time_ago = format_interval((time() - $message->timestamp) , 1) . t(' ago');
$icon_class = "";
$header_text = "";
$update_type = ""; 

if (!empty($nid)) {
  $node  = node_load($nid);
  $node_alias = drupal_get_path_alias('node/'.$nid);
  $node_link = l($node->title,$node_alias);
  $short_desc =  empty($node->field_tag_line[$language]) ? '' : truncate_utf8($node->field_tag_line[$language][0]['value'], 200, TRUE, TRUE);
  if (!empty($message->field_node_update_type)) {
    $update_type = $message->field_node_update_type[$language][0]['value'];
  }
  $img_url = "";
  if ($node->type == 'idea'){
  	if (!empty($node->field_featured_picture)) {
      $img_url = $node->field_featured_picture[$language][0]['uri'];
	  }
    if (!empty($node->field_challenge_value)) {
	  $tid = $node->field_challenge_value[$language][0]['tid'];
	  $term = taxonomy_term_load($tid); // load term object
	  $term_uri = taxonomy_term_uri($term); // get array with path
	  $term_title = taxonomy_term_title($term);
	  $term_path = $term_uri['path'];
	  $term_link = l($term_title,$term_path);
	}
  }
  if ($node->type == 'idea' && $update_type == 'win'){   // idea is the winning idea

	$header_text = $node_link . " is the winning idea in the challenge ". $term_link;
  $icon_class = 'idea icon-diamond';

	// Markup here

  }
  elseif ($node->type == 'hub' && $update_type =='project') { //collaboration is converted to a project
  	if (!empty($node->field_featured_hub_image)) {
      $img_url = $node->field_featured_hub_image[$language][0]['uri'];
    }

	  $header_text = $node_link . " has become a Project ";
    $icon_class = "icon-todolist-check project";
  }
}

if (!empty($header_text)) {
 print "<div class='card-updates row' >";
        print "<div class='col-sm-1 icon'>";
          print "<i class='icon-star'></i>";
        print "</div>";

        print "<div class='col-sm-11 content '>";
          echo "<p class='resume'>" . $header_text ."</p>";


        if ( !empty($img_url) ) {
          echo "<div class='feat-img'>";
            echo "<a href='".$node_alias . "'> <img class='img-responsive' src='" . image_style_url('medium', $img_url) . "' /></a>";
            echo "<i class='" . $icon_class . "'></i>";
          echo "</div>";

          echo "<div class='info'>";
        }  else { echo "<div class='info no-image'>"; }

            echo "<h3 class='title'>". $node_link ."</h3>";
            echo "<p class='desc'>" . $short_desc ."</p>";
            echo "<p class='time-elapsed'>" . $time_ago . "</p>";
          echo "</div>";
          echo "<div class='clearfix'></div>";
        echo "</div>";

  print "</div>"; // </card-updates>


?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="separator-updates"></div>

</div>
<?php } ?>
