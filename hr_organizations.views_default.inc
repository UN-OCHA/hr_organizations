<?php
/**
 * @file
 * hr_organizations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_organizations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hr_organizations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Acronym */
  $handler->display->display_options['fields']['field_acronym']['id'] = 'field_acronym';
  $handler->display->display_options['fields']['field_acronym']['table'] = 'field_data_field_acronym';
  $handler->display->display_options['fields']['field_acronym']['field'] = 'field_acronym';
  $handler->display->display_options['fields']['field_acronym']['label'] = '';
  $handler->display->display_options['fields']['field_acronym']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_acronym']['alter']['text'] = '[[field_acronym]]';
  $handler->display->display_options['fields']['field_acronym']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'hr_organization' => 'hr_organization',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_acronym' => 'field_acronym',
    'name_field' => 'name_field',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['hr_organizations'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[[field_acronym]]'),
    t('Entity Reference'),
  );
  $export['hr_organizations'] = $view;

  return $export;
}
