// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDANIMATION_H
#define JGPROGRESSHUDANIMATION_H


#import <Foundation/Foundation.h>

#import "JGProgressHUD.h"

@interface JGProgressHUDAnimation : NSObject {
    BOOL _presenting;
}


@property (weak, nonatomic) JGProgressHUD *progressHUD; // ivar: _progressHUD


-(void)show;
-(void)hide;
-(void)animationFinished;
+(id)animation;


@end


#endif