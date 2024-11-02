// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSTROKERENDERER_H
#define LOTSTROKERENDERER_H


#import <CoreFoundation/CoreFoundation.h>

#import "LOTRenderNode.h"
#import "LOTColorInterpolator.h"
#import "LOTNumberInterpolator.h"

@interface LOTStrokeRenderer : LOTRenderNode {
    LOTColorInterpolator *_colorInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    LOTNumberInterpolator *_widthInterpolator;
    LOTNumberInterpolator *_dashOffsetInterpolator;
    NSArray *_dashPatternInterpolators;
}




-(id)initWithInputNode:(id)arg0 shapeStroke:(id)arg1 ;
-(id)valueInterpolators;
-(void)_updateLineDashPatternsForFrame:(id)arg0 ;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(void)performLocalUpdate;
-(void)rebuildOutputs;
-(id)actionsForRenderLayer;


@end


#endif