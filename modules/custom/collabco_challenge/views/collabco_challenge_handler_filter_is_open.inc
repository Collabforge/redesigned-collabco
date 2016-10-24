<?php

/**
 * @file
 * Handler for the "Taxonomy term: Challenge open (field_start_date)" filter.
 */
class collabco_challenge_handler_filter_is_open extends views_handler_filter_date {

  function init(&$view, &$options) {
    parent::init($view, $options);
  }

  /**
   * Add an extra (non-exposed) option to the type selector on the value form.
   */
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);
    if (empty($form_state['exposed']) && !empty($form['operator']['#options'])) {
      $is_open = array('is_open' => t('is open'));
      $form['operator']['#options'] = array_merge($is_open, $form['operator']['#options']);
      $is_open_or_judging = array('is_judged' => t('is being judged'));
      $form['operator']['#options'] = array_merge($is_open_or_judging, $form['operator']['#options']);
      $is_closed = array('is_closed' => t('is closed'));
      $form['operator']['#options'] = array_merge($is_closed, $form['operator']['#options']);
    }
  }

  function operators() {
    $operators = parent::operators();
    $operators['is_open'] = array(
      'title' => t('Is open'),
      'method' => 'op_is_open',
      'short' => t('open'),
      'values' => 0,
    );
    $operators['is_judged'] = array(
      'title' => t('Is being judged'),
      'method' => 'op_is_judged',
      'short' => t('judged'),
      'values' => 0,
    );
    $operators['is_closed'] = array(
      'title' => t('Is closed'),
      'method' => 'op_is_closed',
      'short' => t('closed'),
      'values' => 0,
    );
    return $operators;
  }

  function op_is_open($field) {
    if (strpos($field, 'value2')) {
      $field1 = str_replace('_value2', '_value', $field);
      $field2 = $field;
    }
    else {
      $field1 = $field;
      $field2 = str_replace('_value', '_value2', $field);
    }
    $on_going_challenge_tid = variable_get('collabco_ongoing_challenge');
    $extra_condition  = is_numeric($on_going_challenge_tid) ? ' OR taxonomy_term_data.tid = ' . 
    $on_going_challenge_tid : ''; 
    $now = time();
    $this->query->add_where_expression($this->options['group'], "$field1 < $now AND $field2 > $now $extra_condition");
  }

  function op_is_judged($field) {
    if (strpos($field, 'value2')) {
      $field2 = $field;
    }
    else {
      $field2 = str_replace('_value', '_value2', $field);
    }
    $now = time();
    $challenges_with_winner = array();
    $result = db_query("SELECT DISTINCT(field_challenge_value_tid) AS tid FROM
    field_data_field_challenge_value, field_data_field_idea_state WHERE
    field_data_field_challenge_value.entity_id = field_data_field_idea_state.entity_id
    AND field_data_field_challenge_value.bundle = 'idea'
    AND field_data_field_idea_state.field_idea_state_value = 'win'");
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $challenges_with_winner[] = $row['tid'];
      }
    }
    $challenges = implode(",", $challenges_with_winner);
    // Find closed terms that have NO associated Winning Ideas.
    $this->query->add_where_expression($this->options['group'], "$field2 < $now AND taxonomy_term_data.tid NOT IN ($challenges)");
  }

  function op_is_closed($field) {
    if (strpos($field, 'value2')) {
      $field2 = $field;
    }
    else {
      $field2 = str_replace('_value', '_value2', $field);
    }
    $now = time();
    $on_going_challenge_tid = variable_get('collabco_ongoing_challenge');
    $extra_condition  = is_numeric($on_going_challenge_tid) ? 'AND taxonomy_term_data.tid != ' . 
    $on_going_challenge_tid : ''; 
    $this->query->add_where_expression($this->options['group'], "$field2 < $now $extra_condition");
      
  }

}
