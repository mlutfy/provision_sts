<?php

/**
 * Inject the relevant Apache configuration in the site vhost.
 * Implements drush_hook_provision_apache_vhost_config().
 */
function provision_sts_provision_apache_vhost_config($uri, $data) {
  $ssl_enabled = d()->ssl_enabled;

  if ($ssl_enabled == 2) {
    return 'Header add Strict-Transport-Security "max-age=15768000"';
  }

  return '';
}

/**
 * Append Nginx configuration to site vhost configuration.
 * Implements drush_hook_provision_nginx_server_config().
 */
function provision_sts_provision_nginx_vhost_config($uri, $data) {
  $ssl_enabled = d()->ssl_enabled;

  if ($ssl_enabled == 2) {
    return 'add_header Strict-Transport-Security "max-age=15768000";';
  }

  return '';
}
