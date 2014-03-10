<?php
/**
 * @file
 * checkout_shipping_taxes.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function checkout_shipping_taxes_user_default_roles() {
  $roles = array();

  // Exported role: shop.
  $roles['shop'] = array(
    'name' => 'shop',
    'weight' => '2',
  );

  return $roles;
}
