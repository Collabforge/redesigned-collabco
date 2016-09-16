<?php
/*  View of Documents whitin Individual collaboration page 
*
*
*
*/

?>

<div class="documents row">

  <div class="col-xs-2 download">
    <a class="icon-download-folder" title="Download" href="<?php echo $fields['field_ko_file']->content; ?>"></a>    
  </div>

  <div class="col-xs-10 description">
    <?php echo $fields['title']->content; ?>
    <?php echo $fields['body']->content; ?>
  </div>

</div>

