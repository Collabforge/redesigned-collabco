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
  $nid = $message->field_node_ref[$language][0]['target_id']; 
  $time_ago = format_interval((time() - $message->timestamp) , 1) . t(' ago');
  $cid = $message->field_comment_ref[$language][0]['target_id'];
  $header_text = "";

  if (!empty($nid) && !empty($cid)) {
	$node  = node_load($nid);
	$node_alias = drupal_get_path_alias('node/'.$nid);
	$node_link = l($node->title,$node_alias);
   	$comment = comment_load($cid);
   	$short_desc = truncate_utf8($comment->comment_body[$language][0]['value'], 100, TRUE, TRUE);
  	$comment_id = 'comment-'.$cid;
  	$author = user_load($comment->uid);
	  $picture = theme('user_picture', array('account' => $author));
  	$author_name = theme('username', array('account' => $author));
  	$comment_link = l("view comment", $node_alias,array('fragment'=>$comment_id,));

    if (!empty($message->field_parent_comment_ref)) // reply to the comment 
    {
		  $header_text =  $author_name . " replied to comment on " . $node_link;
    }else 
    {
    	$header_text =  "A new comment has been added to " . $node_link;
    }

    print "<div class='card-updates comments row' >";  
    print "<div class='col-sm-1 icon'>";  
    print "<i class='icon-dialogue-think'></i>";
    print "</div>";
        
    print "<div class='col-sm-8 content'>";
          echo "<p class='resume'>" . $header_text . "</p>";  
          echo "<p class='desc'>\"" . $short_desc ."...\"</p>";
          echo "<a class='read-more' href='" .$node_alias  ."'>view comment</a>";
          echo "<p class='time-elapsed'>" . $time_ago . "</p>";
        print "</div>"; 
        print "<div class='col-sm-3 author clearfix'>";
        $picture = theme('user_picture', array('account' => $author));
            echo $picture;
          echo "<div class='author'>";  
            $author_name = theme('username', array('account' => $author));
            echo $author_name;
          echo "</div>";  
        print "</div>"; 
      print "</div>"; // </card-updates>
   }

?>



<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
   <div class="separator-updates"></div>

 </div>
