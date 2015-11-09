Pod::Spec.new do |s|

  s.name         = "humbleadminbase"
  s.version      = "0.0.1"
  s.homepage     = "http://open.humbleadmin.io/"
  s.summary      = "trustyID SDK"
  
  s.platform     = :ios, "7.0"
  s.description  = <<-DESC
                   可信 ID SDK 提供短信验证方式
                   DESC

  s.license      = "MIT"
  s.author       = { "李辰" => "wolichen0501@gmail.com" }
  s.source       = { :git => "https://github.com/RNTD/humbleadminbase.git", :tag => "0.0.1" }


  s.source_files  = "iOS/Library/*.h"
  s.public_header_files = "iOS/Library/*.h"
  
  s.preserve_paths = ""iOS/Library/"
  s.vendored_libraries = "humbleadminbase.a"

  s.requires_arc = true

end
