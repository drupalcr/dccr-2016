#!/usr/bin/env bash
cd $(git rev-parse --show-toplevel)
./scripts/run-playbook.sh ./scripts/site.yml
