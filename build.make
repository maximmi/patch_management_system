api = 2
core = 7.x

;--------------------
; Build Core
;--------------------

projects[drupal][version] = 7.21
projects[drupal][patch][] = "local:///patches/drupal/locale_import_overwrite.patch"
projects[drupal][patch][] = "local:///patches/drupal/no_uri_warning.patch"
projects[drupal][patch][] = "local:///patches/drupal/user_list_views_override_break_user_create.patch"
;http://drupal.org/node/1232416
projects[drupal][patch][] = "local:///patches/drupal/core-js-drupal-log-1232416-100-D7.patch"

projects[solution_core][type] = "profile"
projects[solution_core][download][type] = "git"
projects[solution_core][download][url] = "git://github.com/goruha/DrupalSolutionCore7.git"
projects[solution_core][download][tag] = 2.1
projects[solution_core][l10n_path] = "http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.21.%language.po"


projects[link][subdir] = "contrib"
projects[link][version] = "1.1"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.0"

projects[features][subdir] = "contrib"
projects[features][version] = "2.0-beta2"

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

projects[views][subdir] = "contrib"
projects[views][version] = "3.7"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[auto_entitylabel][subdir] = "contrib"
projects[auto_entitylabel][version] = "1.1"

projects[token][subdir] = "contrib"
projects[token][version] = "1.4"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0"
