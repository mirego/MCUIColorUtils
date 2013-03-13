Pod::Spec.new do |s|
  s.name     = 'MCUIColorUtils'
  s.version  = '0.1.0'
  s.license  = 'BSD 3-Clause'
  s.summary  = 'UIColor utilities.'
  s.homepage = 'https://github.com/mirego/MCUIColorUtils.iOS.git'
  s.authors  = { 'Mirego, Inc.' => 'info@mirego.com' }
  s.source   = { :git => 'https://github.com/mirego/MCUIColorUtils.iOS.git', :tag => '0.1.0' }
  s.source_files = 'MCUIColorUtils/*.{h,m}'
  s.requires_arc = true
  s.frameworks = 'QuartzCore'
  s.platform = :ios, '5.0'
end
