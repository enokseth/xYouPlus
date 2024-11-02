// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPETRANSFORM_H
#define LOTSHAPETRANSFORM_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapeTransform : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) LOTKeyframeGroup *position; // ivar: _position
@property (readonly, nonatomic) LOTKeyframeGroup *anchor; // ivar: _anchor
@property (readonly, nonatomic) LOTKeyframeGroup *scale; // ivar: _scale
@property (readonly, nonatomic) LOTKeyframeGroup *rotation; // ivar: _rotation
@property (readonly, nonatomic) LOTKeyframeGroup *opacity; // ivar: _opacity


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;
-(id)description;


@end


#endif