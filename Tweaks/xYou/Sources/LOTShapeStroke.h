// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPESTROKE_H
#define LOTSHAPESTROKE_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapeStroke : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) BOOL fillEnabled; // ivar: _fillEnabled
@property (readonly, nonatomic) LOTKeyframeGroup *color; // ivar: _color
@property (readonly, nonatomic) LOTKeyframeGroup *opacity; // ivar: _opacity
@property (readonly, nonatomic) LOTKeyframeGroup *width; // ivar: _width
@property (readonly, nonatomic) LOTKeyframeGroup *dashOffset; // ivar: _dashOffset
@property (readonly, nonatomic) NSUInteger capType; // ivar: _capType
@property (readonly, nonatomic) NSUInteger joinType; // ivar: _joinType
@property (readonly, nonatomic) NSArray *lineDashPattern; // ivar: _lineDashPattern


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif