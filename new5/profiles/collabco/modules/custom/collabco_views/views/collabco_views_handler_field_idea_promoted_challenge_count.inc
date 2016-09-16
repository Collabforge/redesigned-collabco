<?php

/**
 * @file
 *  Handler for the field 'taxonomy term : ideas count in a challenge'.
 */

class collabco_views_handler_field_idea_promoted_challenge_count extends views_handler_field {

  function construct() {
    parent::construct();
    $this->additional_fields['tid'] = 'tid';
  }

  function access() {
    return TRUE;
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $tid = $values->{$this->aliases['tid']};
    $result = db_query("SELECT count(n.nid) FROM {node} n 
    INNER JOIN {field_data_field_challenge_value} f
      ON n.nid = f.entity_id 
    INNER JOIN {field_data_field_idea_state} ideastate
      ON  n.nid = ideastate.entity_id     
      WHERE n.type ='idea' AND n.status > 0 AND ideastate.bundle='idea' AND 
      f.field_challenge_value_tid = $tid AND ideastate.field_idea_state_value = 'promoted'")->fetchField();
    if ($result==NULL) { $result = 0;}
    return $result;
  }
}
