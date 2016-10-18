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
$icon_class = "";
$short_desc ="";
$img_url = "";
$term_link = "";
$nid = $message->field_node_ref[$language][0]['target_id']; 
$time_ago = format_interval((time() - $message->timestamp) , 1) . t(' ago');

//print_r($time_ago);
if (!empty($nid)) {
  $node  = node_load($nid);
  $node_alias = drupal_get_path_alias('node/'.$nid);
  $node_link = l($node->title,$node_alias); 
  $icon_class  = ""; 
  $header_text ="";
  $short_desc =  empty($node->body[$language]) ? '' : truncate_utf8($node->body[$language][0]['value'], 200, TRUE, TRUE);
  if ($node->type =='knowledge_object' || $node->type == 'conversation')
	{
	  if (!empty($node->og_group_ref)){
		  $gid =  $node->og_group_ref[$language][0]['target_id']; 
		  $group_node = node_load($gid);
		  $group_alias = drupal_get_path_alias('node/'.$gid);
		  $group_link = l($group_node->title,$group_alias);
		}

		if ($node->type =='knowledge_object' ) {
			$icon_class = "icon-upload-folder";
			$header_text = $node_link . " has been uploaded to " . $group_link;

		} else if ($node->type =='conversation') {
			 $icon_class = "icon-dialogue-think";
			 $header_text = "A new discussion has been added to ". $group_link;
		}

	} else if ($node->type == 'hub') {

	  if (!empty($node->field_idea[$language][0])) {
        $idea_nid = reset($node->field_idea[$language][0]); // 'target_id'
        if ($idea_node = node_load($idea_nid)) { 
          $idea_alias = drupal_get_path_alias('node/'.$idea_nid);
  		  $idea_link = l($idea_node->title, $idea_alias);          
          $header_text = $idea_link . " has become a Co-Lab " ;
        }             
      } 
      else {
      	 $header_text = $node_link . " has become a Co-Lab " ;
      }
	}

	switch ($node->type) {
		case 'idea':		
			$short_desc =  empty($node->field_tag_line[$language]) ? '' : truncate_utf8($node->field_tag_line[$language][0]['value'], 200, TRUE, TRUE);
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

		  print "<div class='card-updates row' >";	
				print "<div class='col-sm-1 icon'>";  
					print "<i class='icon-plus'></i>";
				print "</div>";
				
				print "<div class='col-sm-11 content '>";
					echo "<p class='resume'>A new idea has been added to the challenge ". $term_link ."</p>"; 

				if ( !empty($img_url) )	{
					echo "<div class='picture'>";
						echo "<a href='".$node_alias . "'> <img class='img-responsive' src='" . image_style_url('medium', $img_url) . "' /></a>";
						echo "<i class='idea icon-diamond'></i>";
					echo "</div>";	

					echo "<div class='info'>";
				}	 else { echo "<div class='info no-image'>"; }
							 
						echo "<h3 class='title'>". $node_link ."</h3>";
						echo "<p class='desc'>" . $short_desc ."</p>";
						echo "<p class='time-elapsed'>" . $time_ago . "</p>";
					echo "</div>";
					echo "<div class='clearfix'></div>";	
				echo "</div>";	
			
			print "</div>"; // </card-updates>
	
		break;

		case 'knowledge_object' : // for Document	
			print "<div class='card-updates row' >";	
				print "<div class='col-sm-1 icon'>";  
					print "<i class='" . $icon_class . "'></i>";
				print "</div>";
				
				print "<div class='col-sm-11 content'>";
				  echo "<p class='resume'>" . $header_text . "</p>";  
				  echo "<p class='time-elapsed'>" . $time_ago . "</p>";
				print "</div>"; 
			print "</div>"; // </card-updates>
		break;

		case 'conversation' : // for Discussion
			print "<div class='card-updates discussions row' >";	
				print "<div class='col-sm-1 icon'>";  
					print "<i class='" . $icon_class . "'></i>";
				print "</div>";
				
				print "<div class='col-sm-8 content'>";
				  echo "<p class='resume'>" . $header_text . "</p>";  
					echo "<p class='desc'>\"" . $short_desc ."...\"</p>";
					echo "<a class='read-more' href='" .$node_alias  ."'>read more</a>";
					echo "<p class='time-elapsed'>" . $time_ago . "</p>";
				print "</div>";	
				print "<div class='col-sm-3 author clearfix'>";
					$author = user_load($node->uid);
					$picture = theme('user_picture', array('account' => $author));
			  		echo $picture;
			  	echo "<div class='author'>";	
			  		$author_name = theme('username', array('account' => $author));
						echo $author_name;
					echo "</div>";	
				print "</div>"; 
			print "</div>"; // </card-updates>
		
		break;

		case 'hub' : // for collaboration
		 $short_desc =  empty($node->field_tag_line[$language]) ? '' : truncate_utf8($node->field_tag_line[$language][0]['value'], 200, TRUE, TRUE);
		 $icon_class = "collaboration icon-compress";
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
		break;
	}
}
?>

<div class="<?php print $classes; ?> clearfix" <?php print $attributes; ?> >

	<div class="separator-updates"></div>
   

</div>
 
