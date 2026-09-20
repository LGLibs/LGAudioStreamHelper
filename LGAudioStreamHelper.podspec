Pod::Spec.new do |s|
    s.name = 'LGAudioStreamHelper'
    s.version = '1.0.2'
    s.platform = :ios, '6.0'
    s.license = 'MIT'
    s.homepage = 'https://github.com/LGLibs/LGAudioStreamHelper'
    s.author = { 'Grigorii Lutkov' => 'grigorii@lutkov.dev' }
    s.source = { :git => 'https://github.com/LGLibs/LGAudioStreamHelper.git', :tag => s.version }
    s.summary = 'iOS helper for easy recording audio stream, getting metadata and type of stream'
    s.requires_arc = true
    s.source_files = 'LGAudioStreamHelper/*.{h,m}'
    s.source_files = 'LGAudioStreamHelper/**/*.{h,m}'
end
