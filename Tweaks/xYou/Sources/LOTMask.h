// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTMASK_H
#define LOTMASK_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTMask : NSObject

@property (readonly, nonatomic) BOOL closed; // ivar: _closed
@property (readonly, nonatomic) BOOL inverted; // ivar: _inverted
@property (readonly, nonatomic) NSUInteger maskMode; // ivar: _maskMode
@property (readonly, nonatomic) LOTKeyframeGroup *maskPath; // ivar: _maskPath
@property (readonly, nonatomic) LOTKeyframeGroup *opacity; // ivar: _opacity
@property (readonly, nonatomic) LOTKeyframeGroup *expansion; // ivar: _expansion


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif