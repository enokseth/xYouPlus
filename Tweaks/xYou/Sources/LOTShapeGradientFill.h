// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPEGRADIENTFILL_H
#define LOTSHAPEGRADIENTFILL_H


#import <Foundation/Foundation.h>

#import "LOTKeyframeGroup.h"

@interface LOTShapeGradientFill : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) NSNumber *numberOfColors; // ivar: _numberOfColors
@property (readonly, nonatomic) LOTKeyframeGroup *startPoint; // ivar: _startPoint
@property (readonly, nonatomic) LOTKeyframeGroup *endPoint; // ivar: _endPoint
@property (readonly, nonatomic) LOTKeyframeGroup *gradient; // ivar: _gradient
@property (readonly, nonatomic) LOTKeyframeGroup *opacity; // ivar: _opacity
@property (readonly, nonatomic) BOOL evenOddFillRule; // ivar: _evenOddFillRule
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;


@end


#endif