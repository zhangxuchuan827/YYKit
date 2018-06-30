Pod::Spec.new do |s|
  s.name         = 'YYKitForXC'
  s.summary      = 'Copy And Correction From YYKit'
  s.version      = '1.0.0'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.authors      = { 'ibireme' => 'ibireme@gmail.com' }
  s.social_media_url = 'http://blog.ibireme.com'
  s.homepage     = 'https://github.com/zhangxuchuan827/YYKit'
  s.platform     = :ios, '6.0'
  s.ios.deployment_target = '6.0'
  s.source       = { :git => 'https://github.com/zhangxuchuan827/YYKit.git', :tag => s.version}
  
  s.requires_arc = true
  s.source_files = "YYKitForXC/**/*.{h,m}"
  #s.public_header_files = 'YYKitForXC/**/*.{h}'

  s.libraries = 'z', 'sqlite3'
  s.frameworks = 'UIKit', 'CoreFoundation', 'CoreText', 'CoreGraphics', 'CoreImage', 'QuartzCore', 'ImageIO', 'AssetsLibrary', 'Accelerate', 'MobileCoreServices', 'SystemConfiguration'
  s.ios.vendored_frameworks = 'Vendor/WebP.framework'

end
