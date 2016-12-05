@api
Feature: Challenge
  Only moderators and Admin should be able to create Challenges.

@smoke @javascript @challenge
Scenario: I have permission to create a challege
  Given I am logged in as a user with the moderator role
  Then I should see the text "Log out"
  When I visit "/admin/structure/taxonomy/challenge/add"
  Then I should get a 200 HTTP response
  And I should see "Challenge"  

@smoke @javascript @challenge
  Scenario: A user visits home while logged in as moderator and can see "Open challenges"
    Given I am on "/"
    And I enter "moderator@collabforge.com" for "edit-name"
    And I enter "test123" for "edit-pass"
    And I press the "Log in" button
    When I am on "/challenge"
    Then I should see the link "Create New Challenge" 

  
