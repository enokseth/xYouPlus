// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTRENDERGROUP_H
#define LOTRENDERGROUP_H


#import <QuartzCore/QuartzCore.h>

#import "LOTRenderNode.h"
#import "LOTAnimatorNode.h"
#import "LOTBezierPath.h"
#import "LOTNumberInterpolator.h"
#import "LOTTransformInterpolator.h"

@interface LOTRenderGroup : LOTRenderNode {
    LOTAnimatorNode *_rootNode;
    LOTBezierPath *_outputPath;
    LOTBezierPath *_localPath;
    BOOL _rootNodeHasUpdate;
    LOTNumberInterpolator *_opacityInterpolator;
    LOTTransformInterpolator *_transformInterpolator;
}


@property (readonly, nonatomic) CALayer *containerLayer; // ivar: _containerLayer


-(id)initWithInputNode:(id)arg0 contents:(id)arg1 keyname:(id)arg2 ;
-(id)valueInterpolators;
-(void)buildContents:(id)arg0 ;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
// -(BOOL)updateWithFrame:(id)arg0 withModifierBlock:(id)arg1 forceLocalUpdate:(unk)arg2  ;
-(void)performLocalUpdate;
-(void)rebuildOutputs;
-(void)setPathShouldCacheLengths:(BOOL)arg0 ;
-(id)localPath;
-(id)outputPath;
-(void)searchNodesForKeypath:(id)arg0 ;
-(void)setValueDelegate:(id)arg0 forKeypath:(id)arg1 ;


@end


#endif