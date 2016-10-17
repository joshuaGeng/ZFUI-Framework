Pod::Spec.new do |s|

  s.name             = "ZFUI-Framework"
  s.version          = "1.0.0"
  s.summary          = "ZFUI-Framework"
  s.description      = <<-DESC
                       It is a marquee view used on iOS, which implement by Objective-C.
                       DESC
  s.homepage         = "https://github.com/joshuaGeng/ZFUI-Framework"
  s.license          = 'MIT'
  s.author           = { "JoshuaGeng" => "joshuageng@163.com" }
  s.platform     = :ios,'6.0'
  s.source           = { :git => "https://github.com/joshuaGeng/ZFUI-Framework.git", :tag => s.version }

  s.platform     = :ios, '4.3'
  s.requires_arc = true

#   s.source_files = 'ZFUI/*'
  s.vendored_frameworks = 'ZFUI-Framework/ZFUI/ZFUI.framework'

  # s.ios.exclude_files = 'Classes/osx'
  # s.osx.exclude_files = 'Classes/ios'
  # s.public_header_files = 'Classes/**/*.h'
  s.frameworks = 'Foundation', 'UIKit'
  s.requires_arc = true
end
