// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef STPOPUPCONTROLLERTRANSITIONINGSLIDEVERTICAL_H
#define STPOPUPCONTROLLERTRANSITIONINGSLIDEVERTICAL_H


#import <Foundation/Foundation.h>

#import "STPopupControllerTransitioning-Protocol.h"

@interface STPopupControllerTransitioningSlideVertical : NSObject <STPopupControllerTransitioning>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(CGFloat)popupControllerTransitionDuration:(id)arg0 ;
-(void)popupControllerAnimateTransition:(id)arg0 completion:(id)arg1 ;


@end


#endif