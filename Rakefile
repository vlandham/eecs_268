
load 'tasks/setup.rb'

SITE.user = "jvalland"
SITE.remote_dir = "~/public_html"
# SITE.base = "file:///Users/vlandham/Sites/eecs_268/output/"
SITE.host = 'wozniak.eecs.ku.edu'
SITE.exclude << ".DS_STORE" << "/.git" << "/.gitignore"
SITE.latest = 01
task :default => :build

desc 'deploy the site to the webserver'
task :deploy => ['deploy:set_base', :rebuild, 'deploy:ssh']

# EOF
