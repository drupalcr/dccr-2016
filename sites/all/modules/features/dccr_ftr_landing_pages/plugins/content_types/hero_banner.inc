<?php

/**
 * @file
 * Hero Banner Ctools Content Type
 */

/**
 * This plugin array is more or less self documenting
 */
$plugin = array(
  'title' => t('Hero Banner'),
  'defaults' => array(),
  'category' => array(t('DCCR'), -9),
  'content_types' => array('dccr_hero_banner'),
  'render callback' => 'dccr_ftr_landing_pages_hero_banner_render',
  'single' => TRUE,
);

/**
 * Render callback for DCCR Hero Banner.
 */
function dccr_ftr_landing_pages_hero_banner_render($subtype, $conf, $args, $context) {
  $markup = '';
  $markup .= '<div class="home-hero-banner">';
  $markup .= '<h1 class="hero-banner-title">' . t('The country greatest web event.') . '</h1>';
  $markup .= '<h3 class="hero-banner-subtitle">' . t('We talk about Drupal, front-end, back-end, business, projects and more.') . '</h3>';
  $markup .= '<div class"button-links">';
  $markup .= l(t('29 Workshops(Limited Availability)'), 'workshops', array(
    'attributes' => array(
      'class' => array('btn', 'left', 'workshops-link'),
    ),
  ));
  $markup .= l(t('30-31 Conference'), 'schedule', array(
    'attributes' => array(
      'class' => array('btn', 'right', 'sessions-link'),
    ),
  ));
  $markup .= '</div>';
  $markup .= '<div class="register-link">';
  $markup .= l(t('I want to register me in the event'), 'register');
  $markup .= '</div>';
  $markup .= '</div>';
  $pane = new stdClass();
  $pane->content = $markup;
  return $pane;
}
