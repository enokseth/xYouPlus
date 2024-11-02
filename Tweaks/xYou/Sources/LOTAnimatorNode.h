// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTANIMATORNODE_H
#define LOTANIMATORNODE_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "LOTAnimatorNode.h"
#import "LOTBezierPath.h"

@interface LOTAnimatorNode : NSObject

@property (readonly, nonatomic) NSDictionary *valueInterpolators; // ivar: _valueInterpolators
@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) NSNumber *currentFrame; // ivar: _currentFrame
@property (readonly, nonatomic) LOTAnimatorNode *inputNode; // ivar: _inputNode
@property (retain, nonatomic) LOTBezierPath *localPath; // ivar: _localPath
@property (retain, nonatomic) LOTBezierPath *outputPath; // ivar: _outputPath
@property (nonatomic) BOOL pathShouldCacheLengths; // ivar: _pathShouldCacheLengths


-(id)initWithInputNode:(id)arg0 keyName:(id)arg1 ;
-(BOOL)needsUpdateForFrame:(id)arg0 ;
-(BOOL)updateWithFrame:(id)arg0 ;
// -(BOOL)updateWithFrame:(id)arg0 withModifierBlock:(id)arg1 forceLocalUpdate:(unk)arg2  ;
-(void)forceSetCurrentFrame:(id)arg0 ;
-(void)logString:(id)arg0 ;
-(void)performLocalUpdate;
-(void)rebuildOutputs;
-(void)searchNodesForKeypath:(id)arg0 ;
-(void)setValueDelegate:(id)arg0 forKeypath:(id)arg1 ;


@end


#endif