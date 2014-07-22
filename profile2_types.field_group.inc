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
  $field_group->identifier = 'group_affiliate_details|profile2|affiliate_info|form';
  $field_group->group_name = 'group_affiliate_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'affiliate_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliate Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_affiliate_website_url',
      1 => 'field_affiliate_first_name',
      2 => 'field_affiliate_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-affiliate-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_affiliate_details|profile2|affiliate_info|form'] = $field_group;

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
      0 => 'field_ba_access_road_conditions',
      1 => 'field_ba_availability',
      2 => 'field_ba_hookups',
      3 => 'field_ba_max_nights',
      4 => 'field_ba_max_rv_length_int',
      5 => 'field_ba_number_of_spots',
      6 => 'field_ba_pets_welcome',
      7 => 'field_ba_pullthrough_spot',
      8 => 'field_ba_slideout_awning',
      9 => 'field_ba_wifi_available',
      10 => 'field_barbecues_allowed',
      11 => 'field_generators_allowed',
      12 => 'field_lawn_chairs_allowed',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment_information|profile2|affiliate_info|form';
  $field_group->group_name = 'group_payment_information';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'affiliate_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payment Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_affiliate_paypal_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-payment-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_payment_information|profile2|affiliate_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info|profile2|profile|form';
  $field_group->group_name = 'group_user_info';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'All About You',
    'weight' => '3',
    'children' => array(
      0 => 'field_user_age_range',
      1 => 'field_user_fav_boond_locs',
      2 => 'field_skills_to_share',
      3 => 'field_user_photo',
      4 => 'field_user_your_pets',
      5 => 'field_hometown',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'All About You',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-user-info field-group-fieldset',
        'description' => 'Upload a photo and enter some more information about yourself to share with others. All fields are optional.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_info|profile2|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_rig|profile2|profile|form';
  $field_group->group_name = 'group_user_rig';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About Your Rig',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_your_rig',
      1 => 'field_user_your_rig_photo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'About Your Rig',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-user-rig field-group-fieldset',
        'description' => 'Enter information about your RV. This may be useful to others whom you hope to boondock with when determining whether they can accommodate you on their property. All fields are optional.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_rig|profile2|profile|form'] = $field_group;

  return $export;
}
