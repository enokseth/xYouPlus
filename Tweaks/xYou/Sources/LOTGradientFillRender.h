// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTGRADIENTFILLRENDER_H
#define LOTGRADIENTFILLRENDER_H


#import <QuartzCore/QuartzCore.h>

#import "LOTRenderNode.h"
#import "LOTRadialGradientLayer.h"
#import "LOTArrayInterpolator.h"
#import "LOTPointInterpolator.h"
#import "LOTNumberInterpolator.h"

@interface LOTGradientFillRender : LOTRenderNode {
    BOOL _evenOddFillRule;
    CALayer *centerPoint_DEBUG;
    CAShapeLayer *_maskShape;
    LOTRadialGradientLayer *_gradientOpacityLayer;
    LOTRadialGradientLayer *_gradientLayer;
    NSInteger _numberOfPositions;
    CGPoint _startPoint;
    CGPoint _endPoint;
    LOTArrayInterpolator *_gradientInterpolator;
    LOTPointInterpolator *_startPointInterpolator;
    LOTPointInterpolator *_endPointInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
}




-(id)initWithInputNode:(id)arg0 shapeGradientFill:(id)arg1 ;
-(id)valueInterpolators;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(void)performLocalUpdate;
-(void)rebuildOutputs;
-(id)actionsForRenderLayer;


@end


#endif