//
// LGAudioStreamRecorder.h
// LGAudioStreamHelper
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <Foundation/Foundation.h>

@interface LGAudioStreamRecorder : NSObject

@property (assign, nonatomic, readonly, getter=isRecording) BOOL recording;

/** Do not forget about weak referens to self for errorHandler block */
- (void)startRecordingFromUrl:(NSURL *)streamUrl
                   toLocalUrl:(NSURL *)localUrl
                 errorHandler:(void(^)(NSError *error))errorHandler;

- (void)stopRecording;

@end
