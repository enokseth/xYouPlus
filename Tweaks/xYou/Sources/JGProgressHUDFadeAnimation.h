// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDFADEANIMATION_H
#define JGPROGRESSHUDFADEANIMATION_H



#import "JGProgressHUDAnimation.h"

@interface JGProgressHUDFadeAnimation : JGProgressHUDAnimation

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger animationOptions; // ivar: _animationOptions


-(id)init;
-(void)show;
-(void)hide;


@end


#endif