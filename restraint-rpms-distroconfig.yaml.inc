# RCM has not created this yet: https://projects.engineering.redhat.com/browse/RCM-38028
#- Fedorarawhide:
#    dist: .fc30
#    kojitarget: beaker-harness-fedora-rawhide
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
    kojitarget: beaker-harness-rhel-7-candidate
    ignorefail: ""
- RedHatEnterpriseLinux6:
    dist: .el6bkr
    kojitarget: beaker-harness-rhel-6-candidate
    ignorefail: ""
- RedHatEnterpriseLinux5:
    dist: .el5bkr
    kojitarget: beaker-harness-rhel-5-candidate
    ignorefail: ""
- RedHatEnterpriseLinux4:
    dist: .el4bkr
    kojitarget: beaker-harness-rhel-4-candidate
    ignorefail: ""
