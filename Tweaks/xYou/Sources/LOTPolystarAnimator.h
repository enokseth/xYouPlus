// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTPOLYSTARANIMATOR_H
#define LOTPOLYSTARANIMATOR_H



#import "LOTAnimatorNode.h"
#import "LOTNumberInterpolator.h"
#import "LOTPointInterpolator.h"

@interface LOTPolystarAnimator : LOTAnimatorNode {
    LOTNumberInterpolator *_outerRadiusInterpolator;
    LOTNumberInterpolator *_innerRadiusInterpolator;
    LOTNumberInterpolator *_outerRoundnessInterpolator;
    LOTNumberInterpolator *_innerRoundnessInterpolator;
    LOTPointInterpolator *_positionInterpolator;
    LOTNumberInterpolator *_pointsInterpolator;
    LOTNumberInterpolator *_rotationInterpolator;
}




-(id)initWithInputNode:(id)arg0 shapeStar:(id)arg1 ;
-(id)valueInterpolators;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(void)performLocalUpdate;


@end


#endif