<?php
/**
 * @file
 * profile2_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function profile2_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ba_details|profile2|boondocking_available|form';
  $field_group->group_name = 'group_ba_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'boondocking_available';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_ba_number_of_spots',
      1 => 'field_ba_pullthrough_spot',
      2 => 'field_ba_slideout_awning',
      3 => 'field_ba_max_nights',
      4 => 'field_ba_availability',
      5 => 'field_ba_hookups',
      6 => 'field_generators_allowed',
      7 => 'field_lawn_chairs_allowed',
      8 => 'field_barbecues_allowed',
      9 => 'field_ba_pets_welcome',
      10 => 'field_ba_access_road_conditions',
      11 => 'field_ba_max_rv_length_int',
      12 => 'field_ba_wifi_available',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ba-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ba_details|profile2|boondocking_available|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_display|profile2|boondocking_available|default';
  $field_group->group_name = 'group_details_display';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'boondocking_available';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_ba_number_of_spots',
      1 => 'field_ba_pullthrough_spot',
      2 => 'field_ba_slideout_awning',
      3 => 'field_ba_max_nights',
      4 => 'field_ba_availability',
      5 => 'field_ba_hookups',
      6 => 'field_generators_allowed',
      7 => 'field_lawn_chairs_allowed',
      8 => 'field_barbecues_allowed',
      9 => 'field_ba_pets_welcome',
      10 => 'field_ba_access_road_conditions',
      11 => 'field_ba_max_rv_length_int',
      12 => 'field_ba_wifi_available',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details-display field-group-fieldset',
      ),
    ),
  );
  $export['group_details_display|profile2|boondocking_available|default'] = $field_group;

  return $export;
}
