// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTTRIMPATHNODE_H
#define LOTTRIMPATHNODE_H



#import "LOTAnimatorNode.h"
#import "LOTNumberInterpolator.h"

@interface LOTTrimPathNode : LOTAnimatorNode {
    LOTNumberInterpolator *_startInterpolator;
    LOTNumberInterpolator *_endInterpolator;
    LOTNumberInterpolator *_offsetInterpolator;
    CGFloat _startT;
    CGFloat _endT;
    CGFloat _offsetT;
}




-(id)initWithInputNode:(id)arg0 trimPath:(id)arg1 ;
-(id)valueInterpolators;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
// -(BOOL)updateWithFrame:(id)arg0 withModifierBlock:(id)arg1 forceLocalUpdate:(unk)arg2  ;
-(void)performLocalUpdate;
-(void)rebuildOutputs;
-(id)localPath;
-(id)outputPath;


@end


#endif