<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
 global $base_url;
?>
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.7&appId=1739665082950644";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<header id="navigation" role="banner">
  <div class="desktop-header hidden-xs <?php print $container_class; ?>">
    <div class="row">
      <div id="brand" class="col-sm-2 hidden-xs">
        <a class="logo" text="Logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
             <img src="<?php echo $base_url; ?>/profiles/collabco/themes/custom/collabco_theme/assets/img/logo-collabco.jpg" alt="Logo Collabco"/>
           </a>
      </div>

    <?php if (!empty($primary_nav) || !empty($page['nav_actions'])): ?>
      <nav role="navigation-primary" class="col-sm-7 col-md-7 primary-nav">
          <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
          <?php endif; ?>
      </nav>
      <nav role="navigation-secondary" class="col-sm-3 secondary-nav">
        <?php if (!empty($page['nav_search'])): ?>
          <div class="search">
            <?php print render($page['nav_search']);?>
          </div>
         <?php endif; ?>
         <?php if (!empty($page['nav_actions'])): ?>
            <div class="nav-actions"><?php print render($page['nav_actions']);?></div>
          <?php endif; ?>
      </nav>

    <?php endif; ?>
    </div>
  </div>
  <div class="mobile-header container-fluid visible-xs-block">
    <div class="row ">
      <div class="nav-mobile col-xs-3">
        <a href="#" id='nav-hamburger' class="icon-hamburguer"></a>
      </div>
     <div id="brand" class="col-xs-6">
        <a class="logo" text="Logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php echo $base_url; ?>/profiles/collabco/themes/custom/collabco_theme/assets/img/logo.jpg" alt="Logo"/>
        </a>

      </div>
        <div class="search col-xs-3">
          <a href="/search" class="icon-magnifier"></a>
        </div>
    </div>
  </div>


</header>

<div class="overlay"></div>



<nav class='slider-mobile visible-xs-block'>
  <?php if (!empty($page['nav_actions_mobile'])): ?>
    <div class="nav-actions-mobile">
      <?php print render($page['nav_actions_mobile']); ?>
    </div>
  <?php endif; ?>

    <?php if (!empty($primary_nav)): ?>
      <?php print render($primary_nav); ?>
    <?php endif; ?>
    <footer>
      <div class="logo"><img class="mobile-logo" src="<?php echo $base_url; ?>/profiles/collabco/themes/custom/collabco_theme/assets/img/logo.png" alt="Logo"/>
      </div>
      <p class="copyright">© Copyright 2016. <br/></p>
    </footer>
</nav>


<?php if (!empty($page['content_top'])): ?>
  <div class="content-top">

    <div class="<?php print $container_class; ?>">
      <?php print render($page['content_top']); ?>
    </div>
  </div>
<?php endif; ?>


<?php if (!empty($page['full_width_top'])): ?>
  <div class="full-width-top">
      <?php print render($page['full_width_top']); ?>
  </div>
<?php endif; ?>

<?php if (!empty($page['content_upper'])): ?>
  <div class="content-upper">
    <div class="<?php print $container_class; ?>">
      <?php print render($page['content_upper']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>

<div class="main-container">
  <div class="<?php print $container_class; ?>">
    <header role="banner" id="page-header">
      <?php if (!empty($site_slogan)): ?>
        <p class="lead"><?php print $site_slogan; ?></p>
      <?php endif; ?>

      <?php print render($page['header']); ?>
    </header> <!-- /#page-header -->

    <div class="row">

      <?php if (!empty($page['sidebar_first'])): ?>
        <aside class="col-sm-4" role="complementary">
          <?php print render($page['sidebar_first']); ?>
        </aside>  <!-- /#sidebar-first -->
      <?php endif; ?>

      <section <?php print $content_column_class; ?>>
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
        <?php endif; ?>


        <?php print render($title_prefix); ?>
        <?php print render($title_suffix); ?>


        <?php print $messages; ?>
        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php  if (!drupal_is_front_page()) {
                  print render($page['content']);
                }?>
        </section>
      <?php if (!empty($page['sidebar_second_top'])): ?>
        <aside class="col-sm-5 col-md-4 sidebar-1" role="complementary">
          <?php print render($page['sidebar_second_top']); ?>
        </aside>  <!-- /#sidebar-second-top -->
      <?php endif; ?>
      <?php if (!empty($page['sidebar_second'])): ?>
        <aside class="col-sm-5 col-md-4 sidebar-2" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
      <?php endif; ?>

    </div>
  </div>

</div>

<?php if (!empty($page['content_middle'])): ?>
  <div class="content-middle">
    <div class="<?php print $container_class; ?>">
      <?php print render($page['content_middle']); ?>
    </div>
  </div>
<?php endif; ?>


<?php if (!empty($page['content_lower'])): ?>
  <div class="content-lower">
    <div class=" <?php print $container_class; ?>">
      <?php print render($page['content_lower']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($page['content_bottom'])): ?>
  <div class="content-bottom">
    <div class=" <?php print $container_class; ?>">
      <?php print render($page['content_bottom']); ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($page['full_width_bottom'])): ?>
  <div class="full-width-bottom">
      <?php print render($page['full_width_bottom']); ?>
  </div>
<?php endif; ?>



<?php if (!empty($page['footer-1-col']) || !empty($page['footer-2-col'])): ?>
<footer class="footer">
  <div class="<?php print $container_class; ?>">
    <div class="row">
      <?php if (!empty($page['footer-1-col'])): ?>
        <div class="col-sm-6 footer-1-col">
          <?php print render($page['footer-1-col']); ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['footer-2-col'])): ?>
        <div class="col-sm-6 footer-2-col copyright">
          <?php print render($page['footer-2-col']); ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
</footer>
<?php endif; ?>
<?php drupal_add_js($base_url.'/profiles/collabco/themes/custom/collabco_theme/js/script.js', array('type' => 'file', 'scope' => 'footer')); ?>
</div> <!-- End of .wrapper div, the beggining of this div can be found on html.tpl.php -->

