<?php
/**
 * @file
 * jean_products_and_displays.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function jean_products_and_displays_field_default_fields() {
  $fields = array();

  // Exported field: 'commerce_product-food_supplement_product-commerce_price'.
  $fields['commerce_product-food_supplement_product-commerce_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_product',
      ),
      'field_name' => 'commerce_price',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'food_supplement_product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'line_item' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
        'node_teaser' => array(
          'label' => 'hidden',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'commerce_price',
      'label' => 'Price',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'commerce_product-food_supplement_product-commerce_stock'.
  $fields['commerce_product-food_supplement_product-commerce_stock'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_product',
      ),
      'field_name' => 'commerce_stock',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'food_supplement_product',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => NULL,
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
          'weight' => 5,
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
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'commerce_stock',
      'label' => 'Stock',
      'required' => TRUE,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 43,
      ),
    ),
  );

  // Exported field: 'commerce_product-food_supplement_product-field_physical_weight'.
  $fields['commerce_product-food_supplement_product-field_physical_weight'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_physical_weight',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'weight' => array(
          0 => 'weight',
        ),
      ),
      'locked' => '0',
      'module' => 'physical',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'physical_weight',
    ),
    'field_instance' => array(
      'bundle' => 'food_supplement_product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'physical',
          'settings' => array(),
          'type' => 'physical_weight_formatted',
          'weight' => 2,
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
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'field_physical_weight',
      'label' => 'Weight',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'physical',
        'settings' => array(
          'default_unit' => 'g',
          'unit_select_list' => 1,
        ),
        'type' => 'physical_weight_textfield',
        'weight' => '39',
      ),
    ),
  );

  // Exported field: 'commerce_product-food_supplement_product-field_product_tax'.
  $fields['commerce_product-food_supplement_product-field_product_tax'] = array(
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
      'bundle' => 'food_supplement_product',
      'default_value' => array(
        0 => array(
          'value' => '7',
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
          'weight' => 1,
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
          'weight' => 0,
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
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'commerce_product-food_supplement_product-field_purchase_price'.
  $fields['commerce_product-food_supplement_product-field_purchase_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_purchase_price',
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
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'food_supplement_product',
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
          'weight' => 4,
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
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'field_purchase_price',
      'label' => 'Purchase Price',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'USD',
        ),
        'type' => 'commerce_price_full',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'commerce_product-food_supplement_product-field_wholesale_price'.
  $fields['commerce_product-food_supplement_product-field_wholesale_price'] = array(
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
      'bundle' => 'food_supplement_product',
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
          'weight' => 3,
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
          'weight' => 0,
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
          'currency_code' => 'EUR',
        ),
        'type' => 'commerce_price_full',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'commerce_product-product-field_physical_weight'.
  $fields['commerce_product-product-field_physical_weight'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_physical_weight',
      'foreign keys' => array(),
      'global_block_settings' => '1',
      'indexes' => array(
        'weight' => array(
          0 => 'weight',
        ),
      ),
      'locked' => '0',
      'module' => 'physical',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'physical_weight',
    ),
    'field_instance' => array(
      'bundle' => 'product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'physical',
          'settings' => array(),
          'type' => 'physical_weight_formatted',
          'weight' => '2',
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
      'field_name' => 'field_physical_weight',
      'label' => 'Weight',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'physical',
        'settings' => array(
          'default_unit' => 'g',
          'unit_select_list' => 1,
        ),
        'type' => 'physical_weight_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-food_supplements-body'.
  $fields['node-food_supplements-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
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
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'food_supplements',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'checkout_pane' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-food_supplements-field_image_food_supplements'.
  $fields['node-food_supplements-field_image_food_supplements'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '5',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image_food_supplements',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'global_block_settings' => '1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'food_supplements',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'checkout_pane' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_image_food_supplements',
      'label' => 'Image Food Supplements',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'food-supplements',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
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
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-food_supplements-field_product_for_food_supplemen'.
  $fields['node-food_supplements-field_product_for_food_supplemen'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_product_for_food_supplemen',
      'foreign keys' => array(
        'product_id' => array(
          'columns' => array(
            'product_id' => 'product_id',
          ),
          'table' => 'commerce_product',
        ),
      ),
      'global_block_settings' => '2',
      'indexes' => array(
        'product_id' => array(
          0 => 'product_id',
        ),
      ),
      'locked' => '0',
      'module' => 'commerce_product_reference',
      'settings' => array(
        'options_list_limit' => '',
      ),
      'translatable' => '0',
      'type' => 'commerce_product_reference',
    ),
    'field_instance' => array(
      'bundle' => 'food_supplements',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'cck_blocks' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'checkout_pane' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'commerce_cart',
          'settings' => array(
            'combine' => TRUE,
            'default_quantity' => 1,
            'line_item_type' => 'product',
            'show_quantity' => FALSE,
            'show_single_product_attributes' => FALSE,
          ),
          'type' => 'commerce_cart_add_to_cart_form',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_product_for_food_supplemen',
      'label' => 'Product for Food Supplements',
      'required' => 0,
      'settings' => array(
        'field_injection' => 0,
        'referenceable_types' => array(
          'food_supplement_product' => 'food_supplement_product',
          'product' => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image Food Supplements');
  t('Price');
  t('Product Tax');
  t('Product for Food Supplements');
  t('Purchase Price');
  t('Stock');
  t('Weight');
  t('Wholesale Price');

  return $fields;
}
