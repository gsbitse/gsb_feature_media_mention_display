<?php
/**
 * @file
 * gsb_feature_media_mention_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_media_mention_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gsb_media_mention';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB Media Mention';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more like this';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'gsb_media_mention' => 'gsb_media_mention',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 2;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Node Id';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Business Insight Topic (field_business_insight_topic) */
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['id'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['table'] = 'field_data_field_business_insight_topic';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['field'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['value'] = '';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['operator_id'] = 'field_business_insight_topic_tid_op';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['label'] = 'Business Insight Topic (field_business_insight_topic)';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['operator'] = 'field_business_insight_topic_tid_op';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['identifier'] = 'field_business_insight_topic_tid';
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_business_insight_topic_tid']['vocabulary'] = 'business_insight_topic';
  /* Filter criterion: Content: Target Audience (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator_id'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['label'] = 'Target Audience (field_target_audience)';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['identifier'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_target_audience_tid']['vocabulary'] = 'target_audience';
  /* Filter criterion: Content: Discipline (field_discipline) */
  $handler->display->display_options['filters']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['filters']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['value'] = '';
  $handler->display->display_options['filters']['field_discipline_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_discipline_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['operator_id'] = 'field_discipline_tid_op';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['label'] = 'Discipline (field_discipline)';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['operator'] = 'field_discipline_tid_op';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['identifier'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_discipline_tid']['vocabulary'] = 'discipline';
  /* Filter criterion: Content: Industry (field_industry) */
  $handler->display->display_options['filters']['field_industry_tid']['id'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['table'] = 'field_data_field_industry';
  $handler->display->display_options['filters']['field_industry_tid']['field'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator_id'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['label'] = 'Industry (field_industry)';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['identifier'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_industry_tid']['vocabulary'] = 'industry';
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region (field_region)';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'region';
  /* Filter criterion: Content: Company Organization (field_company_organization) */
  $handler->display->display_options['filters']['field_company_organization_tid']['id'] = 'field_company_organization_tid';
  $handler->display->display_options['filters']['field_company_organization_tid']['table'] = 'field_data_field_company_organization';
  $handler->display->display_options['filters']['field_company_organization_tid']['field'] = 'field_company_organization_tid';
  $handler->display->display_options['filters']['field_company_organization_tid']['value'] = '';
  $handler->display->display_options['filters']['field_company_organization_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_company_organization_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['operator_id'] = 'field_company_organization_tid_op';
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['label'] = 'Company Organization (field_company_organization)';
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['operator'] = 'field_company_organization_tid_op';
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['identifier'] = 'field_company_organization_tid';
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_organization_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_company_organization_tid']['vocabulary'] = 'company_organization';
  /* Filter criterion: Content: Tag (field_tag) */
  $handler->display->display_options['filters']['field_tag_tid']['id'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['table'] = 'field_data_field_tag';
  $handler->display->display_options['filters']['field_tag_tid']['field'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tag_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator_id'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['label'] = 'Tag (field_tag)';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['operator'] = 'field_tag_tid_op';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['identifier'] = 'field_tag_tid';
  $handler->display->display_options['filters']['field_tag_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tag_tid']['vocabulary'] = 'tag';

  /* Display: Media Mentions */
  $handler = $view->new_display('panel_pane', 'Media Mentions', 'media_mentions');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'GSB Content Panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['gsb_media_mention'] = $view;

  return $export;
}
