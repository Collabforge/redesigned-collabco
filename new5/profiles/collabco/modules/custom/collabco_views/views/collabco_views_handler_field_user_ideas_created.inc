<?php

/**
 * @file
 *  Handler for the field 'User: ideas created'.
 */

class collabco_views_handler_field_user_ideas_created extends views_handler_field {

  function construct() {
    parent::construct();
    $this->additional_fields['uid'] = 'uid';
  }

  function access() {
    return user_access('access user profiles') && user_access('access content');
  }

  function query() {
    // Not calling parent::query() as it will treat this pseudo-field as a real
    // db field, which it is not.
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $uid = $values->{$this->aliases['uid']};
    $ctype = "idea";
    // @todo
    // see http://localhost:8888/meta/admin/structure/views/view/meta_membership_list_group_by_user/edit/owned
    $result = db_query("SELECT COUNT(nid) FROM {node} WHERE uid = :uid AND type = :type", array(
        ':uid' => $uid,
        ':type' => $ctype,
      ));
    return $result->fetchField();
  }
}
