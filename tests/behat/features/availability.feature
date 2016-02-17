Feature: The site should be available.
  In order to use the site
  As a user
  I need to have access to the site

  Scenario: The homepage exists.
    Given I am an anonymous user
    When I go to the homepage
    Then I should be on the homepage
