platform :ios, "8.0"
use_frameworks!
target "react" do
# 取决于你的工程如何组织，你的node_modules文件夹可能会在别的地方。
# 请将:path后面的内容修改为正确的路径（一定要确保正确～～）。
pod 'React', :path => '../node_modules/react-native', :subspecs => [
  'Core',
  'RCTActionSheet',
  'RCTGeolocation',
  'RCTImage',
  'RCTNetwork',
  'RCTPushNotification',
  'RCTSettings',
  'RCTText',
  'RCTVibration',
  'RCTWebSocket'
]
end