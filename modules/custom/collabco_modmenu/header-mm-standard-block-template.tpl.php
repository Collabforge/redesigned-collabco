<?php
/**
 * @file
 * Default theme implementation for Collabco Standard Moderator Header block.
 */
global $base_url;
  $variables = array(
    'dashboard' => array('name'=>'<i class="icon-home">&nbsp;</i> Dashboard', 'path'=>url('moderator/dashboard'), 'submenu'=>array(),),
    'create' => array('name'=>'<i class="icon-plus">&nbsp;</i> Create', 'path'=>'#', 'submenu'=>array(
      'idea' => array('name'=>'Idea', 'path'=> url('node/add/idea'),),
      'challenge' => array('name'=>'Challenge', 'path'=>url('admin/structure/taxonomy/challenge/add'),),
      'collaboration' => array('name'=>'Collaboration', 'path'=> url('node/add/hub'),),
      'user' => array('name'=>'User', 'path'=> url('admin/people/create'),),
      'page' => array('name'=>'Page', 'path'=> url('node/add/basic-page'),),
    ),),
    'edit' => array('name'=>'<i class="icon-setting-1">&nbsp;</i> Edit', 'path'=>'#', 'submenu'=>array(
      'content' => array('name'=>'Content', 'path'=>url('/admin/content'),),
      'files' => array('name'=>'Files', 'path'=>url('/admin/content/file'),),
      'comments' => array('name'=>'Comments', 'path'=>url('/admin/content/comment'),),
      'featured-collaborations' => array('name'=>'Featured Collaborations', 'path'=>url('/admin/structure/nodequeue/1/view/1'),),
    ),),
    'view' => array('name'=>'<i class="icon-eye">&nbsp;</i> View', 'path'=>'#', 'submenu'=>array(
      'member-report' => array('name'=>'Member Report', 'path'=>url('admin/reports/member-report'),),
      'challenge-report' => array('name'=>'Challenge Report', 'path'=>url('admin/reports/challenge-report'),),
    ),),
    'settings' => array('name'=>'<i class="icon-setting-2">&nbsp;</i> Settings', 'path'=>'#', 'submenu'=>array(
      'challenges' => array('name'=>'Challenges', 'path'=>url('admin/config/collabco-settings/challenge'),),
      'collaborations' => array('name'=>'Collaborations', 'path'=>url('admin/config/collabco-settings/collaboration'),),
      'emails' => array('name'=>'Emails', 'path'=>url('admin/config/collabco-settings/email'),),
      'labels' => array('name'=>'Labels', 'path'=>url('admin/config/collabco-settings/labels'),),
      ),
    ),
    );
?>

<style>
  #modmenu_title {
    color: white;
    background-color: #474747;
    margin: 0 -100%;
    text-align: center;
    height: 65px;
    line-height: 65px;
	}
	ul.modmenu_menu {
	    list-style-type: none;
	    margin: 0;
	    padding: 0;
	    /*overflow: hidden;*/
	    width: 970px;
	    position: absolute;
	}
	li.modmenu_menu {
	    float: left;
      background-color: #f3f3f3;
	}

	li.modmenu_menu a  {
	    display: block;
	    color: #666;
	    text-align: center;
	    padding: 12px 16px 16px;
	    text-decoration: none;
	    width: 194px;
      text-transform: uppercase;
	}
	li.modmenu_menu a:hover:not(.active){
   		background-color: #ddd;

	}

	li.modmenu_menu a.active {
	    color: white;
	    background-color: #4CAF50;

	}

  li.modmenu_menu a i {
    position: relative;
    top: 4px;
  }

	.square_left {
	    width: 75px;
	    height: 75px;
	    background-color: #474747;
	    float: left;
	    transform: rotate(45deg);
	    margin-top: -40px;
	    margin-left: -38px;
	}
	.square_right {
	    width: 75px;
	    height: 75px;
	    background-color: #474747;
	    float: right;
	    transform: rotate(45deg);
	    margin-top: -40px;
	    margin-left: 933px;
	    z-index: -1;
	    position: absolute;
	}
	ul li .dropdown-content {
		display:none;
    position: relative !important;
    background-color: #f3f3f3;
    margin-left: -40px;
    z-index: 1;
  }
  .dropdown-content a{
  	color: black;
    padding: 12px 16px;
    text-decoration: none;
    display: block;
    text-align: left;
  }
  .reset_space {
  	padding-bottom: 50px;
  }


.dc-create:hover .sdc-create {display: block;}
.dc-edit:hover .sdc-edit {display: block;}
.dc-view:hover .sdc-view {display: block;}
.dc-settings:hover .sdc-settings {display: block;}
</style>

<h1 id="modmenu_title">Moderator Panel</h1>
<div class="square_left"></div><div class="square_right"></div>

<?php
$menu_items = $variables;
$menu_display = "";
$subtitle = "";
foreach ($menu_items as $key=>$value) {
	$active_class = "";
  foreach ($value['submenu'] as $sub_key=>$sub_value) {
    if(url(current_path()) == $sub_value['path']){$active_class .= 'active'; $title = $value['name'];}
  }
	if(url(current_path()) == $value['path']){$active_class .= 'active'; $title = $value['name'];}
	$menu_display .= "<li class='modmenu_menu dc-".$key."'><a href='".$value['path']."' class='$active_class'>".$value['name']."</a>";
	$menu_display .= "<ul>";
	foreach ($value['submenu'] as $sub_key=>$sub_value) {
		$active_class_sdc = "";
		if(url(current_path()) == $sub_value['path']){$active_class_sdc .= 'active'; $subtitle = $sub_value['name'];}
		$menu_display .= "<li class='dropdown-content sdc-".$key."'	><a href='".$sub_value['path']."' class='$active_class_sdc'>".$sub_value['name']."</a>";
	}
	$menu_display .= "</ul>";
  $menu_display .= "</li>";
	$val2 = "";
}
?>

<?php

if(!isset($title)){
  if(drupal_get_title() == FALSE || drupal_get_title() == "Content") {
    $i = 0; while(arg($i)){$i++;} $i--;
    $title = ucfirst(arg($i));
  } else {
    $title = drupal_get_title();
  }
}
?>

<ul class="modmenu_menu">
<?php print $menu_display; ?>
</ul>
<div class="reset_space"></div>
<h1 style="color:black; font-size: 20px; text-transform:uppercase;"><?php print $subtitle; ?></h1>
