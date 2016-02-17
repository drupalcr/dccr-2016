#!/usr/bin/env bash
if [ $# -eq 0 ]; then
    echo "Provide a path to a playbook such as 'scripts/site.yml'"
else
    export ANSIBLE_HOST_KEY_CHECKING=False
    ansible-playbook -i .vagrant/provisioners/ansible/inventory/vagrant_ansible_inventory $1
fi
