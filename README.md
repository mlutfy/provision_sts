# Provision STS (HSTS)

Enforces "Strict Transport Security" (STS) on sites that 'require' SSL by
adding an STS in the http responses:

```
Strict-Transport-Security: max-age=31536000
```

This means that for the next 6 months, when the browser will attempt to
visit the site, it will always default to https, avoiding http downgrade
attacks.

The apache "headers" module must be enabled:

```
a2enmod headers
```

For more information:

* https://www.drupal.org/node/986312
* http://en.wikipedia.org/wiki/Strict_Transport_Security

This module only works when using Aegir with Apache.

Since nginx 'locations' work a bit differently, we decided to override the
nginx server template in [provision_symbiotic](https://github.com/coopsymbiotic/provision_symbiotic).

# About Coop Symbiotic

Coop Symbiotic is a worker-owned co-operative based in Canada. We have a strong
experience working with non-profits and CiviCRM. We provide affordable, fast,
turn-key hosting with regular upgrades and proactive monitoring, as well as
custom development and training.

More at: https://www.symbiotic.coop/en
