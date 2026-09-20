//
// LGAudioStreamContentTypeGetter.h
// LGAudioStreamHelper
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <Foundation/Foundation.h>
#import "AudioToolbox/AudioToolbox.h"

@interface LGAudioStreamContentTypeGetter : NSObject

/** Do not forget about weak referens to self for completionHandler block */
- (void)getContentTypeFromUrl:(NSURL *)streamUrl
            completionHandler:(void(^)(NSString *contentType, NSString *fileExtension, AudioFileTypeID audioFileTypeID, NSHTTPURLResponse *serverResponse, NSError *error))completionHandler;

@end
