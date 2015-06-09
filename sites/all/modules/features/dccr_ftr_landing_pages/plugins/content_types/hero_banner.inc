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
  $markup = '<div class="event-introduction">';
  $markup .= '<h2 class="event-introduction-title">' . t('The country greatest web event.') . '</h2>';
  $markup .= '<p class="event-introduction-description">' . t('We talk about Drupal, front-end, back-end, business, projects and more.') . '</p>';
  $markup .= '<div class="event-introduction-ctas">';
  $markup .= ' <div class="event-cta event-cta-workshops">';
  $markup .= '<p class="event-cta-description">' . t('July 29,') . '<strong> ' . t('Workshops') . '</strong> ' . t('(Limited Availability)') . '</p>';
  $markup .= l(t('View the workshops'), 'workshops', array('attributes' => array('class' => array('event-cta-link'))));
  $markup .= '</div>';
  $markup .= '<div class="event-cta event-cta-conferences">';
  $markup .= '<p class="event-cta-description">' . t('July 30-31,') . '<strong> ' . t('Conferences') . '</strong></p>';
  $markup  .= l(t('View Schedule'), 'schedule', array('attributes' => array('class' => array('event-cta-link'))));
  $markup .= '</div></div>';
  $markup .= '<div class="event-introduction-register">';
  $markup .= l(t('I want to register me in the event'), 'register', array('attributes' => array('class' => array('event-register-link'))));
  $markup .= '</div></div>';
  $pane = new stdClass();
  $pane->content = $markup;
  return $pane;
}
