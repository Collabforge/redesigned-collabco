<?php
/**
 * @file
 * Default theme implementation for Collabco Standard Moderator Header block.
 */
global $base_url;
?>

<style>
  #modmenu_title {
    color: white;
    background-color: #474747;
    margin: 0 -999rem;
    text-align: center;
    height: 65px;
    line-height: 65px;
	}
	ul.modmenu_menu {
	    list-style-type: none;
	    margin: 0;
	    padding: 0;
	    overflow: hidden;
	    width: 970px;
	    position: absolute;
	    background-color: #f3f3f3;
	}
	li.modmenu_menu {
	    float: left;
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
	    border: 1px solid #4CAF50;
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
    </style>
  <h1 id="modmenu_title">Moderator Panel</h1>
<div class="square_left"></div><div class="square_right"></div>

	<?php
	$menu_items = array('dashboard','create','edit','view','settings',);
	$menu_display = "";
	foreach ($menu_items as $key=>$value) {
		$active_class = "";

		if(arg(1)==$value){$active_class .= 'active';}
		$menu_display .= "<li class='modmenu_menu'><a href='$value' class='$active_class'>$value</a></li>";
	}
	?>


  <ul class="modmenu_menu">
	<?php print $menu_display; ?>
  </ul>