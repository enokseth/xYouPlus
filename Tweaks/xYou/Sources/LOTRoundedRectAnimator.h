// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTROUNDEDRECTANIMATOR_H
#define LOTROUNDEDRECTANIMATOR_H



#import "LOTAnimatorNode.h"
#import "LOTPointInterpolator.h"
#import "LOTNumberInterpolator.h"

@interface LOTRoundedRectAnimator : LOTAnimatorNode {
    LOTPointInterpolator *_centerInterpolator;
    LOTPointInterpolator *_sizeInterpolator;
    LOTNumberInterpolator *_cornerRadiusInterpolator;
    BOOL _reversed;
}




-(id)initWithInputNode:(id)arg0 shapeRectangle:(id)arg1 ;
-(id)valueInterpolators;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(void)addCorner:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 toPath:(id)arg2 clockwise:(BOOL)arg3 ;
-(void)performLocalUpdate;


@end


#endif