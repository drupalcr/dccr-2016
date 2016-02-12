#!/usr/bin/env bash
DRUSH="./vendor/bin/drush"
SITE_ALIAS="@dccr-2016.dccr-2016.dev"
$DRUSH $SITE_ALIAS fl | grep -qi 'overridden' && (echo 'Overridden Features: fail' && exit 1) || (echo 'Overridden Features: pass' && exit 0)
