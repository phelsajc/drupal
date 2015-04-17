<?php
/**
 * @file
 * employee.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function employee_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'employee_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Employee Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employee Grid';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_given_name' => 'field_given_name',
    'name' => 'name',
    'field_age' => 'field_age',
    'field_barangay' => 'field_barangay',
    'field_block_' => 'field_block_',
    'field_country' => 'field_country',
    'field_date_of_birth' => 'field_date_of_birth',
    'field_gender' => 'field_gender',
    'field_house_' => 'field_house_',
    'field_id_number' => 'field_id_number',
    'field_last_name' => 'field_last_name',
    'field_lot_' => 'field_lot_',
    'field_position' => 'field_position',
    'field_street' => 'field_street',
    'field_subdivision' => 'field_subdivision',
    'field_last_name_1' => 'field_last_name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_given_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_age' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_barangay' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_block_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_birth' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gender' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_house_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_id_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lot_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_street' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subdivision' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<?php


    $output = l(t(\'Add new page\'), \'admin/people/create\');
    print $output;
 
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'User Name';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete Users',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'name' => 'name',
          'mail' => 'mail',
          'roles' => 'roles',
          'status' => 'status',
          'user::field_given_name' => 'user::field_given_name',
          'user::field_last_name' => 'user::field_last_name',
          'user::field_age' => 'user::field_age',
          'user::field_date_of_birth' => 'user::field_date_of_birth',
          'user::field_gender' => 'user::field_gender',
          'user::field_id_number' => 'user::field_id_number',
          'user::field_position' => 'user::field_position',
          'user::field_house_' => 'user::field_house_',
          'user::field_street' => 'user::field_street',
          'user::field_subdivision' => 'user::field_subdivision',
          'user::field_block_' => 'user::field_block_',
          'user::field_lot_' => 'user::field_lot_',
          'user::field_barangay' => 'user::field_barangay',
          'user::field_country' => 'user::field_country',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['element_label_colon'] = FALSE;
  /* Field: User: Given Name */
  $handler->display->display_options['fields']['field_given_name']['id'] = 'field_given_name';
  $handler->display->display_options['fields']['field_given_name']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['fields']['field_given_name']['field'] = 'field_given_name';
  $handler->display->display_options['fields']['field_given_name']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User Name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Age */
  $handler->display->display_options['fields']['field_age']['id'] = 'field_age';
  $handler->display->display_options['fields']['field_age']['table'] = 'field_data_field_age';
  $handler->display->display_options['fields']['field_age']['field'] = 'field_age';
  $handler->display->display_options['fields']['field_age']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: User: Barangay */
  $handler->display->display_options['fields']['field_barangay']['id'] = 'field_barangay';
  $handler->display->display_options['fields']['field_barangay']['table'] = 'field_data_field_barangay';
  $handler->display->display_options['fields']['field_barangay']['field'] = 'field_barangay';
  /* Field: User: Block # */
  $handler->display->display_options['fields']['field_block_']['id'] = 'field_block_';
  $handler->display->display_options['fields']['field_block_']['table'] = 'field_data_field_block_';
  $handler->display->display_options['fields']['field_block_']['field'] = 'field_block_';
  /* Field: User: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: User: Date of Birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['settings'] = array(
    'format_type' => 'my_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: User: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  /* Field: User: House # */
  $handler->display->display_options['fields']['field_house_']['id'] = 'field_house_';
  $handler->display->display_options['fields']['field_house_']['table'] = 'field_data_field_house_';
  $handler->display->display_options['fields']['field_house_']['field'] = 'field_house_';
  /* Field: User: ID Number */
  $handler->display->display_options['fields']['field_id_number']['id'] = 'field_id_number';
  $handler->display->display_options['fields']['field_id_number']['table'] = 'field_data_field_id_number';
  $handler->display->display_options['fields']['field_id_number']['field'] = 'field_id_number';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: Lot # */
  $handler->display->display_options['fields']['field_lot_']['id'] = 'field_lot_';
  $handler->display->display_options['fields']['field_lot_']['table'] = 'field_data_field_lot_';
  $handler->display->display_options['fields']['field_lot_']['field'] = 'field_lot_';
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: User: Street */
  $handler->display->display_options['fields']['field_street']['id'] = 'field_street';
  $handler->display->display_options['fields']['field_street']['table'] = 'field_data_field_street';
  $handler->display->display_options['fields']['field_street']['field'] = 'field_street';
  $handler->display->display_options['fields']['field_street']['element_label_colon'] = FALSE;
  /* Field: User: subdivision */
  $handler->display->display_options['fields']['field_subdivision']['id'] = 'field_subdivision';
  $handler->display->display_options['fields']['field_subdivision']['table'] = 'field_data_field_subdivision';
  $handler->display->display_options['fields']['field_subdivision']['field'] = 'field_subdivision';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Given Name (field_given_name) */
  $handler->display->display_options['filters']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['filters']['field_given_name_value']['field'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_given_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator_id'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['label'] = 'Given Name';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['description'] = 'This will filter the name of employee';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['operator'] = 'field_given_name_value_op';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_given_name_value']['group_info']['label'] = 'Given Name (field_given_name)';
  $handler->display->display_options['filters']['field_given_name_value']['group_info']['identifier'] = 'field_given_name_value';
  $handler->display->display_options['filters']['field_given_name_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_given_name_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'employee-grid';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Employee Form';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['employee_grid'] = $view;

  return $export;
}
