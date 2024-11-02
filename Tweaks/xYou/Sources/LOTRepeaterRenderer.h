// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTREPEATERRENDERER_H
#define LOTREPEATERRENDERER_H


#import <QuartzCore/QuartzCore.h>

#import "LOTRenderNode.h"
#import "LOTTransformInterpolator.h"
#import "LOTNumberInterpolator.h"

@interface LOTRepeaterRenderer : LOTRenderNode {
    LOTTransformInterpolator *_transformInterpolator;
    LOTNumberInterpolator *_copiesInterpolator;
    LOTNumberInterpolator *_offsetInterpolator;
    LOTNumberInterpolator *_startOpacityInterpolator;
    LOTNumberInterpolator *_endOpacityInterpolator;
    CALayer *_instanceLayer;
    CAReplicatorLayer *_replicatorLayer;
    CALayer *centerPoint_DEBUG;
}




-(id)initWithInputNode:(id)arg0 shapeRepeater:(id)arg1 ;
-(id)valueInterpolators;
-(void)recursivelyAddChildLayers:(id)arg0 ;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(void)performLocalUpdate;


@end


#endif