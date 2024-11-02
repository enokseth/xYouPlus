// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEIOCODER_H
#define SDIMAGEIOCODER_H


#import <Foundation/Foundation.h>

#import "SDProgressiveImageCoder-Protocol.h"

@interface SDImageIOCoder : NSObject <SDProgressiveImageCoder>

 {
    NSUInteger _width;
    NSUInteger _height;
    unsigned int _orientation;
    *CGImageSource _imageSource;
    CGFloat _scale;
    BOOL _finished;
    BOOL _preserveAspectRatio;
    CGSize _thumbnailSize;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


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
+(id)sharedCoder;


@end


#endif