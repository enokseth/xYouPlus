// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPESTAR_H
#define LOTSHAPESTAR_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapeStar : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) LOTKeyframeGroup *outerRadius; // ivar: _outerRadius
@property (readonly, nonatomic) LOTKeyframeGroup *outerRoundness; // ivar: _outerRoundness
@property (readonly, nonatomic) LOTKeyframeGroup *innerRadius; // ivar: _innerRadius
@property (readonly, nonatomic) LOTKeyframeGroup *innerRoundness; // ivar: _innerRoundness
@property (readonly, nonatomic) LOTKeyframeGroup *position; // ivar: _position
@property (readonly, nonatomic) LOTKeyframeGroup *numberOfPoints; // ivar: _numberOfPoints
@property (readonly, nonatomic) LOTKeyframeGroup *rotation; // ivar: _rotation
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif