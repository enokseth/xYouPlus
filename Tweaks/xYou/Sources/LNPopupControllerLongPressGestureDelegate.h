// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPCONTROLLERLONGPRESSGESTUREDELEGATE_H
#define LNPOPUPCONTROLLERLONGPRESSGESTUREDELEGATE_H


#import <Foundation/Foundation.h>

#import "LNForwardingDelegate.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@interface LNPopupControllerLongPressGestureDelegate : LNForwardingDelegate <UIGestureRecognizerDelegate>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;


@end


#endif