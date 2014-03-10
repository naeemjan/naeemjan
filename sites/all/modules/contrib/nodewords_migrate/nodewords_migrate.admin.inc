<?php

/**
 * @file nodewords_migrate.admin.inc
 * Code to process data migration.
 */

/**
 * Form generator for the migration selection form.
 */
function nodewords_migrate_form($form, &$form_state) {
  $form['actions']['migrate'] = array(
    '#type' => 'submit',
    '#value' => t('Migrate'),
  );

  return $form;
}

/**
 * Handles submission of the nodewords migration form.
 */
function nodewords_migrate_form_submit($form, &$form_state) {
  nodewords_migrate_migrate();
}

/**
 * Migrates Nodewords data to the Meta tags module.
 *
 * @todo: Properly filter default values.
 */
function nodewords_migrate_migrate() {
  // Retrieve nodewords data.
  $results = db_query("SELECT type, id, name, content FROM {nodewords} ORDER BY type, id");

  // Convert nodewords data into the meta tags format.
  foreach ($results as $result) {
    $type = nodewords_migrate_type($result->type);
    $metatag = (object) array(
      'entity_type' => $type,
      'entity_id' => $result->id,
      'data' => nodewords_migrate_metatag($type, $result->name, unserialize($result->content)),
    );

    // If the metatags value is not empty.
    if (!empty($metatag->data[$result->name]['value'])) {
      // If a current records exists.
      if (isset($record)) {
        // If the metatag belongs to the currenct record.
        if ($metatag->entity_type == $record->entity_type && $metatag->entity_id == $record->entity_id) {
          // Add this metatag to the current record.
          $record->data = array_merge($record->data, $metatag->data);
        }
        else {
          // Store record and create a new one.
          $records[] = $record;
          $record = $metatag;
        }
      }
      else {
        // Create a new record.
        $record = $metatag;
      }
    }
  }
  // Add the last record to the list of records.
  $records[] = $record;

  // Merge all nodewords with meta tags.
  foreach ($records as $record) {
    // If there is data to merge.
    if ($record->data) {
      switch ($record->entity_type) {
        // Nodewords defaults are metatag configuration.
        case 'global':
        case 'global:frontpage':
          $metatags = metatag_config_load($record->entity_type);

          // If a configuration was found.
          if ($metatags) {
            // Merge in Nodewords defaults.
            $metatags->config = array_merge($metatags->config, $record->data);
          }
          else {
            // Create a new configuration.
            $metatags = (object) array(
              'instance' => $record->entity_type,
              'config' => $record->data,
            );
          }

          metatag_config_save($metatags);
          break;

        // These are metatags for a specified entity.
        case 'node':
          $metatags = metatag_metatags_load($record->entity_type, $record->entity_id);
          $metatags = array_merge($metatags, $record->data);
          metatag_metatags_save($record->entity_type, $record->entity_id, $metatags);
          break;
      }
    }
  }
}

/**
 * Converts the nodewords type to a metatage type or metatag config instance.
 *
 * @param $type
 *   Nodewords type.
 *
 * @return
 *   Meta tags type or configuration instance.
 */
function nodewords_migrate_type($type) {
//  define('NODEWORDS_TYPE_DEFAULT',    1);
//  define('NODEWORDS_TYPE_ERRORPAGE',  2);
//  define('NODEWORDS_TYPE_FRONTPAGE',  3);
//  define('NODEWORDS_TYPE_NONE',       0);
//  define('NODEWORDS_TYPE_NODE',       5);
//  define('NODEWORDS_TYPE_PAGE',      10);
//  define('NODEWORDS_TYPE_PAGER',      4);
//  define('NODEWORDS_TYPE_TERM',       6);
//  define('NODEWORDS_TYPE_TRACKER',    7);
//  define('NODEWORDS_TYPE_USER',       8);
//  define('NODEWORDS_TYPE_VOCABULARY', 9);
  switch ($type) {
    case 1:
      return 'global';

    case 3:
      return 'global:frontpage';

    case 5:
      return 'node';
  }

  return FALSE;
}

/**
 * Converts metatag data from nodewords to meta tags format.
 *
 * @param $type
 *   Metatag type.
 * @param $name
 *   Metatag name.
 * @param $data
 *   Metatag data in nodewords format.
 *
 * @return
 *   Metatag name and data in meta tags format if name is supported by type.
 */
function nodewords_migrate_metatag($type, $name, $data) {
  $empty = array(
    $name => array(
      'value' => '',
    ),
  );

  $default = array(
    $name => $data,
  );

  // Format the metatag based on the type and name.
  switch ($type) {
    // Configurations.
    case 'global':
    case 'global:frontpage':
      switch ($name) {
        // @todo: Create custom meta tags if possible.
        case 'abstract':
        case 'revisit-after':
          return $empty;

        // @todo: Convert robots.
        case 'robots':
          return $empty;

        //case 'canonical':
        //case 'copyright':
        default:
          return $default;
      }

    // Content.
    //case 'node':
    default:
      switch ($name) {
        // @todo: Create custom meta tags if possible.
        case 'abstract':
        case 'revisit-after':
          return $empty;

        // Not supported for content.
        case 'canonical':
        case 'copyright':
        case 'robots':
          return $empty;

        default:
          return $default;
      }
  }
}
