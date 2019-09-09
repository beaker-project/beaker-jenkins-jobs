# Fedora31+ builds are blocked by zstd - RHELPLAN-25830
# Blocked by RCM-65478
#- Fedorarawhide:
#    dist: .fc32
#    kojitarget: eng-fedora-32-candidate
#    ignorefail: "1"
# Blocked by RCM-65479
#- Fedora31:
#    dist: .fc31
#    kojitarget: eng-fedora-31-candidate
#    ignorefail: ""
- Fedora30:
    dist: .fc30
    kojitarget: eng-fedora-30-candidate
    ignorefail: ""
- Fedora29:
    dist: .fc29
    kojitarget: eng-fedora-29-candidate
    ignorefail: ""
- RedHatEnterpriseLinux8:
    dist: .el8bkr
    kojitarget: beaker-server-rhel-8-candidate
    ignorefail: ""
- RedHatEnterpriseLinux7:
    dist: .el7bkr
    kojitarget: beaker-server-rhel-7-candidate
    ignorefail: ""
- RedHatEnterpriseLinux6:
    dist: .el6bkr
    kojitarget: beaker-server-rhel-6-candidate
    ignorefail: ""
