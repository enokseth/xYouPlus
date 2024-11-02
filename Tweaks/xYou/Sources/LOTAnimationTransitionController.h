// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTANIMATIONTRANSITIONCONTROLLER_H
#define LOTANIMATIONTRANSITIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "LOTAnimationView.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@interface LOTAnimationTransitionController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    LOTAnimationView *transitionAnimationView_;
    NSString *fromLayerName_;
    NSString *toLayerName_;
    NSBundle *inBundle_;
    BOOL _applyTransform;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithAnimationNamed:(id)arg0 fromLayerNamed:(id)arg1 toLayerNamed:(id)arg2 applyAnimationTransform:(BOOL)arg3 ;
-(id)initWithAnimationNamed:(id)arg0 fromLayerNamed:(id)arg1 toLayerNamed:(id)arg2 applyAnimationTransform:(BOOL)arg3 inBundle:(id)arg4 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif