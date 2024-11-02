// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPLONGPRESSGESTURERECOGNIZER_H
#define LNPOPUPLONGPRESSGESTURERECOGNIZER_H


#import <UIKit/UIKit.h>

#import "LNPopupControllerLongPressGestureDelegate.h"

@interface LNPopupLongPressGestureRecognizer : UILongPressGestureRecognizer {
    LNPopupControllerLongPressGestureDelegate *_actualDelegate;
}




-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg0 ;


@end


#endif