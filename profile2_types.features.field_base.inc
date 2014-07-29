<?php
/**
 * @file
 * profile2_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function profile2_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_affiliate_comments'
  $field_bases['field_affiliate_comments'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_affiliate_comments',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'affiliate_info',
  );

  // Exported field_base: 'field_affiliate_first_name'
  $field_bases['field_affiliate_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_affiliate_first_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => 255,
      'profile2_private' => FALSE,
      'text_processing' => 0,
      'views_base_columns' => array(
        'format' => 'format',
        'value' => 'value',
      ),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'affiliate_info',
  );

  // Exported field_base: 'field_affiliate_paypal_email'
  $field_bases['field_affiliate_paypal_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_affiliate_paypal_email',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(
      'profile2_private' => FALSE,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'email',
    'type_name' => 'affiliate_info',
  );

  // Exported field_base: 'field_affiliate_terms_of_service'
  $field_bases['field_affiliate_terms_of_service'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_affiliate_terms_of_service',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'I agree to the <a href="/affiliate-terms-of-service" target="_blank">affiliate terms of service</a>',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'profile2_private' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_affiliate_tos'
  $field_bases['field_affiliate_tos'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_affiliate_tos',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'I agree to the <a href="/affiliate-terms-of-service" target="_blank">affiliate terms of service</a>',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'profile2_private' => 0,
      'suffix' => '',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
    'type_name' => 'affiliate_info',
  );

  // Exported field_base: 'field_affiliate_website_url'
  $field_bases['field_affiliate_website_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_affiliate_website_url',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'profile2_private' => 0,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
    'type_name' => 'affiliate_info',
  );

  // Exported field_base: 'field_ba_access_road_conditions'
  $field_bases['field_ba_access_road_conditions'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_access_road_conditions',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'text_processing' => 1,
      'views_base_columns' => array(),
      'views_base_table' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_availability'
  $field_bases['field_ba_availability'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_availability',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'text_processing' => 1,
      'views_base_columns' => array(),
      'views_base_table' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_bda_pref'
  $field_bases['field_ba_bda_pref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_bda_pref',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Yes, I have boondocking available',
        1 => 'I cannot provide a boondocking location.',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_ba_description'
  $field_bases['field_ba_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_description',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'text_processing' => 1,
      'views_base_columns' => array(),
      'views_base_table' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_hookups'
  $field_bases['field_ba_hookups'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_hookups',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Water Hookup Available' => 'Water Hookup Available',
        'Electric Hookup Available' => 'Electric Hookup Available',
        'Dump Available' => 'Dump Available',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_local_attractions'
  $field_bases['field_ba_local_attractions'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_local_attractions',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'profile2_private' => 0,
      'text_processing' => 1,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_max_nights'
  $field_bases['field_ba_max_nights'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_max_nights',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
        'we\'ll play it by ear' => 'we\'ll play it by ear',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_max_rv_length_int'
  $field_bases['field_ba_max_rv_length_int'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_max_rv_length_int',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        20 => 'under 20 feet',
        25 => '20-25 feet',
        30 => '25-30 feet',
        35 => '30-35 feet',
        40 => '35-40 feet',
        100 => 'any size',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'profile2_private' => 0,
      'suffix' => '',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_number_of_spots'
  $field_bases['field_ba_number_of_spots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_number_of_spots',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
        6 => 6,
        7 => 7,
        8 => 8,
        9 => 9,
        10 => 10,
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'profile2_private' => 0,
      'suffix' => '',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_pets_welcome'
  $field_bases['field_ba_pets_welcome'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_pets_welcome',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'No' => 'No',
        'Yes' => 'Yes',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_photo'
  $field_bases['field_ba_photo'] = array(
    'active' => 1,
    'cardinality' => 5,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_photo',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'description_field' => 1,
      'list_default' => 1,
      'list_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'image',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_pullthrough_spot'
  $field_bases['field_ba_pullthrough_spot'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_pullthrough_spot',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'No' => 'No',
        'Yes' => 'Yes',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_slideout_awning'
  $field_bases['field_ba_slideout_awning'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_slideout_awning',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'No' => 'No',
        'Yes' => 'Yes',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_why_no_bda'
  $field_bases['field_ba_why_no_bda'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_why_no_bda',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_ba_wifi_available'
  $field_bases['field_ba_wifi_available'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ba_wifi_available',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'No' => 'No',
        'Yes' => 'Yes',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_barbecues_allowed'
  $field_bases['field_barbecues_allowed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_barbecues_allowed',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'No' => 'No',
        'Yes' => 'Yes',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_boondock_location'
  $field_bases['field_boondock_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_boondock_location',
    'foreign keys' => array(),
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'big red',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 'additional',
            'city' => 0,
            'coords' => 'coords',
            'country' => 0,
            'country_name' => 'country_name',
            'locpick' => 'locpick',
            'map_link' => 'map_link',
            'name' => 'name',
            'postal_code' => 'postal_code',
            'province' => 0,
            'province_name' => 'province_name',
            'street' => 'street',
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 0,
              'default' => '',
              'weight' => -97,
            ),
            'city' => array(
              'collect' => 2,
              'default' => '',
              'weight' => -96,
            ),
            'country' => array(
              'collect' => 2,
              'default' => 'us',
              'weight' => -100,
            ),
            'locpick' => array(
              'collect' => 0,
              'weight' => -93,
            ),
            'name' => array(
              'collect' => 0,
              'default' => '',
              'weight' => -99,
            ),
            'postal_code' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -94,
            ),
            'province' => array(
              'collect' => 1,
              'default' => '',
              'weight' => -95,
              'widget' => 'autocomplete',
            ),
            'street' => array(
              'collect' => 0,
              'default' => '',
              'weight' => -98,
            ),
          ),
        ),
      ),
      'profile2_private' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'location',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_generators_allowed'
  $field_bases['field_generators_allowed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_generators_allowed',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'No' => 'No',
        'Yes' => 'Yes',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 1,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_hometown'
  $field_bases['field_hometown'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hometown',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'profile',
  );

  // Exported field_base: 'field_intro_text'
  $field_bases['field_intro_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_intro_text',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 3,
        'value' => '<p>Earn money by telling others about Boondockers Welcome.  Become an affiliate (it\'s free and easy) and earn money by mentioning our site on your web site, newsletter, blog, or even in emails. </p>

<p>Each time you refer a new member, we will pay you 10% of the sale of the membership. That means between $2 and $5 for each referral, depending on the membership they purchase. Payments will be made via Paypal after the end of each month, so you\'ll need to sign up for a <a href="https://www.paypal.com" target="_blank">paypal account</a>, if you don\'t already have one, before completing this affiliate application. Note that the affiliate commission will NOT be paid if you buy a membership for yourself.</p>

<p>Once you have signed up, you can login and go to the "Affiliate Center" under "My Account". From there, you can get links and banners to refer others to our site. You will be credited for any memberships that are purchased up to 6 months after first accessing Boondockers Welcome through one of your affiliate links. You can also log in at any time to check how many sales you have referred.</p>

<?php global $user; if (!$user->uid): ?>
<p>
<strong><em>Already a member of Boondockers Welcome? <a href="/user/login?destination=user/become-an-affiliate">Sign in first</a> so that you can tie your affiliate account to your existing account and re-use the same username and email address.</em></strong></p>
<?php endif; ?>',
      ),
      'profile2_private' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_lawn_chairs_allowed'
  $field_bases['field_lawn_chairs_allowed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_lawn_chairs_allowed',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'No' => 'No',
        'Yes' => 'Yes',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'boondocking_available',
  );

  // Exported field_base: 'field_profile_body'
  $field_bases['field_profile_body'] = array(
    'active' => 1,
    'bundle' => 'profile',
    'cardinality' => 1,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A user profile built as content.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => -4,
      ),
    ),
    'entity_type' => 'profile2',
    'entity_types' => array(),
    'field_name' => 'field_profile_body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'label' => 'Tell us about yourself',
    'locked' => 0,
    'module' => 'text',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'profile2_private' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_base: 'field_profile_intro_markup'
  $field_bases['field_profile_intro_markup'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_profile_intro_markup',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 2,
        'value' => 'Enter information about yourself for other members to see. This information will be used by them when determining whether to allow you to boondock on their property, or when they\'re searching for boondocking locations offered by like-minded people. Tell us all about yourself!
<p>
An asterisk (*) marks required fields; all others are optional.
<p>
Note that changes will only take effect after clicking the "Save" button at the bottom of the page.',
      ),
      'profile2_private' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_skills_to_share'
  $field_bases['field_skills_to_share'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_skills_to_share',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'profile2_private' => 0,
      'text_processing' => 1,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'profile',
  );

  // Exported field_base: 'field_user_age_range'
  $field_bases['field_user_age_range'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_age_range',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Prefer not to say' => 'Prefer not to say',
        '18-30' => '18-30',
        '30-45' => '30-45',
        '45-55' => '45-55',
        '55-65' => '55-65',
        '65 and up' => '65 and up',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'legacy_values' => array(),
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'profile',
  );

  // Exported field_base: 'field_user_fav_boond_locs'
  $field_bases['field_user_fav_boond_locs'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_fav_boond_locs',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'profile2_private' => 0,
      'text_processing' => 1,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'profile',
  );

  // Exported field_base: 'field_user_headline'
  $field_bases['field_user_headline'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_headline',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_user_photo'
  $field_bases['field_user_photo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_photo',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'description_field' => 0,
      'list_default' => 1,
      'list_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'image',
    'type_name' => 'profile',
  );

  // Exported field_base: 'field_user_your_pets'
  $field_bases['field_user_your_pets'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_your_pets',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'profile2_private' => 0,
      'text_processing' => 1,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'profile',
  );

  // Exported field_base: 'field_user_your_photos'
  $field_bases['field_user_your_photos'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_your_photos',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'description_field' => 1,
      'list_default' => 1,
      'list_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'image',
    'type_name' => 'profile',
  );

  // Exported field_base: 'field_user_your_rig'
  $field_bases['field_user_your_rig'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_your_rig',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'profile2_private' => 0,
      'text_processing' => 0,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'profile',
  );

  // Exported field_base: 'field_user_your_rig_photo'
  $field_bases['field_user_your_rig_photo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_your_rig_photo',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'description_field' => 0,
      'list_default' => 1,
      'list_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'image',
    'type_name' => 'profile',
  );

  return $field_bases;
}
