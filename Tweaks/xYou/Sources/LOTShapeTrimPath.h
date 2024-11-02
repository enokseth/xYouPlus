// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPETRIMPATH_H
#define LOTSHAPETRIMPATH_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapeTrimPath : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) LOTKeyframeGroup *start; // ivar: _start
@property (readonly, nonatomic) LOTKeyframeGroup *end; // ivar: _end
@property (readonly, nonatomic) LOTKeyframeGroup *offset; // ivar: _offset


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif