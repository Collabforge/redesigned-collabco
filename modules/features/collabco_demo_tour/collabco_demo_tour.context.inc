<?php
/**
 * @file
 * collabco_demo_tour.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function collabco_demo_tour_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'brainstorm';
  $context->description = 'Used for  brainstorm challenge page';
  $context->tag = 'demo';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'challenge/brainstorm' => 'challenge/brainstorm',
      ),
    ),
    'user' => array(
      'values' => array(
        'test role for demo' => 'test role for demo',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_poststep_callback' => '',
      'joyride_postride_callback' => 'post_ride_callback',
      'joyride_tour_content' => '<li data-class="icon-flag" data-text="Next" class="custom">
  <h2>Brainstorm</h2>
  <p>describe it</p>
</li>
<li data-class="status" data-button="Next">
  <h2>Status of the challenge</h2>
  <p></p>
</li>
<li data-class="create-idea-btn" data-button="Next">
  <h2>Create an idea</h2>
  <p>helps to create an idea in a challenge</p>
</li>
<li data-class="flag-challenge-flag" data-button="Next">
  <h2>Follow or unfloow the challenge</h2>
  <p></p>
</li>
<li data-class="recent-ideas" data-button="Next">
  <h2>Recent ideas</h2>
  <p>Recent ideas of the challenge</p>
</li>
<li data-class="control-label" data-button="Next">
  <h2>Sort ideas by</h2>
  <p>Most recent, A-Z, Supports and Comments count</p>
</li>
<li data-class="feat-img" >
  <h2>Ideas within a challenge</h2>
  <p>Go to an <a href="/idea/colour-coding-online-documents">Idea</a></p>
</li>',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used for  brainstorm challenge page');
  t('demo');
  $export['brainstorm'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'challenge';
  $context->description = 'Used for Challenge page';
  $context->tag = 'demo';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'challenge' => 'challenge',
        '~challenge/*' => '~challenge/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'test role for demo' => 'test role for demo',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_poststep_callback' => '',
      'joyride_postride_callback' => 'challenge_ride_callback',
      'joyride_tour_content' => '<li data-class="icon-flag" data-text="Next" class="custom">
  <h2>Challenge</h2>
  <p>Describe challenge.</p>
</li>
<li data-class="breadcrumb" data-button="Next">
  <h2>Breadcrumb/h2>
  <p>Breadcrumb description</p>
</li>
<li data-id="edit-combine" data-button="Next" data-options="tipLocation:right">
  <h2>Search Challenges</h2>
  <p>describe search challenges</p>
</li>
<li data-class="open-challenges" data-button="Next">
  <h2>Open challenges</h2>
  <p>describe Open challenges</p>
</li>
<li data-class="icon-watch" data-button="Next">
  <h2>Status of the challenge</h2>
  <p>Whether open or remaining closing time </p>
</li>
<li data-class="flag-challenge-flag-1" data-button="Next">
  <h2>Follow or UnFollow</h2>
  <p>describe the acitivity</p>
</li>
<li data-class="ideas-challenge" data-button="Next">
  <h2>Ideas count in a Challenge</h2>
  <p>describe count</p>
</li>
<li data-class="icon-dialogue" data-button="Next">
  <h2>Create an idea in a challenge</h2>
</li>
<li data-class="add-to-brainstorm" data-button="Next" >
  <h2>Brainstorm Challenge</h2>
  <p>describe brainstorm</p>
</li>
<li data-class="latest-ideas" data-button="Next" >
  <h2>Latest Ideas</h2>
  <p>Describe latest ideas</p>
</li>
<li data-class="field-content" data-button="Close" >
  <h2>Brainstorm</h2>
  <p>Go to <a href="/challenge/brainstorm">Brainstorm</a> </p>
</li>

',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used for Challenge page');
  t('demo');
  $export['challenge'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'collaborations';
  $context->description = 'Used for Collaborate page';
  $context->tag = 'demo';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'collaborate' => 'collaborate',
      ),
    ),
    'user' => array(
      'values' => array(
        'test role for demo' => 'test role for demo',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_poststep_callback' => '',
      'joyride_postride_callback' => 'post_ride_callback',
      'joyride_tour_content' => '<li data-class="icon-beaker" data-text="Next" class="custom">
  <h2>Collaborations</h2>
  <p>describe it</p>
</li>
<li data-class="title" data-button="Next">
  <h2>Featured collaborations</h2>
  <p></p>
</li>
<li data-class="flag-support-collaboration" data-button="Next">
  <h2>Support the Collaboration</h2>
  <p>describe it</p>
</li>
<li data-class="icon-todolist-check" data-button="Next">
  <p>Collaborations which turned into Projects</p>
</li>
<li data-class="icon-music-stop" data-button="Next">
  <p>Collaborations which are parked</p>
</li>
<li data-class="title" data-button="Close">
  <p>Go to a <a href="/collaboration/test-collaboration">Collaboration</a></p>
</li>
',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used for Collaborate page');
  t('demo');
  $export['collaborations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'demo_collabcoims';
  $context->description = 'used for home page';
  $context->tag = 'demo';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'test role for demo' => 'test role for demo',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_poststep_callback' => 'demo_tour_callback',
      'joyride_postride_callback' => 'home_ride_callback',
      'joyride_tour_content' => '<li data-id="brainstorm_img" data-button="Yes" class="custom">
  <h2>Welcome to the guided tour for Collabco IMS.</h2>
  <p>Would you like to proceed with the tour?.</p>
</li>
<li data-class="icon-home-menu" data-button="Next" >
  <h2>Home</h2>
  <p>Home menu.</p>
</li>
<li data-class="icon-squares-menu" data-button="Next" >
  <h2>Myhub</h2>
  <p>Myhub menu.</p>
</li>
<li data-class="icon-flag-menu" data-button="Next" >
  <h2>Challenge</h2>
  <p>Challenge menu.</p>
</li>
<li data-class="icon-beaker-menu" data-button="Next" >
  <h2>Collaborations</h2>
  <p>Collaborations menu.</p>
</li>
<li data-id="search-block-form" data-button="Next" >
  <h2>Search</h2>
  <p>Search block</p>
</li>
<li data-id="navigation-profile-details" data-button="Next" >
  <h2>User Name</h2>
  <p>User name</p>
</li>
<li data-class="user-picture" data-button="Next" >
  <h2>User picture</h2>
  <p>User picture</p>
</li>
<li data-class="icon-flag" data-button="Next" >
  <h2>Open Challenges</h2>
  <p>open challenges <br>
Go to <a href="myhub">Myhub</a>
</p>
 </li>
<li data-button="Continue" >
  <p>We are going to myhub page</p> 
</p>
 </li>
',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('demo');
  t('used for home page');
  $export['demo_collabcoims'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'individual_collaboration';
  $context->description = 'used for Individual Collaboration page';
  $context->tag = 'demo';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'collaboration/*' => 'collaboration/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'test role for demo' => 'test role for demo',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_poststep_callback' => '',
      'joyride_postride_callback' => 'post_ride_callback',
      'joyride_tour_content' => '<li data-class="icon-beaker" data-text="Next" class="custom">
  <h2>Collaboration</h2>
  <p>describe it</p>
</li>
<li data-class="breadcrumb" data-button="Next">
  <h2>Breadcrumb</h2>
  <p></p>
</li>
<li data-class="like-this-collaboration" data-button="Next">
  <h2>Like this Co-lab</h2>
  <p>describe it</p>
</li>
<li data-class="collab-info" data-button="Next">
  <h2>Information</h2>
  <p>describe it</p>
</li>
<li data-class="collab-discussion" data-button="Next">
  <h2>Discussions within a collaboration</h2>
  <p>describe it</p>
</li>
<li data-class="collab-documents" data-button="Next">
  <h2>Documents within a collaboration</h2>
  <p>describe it</p>
</li>
<li data-button="Close" data-options="tip_location:top;tip_animation:fade">
  <p>Thank you for walk through</p>
  <p>See you soon</p>
</li>
',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('demo');
  t('used for Individual Collaboration page');
  $export['individual_collaboration'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'individual_idea';
  $context->description = 'Used for Individual Idea page';
  $context->tag = 'demo';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'idea/*' => 'idea/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'test role for demo' => 'test role for demo',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_poststep_callback' => '',
      'joyride_postride_callback' => 'single_idea_ride_callback',
      'joyride_tour_content' => '<li data-class="icon-diamond" data-text="Next" class="custom">
  <h2>Idea</h2>
  <p>describe it</p>
</li>
<li data-class="comment-form" data-button="Next">
  <h2>Add your comments</h2>
  <p></p>
</li>
<li data-class="flag-support-idea" data-button="Next">
  <h2>Support the idea</h2>
  <p>describe it</p>
</li>
<li data-class="mail" data-button="Next">
  <h2></h2>
  <p>You can contact the idea owner to join this group</p>
</li>
<li data-class="nav-tabs" data-button="Next">
  <h2>Shows a list of users who support this idea</h2>
  <p></p>
</li>
<li data-class="add-team-member" data-button="Next">
  <p>Shows the list of team members and idea owner has ability to add team members</p>
</li>
<li data-id="block-collabco-idea-tags" data-button="Next">
  <p>tags associated with an idea</p>
  <p>Go to an <a href="/idea/colour-coding-online-documents">Idea</a></p>
</li>
<li data-class="icon-beaker-menu" data-button="Close">
  <p>Collaboration</p>
  <p>Go to <a href="/collaborate">Collaboration</a></p>
</li>',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used for Individual Idea page');
  t('demo');
  $export['individual_idea'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myhub';
  $context->description = 'used for myhub page';
  $context->tag = 'demo';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'myhub' => 'myhub',
      ),
    ),
    'user' => array(
      'values' => array(
        'test role for demo' => 'test role for demo',
      ),
    ),
  );
  $context->reactions = array(
    'joyride_add' => array(
      'joyride_auto_start' => 1,
      'joyride_play_once' => 0,
      'joyride_poststep_callback' => '',
      'joyride_postride_callback' => 'post_ride_callback',
      'joyride_tour_content' => '<li data-class="icon-squares" data-text="Next" class="custom">
  <h2>My Hub</h2>
  <p>Describe myhub.</p>
</li>
<li data-class="icon-eye" data-button="Next">
  <h2>Updates</h2>
  <p>Updates description</p>
</li>
<li data-class="ui-menu-myhub-ideas" data-button="Next" data-options="tipLocation:right">
  <h2>Created</h2>
  <p>created description</p>
</li>
<li data-class="ui-menu-myhub-collaboration" data-button="Next">
  <h2>Following</h2>
  <p>Following description</p>
</li>
<li data-class="ui-menu-myhub-profile" data-button="Next">
  <h2>Profile</h2>
  <p>profile details</p>
</li>
<li  data-button="Next">
  <p>Going to challenges page</p>
</li>',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('demo');
  t('used for myhub page');
  $export['myhub'] = $context;

  return $export;
}
