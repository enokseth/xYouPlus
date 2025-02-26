// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef _LNPOPUPTRANSITIONCOORDINATOR_H
#define _LNPOPUPTRANSITIONCOORDINATOR_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "UIViewControllerTransitionCoordinator-Protocol.h"

@interface _LNPopupTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>



@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly, nonatomic) BOOL initiallyInteractive;
@property (readonly, nonatomic) BOOL isInterruptible;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) CGFloat transitionDuration;
@property (readonly, nonatomic) CGFloat percentComplete;
@property (readonly, nonatomic) CGFloat completionVelocity;
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) CGAffineTransform targetTransform;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
// -(BOOL)animateAlongsideTransition:(id)arg0 completion:(unk)arg1  ;
// -(BOOL)animateAlongsideTransitionInView:(id)arg0 animation:(id)arg1 completion:(unk)arg2  ;
-(void)notifyWhenInteractionEndsUsingBlock:(id)arg0 ;
-(void)notifyWhenInteractionChangesUsingBlock:(id)arg0 ;


@end


#endif