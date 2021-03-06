

<?php
/**
 * View parked collaborations on parked collaborations page
 *
 * Template file for turned projects in collaboration page view
 *
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */


?>

<div class="row ">
  <div class="breadcrumb-container">
    <ol class="breadcrumb">
      <li><a href="/">Home</a></li>
      <li><a href="/collaborate"><?php echo ucfirst(variable_get('csl_collaborations'));?>s</a></li>
      <li>Parked <?php echo ucfirst(variable_get('csl_collaborations'));?>s</li>
    </ol>
  </div>
</div>

<?php  include ($directory."/templates/includes/row-card.php"); ?>

