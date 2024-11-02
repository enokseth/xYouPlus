// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTFILLRENDERER_H
#define LOTFILLRENDERER_H


#import <QuartzCore/QuartzCore.h>

#import "LOTRenderNode.h"
#import "LOTColorInterpolator.h"
#import "LOTNumberInterpolator.h"

@interface LOTFillRenderer : LOTRenderNode {
    LOTColorInterpolator *colorInterpolator_;
    LOTNumberInterpolator *opacityInterpolator_;
    BOOL _evenOddFillRule;
    CALayer *centerPoint_DEBUG;
}




-(id)initWithInputNode:(id)arg0 shapeFill:(id)arg1 ;
-(id)valueInterpolators;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(void)performLocalUpdate;
-(void)rebuildOutputs;
-(id)actionsForRenderLayer;


@end


#endif