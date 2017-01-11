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
   
    // COLOR PICKER example.
    $form['css_variables']['collabco_color_nav_primary_color'] = array(
      '#type' => 'style_settings_colorpicker',
      '#title' => t('Navigation Primary Color'),
      // Besides hex color value also color names are accepted.
      '#default_value' => variable_get('collabco_color_nav_primary_color', 'IndianRed'),
    );
  }

  // If the Style Settings module is not enabled, provide some instructions.
  else {
    $form['css_variables']['collabco_color_note'] = array(
      '#markup' => t("Enable the !style_settings_module to get style options exposed here. They consist of:<ul>
          <li> A caption font-size.</li>
          <li> ... </li>
          <li> ... </li>
        </ul>", array('!style_settings_module' => $style_settings_module)),
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
