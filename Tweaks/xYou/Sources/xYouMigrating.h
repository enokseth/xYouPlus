// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef XYOUMIGRATING_H
#define XYOUMIGRATING_H


#import <UIKit/UIKit.h>

#import "LottieHolder.h"
#import "SSBouncyButton.h"

@interface xYouMigrating : UIViewController {
    LottieHolder *lottieView;
    UIActivityIndicatorView *activityIndicatorView;
    UILabel *loadingLabel;
    SSBouncyButton *leftButton;
    SSBouncyButton *rightButton;
    SSBouncyButton *middleButton;
    UIView *loadingView;
    UILabel *textLabel;
}




-(id)initWithTitle:(id)arg0 ;
-(void)dismiss;
-(void)copyAllCercube;
-(void)moveAllCercube;
-(void)copyAllDLEasy;
-(void)moveAllDLEasy;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)moveAllDownloadsFromCercube:(BOOL)arg0 ;
-(void)moveAllDownloadsFromDLEasy:(BOOL)arg0 ;


@end


#endif