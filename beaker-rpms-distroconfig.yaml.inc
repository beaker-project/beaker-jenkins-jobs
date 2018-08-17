# RCM has not created this yet: https://projects.engineering.redhat.com/browse/RCM-38028
#- Fedorarawhide:
#    dist: .fc29
#    kojitarget: eng-fedora-rawhide-candidate
#    ignorefail: "1"
- Fedora28:
    dist: .fc28
    kojitarget: eng-fedora-28-candidate
    ignorefail: ""
- Fedora27:
    dist: .fc27
    kojitarget: eng-fedora-27-candidate
    ignorefail: ""
- RedHatEnterpriseLinux7:
    dist: .el7bkr
    kojitarget: beaker-server-rhel-7-candidate
    ignorefail: ""
- RedHatEnterpriseLinux6:
    dist: .el6bkr
    kojitarget: beaker-server-rhel-6-candidate
    ignorefail: ""
