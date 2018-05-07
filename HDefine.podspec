

Pod::Spec.new do |s|

s.name         = "HDefine"
s.version      = "1.0"
s.summary      = "写了一些常用的宏定义"
s.description  = <<-DESC
DESC

s.homepage     = "https://github.com/hare27/HDefine"
s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
s.author             = { "hare27" => "hare27@icloud.com" }
s.ios.deployment_target = "10.0"
s.requires_arc = true
s.source       = { :git => "https://github.com/hare27/HDefine.git", :tag => "#{s.version}" }
s.source_files = 'Code/**/*.{h,m}'

end
