<?php
/**
 * @file
 * checkout_shipping_taxes.features.inc
 */

/**
 * Implements hook_commerce_shipping_service_info().
 */
function checkout_shipping_taxes_commerce_shipping_service_info() {
  $items = array(
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_rates().
 */
function checkout_shipping_taxes_commerce_tax_default_rates() {
  $items = array(
  );
  return $items;
}
