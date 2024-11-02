// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEAPNGCODER_H
#define SDIMAGEAPNGCODER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDImageIOAnimatedCoder.h"
#import "SDProgressiveImageCoder-Protocol.h"
#import "SDAnimatedImageCoder-Protocol.h"

@interface SDImageAPNGCoder : SDImageIOAnimatedCoder <SDProgressiveImageCoder, SDAnimatedImageCoder>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSData *animatedImageData;
@property (readonly, nonatomic) NSUInteger animatedImageFrameCount;
@property (readonly, nonatomic) NSUInteger animatedImageLoopCount;


+(id)sharedCoder;
+(NSInteger)imageFormat;
+(id)imageUTType;
+(id)dictionaryProperty;
+(id)unclampedDelayTimeProperty;
+(id)delayTimeProperty;
+(id)loopCountProperty;
+(NSUInteger)defaultLoopCount;


@end


#endif