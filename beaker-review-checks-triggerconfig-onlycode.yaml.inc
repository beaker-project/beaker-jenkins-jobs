- gerrit:
    server-name: gerrit.beaker-project.org
    projects:
        - project-compare-type: PLAIN
          project-pattern: beaker
          branches:
            - branch-compare-type: ANT
              branch-pattern: "**"
          file-paths:
            - compare-type: REG_EXP
              pattern: "^(Server/|Client/|LabController/|Common/|IntegrationTests/).*"
    trigger-on:
        - comment-added-event:
            approval-category: Ready-for-Checks
            approval-value: 1
    custom-url: "https://beaker-project.org/jenkins-results/$JOB_NAME/$BUILD_NUMBER/"
