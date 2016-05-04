# What is this?

This repository stores Jenkins Job Builder (JJB) definitions for our CI.

At the point of writing this, you'll need a custom fork of JJB to compile the
definitions and update Jenkins (Branch: publish-over-ssh-wrapper):

https://github.com/openstack-infra/jenkins-job-builder/compare/master...beaker-project:for-beaker

## Conventions

### File Name

* <repository-name>-[review-checks]-<test-performed>
  Use 'review-checks' to indicate the job is running upon patch creation in Gerrit.

* Examples:

    # Builds Sphinx documentation for patches posted to Gerrit.
    beaker-review-checks-docs

    # Runs periodically tests in valgrind
    restraint-valgrind

### Description

* Use complete sentences, in present tense, using the YAML block syntax.

* Example:

    description: |
        Runs all tests for rpmdeplint patches posted to Gerrit.
