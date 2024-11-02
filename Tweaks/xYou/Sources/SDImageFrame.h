// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEFRAME_H
#define SDIMAGEFRAME_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface SDImageFrame : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGFloat duration; // ivar: _duration


+(id)frameWithImage:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif