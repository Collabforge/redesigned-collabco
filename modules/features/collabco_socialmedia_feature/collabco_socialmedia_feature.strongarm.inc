<?php
/**
 * @file
 * collabco_socialmedia_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function collabco_socialmedia_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_debug';
  $strongarm->value = 1;
  $export['hybridauth_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_destination';
  $strongarm->value = '';
  $export['hybridauth_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_destination_error';
  $strongarm->value = '';
  $export['hybridauth_destination_error'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_disable_username_change';
  $strongarm->value = 1;
  $export['hybridauth_disable_username_change'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_display_name';
  $strongarm->value = '[user:hybridauth:firstName] [user:hybridauth:lastName]';
  $export['hybridauth_display_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_duplicate_emails';
  $strongarm->value = '1';
  $export['hybridauth_duplicate_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification';
  $strongarm->value = '0';
  $export['hybridauth_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name]. You need to confirm your e-mail address by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and activate your account.

After that, you will be able to log in at [site:login-url] using your [user:hybridauth:provider] account.

--  [site:name] team';
  $export['hybridauth_email_verification_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name]';
  $export['hybridauth_email_verification_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_forms';
  $strongarm->value = array(
    'user_login_block' => 'user_login_block',
    'user_login' => 0,
    'user_register_form' => 0,
    'comment_form' => 0,
  );
  $export['hybridauth_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_override_realname';
  $strongarm->value = 0;
  $export['hybridauth_override_realname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_pictures';
  $strongarm->value = 1;
  $export['hybridauth_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_providers';
  $strongarm->value = array(
    'Facebook' => 'Facebook',
    'AOL' => 0,
    'Foursquare' => 0,
    'Google' => 0,
    'LinkedIn' => 0,
    'Live' => 0,
    'MySpace' => 0,
    'OpenID' => 0,
    'Twitter' => 0,
    'Yahoo' => 0,
    'px500' => 0,
    'Disqus' => 0,
    'FamilySearch' => 0,
    'Geni' => 0,
    'GitHub' => 0,
    'Goodreads' => 0,
    'Identica' => 0,
    'Instagram' => 0,
    'LastFM' => 0,
    'Mailru' => 0,
    'Murmur' => 0,
    'MyHeritage' => 0,
    'Odnoklassniki' => 0,
    'Pixnet' => 0,
    'Plurk' => 0,
    'QQ' => 0,
    'Sina' => 0,
    'Skyrock' => 0,
    'Steam' => 0,
    'Tumblr' => 0,
    'TwitchTV' => 0,
    'Viadeo' => 0,
    'Vimeo' => 0,
    'Vkontakte' => 0,
    'Yandex' => 0,
  );
  $export['hybridauth_providers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_keys_id';
  $strongarm->value = '1739665082950644';
  $export['hybridauth_provider_Facebook_keys_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_keys_secret';
  $strongarm->value = 'd9f7c9830e0aa56368cf78fd8678626c';
  $export['hybridauth_provider_Facebook_keys_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_scope';
  $strongarm->value = array(
    'public_profile' => 'public_profile',
    'email' => 'email',
    'user_friends' => 'user_friends',
    'user_about_me' => 'user_about_me',
    'user_birthday' => 'user_birthday',
    'user_hometown' => 'user_hometown',
    'user_website' => 'user_website',
    'manage_notifications' => 0,
    'manage_pages' => 0,
    'publish_actions' => 0,
    'publish_pages' => 0,
    'read_custom_friendlists' => 0,
    'read_insights' => 0,
    'read_mailbox' => 0,
    'read_page_mailboxes' => 0,
    'read_stream' => 0,
    'rsvp_event' => 0,
    'user_actions.books' => 0,
    'user_actions.fitness' => 0,
    'user_actions.music' => 0,
    'user_actions.news' => 0,
    'user_actions.video' => 0,
    'user_actions:{app_namespace}' => 0,
    'user_education_history' => 0,
    'user_events' => 0,
    'user_games_activity' => 0,
    'user_groups' => 0,
    'user_likes' => 0,
    'user_location' => 0,
    'user_managed_groups' => 0,
    'user_photos' => 0,
    'user_posts' => 0,
    'user_relationship_details' => 0,
    'user_relationships' => 0,
    'user_religion_politics' => 0,
    'user_status' => 0,
    'user_tagged_places' => 0,
    'user_videos' => 0,
    'user_work_history' => 0,
  );
  $export['hybridauth_provider_Facebook_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_height';
  $strongarm->value = '500';
  $export['hybridauth_provider_Facebook_window_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_type';
  $strongarm->value = 'popup';
  $export['hybridauth_provider_Facebook_window_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_width';
  $strongarm->value = '800';
  $export['hybridauth_provider_Facebook_window_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_proxy';
  $strongarm->value = '';
  $export['hybridauth_proxy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_register';
  $strongarm->value = '0';
  $export['hybridauth_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_registration_password';
  $strongarm->value = 0;
  $export['hybridauth_registration_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_registration_username_change';
  $strongarm->value = 0;
  $export['hybridauth_registration_username_change'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_remove_password_fields';
  $strongarm->value = 1;
  $export['hybridauth_remove_password_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_required_fields';
  $strongarm->value = array(
    'email' => 'email',
    'firstName' => 0,
    'lastName' => 0,
    'gender' => 0,
  );
  $export['hybridauth_required_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_username';
  $strongarm->value = '[user:hybridauth:email]';
  $export['hybridauth_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_hide_links';
  $strongarm->value = 0;
  $export['hybridauth_widget_hide_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_icon_pack';
  $strongarm->value = 'hybridauth_32';
  $export['hybridauth_widget_icon_pack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_link_text';
  $strongarm->value = 'Social network account';
  $export['hybridauth_widget_link_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_link_title';
  $strongarm->value = 'Social network account';
  $export['hybridauth_widget_link_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_title';
  $strongarm->value = 'Or log in with...';
  $export['hybridauth_widget_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_type';
  $strongarm->value = 'list';
  $export['hybridauth_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_use_overlay';
  $strongarm->value = 1;
  $export['hybridauth_widget_use_overlay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_weight';
  $strongarm->value = '100';
  $export['hybridauth_widget_weight'] = $strongarm;

  return $export;
}
