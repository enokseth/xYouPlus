// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPOPENTAPGESTURERECOGNIZER_H
#define LNPOPUPOPENTAPGESTURERECOGNIZER_H


#import <UIKit/UIKit.h>

#import "LNPopupOpenTapGestureRecognizerForwardingDelegate.h"

@interface LNPopupOpenTapGestureRecognizer : UITapGestureRecognizer {
    LNPopupOpenTapGestureRecognizerForwardingDelegate *_actualDelegate;
}




-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg0 ;


@end


#endif