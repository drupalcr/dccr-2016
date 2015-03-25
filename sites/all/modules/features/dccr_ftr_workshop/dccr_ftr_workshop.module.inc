<?php
/**
 * @file
 * Extra-functionality to workshop feature.
 */
/**
 * Implements hook_field_extra_fields().
 */
function dccr_ftr_workshop_field_extra_fields() {
  $extra['node']['workshop']['display']['extra_field_workshop_register'] = array(
    'label' => t('Workshop Register'),
    'description' => t('Provides a Flag link'),
    'weight' => 0,
  );
  return $extra;
}

/**
 * Implements hook_node_view().
 */
function dccr_ftr_workshop_node_view($node, $view_mode, $langcode) {
  if ($node->type == 'workshop') {
    $node->content['extra_field_workshop_register'] = array(
      '#type' => 'item',
      '#title' => '',
      '#markup' => dccr_ftr_workshop_register_link($node),
    );
  }
}

function dccr_ftr_workshop_register_link($node) {
  global $user;
  $wrapper = entity_metadata_wrapper('node', $node);
  $flag_registered = flag_get_flag('dccr_registration_complete');
  if ($flag_registered->is_flagged($user->uid)) {
    if ($wrapper->field_availability->value() > 0) {
      return flag_create_link('workshop_registration', $wrapper->getIdentifier());
    }
    else {
      $flag_workshop = flag_get_flag('workshop_registration');
      $markup = '<div>' . t('This workshop is full') . '</div>';
      if ($flag_workshop && $flag_workshop->is_flagged($wrapper->getIdentifier(), $user->uid)) {
        $markup .= flag_create_link('workshop_registration', $wrapper->getIdentifier());
      }
      return $markup;
    }
  }
}

/**
 * Implements hook_flag_flag().
 */
function dccr_ftr_workshop_flag_flag($flag, $content_id, $account, $flagging){
  if ($flag->name == 'workshop_registration') {
    dccr_ftr_workshop_countdown('flag',$content_id);
  }
}

/**
 * Implements hook_flag_unflag().
 */
function dccr_ftr_workshop_flag_unflag($flag, $content_id, $account, $flagging){
  if ($flag->name == 'workshop_registration') {
    dccr_ftr_workshop_countdown('unflag',$content_id);
  }
}

function dccr_ftr_workshop_countdown($action, $content_id){
  $wrapper = entity_metadata_wrapper('node', $content_id);
  if ($wrapper->source->value()) {
    $translations = translation_node_get_translations($wrapper->source->value()->tnid);
    foreach ($translations as $node) {
      if ($wrapper->source->value()->tnid != $node->nid) {
        $t_wrapper = entity_metadata_wrapper('node',$node->nid);
        $t_availability = $t_wrapper->field_availability->value();
        if ($action == 'flag') {
          $t_availability--;
        }
        elseif ($action == 'unflag') {
          $t_availability++;
        }
        $t_wrapper->field_availability->set($t_availability);
        $t_wrapper->save();
        break;
      }
    }
  }
  $actual_availability = $wrapper->field_availability->value();
  if ($action == 'flag') {
    $actual_availability--;
  }
  elseif ($action == 'unflag') {
    $actual_availability++;
  }
  $wrapper->field_availability->set($actual_availability);
  $wrapper->save();
}

