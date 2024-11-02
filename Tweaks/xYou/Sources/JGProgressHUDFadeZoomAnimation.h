// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDFADEZOOMANIMATION_H
#define JGPROGRESSHUDFADEZOOMANIMATION_H



#import "JGProgressHUDAnimation.h"

@interface JGProgressHUDFadeZoomAnimation : JGProgressHUDAnimation

@property (nonatomic) CGFloat shrinkAnimationDuaration; // ivar: _shrinkAnimationDuaration
@property (nonatomic) CGFloat expandAnimationDuaration; // ivar: _expandAnimationDuaration
@property (nonatomic) CGSize expandScale; // ivar: _expandScale


-(id)init;
-(void)show;
-(void)hide;


@end


#endif