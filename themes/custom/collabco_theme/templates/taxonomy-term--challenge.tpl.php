<?php

/**
 * @file
 * Default theme implementation to display a term.
 *
 * Available variables:
 * - $name: (deprecated) The unsanitized name of the term. Use $term_name
 *   instead.
 * - $content: An array of items for the content of the term (fields and
 *   description). Use render($content) to print them all, or print a subset
 *   such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $term_url: Direct URL of the current term.
 * - $term_name: Name of the current term.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - taxonomy-term: The current template type, i.e., "theming hook".
 *   - vocabulary-[vocabulary-name]: The vocabulary to which the term belongs to.
 *     For example, if the term is a "Tag" it would result in "vocabulary-tag".
 *
 * Other variables:
 * - $term: Full term object. Contains data that may not be safe.
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $page: Flag for the full page state.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the term. Increments each time it's output.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_taxonomy_term()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="top-challenge">

<header class="challenge-status clearfix">
    <!-- Breadcrumbs -->
    <div class="breadcrumb-container">
      <ol class="breadcrumb">
        <li><a href="/">Home</a></li>
        <li><a href="/challenge">Challenge</a></li>
        <li><?php echo $term_name ?></li>
      </ol>
    </div>
  <div class="status">
    Status: <span class="open"><?php print collabco_challenge_status_string($term); ?></span>
    <?php
      if (!collabco_challenge_is_brainstorm($term) && collabco_challenge_is_open($term)) {
        $date_range = $term->field_start_date[LANGUAGE_NONE][0];
        if (!empty($date_range['value2'])) {
          print t('Closes') . ': ' . date('d M Y \a\t g:i a', $date_range['value2']);
        }
      }
    ?>
  </div>
</header>
</div>

<div class="row">
  <div  id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> col-sm-8">

    <?php if (!$page): ?>
      <h2><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
    <?php endif; ?>
    <div class="content">
    <?php
       print render($content['name']);
       print render($content['description']); ?>
    </div>
     <div id="ideas">
    <?php
    $label  = collabco_challenge_status_string($term->tid);
      if ($label == 'Open' || $label == 'Ongoing') { ?>
    <div class="create-idea-btn">
      <p>Have an idea? Create it now.</p>

      <a class="colorbox-node btn btn-default" href="/node/add/idea/<?php print $term->tid; ?>?width=600&height=600">Create an idea</a>
    </div>
    <?php }
      if ($label == 'Closed') { ?>
    <div class="create-idea-btn">
      <p>The Challenge has now ended and is not accepting new ideas.</p>
    </div>
    <?php } if ($label == 'Judging') { ?>
    <div class="create-idea-btn">
      <p>The Challenge is currently in the judging phase and is not accepting new ideas.</p>
    </div>
    <?php } ?>
    </div>
  </div>

<?php
global $base_url;
$share_content = "mailto:?subject=Sharing&nbsp;a&nbsp;Challenge&body=Hi,%0DI&nbsp;found&nbsp;this&nbsp;challenge&nbsp;and&nbsp;thought&nbsp;you&nbsp;might&nbsp;like&nbsp;it&nbsp;%0D" . $base_url . $term_url;
$counts = flag_get_counts('taxonomy_term', $term->tid);
$follow  = empty($counts['challenge_flag']) ? 0 : $counts['challenge_flag'];


$user_flags = flag_get_user_flags('taxonomy_term',$term->tid);
$follow_flag  = FALSE;
if (array_key_exists('challenge_flag', $user_flags)){
  $follow_flag = TRUE;
}
$follow_count_classes = $follow_flag?'value flagged':'value';
$follow_classes = $follow_flag?'icon-eye-full flagged':'icon-eye'; ?>


<div class="sidebar-2 col-sm-4">
  <div class="region-sidebar-second">
    <h2 class="block-title">like this challenge?</h2>

      <div class="sidebar-stats">
          <div class="share stat clearfix">
            <div class="stat-label sidebar-link clearfix">
              <a href=<?php echo $share_content;?>><?php echo t('Share') ?></a>
              <a href="<?php echo $share_content;?>><?php echo t('Share') ?>" class="icon-share"></a>
            </div>
          </div>
          <div class="follow stat clearfix">
            <div class='<?php echo $follow_count_classes ?>'><?php print $follow ?></div>
            <div class="stat-label event sidebar-link clearfix">
              <?php print flag_create_link('challenge_flag', $term->tid); ?>
             <a href="#" class='<?php echo $follow_classes ?>'></a>
            </div>
          </div>
      </div>


        <?php if (!empty($term->field_sponser[LANGUAGE_NONE][0]['target_id'])) {
        $user = user_load($term->field_sponser[LANGUAGE_NONE][0]['target_id']); ?>
        <h2>challenge sponsor</h2>
        <div class="team">
          <?php $picture = theme('user_picture', array('account' => $user));
          echo $picture; ?>
          <a class="username" href="#"><?php echo theme('username', array('account' => $user)); ?></a>
        </div>
        <?php } ?>

  </div>
</div>
