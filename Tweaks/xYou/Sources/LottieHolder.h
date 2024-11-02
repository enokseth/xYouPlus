// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTTIEHOLDER_H
#define LOTTIEHOLDER_H


#import <UIKit/UIKit.h>

#import "LOTAnimationView.h"

@interface LottieHolder : UIView

@property (retain, nonatomic) LOTAnimationView *animation; // ivar: _animation


-(id)init;
-(void)layoutSubviews;


@end


#endif