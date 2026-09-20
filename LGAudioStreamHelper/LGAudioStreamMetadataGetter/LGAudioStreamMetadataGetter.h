//
// LGAudioStreamMetadataGetter.h
// LGAudioStreamHelper
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <Foundation/Foundation.h>

@interface LGAudioStreamMetadataGetter : NSObject

/** Do not forget about weak referens to self for completionHandler block */
- (void)getMetadataFromUrl:(NSURL *)streamUrl
         completionHandler:(void(^)(NSDictionary *metadataDictionary, NSHTTPURLResponse *serverResponse, NSError *error))completionHandler;

@end
