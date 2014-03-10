<?php
/**
 * @file
 * checkout_shipping_taxes.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function checkout_shipping_taxes_field_default_fields() {
  $fields = array();

  // Exported field: 'commerce_customer_profile-billing-field_vat_number'.
  $fields['commerce_customer_profile-billing-field_vat_number'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_vat_number',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '15',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'billing',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'If applicable. Only for shops in the EU.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => -8,
        ),
      ),
      'entity_type' => 'commerce_customer_profile',
      'field_name' => 'field_vat_number',
      'label' => 'VAT Number',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '15',
        ),
        'type' => 'text_textfield',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'commerce_product-product-field_product_tax'.
  $fields['commerce_product-product-field_product_tax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_product_tax',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'product',
      'default_value' => array(
        0 => array(
          'value' => '19',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '4',
        ),
        'line_item' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'node_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'field_product_tax',
      'label' => 'Product Tax',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'commerce_product-product-field_wholesale_price'.
  $fields['commerce_product-product-field_wholesale_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_wholesale_price',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '0',
      'module' => 'commerce_price',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => '5',
        ),
        'line_item' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'node_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'field_wholesale_price',
      'label' => 'Wholesale Price',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => '11',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('If applicable. Only for shops in the EU.');
  t('Product Tax');
  t('VAT Number');
  t('Wholesale Price');

  return $fields;
}
