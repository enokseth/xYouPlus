// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef XYOUCHECKUPDATE_H
#define XYOUCHECKUPDATE_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "LottieHolder.h"

@interface xYouCheckUpdate : UIViewController {
    LottieHolder *updateLottie;
    NSString *_tweakID;
    NSString *_version;
}




-(id)initWithTweakName:(id)arg0 tweakID:(id)arg1 version:(id)arg2 message:(id)arg3 tintColor:(id)arg4 showAllButtons:(BOOL)arg5 ;
-(void)dismiss;
-(void)dontShow;
-(void)updateAction;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif