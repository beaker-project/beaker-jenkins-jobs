- RedHatEnterpriseLinux7:
    jobprio: Low
    extrarepos: |
        <repo name="rhel7-extras" url="http://pulp-read.dist.prod.ext.phx2.redhat.com/content/dist/rhel/server/7/7Server/x86_64/extras/os/" />
        <repo name="rhel7-openstack11" url="http://pulp-read.dist.prod.ext.phx2.redhat.com/content/dist/rhel/server/7/7Server/x86_64/openstack/11/os/" />
        <repo name="rhel7-openstacktools11" url="http://pulp-read.dist.prod.ext.phx2.redhat.com/content/dist/rhel/server/7/7Server/x86_64/openstack-tools/11/os/" />
- RedHatEnterpriseLinux6:
    jobprio: Medium
    extrarepos: |
        <repo name="centos6-openstack-juno" url="http://mirror.centos.org/centos/6/cloud/x86_64/openstack-juno/" />
