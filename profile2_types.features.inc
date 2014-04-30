<?php
/**
 * @file
 * profile2_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function profile2_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function profile2_types_default_profile2_type() {
  $items = array();
  $items['affiliate_info'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "affiliate_info",
    "label" : "Affiliate Info",
    "weight" : "0",
    "data" : null
  }');
  $items['boondocking_available'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "boondocking_available",
    "label" : "Boondocking Available",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 }
  }');
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profile",
    "label" : "User Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 }
  }');
  return $items;
}
