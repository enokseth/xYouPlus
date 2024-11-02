// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDANIMATEDIMAGE_H
#define SDANIMATEDIMAGE_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "SDAnimatedImage-Protocol.h"
#import "SDAnimatedImageCoder-Protocol.h"

@interface SDAnimatedImage : UIImage <SDAnimatedImage>



@property (retain, nonatomic) NSObject<SDAnimatedImageCoder> *animatedCoder; // ivar: _animatedCoder
@property (nonatomic) NSInteger animatedImageFormat; // ivar: _animatedImageFormat
@property (copy) NSArray *loadedAnimatedImageFrames; // ivar: _loadedAnimatedImageFrames
@property (nonatomic, getter=isAllFramesLoaded) BOOL allFramesLoaded; // ivar: _allFramesLoaded
@property (readonly, copy, nonatomic) NSData *animatedImageData;
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) NSUInteger animatedImageFrameCount;
@property (readonly, nonatomic) NSUInteger animatedImageLoopCount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)sd_imageData;
-(id)sd_imageDataAsFormat:(NSInteger)arg0 ;
-(id)sd_imageDataAsFormat:(NSInteger)arg0 compressionQuality:(CGFloat)arg1 ;
-(id)sd_imageDataAsFormat:(NSInteger)arg0 compressionQuality:(CGFloat)arg1 firstFrameOnly:(BOOL)arg2 ;
-(BOOL)sd_isAnimated;
-(NSUInteger)sd_imageLoopCount;
-(void)setSd_imageLoopCount:(NSUInteger)arg0 ;
-(NSInteger)sd_imageFormat;
-(void)setSd_imageFormat:(NSInteger)arg0 ;
-(BOOL)sd_isVector;
-(NSUInteger)sd_memoryCost;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 options:(id)arg2 ;
-(id)initWithAnimatedCoder:(id)arg0 scale:(CGFloat)arg1 ;
-(void)preloadAllFrames;
-(void)unloadAllFrames;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)animatedImageFrameAtIndex:(NSUInteger)arg0 ;
-(CGFloat)animatedImageDurationAtIndex:(NSUInteger)arg0 ;
+(id)sd_imageWithData:(id)arg0 ;
+(id)sd_imageWithData:(id)arg0 scale:(CGFloat)arg1 ;
+(id)sd_imageWithData:(id)arg0 scale:(CGFloat)arg1 firstFrameOnly:(BOOL)arg2 ;
+(id)imageNamed:(id)arg0 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 scale:(CGFloat)arg2 ;
+(id)imageWithContentsOfFile:(id)arg0 ;
+(id)imageWithData:(id)arg0 ;
+(id)imageWithData:(id)arg0 scale:(CGFloat)arg1 ;
+(BOOL)supportsSecureCoding;


@end


#endif