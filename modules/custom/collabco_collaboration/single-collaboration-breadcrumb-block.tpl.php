<?php
/**
 * @file
 * Default theme implementation for Single Collaboration Breadcrum block.
 */
if (!empty($group_content_title)) {
  $group_content = node_load(arg(1));
  $group_content_type = $group_content->type;
  if($group_content_type == "conversation") {$group_bc_type = "Discussions";}
  else {$group_bc_type = "Documents";}
}

?>

<!-- Breadcrumbs -->

<header class="clearfix top-view">
<div class="breadcrumb-container">
  <ol class="breadcrumb">
    <li><a href="/">Home</a></li>
    <li><a href="/collaborate"><?php echo ucfirst(variable_get('csl_collaborations'));?></a></li>
    <li><?php echo $collaborate ?></li>
    <?php if (!empty($group_content_title)) { ?>
    <li><a href="/node/<?php echo $nid . "/" . $group_bc_type; ?>"><?php echo $group_bc_type; ?></a></li>
    <li><?php echo $group_content_title ?></li>
    <?php } ?>
  </ol>
</div>
<div class="collaboration-tabs hidden-xs">
 <?php echo $links; ?>
</div>
<div class="collaboration-tabs visible-xs-block">
    <?php echo $mobile_links; ?>
  </div>
</header>
