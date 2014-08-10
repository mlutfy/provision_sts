Enforces "Strict Transport Security" (STS) on sites that 'require' SSL by
adding an STS in the http responses:

    Strict-Transport-Security: max-age=31536000

This means that for the next 6 months, when the browser will attempt to
visit the site, it will always default to https, avoiding http downgrade
attacks.

For more information:
https://www.drupal.org/node/986312
http://en.wikipedia.org/wiki/Strict_Transport_Security
