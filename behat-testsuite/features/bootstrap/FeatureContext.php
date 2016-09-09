<?php

use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;
use Behat\Behat\Tester\Exception\PendingException;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext {

  /**
   * Initializes context.
   *
   * Every scenario gets its own context instance.
   * You can also pass arbitrary arguments to the
   * context constructor through behat.yml.
   */
  public function __construct() {
  }
    /**
     * @Given I logout 
     */
    public function iLogout()
    {
        //$element = $this->assertSession()->elementExists('css', '#user-login');
    }

    /**
     * @Then I should see a :arg1 field with id :arg2
     */
    public function iShouldSeeAFieldWithId($arg1, $arg2)
    {
        $element = $this->assertSession()->elementExists('css',  '#' . $arg2);
    }

    
    public function drupalCreateUser($name, $roles_string) {
    $roles = array();
    foreach (explode(',', $roles_string) as $role) {
      $role = trim($role);
      $role_obj = user_role_load_by_name($role);
      if (empty($role_obj)) {
        throw new Exception(t('Role @role does not exist', array('@role' => $role)));
      }
      $roles[] = $role_obj;
    }

    $rids = array();
    foreach ($roles as $role) {
      $rids[$role->rid] = $role->rid;
    }

    // Create a user assigned to that role.
    $edit = array();
    $edit['name']   = $name;
    $edit['mail']   = $edit['name'] . '@example.com';
    $edit['pass']   = user_password();
    $edit['status'] = 1;

    if (!empty($rids)) {
      $edit['roles'] = $rids;
    }

    $account = user_save(drupal_anonymous_user(), $edit);

    if (empty($account->uid)) {
      return FALSE;
    }

    // Add the raw password so that we can log in as this user.
    $account->pass_raw = $edit['pass'];

    // Reference user above.
    $this->users[$account->uid] = $account;

    return $account;
  }

}
