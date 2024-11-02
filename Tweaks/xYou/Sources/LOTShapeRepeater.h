// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPEREPEATER_H
#define LOTSHAPEREPEATER_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapeRepeater : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) LOTKeyframeGroup *copies; // ivar: _copies
@property (readonly, nonatomic) LOTKeyframeGroup *offset; // ivar: _offset
@property (readonly, nonatomic) LOTKeyframeGroup *anchorPoint; // ivar: _anchorPoint
@property (readonly, nonatomic) LOTKeyframeGroup *scale; // ivar: _scale
@property (readonly, nonatomic) LOTKeyframeGroup *position; // ivar: _position
@property (readonly, nonatomic) LOTKeyframeGroup *rotation; // ivar: _rotation
@property (readonly, nonatomic) LOTKeyframeGroup *startOpacity; // ivar: _startOpacity
@property (readonly, nonatomic) LOTKeyframeGroup *endOpacity; // ivar: _endOpacity


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif