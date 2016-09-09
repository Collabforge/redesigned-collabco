@api
Feature: User
  Users need to be able to be authorised to use specific site features

@smoke @javascript 
  Scenario: A user visits log in page while not logged in
    Given I am on "/"
    And I am an anonymous user
    Then I should see a "form" field with id "edit-name"

@smoke @javascript
  Scenario: A user visits home while logged in
    Given I am logged in as a user with the "authenticated user" role
    And I am on "/"
    Then I should see a "nav" field with id "navigation-primary"
