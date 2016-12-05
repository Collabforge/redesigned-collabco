<?php
/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */

global $user;

$userp = user_load(arg(1));
$term_names = array();
if (!empty($userp->field_key_skills[LANGUAGE_NONE])) {
  foreach ($userp->field_key_skills[LANGUAGE_NONE] as $key => $value) {
    $term_names[] = taxonomy_term_load($value['tid'])->name;
  }
}
$key_skills = implode(', ', $term_names);
if ($key_skills == ', ') {$key_skills = '';}

if(isset($user->roles[3]) || $user->uid == 1) {
  $edit_path = '/user/'. $userp->uid .'/edit/account';
  $edit_profile_url = url($edit_path);
  $hide_edit_profile_url = FALSE;
} else {
  $hide_edit_profile_url = TRUE;
}
list($first_name, $last_name) = collabco_login_user_names(user_load($userp->uid));

if(arg(1) != $user->uid) {
?>
<style>
.page-user #block-collabco-myhubs-myhub-links.profile-menu li.ui-menu-myhub-profile a {
    background-color: white;
    color: #757575;
}
</style>
<?php }?>

<div class="profile row"<?php print $attributes; ?>>

  <div class="profile-picture col-sm-2">
    <?php print render($user_profile['user_picture']); ?>
   <!--  <a class="icon-image" href="#">Upload new photo</a>
    <a class="icon-trash-bin" href="#">Remove photo</a> -->
    <?php if ($hide_edit_profile_url == FALSE) { ?>
    <a class='icon-setting-2' href=<?php echo $edit_profile_url; ?>>Edit <?php print $first_name;?>'s Profile</a>
    <?php } ?>
  </div>

  <div class="profile-other col-sm-10">

    <div class="title">
      <h3>Personal Details</h3>
    </div>

    <div class="details row">
      <div class="info col-sm-6">
        <div><?php print render($user_profile['field_full_name']); ?></div>
        <div><div class="field field-name-field-key-skills field-type-taxonomy-term-reference field-label-above"><div class="field-label">Key skills:&nbsp;</div><div class="field-items"><?php echo $key_skills; ?></div></div></div>
      </div>
      <div class="bio col-sm-6">
        <?php print render($user_profile['field_bio']); ?>
      </div>
    </div> <!-- /details -->
  </div>  <!-- /profile-other -->
  
</div>  <!-- /profile -->
<div id="contributions">
<?php print views_embed_view('your_contrib', 'your_contrib', arg(1)); ?>
</div>
<div id="contributions_mobile">
<?php print views_embed_view('your_contrib', 'mobile_block', arg(1)); ?>
</div>
<?php  
  $idea_badges = 0;
  $collab_badges = 0;
  $args = array(arg(1));
  if ($view = views_get_view('profile_badges')) {
    $ideas_output = $view->preview('idea_badges', $args);
    $idea_badges = $view->total_rows;
  }
  if ($view = views_get_view('profile_badges')) {
    $collab_output = $view->preview('collab_badges', $args);
    $collab_badges = $view->total_rows;
  }
  if ($idea_badges > 0 || $collab_badges > 0) {  ?>
  <div class="user-badges">
  <h2 class="block-title">INNOVATION ACHIEVEMENTS</h2>
  <div id="idea_badges">
  <?php print $ideas_output; ?>
  </div>
  <div id="collab_badges">
  <?php print $collab_output; ?>
  </div>
  </div>
<?php } ?>







