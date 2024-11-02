// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSHAPEGROUP_H
#define LOTSHAPEGROUP_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface LOTShapeGroup : NSObject

@property (readonly, nonatomic) NSString *keyname; // ivar: _keyname
@property (readonly, nonatomic) NSArray *items; // ivar: _items


-(id)initWithJSON:(id)arg0 ;
-(void)_mapFromJSON:(id)arg0 ;
-(id)description;
+(id)shapeItemWithJSON:(id)arg0 ;


@end


#endif