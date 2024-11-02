// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEIOANIMATEDCODER_H
#define SDIMAGEIOANIMATEDCODER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDProgressiveImageCoder-Protocol.h"
#import "SDAnimatedImageCoder-Protocol.h"

@interface SDImageIOAnimatedCoder : NSObject <SDProgressiveImageCoder, SDAnimatedImageCoder>

 {
    NSUInteger _width;
    NSUInteger _height;
    *CGImageSource _imageSource;
    NSData *_imageData;
    CGFloat _scale;
    NSUInteger _loopCount;
    NSUInteger _frameCount;
    NSArray *_frames;
    BOOL _finished;
    BOOL _preserveAspectRatio;
    CGSize _thumbnailSize;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSData *animatedImageData;
@property (readonly, nonatomic) NSUInteger animatedImageFrameCount;
@property (readonly, nonatomic) NSUInteger animatedImageLoopCount;


-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(BOOL)canDecodeFromData:(id)arg0 ;
-(id)decodedImageWithData:(id)arg0 options:(id)arg1 ;
-(BOOL)canIncrementalDecodeFromData:(id)arg0 ;
-(id)initIncrementalWithOptions:(id)arg0 ;
-(void)updateIncrementalData:(id)arg0 finished:(BOOL)arg1 ;
-(id)incrementalDecodedImageWithOptions:(id)arg0 ;
-(BOOL)canEncodeToFormat:(NSInteger)arg0 ;
-(id)encodedDataWithImage:(id)arg0 format:(NSInteger)arg1 options:(id)arg2 ;
-(id)initWithAnimatedImageData:(id)arg0 options:(id)arg1 ;
-(BOOL)scanAndCheckFramesValidWithImageSource:(struct CGImageSource *)arg0 ;
-(CGFloat)animatedImageDurationAtIndex:(NSUInteger)arg0 ;
-(id)animatedImageFrameAtIndex:(NSUInteger)arg0 ;
+(NSInteger)imageFormat;
+(id)imageUTType;
+(id)dictionaryProperty;
+(id)unclampedDelayTimeProperty;
+(id)delayTimeProperty;
+(id)loopCountProperty;
+(NSUInteger)defaultLoopCount;
+(BOOL)canDecodeFromFormat:(NSInteger)arg0 ;
+(BOOL)canEncodeToFormat:(NSInteger)arg0 ;
+(NSUInteger)imageLoopCountWithSource:(struct CGImageSource *)arg0 ;
+(CGFloat)frameDurationAtIndex:(NSUInteger)arg0 source:(struct CGImageSource *)arg1 ;
+(id)createFrameAtIndex:(NSUInteger)arg0 source:(struct CGImageSource *)arg1 scale:(CGFloat)arg2 preserveAspectRatio:(BOOL)arg3 thumbnailSize:(struct CGSize )arg4 options:(id)arg5 ;


@end


#endif