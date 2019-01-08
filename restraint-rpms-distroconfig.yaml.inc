- Fedorarawhide:
    # Note that this is only current target and will be changed in the feature.
    # After release of F30 it is necessary to create new koji target
    dist: .fc30
    kojitarget: eng-fedora-30-candidate
    ignorefail: "1"
- Fedora29:
    dist: .fc29
    kojitarget: eng-fedora-29-candidate
    ignorefail: ""
- Fedora28:
    dist: .fc28
    kojitarget: eng-fedora-28-candidate
    ignorefail: ""
- RedHatEnterpriseLinux8:
    dist: .el8
    # Note that this is NOT the real target where we will be building,
    # for now we can only do scratch builds but at least this way
    # we can keep testing.
    kojitarget: rhel-8.0.0-candidate
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
