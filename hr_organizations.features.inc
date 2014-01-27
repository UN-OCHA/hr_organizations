<?php
/**
 * @file
 * hr_organizations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_organizations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
