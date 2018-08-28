- git:
    browser: cgit
    browser-url: https://git.beaker-project.org/cgit/beah/
    reference-repo: /var/lib/jenkins/gitreference/beah
    url: ssh://jenkins@gerrit.beaker-project.org:29418/beah
    credentials-id: "fac135e6-5a13-4cd0-8dd5-737da825099b"
    choosing-strategy: gerrit
    name: gerrit
    refspec: +refs/heads/*:refs/remotes/gerrit/* $GERRIT_REFSPEC
    # 'branches' key is meaningless with Gerrit Trigger, but the
    # default value '**' causes a NullPointerException:
    # https://issues.jenkins-ci.org/browse/JENKINS-27559
    branches:
        - develop
    submodule:
        recursive: true
    merge:
        remote: gerrit
        branch: $GERRIT_BRANCH
    changelog-against:
        remote: gerrit
        branch: $GERRIT_BRANCH
    clean:
        before: true
    wipe-workspace: false
    skip-tag: true
    use-author: true
