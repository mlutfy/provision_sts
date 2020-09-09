<?php

/**
 * Inject the relevant Apache configuration in the site vhost.
 * Implements drush_hook_provision_apache_vhost_config().
 */
function provision_sts_provision_apache_vhost_config($uri, $data) {
  $ssl_enabled = d()->ssl_enabled || d()->https_enabled;

  if ($ssl_enabled == 2) {
    return 'Header add Strict-Transport-Security "max-age=15768000"';
  }

  return '';
}
