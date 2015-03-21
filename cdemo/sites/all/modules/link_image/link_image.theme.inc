<?php
/*
 * @file link_image.theme.inc
 * Theme functions.
 */

/**
 * Theme function for 'image' link field formatter.
 */
function theme_link_image_formatter_image($element, $append_class = TRUE) {
  $item = $element['#item'];
  if (empty($item['url'])) {
    return;
  }
  
  $style = 'image';
  
  $node = $element['#node'];
  $field_name = $element['#field_name'];
  $type_name = $element['#type_name'];
  
  $title = isset($item['display_title']) ? $item['display_title'] : NULL;
  
  $context = !empty($node->content) && !empty($node->content[$field_name]) ? $node->content[$field_name]['#context'] : 'full';
  $options = _link_image_formatter_get_settings($field_name, $type_name, $context);
  foreach ($options as $key => $value) {
    if (empty($value)) {
      unset($options[$key]);
    }
  }
  
  if ($append_class) {
    $options['class'] = "link-image link-image-$style link-image-{$element['#formatter']}";
  }
  
  return theme('image', $item['url'], $title, $title, $options, FALSE);
}

/**
 * Theme function for 'image' link field formatter linked to node.
 */
function theme_link_image_formatter_image_linked($element) {
  $item = $element['#item'];
  if (empty($item['url'])) {
    return;
  }
  
  $style = 'linked';
  $class = "link-image link-image-$style link-image-{$element['#formatter']}";
  
  $node = $element['#node'];
  $path = empty($node->nid) ? '' : 'node/'. $node->nid;
  
  return l(theme('link_image_formatter_image', $element, FALSE), $path, array('attributes' => array('class' => $class), 'html' => TRUE));
}

/**
 * Theme function for 'image' link field formatter linked to image.
 */
function theme_link_image_formatter_image_imagelink($element) {
  $item = $element['#item'];
  if (empty($item['url'])) {
    return;
  }
  
  $style = 'imagelink';
  $class = "link-image link-image-$style link-image-{$element['#formatter']}";
  
  $path = $item['url'];
  
  return l(theme('link_image_formatter_image', $element, FALSE), $path, array('attributes' => array('class' => $class), 'html' => TRUE));
}

/**
 * Theme function for 'image' link imagecache field formatter.
 */
function theme_link_image_formatter_imagecache_default($element, $append_class = TRUE) {
  $item = $element['#item'];
  if (!module_exists('imagecache_external') || empty($item['url'])) {
    return;
  }
  
  $style = 'default';
  // Extract the preset name from the formatter name.
  $presetname = substr($element['#formatter'], 0, strrpos($element['#formatter'], '_imagecache'));

  $title = isset($item['display_title']) ? $item['display_title'] : NULL;
  
  $class = '';
  if ($append_class) {
    $class = "link-image link-image-$style link-image-{$element['#formatter']}";
  }
  
  $path = imagecache_external_generate_path($item['url'], $presetname);
  
  if ($path) {
    $path = substr($path, strlen(base_path()));

    return theme('image', $path, $title, $title, array('class' => $class), FALSE);
  }
  else {
    return '';
  }
}

/**
 * Theme function for 'image' link imagecache field formatter linked to node.
 */
function theme_link_image_formatter_imagecache_linked($element) {
  $item = $element['#item'];
  if (empty($item['url'])) {
    return;
  }
  
  $style = 'linked';
  $class = "link-image link-image-$style link-image-{$element['#formatter']}";
  
  $node = $element['#node'];
  $path = empty($node->nid) ? '' : 'node/'. $node->nid;
  
  return l(theme('link_image_formatter_imagecache_default', $element, FALSE), $path, array('attributes' => array('class' => $class), 'html' => TRUE));
}

/**
 * Theme function for 'image' link imagecache field formatter linked to image.
 */
function theme_link_image_formatter_imagecache_imagelink($element) {
  $item = $element['#item'];
  if (empty($item['url'])) {
    return;
  }
  
  $style = 'imagelink';
  $class = "link-image link-image-$style link-image-{$element['#formatter']}";
  
  $presetname = substr($element['#formatter'], 0, strrpos($element['#formatter'], '_imagecache'));
  $path = substr(imagecache_external_generate_path($item['url'], $presetname), strlen(base_path()));
  
  return l(theme('link_image_formatter_imagecache_default', $element, FALSE), $path, array('attributes' => array('class' => $class), 'html' => TRUE));
}
