api = 2
core = 7.x



; Core

projects[drupal][type] = core
projects[drupal][version] = 7.26



; Install profile

projects[collabco][type] = profile
projects[collabco][download][type] = git
projects[collabco][download][url] = git@github.com:Collabforge/redeigned-collabco.git

; Un-comment the following line to use a specific tag release.
; projects[collabco][download][tag] = 1.0

; Un-comment the following line to use a specific commit.
; projects[collabco][download][revision] = 871286588b3a60a439fbcbfe8acadcb21a8b6045

; Un-comment the following line to use the latest commit of a specific branch.
; projects[collabco][download][branch] = master
