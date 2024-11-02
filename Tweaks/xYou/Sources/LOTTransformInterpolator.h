// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTTRANSFORMINTERPOLATOR_H
#define LOTTRANSFORMINTERPOLATOR_H


#import <Foundation/Foundation.h>

#import "LOTTransformInterpolator.h"
#import "LOTPointInterpolator.h"
#import "LOTSizeInterpolator.h"
#import "LOTNumberInterpolator.h"

@interface LOTTransformInterpolator : NSObject

@property (retain, nonatomic) LOTTransformInterpolator *inputNode; // ivar: _inputNode
@property (readonly, nonatomic) LOTPointInterpolator *positionInterpolator; // ivar: _positionInterpolator
@property (readonly, nonatomic) LOTPointInterpolator *anchorInterpolator; // ivar: _anchorInterpolator
@property (readonly, nonatomic) LOTSizeInterpolator *scaleInterpolator; // ivar: _scaleInterpolator
@property (readonly, nonatomic) LOTNumberInterpolator *rotationInterpolator; // ivar: _rotationInterpolator
@property (readonly, nonatomic) LOTNumberInterpolator *positionXInterpolator; // ivar: _positionXInterpolator
@property (readonly, nonatomic) LOTNumberInterpolator *positionYInterpolator; // ivar: _positionYInterpolator
@property (retain, nonatomic) NSString *parentKeyName; // ivar: _parentKeyName


-(id)initWithPosition:(id)arg0 rotation:(id)arg1 anchor:(id)arg2 scale:(id)arg3 ;
-(id)initWithPositionX:(id)arg0 positionY:(id)arg1 rotation:(id)arg2 anchor:(id)arg3 scale:(id)arg4 ;
-(void)initializeWithPositionX:(id)arg0 positionY:(id)arg1 position:(id)arg2 rotation:(id)arg3 anchor:(id)arg4 scale:(id)arg5 ;
-(BOOL)hasUpdateForFrame:(id)arg0 ;
-(struct CATransform3D )transformForFrame:(id)arg0 ;
+(id)transformForLayer:(id)arg0 ;


@end


#endif