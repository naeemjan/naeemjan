<?php
/**
 * @file
 * extra_fees.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function extra_fees_default_rules_configuration() {
  $items = array();
  $items['rules_check_if_the_shipping_is_to_eu'] = entity_import('rules_config', '{ "rules_check_if_the_shipping_is_to_eu" : {
      "LABEL" : "Check if the Shipping is to EU",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order" ],
      "AND" : [
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FI"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "FR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GR"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "HU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "IT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LV"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "LU"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "MT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "NL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PL"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "PT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "RO"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "ES"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "SE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "GB"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "AT"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BE"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "BG"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CY"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "CZ"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "DK"
              }
            },
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "site:current-cart-order" ],
                "address_field" : "commerce_customer_shipping|commerce_customer_address",
                "address_component" : "country",
                "value" : "EE"
              }
            }
          ]
        }
      ]
    }
  }');
  $items['rules_packing_fee'] = entity_import('rules_config', '{ "rules_packing_fee" : {
      "LABEL" : "Packing Fee",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping", "commerce_order", "rules", "commerce_fees" ],
      "ON" : { "commerce_fees_order" : [] },
      "IF" : [
        { "NOT commerce_shipping_compare_shipping_service" : {
            "commerce_order" : [ "commerce_order" ],
            "service" : "freie_selbstabholung"
          }
        },
        { "OR" : [
            { "commerce_order_compare_address" : {
                "commerce_order" : [ "commerce_order" ],
                "address_field" : "commerce_customer_billing|commerce_customer_address",
                "address_component" : "country",
                "value" : "DE"
              }
            },
            { "component_rules_check_if_the_shipping_is_to_eu" : [] }
          ]
        }
      ],
      "DO" : [
        { "commerce_fees_apply" : {
            "entity" : [ "commerce-order" ],
            "fee" : "packing_fee",
            "amount" : "95",
            "currency_code" : "EUR",
            "include_tax" : "ust"
          }
        }
      ]
    }
  }');
  $items['rules_packing_fee_no_vat'] = entity_import('rules_config', '{ "rules_packing_fee_no_vat" : {
      "LABEL" : "Packing Fee No VAT",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping", "commerce_order", "rules", "commerce_fees" ],
      "ON" : { "commerce_fees_order" : [] },
      "IF" : [
        { "NOT commerce_shipping_compare_shipping_service" : {
            "commerce_order" : [ "commerce_order" ],
            "service" : "freie_selbstabholung"
          }
        },
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_billing|commerce_customer_address",
            "address_component" : "country",
            "value" : "DE"
          }
        },
        { "NOT component_rules_check_if_the_shipping_is_to_eu" : [] }
      ],
      "DO" : [
        { "commerce_fees_apply" : {
            "entity" : [ "commerce-order" ],
            "fee" : "packing_fee",
            "amount" : "80",
            "currency_code" : "EUR",
            "include_tax" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
