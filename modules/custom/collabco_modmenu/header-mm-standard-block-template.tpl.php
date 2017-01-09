<?php
/**
 * @file
 * Default theme implementation for Collabco Standard Moderator Header block.
 */
global $base_url;
  $variables = array(
    'dashboard' => array('name'=>'Dashboard', 'path'=>url('moderator/dashboard'), 'submenu'=>array(),),
    'create' => array('name'=>'Create...', 'path'=>url('moderator/create'), 'submenu'=>array(
      'idea' => array('name'=>'...an idea', 'path'=> url('node/add/idea'),),
      'challenge' => array('name'=>'...a Challenge', 'path'=>url('admin/structure/taxonomy/challenge/add'),),
      'collaboration' => array('name'=>'...a Collaboration', 'path'=> url('node/add/hub'),),
      'user' => array('name'=>'...a user', 'path'=> url('admin/people/create'),),
      'page' => array('name'=>'...a page', 'path'=> url('node/add/basic-page'),),),),
    'edit' => array('name'=>'Edit...', 'path'=>url('moderator/edit'), 'submenu'=>array(
      'idea' => array('name'=>'New idea', 'path'=>url('/node/edit/idea'),),
      'thing' => array('name'=>'New Thing', 'path'=>url('/node/edit/thing'),),),),
    'view' => array('name'=>'View', 'path'=>url('moderator/view'), 'submenu'=>array(
      'member-report' => array('name'=>'Member Report', 'path'=>url('moderator/view/member-report'),),
      'challenge-report' => array('name'=>'Challenge Report', 'path'=>url('moderator/view/challenge-report'),),),),
    'settings' => array('name'=>'Settings', 'path'=>url('moderator/settings'), 'submenu'=>array(
      'challenges' => array('name'=>'Challenges', 'path'=>url('moderator/settings/challenges'),),
      'collaborations' => array('name'=>'Collaborations', 'path'=>url('moderator/settings/collaborations'),),
      'emails' => array('name'=>'Emails', 'path'=>url('moderator/settings/emails'),),
      'labels' => array('name'=>'Labels', 'path'=>url('moderator/settings/labels'),),
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
	    padding: 14px 16px;
	    text-decoration: none;
	    width: 194px;
	}
	li.modmenu_menu a:hover:not(.active){
   		background-color: #ddd;

	}

	li.modmenu_menu a.active {
	    color: white;
	    background-color: #4CAF50;

	}
	.square_left {
	    width: 75px;
	    height: 75px;
	    background-color: #474747;
	    float: left;
	    transform: rotate(45deg);
	    margin-top: -42px;
	    margin-left: -38px;
	}
	.square_right {
	    width: 75px;
	    height: 75px;
	    background-color: #474747;
	    float: right;
	    transform: rotate(45deg);
	    margin-top: -42px;
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


  <ul class="modmenu_menu">
	<?php print $menu_display; ?>
  </ul>
  <div class="reset_space"></div>
  <h1 style="color:black;"><?php print $title; ?></h1>
  <h1 style="color:black; font-size: 20px;"><?php print $subtitle; ?></h1>
