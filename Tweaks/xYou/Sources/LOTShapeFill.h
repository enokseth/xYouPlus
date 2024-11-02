// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPEFILL_H
#define LOTSHAPEFILL_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapeFill : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) BOOL fillEnabled; // ivar: _fillEnabled
@property (readonly, nonatomic) LOTKeyframeGroup *color; // ivar: _color
@property (readonly, nonatomic) LOTKeyframeGroup *opacity; // ivar: _opacity
@property (readonly, nonatomic) BOOL evenOddFillRule; // ivar: _evenOddFillRule


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif