- RedHatEnterpriseLinux7:
    jobprio: Low
    extrarepos: |
        <repo name="rhel7-extras" url="http://cdn.rcm-internal.redhat.com/content/dist/rhel/server/7/7Server/x86_64/extras/os/" />
        <repo name="rhel7-rhos7" url="http://download-node-02.eng.bos.redhat.com/released/OpenStack/7.0/Core/Z4/2016-02-16.1/Server-RH7-RHOS-TOOLS-7.0/x86_64/os/" />
- RedHatEnterpriseLinux6:
    jobprio: Medium
    extrarepos: |
        <repo name="centos6-openstack-juno" url="http://mirror.centos.org/centos/6/cloud/x86_64/openstack-juno/" />
