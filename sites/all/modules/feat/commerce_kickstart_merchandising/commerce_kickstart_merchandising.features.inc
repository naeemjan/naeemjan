<?php
/**
 * @file
 * commerce_kickstart_merchandising.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_kickstart_merchandising_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commerce_kickstart_merchandising_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function commerce_kickstart_merchandising_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_block.
  $styles['frontpage_block'] = array(
    'name' => 'frontpage_block',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '305',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function commerce_kickstart_merchandising_node_info() {
  $items = array(
    'ad_push' => array(
      'name' => t('Ad Push'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
