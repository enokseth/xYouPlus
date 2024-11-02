// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPERECTANGLE_H
#define LOTSHAPERECTANGLE_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapeRectangle : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) LOTKeyframeGroup *position; // ivar: _position
@property (readonly, nonatomic) LOTKeyframeGroup *size; // ivar: _size
@property (readonly, nonatomic) LOTKeyframeGroup *cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) BOOL reversed; // ivar: _reversed


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif