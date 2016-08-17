<?php
/**
 * @file
 * collabco_appearance_feature.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function collabco_appearance_feature_image_default_styles() {
  $styles = array();

  // Exported image style: challenge.
  $styles['challenge'] = array(
    'label' => 'Challenge',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 294,
          'height' => 165,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image-profile.
  $styles['image-profile'] = array(
    'label' => 'image-profile',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: in-challenge-idea-view.
  $styles['in-challenge-idea-view'] = array(
    'label' => 'in-challenge-idea-view',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 313.328,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small-card-view.
  $styles['small-card-view'] = array(
    'label' => 'small-card-view',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 165,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
