

<?php
/**
 * Turned project view on collaborate page
 *
 * Template file for turned projects in collaboration page view
 *
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<div class="row">
  <?php foreach ($rows as $id => $row): ?>
      <?php print $row; ?>
  <?php endforeach; ?>
</div>
