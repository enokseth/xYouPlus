// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SETTINGSVC_H
#define SETTINGSVC_H


#import <UIKit/UIKit.h>

#import "FRPreferences.h"

@interface SettingsVC : UINavigationController

@property (retain, nonatomic) FRPreferences *preferences; // ivar: _preferences


-(id)init;
-(void)dismissVC;
-(void)clearDownloading;
-(void)clearDownloaded;
-(void)clearAll;


@end


#endif