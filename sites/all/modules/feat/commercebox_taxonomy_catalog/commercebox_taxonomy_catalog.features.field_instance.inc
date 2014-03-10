<?php
/**
 * @file
 * commercebox_taxonomy_catalog.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function commercebox_taxonomy_catalog_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-catalog-field_image'
  $field_instances['taxonomy_term-catalog-field_image'] = array(
    'bundle' => 'catalog',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'x_350',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');

  return $field_instances;
}
