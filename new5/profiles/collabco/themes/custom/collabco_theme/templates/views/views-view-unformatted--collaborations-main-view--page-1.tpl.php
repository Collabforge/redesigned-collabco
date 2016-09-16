

<?php
/**
 * Template file for featured-collaboration page view
 *
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<div class="row">
  <div class="breadcrumb-container">
    <ol class="breadcrumb">
      <li><a href="/">Home</a></li>
      <li><a href="/collaborate">Collaborate</a></li>
      <li>Featured Co-Labs</li>
    </ol>
  </div>

  <?php foreach ($rows as $id => $row):?>
      <?php print $row; ?>
  <?php endforeach; ?>
</div>
