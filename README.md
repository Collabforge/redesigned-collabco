#Collabco IMS
##Installation instructions

###For Site Installers
1. Run this command in an empty folder: `drush make https://github.com/Collabforge/redesigned-collabco/raw/master/stub.make`

###For Developers
1. Run make file: `drush make https://github.com/Collabforge/redesigned-collabco/raw/master/stub.make`
4. Move the working directory: `mv profiles/collabco profiles/collabco_temp`
4. Clone repo to profiles/collabco: `git clone git@github.com:Collabforge/redesigned-collabco profiles/collabco`
5. Return the temp folder (contrib modules, libraries and themes): `mv profiles/collabco_temp/* profiles/collabco/

Done!

