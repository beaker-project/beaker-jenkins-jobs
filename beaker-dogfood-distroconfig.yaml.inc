- Fedora28:
    variant: Server
    distrotag: RELEASED
    jobprio: Low
    extrarepos: ""
    ignorefail: "1"
- RedHatEnterpriseLinux8:
    variant: BaseOS
    distrotag: ""
    jobprio: Low
    extrarepos: ""
    ignorefail: "1"
- RedHatEnterpriseLinux7:
    variant: Server
    distrotag: RELEASED
    jobprio: Low
    extrarepos: |
        <repo name="rhel7-extras" url="http://pulp-read.dist.prod.ext.phx2.redhat.com/content/dist/rhel/server/7/7Server/x86_64/extras/os/" />
        <repo name="rhel7-openstack11" url="http://pulp-read.dist.prod.ext.phx2.redhat.com/content/dist/rhel/server/7/7Server/x86_64/openstack/11/os/" />
        <repo name="rhel7-openstacktools11" url="http://pulp-read.dist.prod.ext.phx2.redhat.com/content/dist/rhel/server/7/7Server/x86_64/openstack-tools/11/os/" />
        <repo name="rhel7-rhscl" url="http://pulp-read.dist.prod.ext.phx2.redhat.com/content/dist/rhel/server/7/7Server/x86_64/rhscl/1/os/" />
    ignorefail: ""
- RedHatEnterpriseLinux6:
    variant: Server
    distrotag: RELEASED
    jobprio: Medium
    extrarepos: |
        <repo name="centos6-openstack-juno" url="http://mirror.centos.org/centos/6/cloud/x86_64/openstack-juno/" />
    ignorefail: ""
