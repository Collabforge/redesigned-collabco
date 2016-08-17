<?php

/**
 * @file
 *  Handler for the field 'User: flag count'.
 */

class collabco_views_handler_field_user_flag_count extends views_handler_field {

  public function construct() {
    parent::construct();
    $this->additional_fields['uid'] = 'uid';
  }

  public function access() {
    return user_access('access user profiles') && user_access('access content');
  }

  public function query() {
    // Not calling parent::query() as it will treat this pseudo-field as a real
    // db field, which it is not.
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  public function render_by_fid($fid, $uid) {
    $result = db_query('SELECT COUNT(n.nid) FROM {node} n INNER JOIN {flagging} f ON n.nid = f.entity_id WHERE f.fid = :fid AND f.uid = :uid AND n.status > 0 GROUP BY f.uid', array(':fid' => $fid, 'uid' => $uid));
    return $result->fetchField();
  }

  public function render($values) {
    $uid = $values->{$this->aliases['uid']};
    $result = db_query('SELECT COUNT(n.nid) FROM {node} n INNER JOIN {flagging} f ON n.nid = f.entity_id WHERE f.uid = :uid AND n.status > 0 GROUP BY f.uid', array(':uid' => $uid));
    return $result->fetchField();
  }

}

class collabco_views_handler_field_user_flag1_count extends collabco_views_handler_field_user_flag_count {

  public function render($values) {
    $uid = $values->{$this->aliases['uid']};
    return parent::render_by_fid(1, $uid);
  }

}

class collabco_views_handler_field_user_flag2_count extends collabco_views_handler_field_user_flag_count {

  public function render($values) {
    $uid = $values->{$this->aliases['uid']};
    return parent::render_by_fid(2, $uid);
  }

}

class collabco_views_handler_field_user_follow_idea_count extends collabco_views_handler_field_user_flag_count {

  public function render($values) {
    $uid = $values->{$this->aliases['uid']};
    return parent::render_by_fid(6, $uid);
  }

}

class collabco_views_handler_field_user_support_idea_count extends collabco_views_handler_field_user_flag_count {

  public function render($values) {
    $uid = $values->{$this->aliases['uid']};
    return parent::render_by_fid(7, $uid);
  }

}

class collabco_views_handler_field_user_follow_collaboration_count extends collabco_views_handler_field_user_flag_count {

  public function render($values) {
    $uid = $values->{$this->aliases['uid']};
    return parent::render_by_fid(8, $uid);
  }

}

class collabco_views_handler_field_user_support_collaboration_count extends collabco_views_handler_field_user_flag_count {

  public function render($values) {
    $uid = $values->{$this->aliases['uid']};
    return parent::render_by_fid(5, $uid);
  }

}
