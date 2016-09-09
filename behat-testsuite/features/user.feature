@api
Feature: User
  Users need to be able to be authorised to use specific site features

@smoke @javascript 
  Scenario: A user visits log in page while not logged in
    Given I am on "/"
    And I am an anonymous user
    Then I should see a "form" field with id "edit-name"

@smoke @javascript
  Scenario: A user visits home while logged in as admin and sees Content link
    Given I am on "/"
    And I enter "webmaster@collabcoapp.com" for "edit-name"
    And I enter "1 to 1 million!" for "edit-pass"
    When I press the "Log in" button
    Then I should see the link "Content"

@smoke @javascript
  Scenario: A user visits home while logged in as authenticated user and can edit his profile
    Given I am on "/"
    And I enter "reshma_n8@yahoo.com" for "edit-name"
    And I enter "test123" for "edit-pass"
    When I press the "Log in" button
    Then I should see the heading "OPEN CHALLENGES"    


