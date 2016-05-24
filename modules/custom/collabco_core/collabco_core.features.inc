<?php
/**
 * @file
 * collabco_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function collabco_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function collabco_core_flag_default_flags() {
  $flags = array();
  // Exported flag: "Challenge Flag".
  $flags['challenge_flag'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Challenge Flag',
    'global' => 0,
    'types' => array(
      0 => 'challenge',
    ),
    'flag_short' => 'Join',
    'flag_long' => '',
    'flag_message' => 'Success! You have joined the Challenge. You will be subscribed to receive updates.',
    'unflag_short' => 'Leave',
    'unflag_long' => '',
    'unflag_message' => 'You have left the Challenge. You will no longer receive updates.',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'collabco_core',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Follow forum".
  $flags['follow'] = array(
    'entity_type' => 'node',
    'title' => 'Follow forum',
    'global' => 0,
    'types' => array(
      0 => 'conversation',
    ),
    'flag_short' => 'Follow this forum',
    'flag_long' => '',
    'flag_message' => 'You are now following this forum',
    'unflag_short' => 'Unfollow this forum',
    'unflag_long' => '',
    'unflag_message' => 'Your are no longer following this forum',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'collabco_core',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Follow Idea".
  $flags['follow_idea'] = array(
    'entity_type' => 'node',
    'title' => 'Follow Idea',
    'global' => 0,
    'types' => array(
      0 => 'hub',
    ),
    'flag_short' => '<i class="icon-heart"></i> Support Idea',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '<i class="icon-heart-empty"></i> Unsupport Idea',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'colorbox' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'collabco_core',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function collabco_core_image_default_styles() {
  $styles = array();

  // Exported image style: 150x150.
  $styles['150x150'] = array(
    'label' => 'Dashboard Ideas View 160x160',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_thumb.
  $styles['content_thumb'] = array(
    'label' => 'content_thumb',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 95,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_article.
  $styles['featured_article'] = array(
    'label' => 'featured_article',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_img_large.
  $styles['featured_img_large'] = array(
    'label' => 'featured_img_large',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 733,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_image.
  $styles['front_page_image'] = array(
    'label' => 'front_page_image',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 235,
          'height' => 176,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_events.
  $styles['homepage_events'] = array(
    'label' => 'homepage_events',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      14 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 640,
          'height' => 400,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: homepage_featured_post.
  $styles['homepage_featured_post'] = array(
    'label' => 'homepage_featured_post',
    'effects' => array(
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 980,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      18 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 980,
          'height' => 400,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: library_square.
  $styles['library_square'] = array(
    'label' => 'library_square',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_thumbnail.
  $styles['small_thumbnail'] = array(
    'label' => 'small_thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 155,
          'height' => 155,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: update-feature.
  $styles['update-feature'] = array(
    'label' => 'update-feature',
    'effects' => array(
      21 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      22 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 960,
          'height' => 224,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: user_thumb.
  $styles['user_thumb'] = array(
    'label' => 'user_thumb',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 155,
          'height' => 155,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: user_thumb_small.
  $styles['user_thumb_small'] = array(
    'label' => 'user_thumb_small',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 36,
          'height' => 36,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function collabco_core_node_info() {
  $items = array(
    'conversation' => array(
      'name' => t('Forum'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Forum'),
      'help' => '',
    ),
    'hub' => array(
      'name' => t('Idea'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Ideas Title'),
      'help' => '',
    ),
    'ia_comment' => array(
      'name' => t('IA Comment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'knowledge_object' => array(
      'name' => t('File'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function collabco_core_default_profile2_type() {
  $items = array();
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
