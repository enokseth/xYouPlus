// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTPATHANIMATOR_H
#define LOTPATHANIMATOR_H



#import "LOTAnimatorNode.h"
#import "LOTShapePath.h"
#import "LOTPathInterpolator.h"

@interface LOTPathAnimator : LOTAnimatorNode {
    LOTShapePath *_pathConent;
    LOTPathInterpolator *_interpolator;
}




-(id)initWithInputNode:(id)arg0 shapePath:(id)arg1 ;
-(id)valueInterpolators;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(void)performLocalUpdate;


@end


#endif