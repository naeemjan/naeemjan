<?php
/**
 * @file
 * jean_products_and_displays.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function jean_products_and_displays_commerce_product_default_types() {
  $items = array(
    'food_supplement_product' => array(
      'type' => 'food_supplement_product',
      'name' => 'Food Supplement Product',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function jean_products_and_displays_commerce_tax_default_types() {
  $items = array(
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'A basic type for taxes that display inclusive with product prices.',
      'display_inclusive' => '1',
      'round_mode' => '1',
      'rule' => 'commerce_tax_type_vat',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function jean_products_and_displays_node_info() {
  $items = array(
    'food_supplements' => array(
      'name' => t('Food Supplements'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
