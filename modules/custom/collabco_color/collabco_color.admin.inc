<?php
/**
 * @file
 * The admin settings for the collabco_color module.
 * The Style Settings module offers several form API elements to help
 * developers build the settings page. Cool UI widgets and built-in validation
 * of user input especially designed for CSS attributes.
 */

/**
 * Implements hook_settings().
 */
function collabco_color_admin_settings() {
  // Put CSS variables together in a fieldset. Remove if only one is given.
  $form['css_variables'] = array(
    '#type' => 'fieldset',
    '#title' => t('CSS variables'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#description' => t("<h2>Welcome to<strong>Collabco Style Settings.</strong></h2>"),
  );
  // The condition below only exists for when code is copy/pasted to elsewhere.
  if (module_exists('style_settings')) {
   
    //////////Navigation Variables/////////

    //Nav Primary Color
    $form['css_variables']['nav_primary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Navigation Primary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('nav_primary_color', '#532762'),
    );

    //Nav Hover Color
    $form['css_variables']['nav_hover_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Navigation Hover Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('nav_hover_color', '#f3f3f3'),
    );

    // Nav Mobile Gradient
    $form['css_variables']['nav_mobile_gradient'] = array(
      '#type' => 'collabco_color_gradientpicker',
      '#title' => t('Navigation Mobile Gradient'),
      '#default_value' => variable_get('nav_mobile_gradient', 'linear-gradient(135deg,rgba(83, 39, 98, .9) 0%, rgba(77, 49, 155, .9) 100%)'),
    );

    //WebKit Nav Mobile Gradient (Hidden input)
    $form['css_variables']['nav_mobile_webkit_gradient'] = array(
      '#type' => 'textfield',
      '#title' => t('Navigation Webkit Gradient Mobile'),
      '#default_value' => variable_get('challenge_webkit_gradient', '-webkit-linear-gradient(135deg,rgba(83, 39, 98, .9) 0%, rgba(77, 49, 155, .9) 100%)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    //Background Nav Mobile Gradient (Hidden input)
    $form['css_variables']['nav_mobile_background_color'] = array(
      '#type' => 'textfield',
      '#title' => t('Navigation Background Mobile'),
      '#default_value' => variable_get('nav_mobile_background_color', 'rgba(83, 39, 98, .9)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    //////////Challenge Variables/////////

    // Challenge Primary Color
    $form['css_variables']['challenge_primary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Challenge Primary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('challenge_primary_color', '#4a3858'),
    );

    // Challenge Gradient
    $form['css_variables']['challenge_gradient'] = array(
      '#type' => 'collabco_color_gradientpicker',
      '#title' => t('Challenge Gradient'),
      '#default_value' => variable_get('challenge_gradient', 'linear-gradient(135deg,rgba(83, 39, 98, .9) 0%, rgba(77, 49, 155, .9) 100%)'),
    );

    //WebKit Challenge Gradient (Hidden input)
    $form['css_variables']['challenge_webkit_gradient'] = array(
      '#type' => 'textfield',
      '#title' => t('Challenge Webkit Gradient'),
      '#default_value' => variable_get('challenge_webkit_gradient', '-webkit-linear-gradient(135deg,rgba(83, 39, 98, .9) 0%, rgba(77, 49, 155, .9) 100%)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    //Background Challenge Gradient (Hidden input)
    $form['css_variables']['challenge_background_color'] = array(
      '#type' => 'textfield',
      '#title' => t('Challenge Background'),
      '#default_value' => variable_get('challenge_background_color', 'rgba(83, 39, 98, .9)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    /////////Collaboration  Variables////////

    // Collaboration Primary Color
    $form['css_variables']['collaboration_primary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Collaboration Primary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('collaboration_primary_color', '#882263'),
    );

    // Collaboration Secondary Color
    $form['css_variables']['collaboration_secondary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Collaboration Secondary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('collaboration_secondary_color', '#00746A'),
    );

    // Collaboration Gradient
    $form['css_variables']['collaboration_gradient'] = array(
      '#type' => 'collabco_color_gradientpicker',
      '#title' => t('Collaboration Gradient'),
      '#default_value' => variable_get('collaboration_gradient', 'linear-gradient(135deg, rgba(206, 45, 37, .9) 0%, rgba(178, 31, 79, .9) 100%)'),
    );

    //WebKit Collaboration Gradient (Hidden input)
    $form['css_variables']['collaboration_webkit_gradient'] = array(
      '#type' => 'textfield',
      '#title' => t('Collaboration Webkit Gradient'),
      '#default_value' => variable_get('collaboration_webkit_gradient', '-webkit-linear-gradient(135deg, rgba(206, 45, 37, .9) 0%, rgba(178, 31, 79, .9) 100%)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    //Background Collaboration Gradient (Hidden input)
    $form['css_variables']['collaboration_background_color'] = array(
      '#type' => 'textfield',
      '#title' => t('Collaboration Background'),
      '#default_value' => variable_get('collaboration_background_color', 'rgba(59, 83, 164, .9)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );


    /////////Ideas Variables////////
    
    // ideas Primary Color
    $form['css_variables']['ideas_primary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Idea Primary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('ideas_primary_color', '#3B53A4'),
    );

    // Ideas Gradient
    $form['css_variables']['ideas_gradient'] = array(
      '#type' => 'collabco_color_gradientpicker',
      '#title' => t('Idea Gradient'),
      '#default_value' => variable_get('ideas_gradient', 'linear-gradient(135deg, rgba(59, 83, 164, .9) 0%, rgba(29, 121, 171, .9) 100%)'),
    );

    //WebKit ideas Gradient (Hidden input)
    $form['css_variables']['ideas_webkit_gradient'] = array(
      '#type' => 'textfield',
      '#title' => t('Idea Webkit Gradient'),
      '#default_value' => variable_get('ideas_webkit_gradient', '-webkit-llinear-gradient(135deg, rgba(59, 83, 164, .9) 0%, rgba(29, 121, 171, .9) 100%)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    //Background ideas Gradient (Hidden input)
    $form['css_variables']['ideas_background_color'] = array(
      '#type' => 'textfield',
      '#title' => t('Idea Background'),
      '#default_value' => variable_get('ideas_background_color', 'rgba(59, 83, 164, .9)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    /////////My Hub Variables////////

    // My Hub Primary Color
    $form['css_variables']['my_hub_primary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('My Hub Primary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('my_hub_primary_color', '#e2771b'),
    );

    // My Hub Secondary Color
    $form['css_variables']['my_hub_secondary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('My Hub Secondary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('my_hub_secondary_color', '#00746A'),
    );

    // My Hub Gradient
    $form['css_variables']['my_hub_gradient'] = array(
      '#type' => 'collabco_color_gradientpicker',
      '#title' => t('My Hub Gradient'),
      '#default_value' => variable_get('my_hub_gradient', 'linear-gradient(135deg, rgba(206, 45, 37, .9) 0%, rgba(183, 134, 45, .9) 100%)'),
    );

    //WebKit My Hub Gradient (Hidden input)
    $form['css_variables']['my_hub_webkit_gradient'] = array(
      '#type' => 'textfield',
      '#title' => t('My Hub Webkit Gradient'),
      '#default_value' => variable_get('my_hub_webkit_gradient', '-webkit-linear-gradient(135deg, rgba(206, 45, 37, .9) 0%, rgba(183, 134, 45, .9) 100%)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    //Background My Hub Gradient (Hidden input)
    $form['css_variables']['my_hub_background_color'] = array(
      '#type' => 'textfield',
      '#title' => t('My Hub Background'),
      '#default_value' => variable_get('my_hub_background_color', 'rgba(206, 45, 37, .9)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );


  }

  // If the Style Settings module is not enabled, provide some instructions.
  else {
    $form['css_variables']['collabco_color_note'] = array(
      '#markup' => t("Enable the !style_settings_module to get style options exposed here. They consist of:<ul>
          <li> A caption font-size.</li>
          <li> ... </li>
          <li> ... </li>
        </ul>"),
    );
  }

  // Call submit_function() on form submission.
  $form['#submit'][] = 'collabco_color_admin_settings_submit';
  return system_settings_form($form);
}

/**
 * Submit form data.
 */
function collabco_color_admin_settings_submit($form, &$form_state) {
  if (module_exists('style_settings')) {
    // Make sure changes are visible right after saving the settings.
    _drupal_flush_css_js();
    // If changes don't appear, try to uncomment also the line below.
//    cache_clear_all('style_settings_', 'cache', TRUE);
  }
}
