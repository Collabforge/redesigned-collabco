Feature: Idea
  Users need to be able to post and read ideas within challenges

  Scenario: A user can create an idea
    Given I am logged in with the role "authenticated user"
    When I am on "/topics"
    And I follow "Create a new topic"
    Then I should see "Create Topic"