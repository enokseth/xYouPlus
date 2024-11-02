// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTCIRCLEANIMATOR_H
#define LOTCIRCLEANIMATOR_H



#import "LOTAnimatorNode.h"
#import "LOTPointInterpolator.h"

@interface LOTCircleAnimator : LOTAnimatorNode {
    LOTPointInterpolator *_centerInterpolator;
    LOTPointInterpolator *_sizeInterpolator;
    BOOL _reversed;
}




-(id)initWithInputNode:(id)arg0 shapeCircle:(id)arg1 ;
-(id)valueInterpolators;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(void)performLocalUpdate;


@end


#endif