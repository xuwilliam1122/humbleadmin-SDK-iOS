Pod::Spec.new do |s|

  s.name         = "humbleadmin-SDK-iOS"
  s.version      = "0.8.2"
  s.homepage     = "http://open.humbleadmin.io/"
  s.summary      = "trustyID SDK"
  
  s.platform     = :ios, "7.0"
  s.description  = <<-DESC
                   可信 ID SDK 提供短信验证方式
                   DESC

  s.license      = "MIT"
  s.author       = { "李辰" => "wolichen0501@gmail.com" }
  s.source       = { :git => "https://github.com/RNTD/humbleadmin-SDK-iOS.git", :tag => "0.8.2" }


  s.source_files  = "iOS/Library/*.h"
  s.public_header_files = "iOS/Library/*.h"

  s.vendored_libraries = "iOS/Library/libhumbleadminbase.a"
  s.resources = "iOS/Library/humbleadminbase.bundle"

  s.requires_arc = false
  s.frameworks = "UIKit", "Foundation"
  s.xcconfig = { "OTHER_LDFLAGS" => "$(inherited) -ObjC -lz" }
end
