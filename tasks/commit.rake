desc "Commit to git"
task :push do |t|
  `git push origin master`
end