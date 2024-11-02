// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef USERBUTTONCELL_H
#define USERBUTTONCELL_H


#import <UIKit/UIKit.h>

#import "SSBouncyButton.h"

@interface UserButtonCell : SSBouncyButton

@property (retain, nonatomic) UIView *leftSeparator; // ivar: _leftSeparator
@property (retain, nonatomic) UIView *rightSeparator; // ivar: _rightSeparator


-(id)initWithLabel:(id)arg0 account:(id)arg1 imageName:(id)arg2 logo:(id)arg3 roll:(id)arg4 color:(id)arg5 bundlePath:(id)arg6 avatarBackground:(BOOL)arg7 ;


@end


#endif