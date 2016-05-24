cd sites/default
mkdir private 
chmod 775 private 
cd ..
cd ..
drush en admin_menu -y


drush en block -y
drush en book -y
drush en comment -y
drush en contact -y
drush en translation -y
drush en contextual -y
drush en dblog -y
drush en field -y
drush en field_sql_storage -y
drush en field_ui -y
drush en file -y
drush en filter -y
drush en help -y
drush en image -y
drush en list -y
drush en locale -y
drush en menu -y
drush en node -y
drush en number -y
drush en options -y
drush en path -y
drush en php -y
drush en rdf -y
drush en search -y
drush en statistics -y
drush en system -y
drush en taxonomy -y
drush en text -y
drush en trigger -y
drush en update -y
drush en user -y


#ADMIN
drush en module_filter -y
drush en admin_devel -y
drush en fpa -y

#CHOES TOOL SUITE
drush en page_manager -y

#Color
#drush en color_node -y

#Context
drush en context_ui -y

#date
drush en date -y
drush en date_api -y
drush en date_popup -y
drush en date_views -y


drush en entityform -y
drush en entityform_notifications -y
drush en entityconnect -y

#Views
drush en views -y
drush en views_ui -y
drush en views_slideshow -y
drush en views_slideshow_cycle -y
drush en views_bulk_operations -y
drush en views_php -y
drush en views_field_view -y
drush en views_autocomplete_filters -y
drush en views_content_cache -y
drush en better_exposed_filters -y
drush en views_data_export -y
drush en views_responsive_grid -y
drush en views_send -y
drush en vscc -y

#OG
drush en og -y
drush en og_invite_people -y
drush en og_access -y
drush en og_context -y
drush en og_register -y

#Flag
drush en rules -y
drush en rules_admin -y
drush en flag -y

drush en ckeditor -y
drush en ckeditor_media -y
drush en jquery_update -y

drush en collabco_core -y

#themes
drush en bootstrap -y
drush en collabco -y
drush en seven -y

drush dis collabco_core
drush dis mentions

drush vset theme_default collabco
drush vset admin_theme seven

