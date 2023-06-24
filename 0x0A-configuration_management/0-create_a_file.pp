# This manifest creates a file at /tmp/school

$filepath = '/tmp/school'
$filemode = '0744'
$fileowner = 'www-data'
$filegroup = 'www-data'
$filecontent = 'I love Puppet\n'

file { $filepath:
  ensure  => 'file',
  mode    => $filemode,
  owner   => $fileowner,
  group   => $filegroup,
  content => $filecontent,
}
