// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGECODERHELPER_H
#define SDIMAGECODERHELPER_H


#import <Foundation/Foundation.h>


@interface SDImageCoderHelper : NSObject



+(id)animatedImageWithFrames:(id)arg0 ;
+(id)framesFromAnimatedImage:(id)arg0 ;
+(struct CGColorSpace *)colorSpaceGetDeviceRGB;
+(BOOL)CGImageContainsAlpha:(struct CGImage *)arg0 ;
+(struct CGImage *)CGImageCreateDecoded:(struct CGImage *)arg0 ;
+(struct CGImage *)CGImageCreateDecoded:(struct CGImage *)arg0 orientation:(unsigned int)arg1 ;
+(struct CGImage *)CGImageCreateScaled:(struct CGImage *)arg0 size:(struct CGSize )arg1 ;
+(id)decodedImageWithImage:(id)arg0 ;
+(id)decodedAndScaledDownImageWithImage:(id)arg0 limitBytes:(NSUInteger)arg1 ;
+(NSUInteger)defaultScaleDownLimitBytes;
+(void)setDefaultScaleDownLimitBytes:(NSUInteger)arg0 ;
+(NSInteger)imageOrientationFromEXIFOrientation:(unsigned int)arg0 ;
+(unsigned int)exifOrientationFromImageOrientation:(NSInteger)arg0 ;
+(BOOL)shouldDecodeImage:(id)arg0 ;
+(BOOL)shouldScaleDownImage:(id)arg0 limitBytes:(NSUInteger)arg1 ;


@end


#endif