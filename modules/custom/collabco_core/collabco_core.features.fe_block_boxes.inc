<?php
/**
 * @file
 * collabco_core.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function collabco_core_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Library new item header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->uid = NULL;
  $fe_block_boxes->timestamp = NULL;
  $fe_block_boxes->machine_name = 'aboutpagetitle';
  $fe_block_boxes->body = '<div class="content">
<h1>CREATE NEW LIBRARY ITEM</h1>

<p>To create a library item to share with Idea Team Members and fellow Idea Challenge visitors, enter a succinct title and description. You can then either share a link to an online resource or attach a file.</p>
</div>
';

  $export['aboutpagetitle'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bottom logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->uid = NULL;
  $fe_block_boxes->timestamp = NULL;
  $fe_block_boxes->machine_name = 'bottom_logo';
  $fe_block_boxes->body = '<div class="row">
<div class="span4">
<p><img alt="Innovation Xchange" src="/sites/default/themes/flip_theme/img/InnovationX-change-footer.png" target="_blank" /></p>
</div>

<div class="span4">
<center><a href="http://www.dfat.gov.au/" target="_blank" title=" Department of Foreign Affairs and Trade"><img alt="Australian Goverment  - Department of Foreign Affairs and Trade" src="/sites/default/themes/flip_theme/img/gov-logo-footer.png" /></a></center>
</div>

<div class="span4">
<p class="footer-right"><a href="http://www.dfat.gov.au/aid/Pages/australias-aid-program.aspx" target="_blank" title="Australias Aid program"><img alt="Australian Aid" src="/sites/default/themes/flip_theme/img/australian-aid-logo-footer.png" /></a>&nbsp;</p>
</div>
</div>

<p><a class="twitter-follow-button" data-show-count="false" data-show-screen-name="false" data-size="large" href="https://twitter.com/dfat_iXc">Follow @dfat_iXc</a> <script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+\'://platform.twitter.com/widgets.js\';fjs.parentNode.insertBefore(js,fjs);}}(document, \'script\', \'twitter-wjs\');</script></p>';

  $export['bottom_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Challenges header block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->uid = NULL;
  $fe_block_boxes->timestamp = NULL;
  $fe_block_boxes->machine_name = 'challenges';
  $fe_block_boxes->body = '<div class="challenges-item header-block">
<div class="content row">
<div class="title span9"><a href="#">IDEAS 2.0</a><a> </a></div>
<a> </a>

<div class="stats span3">
<ul>
	<li><a>45 draft ideas</a></li>
	<li><a>102 submitted ideas</a></li>
	<li><a>123 comments</a></li>
	<li><a>206 likes</a></li>
	<li><a>567 active staff</a></li>
</ul>
</div>
<a> </a><a> </a>

<ul class="info-links span12">
	<li>
	<ul>
		<li><a>Submit your ideas before 4 June</a></li>
		<li><a href="#">See full timelines</a></li>
	</ul>
	</li>
</ul>
</div>
</div>
';

  $export['challenges'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header of Ideas Page';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->uid = NULL;
  $fe_block_boxes->timestamp = NULL;
  $fe_block_boxes->machine_name = 'hubs_header';
  $fe_block_boxes->body = '<div class="title_text container">
<div class="row-fluid">
<div class="topic_index_intro span12">
<h1>Archive of First Ideas Challenge (2015)</h1>
<p>Here you will find an archive of the 392 ideas submitted during the first Ideas Challenge in 2015.</p>
<center><a class="customer-underline-blue" href="/challenges">See the 2016 Challenge Page</a></center>
</div>
</div>

<div class="container">
<div class="row">
<div class="span12">
<?php
$block = block_load(\'quicktabs\', \'ideas_browse_page\');
$render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
$output = render($render_array);
print $output;
?>
</div>
</div>
</div>';

  $export['hubs_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Library Header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->uid = NULL;
  $fe_block_boxes->timestamp = NULL;
  $fe_block_boxes->machine_name = 'library_header';
  $fe_block_boxes->body = '<div class="title_text container">
<div class="row-fluid">
<div class="header-icon span1"><i class="icon-4x icon-archive">&nbsp;</i></div>

<div class="topic_index_intro span7">
<h1>Library</h1>

<p>The Library is a collection of both files &amp; resources as well as Stories, Patterns, Frameworks and Approaches. The buttons below allow you to filter the library items.</p>
</div>

<div class="topic_host span4">
<h3>Submit a library Item</h3>

<p>Got something to show? Click the button below to submit a new item.</p>
<a class="btn btn-success" href="/node/add/knowledge-object">Submit library item</a></div>
</div>
</div>
';

  $export['library_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Show Hide Registration';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->uid = NULL;
  $fe_block_boxes->timestamp = NULL;
  $fe_block_boxes->machine_name = 'show_hide_register';
  $fe_block_boxes->body = '<p><span style="font-family: Montserrat, sans-serif; font-size: 1.25rem; line-height: 1.25rem; color: rgb(26, 42, 55);">Registration is currently only open to DFAT members. Do you have a pre-approved or DFAT email address?</span></p>

<p>&nbsp;</p>

<table>
	<tbody>
		<tr>
			<td><h2>YES, I\'m ready to create my account (continue down the page)</h2></td>
			<td><a href="../contact-us"><input class="orangebutton" style="height:50px;" type="button" value="NO, I would like to be notified of future opportunities to participate" /></a></td>
		</tr>
	</tbody>
</table>
';

  $export['show_hide_register'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shows a follow button to users on content';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->uid = NULL;
  $fe_block_boxes->timestamp = NULL;
  $fe_block_boxes->machine_name = 'sidebar_follow';
  $fe_block_boxes->body = '<?php 
  $flag_html =  flag_create_link(\'follow\', arg(1));
  if (!empty($flag_html)) {
    print "<a class=\'\'>$flag_html</a>";
  }
?>';

  $export['sidebar_follow'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header of Main Topics page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->uid = NULL;
  $fe_block_boxes->timestamp = NULL;
  $fe_block_boxes->machine_name = 'topics_header';
  $fe_block_boxes->body = '<div class="title_text container">
<div class="row-fluid">
<div class="header-icon span1"><i class="icon-4x icon-comments-alt">&nbsp;</i></div>

<div class="topic_index_intro span7">
<h1>Discussions</h1>

<p>Epic Collaboration\'s Discussion feature is an open forum for conversations on anything related to collaboration, the site and more.</p>
</div>

<div class="topic_host span4">
<h3>Host a Discussion</h3>

<p>Have a conversation you want to get started? Click the button below!</p>
<a class="btn btn-success" href="/node/add/conversation">Create a new discussion</a></div>
</div>
</div>
';

  $export['topics_header'] = $fe_block_boxes;

  return $export;
}
