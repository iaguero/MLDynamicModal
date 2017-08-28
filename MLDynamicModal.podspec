Pod::Spec.new do |s|
  s.name             = 'MLDynamicModal'
  s.version          = '0.1.0'
  s.summary          = 'Mercado Libre Custom Modal'

  s.description      = <<-DESC
                MLDynamicModal       
		DESC

  s.homepage         = 'https://github.com/mercadolibre/MLDynamicModal'
  s.license          = 'Apache License, Version 2.0'
  s.author           = { 'MPMobile' => 'mpmobileios@mercadolibre.com' }
  s.source           = { :git => 'https://github.com/mercadolibre/MLDynamicModal.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.source_files = 'MLDynamicModal/Classes/**/*'
  s.resources = ['MLDynamicModal/**/*.{xib}' ,'MLDynamicModal/**/*.{xcassets}','MLDynamicModal/Resources/*.plist']
  s.dependency 'PureLayout'
  s.dependency 'FXBlurView'
end