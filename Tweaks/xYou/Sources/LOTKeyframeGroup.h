// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTKEYFRAMEGROUP_H
#define LOTKEYFRAMEGROUP_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface LOTKeyframeGroup : NSObject

@property (readonly, nonatomic) NSArray *keyframes; // ivar: _keyframes


-(id)initWithData:(id)arg0 ;
-(void)buildKeyframesFromData:(id)arg0 ;
-(void)remapKeyframesWithBlock:(id)arg0 ;


@end


#endif