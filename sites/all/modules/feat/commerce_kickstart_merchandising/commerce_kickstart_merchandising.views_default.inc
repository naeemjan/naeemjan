<?php
/**
 * @file
 * commerce_kickstart_merchandising.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function commerce_kickstart_merchandising_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ad_push';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ad push blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '180',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ad_push' => 'ad_push',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: First ad push block */
  $handler = $view->new_display('block', 'First ad push block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Block showing the first ad push.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'frontpage_block',
    'image_link' => '',
  );
  /* Field: Content: Tagline */
  $handler->display->display_options['fields']['field_tagline']['id'] = 'field_tagline';
  $handler->display->display_options['fields']['field_tagline']['table'] = 'field_data_field_tagline';
  $handler->display->display_options['fields']['field_tagline']['field'] = 'field_tagline';
  $handler->display->display_options['fields']['field_tagline']['label'] = '';
  $handler->display->display_options['fields']['field_tagline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tagline']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_tagline']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'First ad push';

  /* Display: Second ad push block */
  $handler = $view->new_display('block', 'Second ad push block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Block showing the second ad push.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'frontpage_block',
    'image_link' => '',
  );
  /* Field: Content: Tagline */
  $handler->display->display_options['fields']['field_tagline']['id'] = 'field_tagline';
  $handler->display->display_options['fields']['field_tagline']['table'] = 'field_data_field_tagline';
  $handler->display->display_options['fields']['field_tagline']['field'] = 'field_tagline';
  $handler->display->display_options['fields']['field_tagline']['label'] = '';
  $handler->display->display_options['fields']['field_tagline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tagline']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_tagline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tagline']['type'] = 'text_plain';
  $handler->display->display_options['block_description'] = 'Second ad push';

  /* Display: third ad push block */
  $handler = $view->new_display('block', 'third ad push block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Block showing the third ad push.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'frontpage_block',
    'image_link' => '',
  );
  /* Field: Content: Tagline */
  $handler->display->display_options['fields']['field_tagline']['id'] = 'field_tagline';
  $handler->display->display_options['fields']['field_tagline']['table'] = 'field_data_field_tagline';
  $handler->display->display_options['fields']['field_tagline']['field'] = 'field_tagline';
  $handler->display->display_options['fields']['field_tagline']['label'] = '';
  $handler->display->display_options['fields']['field_tagline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tagline']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_tagline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tagline']['type'] = 'text_plain';
  $handler->display->display_options['block_description'] = 'Second ad push';
  $translatables['ad_push'] = array(
    t('Master'),
    t('Articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Read more'),
    t('First ad push block'),
    t('Block showing the first ad push.'),
    t('First ad push'),
    t('Second ad push block'),
    t('Block showing the second ad push.'),
    t('Second ad push'),
    t('third ad push block'),
    t('Block showing the third ad push.'),
  );
  $export['ad_push'] = $view;

  $view = new view();
  $view->name = 'best_sales';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Best Sales';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Best Sales';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced product */
  $handler->display->display_options['relationships']['field_product_reference_product_id']['id'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['field'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['required'] = TRUE;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] - [commerce_price]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'product_grid',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['separator'] = ' ';
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'display_product' => 'display_product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Commerce Product: Stock (commerce_stock) */
  $handler->display->display_options['filters']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['filters']['commerce_stock_value']['field'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['commerce_stock_value']['operator'] = '>';
  $handler->display->display_options['filters']['commerce_stock_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['commerce_stock_value']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku']['value'] = 'Int1';
  $handler->display->display_options['filters']['sku']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_1']['id'] = 'sku_1';
  $handler->display->display_options['filters']['sku_1']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_1']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_1']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_1']['value'] = 'Int1_h';
  $handler->display->display_options['filters']['sku_1']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_12']['id'] = 'sku_12';
  $handler->display->display_options['filters']['sku_12']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_12']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_12']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_12']['value'] = '#53';
  $handler->display->display_options['filters']['sku_12']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_2']['id'] = 'sku_2';
  $handler->display->display_options['filters']['sku_2']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_2']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_2']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_2']['value'] = '#42';
  $handler->display->display_options['filters']['sku_2']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_3']['id'] = 'sku_3';
  $handler->display->display_options['filters']['sku_3']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_3']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_3']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_3']['value'] = '#46';
  $handler->display->display_options['filters']['sku_3']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_4']['id'] = 'sku_4';
  $handler->display->display_options['filters']['sku_4']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_4']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_4']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_4']['value'] = '#54';
  $handler->display->display_options['filters']['sku_4']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_5']['id'] = 'sku_5';
  $handler->display->display_options['filters']['sku_5']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_5']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_5']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_5']['value'] = '#36';
  $handler->display->display_options['filters']['sku_5']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_6']['id'] = 'sku_6';
  $handler->display->display_options['filters']['sku_6']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_6']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_6']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_6']['value'] = '#9';
  $handler->display->display_options['filters']['sku_6']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_7']['id'] = 'sku_7';
  $handler->display->display_options['filters']['sku_7']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_7']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_7']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_7']['value'] = '#65';
  $handler->display->display_options['filters']['sku_7']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_8']['id'] = 'sku_8';
  $handler->display->display_options['filters']['sku_8']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_8']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_8']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_8']['value'] = '15';
  $handler->display->display_options['filters']['sku_8']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_9']['id'] = 'sku_9';
  $handler->display->display_options['filters']['sku_9']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_9']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_9']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_9']['value'] = '#25';
  $handler->display->display_options['filters']['sku_9']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_10']['id'] = 'sku_10';
  $handler->display->display_options['filters']['sku_10']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_10']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_10']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_10']['value'] = '#2';
  $handler->display->display_options['filters']['sku_10']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_11']['id'] = 'sku_11';
  $handler->display->display_options['filters']['sku_11']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_11']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_11']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_11']['value'] = '#100';
  $handler->display->display_options['filters']['sku_11']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'SHOP/products/best-sales';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'rss/stock/in-stock.xml';
  $translatables['best_sales'] = array(
    t('Master'),
    t('Best Sales'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Product'),
    t('[title] - [commerce_price]'),
    t('Page'),
    t('Feed'),
  );
  $export['best_sales'] = $view;

  $view = new view();
  $view->name = 'drinks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'drinks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Are you thirsty?';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced product */
  $handler->display->display_options['relationships']['field_product_reference_product_id']['id'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['field'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['required'] = TRUE;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] - [commerce_price]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'product_grid',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['separator'] = ' ';
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'display_product' => 'display_product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Commerce Product: Stock (commerce_stock) */
  $handler->display->display_options['filters']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['filters']['commerce_stock_value']['field'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['commerce_stock_value']['operator'] = '>';
  $handler->display->display_options['filters']['commerce_stock_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['commerce_stock_value']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_1']['id'] = 'sku_1';
  $handler->display->display_options['filters']['sku_1']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_1']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_1']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_1']['operator'] = 'starts';
  $handler->display->display_options['filters']['sku_1']['value'] = 'cb-';
  $handler->display->display_options['filters']['sku_1']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_2']['id'] = 'sku_2';
  $handler->display->display_options['filters']['sku_2']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_2']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_2']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku_2']['value'] = 'mar-mint';
  $handler->display->display_options['filters']['sku_2']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku']['value'] = 'piola';
  $handler->display->display_options['filters']['sku']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'SHOP/products/thirst';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'rss/stock/in-stock.xml';
  $translatables['drinks'] = array(
    t('Master'),
    t('Are you thirsty?'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Product'),
    t('[title] - [commerce_price]'),
    t('Page'),
    t('Feed'),
  );
  $export['drinks'] = $view;

  return $export;
}
