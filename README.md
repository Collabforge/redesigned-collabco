#Collabco IMS
An IMS helps you work with large groups to brainstorm, select and develop the best ideas. Here’s how Collabco IMS is different:

* **We understand your context** - Collabco is an Australian, public sector focused Innovation Management System
* **Embedded learnings from Australian Public Service innovation leaders** - The IMS comes ready to use with an in-built innovation process developed and tested by top government departments
* **Fits to your unique innovation process, not the other way around** - Every aspect of the software can be adapted to match your existing business processes, so it’s intuitive for your users.
* **Keep control of your data** - Use our secure Australian-based hosting or self-host. There are no user subscription fees. The software and your data are yours to control, always.



##Installation instructions

###For Site Installers
1. Run this command in an empty folder: `drush make https://github.com/Collabforge/redesigned-collabco/raw/master/stub.make`

###For Developers
1. Run make file: `drush make https://github.com/Collabforge/redesigned-collabco/raw/master/stub.make`
4. Move the working directory: `mv profiles/collabco profiles/collabco_temp`
4. Clone repo to profiles/collabco: `git clone git@github.com:Collabforge/redesigned-collabco profiles/collabco`
5. Return the temp folder (contrib modules, libraries and themes): `#needs to be done manually for contrib/libraries/themes`

Done!

