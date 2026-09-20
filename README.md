# LGAudioStreamHelper

iOS helper for easy recording audio stream, getting metadata and type of stream.

- [LGAudioStreamMetadataGetter](./LGAudioStreamHelper/LGAudioStreamMetadataGetter/LGAudioStreamMetadataGetter.h) helps to get metadata of audio stream.
- [LGAudioStreamContentTypeGetter](./LGAudioStreamHelper/LGAudioStreamContentTypeGetter/LGAudioStreamContentTypeGetter.h) helps to get type of audio stream.
- [LGAudioStreamRecorder](./LGAudioStreamHelper/LGAudioStreamRecorder/LGAudioStreamRecorder.h) helps to record audio stream.

## Installation

### With source code

[Download repository](https://github.com/LGLibs/LGAudioStreamHelper/archive/master.zip), then add [LGAudioStreamHelper directory](./LGAudioStreamHelper) to your project.

### With CocoaPods

CocoaPods is a dependency manager for Objective-C, which automates and simplifies the process of using 3rd-party libraries in your projects. To install with cocoaPods, follow the "Get Started" section on [CocoaPods](https://cocoapods.org).

#### Podfile
```ruby
platform :ios, '6.0'
pod 'LGAudioStreamHelper', '~> 1.0.0'
```

### With Carthage

Carthage is a lightweight dependency manager for Swift and Objective-C. It leverages CocoaTouch modules and is less invasive than CocoaPods. To install with carthage, follow the instruction on [Carthage](https://github.com/Carthage/Carthage).

#### Cartfile
```
github "LGLibs/LGAudioStreamHelper" ~> 1.0.0
```

## Usage

In the source files where you need to use the library, import the header file:

```objective-c
#import "LGAudioStreamHelper.h"
```

Or you can use sublibraries separately, depend of your needs:

```objective-c
#import "LGAudioStreamMetadataGetter.h"     // helps to get metadata of audio stream
#import "LGAudioStreamContentTypeGetter.h"  // helps to get type of audio stream
#import "LGAudioStreamRecorder.h"           // helps to record audio stream
```

### More

For more details see files:
- [LGAudioStreamMetadataGetter.h](./LGAudioStreamHelper/LGAudioStreamMetadataGetter/LGAudioStreamMetadataGetter.h)
- [LGAudioStreamContentTypeGetter.h](./LGAudioStreamHelper/LGAudioStreamContentTypeGetter/LGAudioStreamContentTypeGetter.h)
- [LGAudioStreamRecorder.h](./LGAudioStreamHelper/LGAudioStreamRecorder/LGAudioStreamRecorder.h)

## Repos / Mirrors

- [TRULAB](https://trulab.ru/LGLibs/LGAudioStreamHelper)
- [GitHub](https://github.com/LGLibs/LGAudioStreamHelper)
- [GitLab](https://gitlab.com/LGLibs/LGAudioStreamHelper)
- [Gitea](https://gitea.com/LGLibs/LGAudioStreamHelper)

## License

Copyright (c) 2015 Grigorii Lutkov \<grigorii@lutkov.dev\></br>
Licensed under the [MIT License](./LICENSE)
