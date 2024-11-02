// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTRENDERNODE_H
#define LOTRENDERNODE_H


#import <QuartzCore/QuartzCore.h>

#import "LOTAnimatorNode.h"

@interface LOTRenderNode : LOTAnimatorNode

@property (readonly, nonatomic) CAShapeLayer *outputLayer; // ivar: _outputLayer


-(id)initWithInputNode:(id)arg0 keyName:(id)arg1 ;
-(id)actionsForRenderLayer;
-(void)performLocalUpdate;
-(void)rebuildOutputs;
-(id)localPath;
-(id)outputPath;


@end


#endif