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
    '#description' => t("They consist of:<ul>
      <li>An image URL with optional file upload.</li>
      <li>A slider (HTML5 range).</li>
      <li>A number.</li>
      <li>A combined value with unit example.</li>
      <li>A color picker.</li>
    </ul>"),
  );
  // The condition below only exists for when code is copy/pasted to elsewhere.
  if (module_exists('style_settings')) {
   

    $form['css_variables']['nav_primary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Navigation Primary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('nav_primary_color', '#fff'),
    );


    // Challenge Primary Color
    $form['css_variables']['challenge_primary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Challenge Primary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('challenge_primary_color', '#000'),
    );

    // Challenge Gradient
    $form['css_variables']['challenge_gradient'] = array(
      '#type' => 'collabco_color_gradientpicker',
      '#title' => t('Gradient challenge'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('challenge_gradient', 'linear-gradient(125deg,rgba(59, 83, 164, 1) 0%, rgba(29, 121, 171, 1) 100%)'),
    );

    //WebKit Challenge Gradient (Hidden input)
    $form['css_variables']['challenge_webkit_gradient'] = array(
      '#type' => 'textfield',
      '#title' => t('Webkit Gradient Challenge'),
      '#default_value' => variable_get('challenge_webkit_gradient', '-webkit-linear-gradient(135deg, rgba(59, 83, 164, 1) 0%, rgba(29, 121, 171, 1) 100%)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    //Background Challenge Gradient (Hidden input)
    $form['css_variables']['challenge_background_color'] = array(
      '#type' => 'textfield',
      '#title' => t('Background Challenge'),
      '#default_value' => variable_get('challenge_background_color', 'rgba(59, 83, 164, .9)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    // Collaboration Gradient
    $form['css_variables']['collaboration_gradient'] = array(
      '#type' => 'collabco_color_gradientpicker',
      '#title' => t('Gradient collaboration'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('collaboration_gradient', 'linear-gradient(135deg, rgba(59, 83, 164, 1) 0%, rgba(29, 121, 171, 1) 100%)'),
    );

    //WebKit Collaboration Gradient (Hidden input)
    $form['css_variables']['collaboration_webkit_gradient'] = array(
      '#type' => 'textfield',
      '#title' => t('Webkit Gradient collaboration'),
      '#default_value' => variable_get('collaboration_webkit_gradient', '-webkit-linear-gradient(135deg, rgba(59, 83, 164, 1) 0%, rgba(29, 121, 171, 1) 100%)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    //Background Collaboration Gradient (Hidden input)
    $form['css_variables']['collaboration_background_color'] = array(
      '#type' => 'textfield',
      '#title' => t('Background collaboration'),
      '#default_value' => variable_get('collaboration_background_color', 'rgba(59, 83, 164, .9)'),
      '#description' => t('A Hidden input to add css cross-browser compatibility'),
      '#size' => 12,
    );

    // // Collaboration
    // $form['css_variables']['collaboration_gradient'] = array(
    //   '#type' => 'collabco_color_gradientpicker',
    //   '#title' => t('Gradient collaboration'),
    //   // Besides hex color value also color names are accepted.
    //   '#default_value' => variable_get('collaboration_gradient', 'linear-gradient(135deg, rgba(59, 83, 164, 1) 0%, rgba(29, 121, 171, 1) 100%)'),
    // );

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
