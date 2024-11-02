// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPEPATH_H
#define LOTSHAPEPATH_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapePath : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) BOOL closed; // ivar: _closed
@property (readonly, nonatomic) NSNumber *index; // ivar: _index
@property (readonly, nonatomic) LOTKeyframeGroup *shapePath; // ivar: _shapePath


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif