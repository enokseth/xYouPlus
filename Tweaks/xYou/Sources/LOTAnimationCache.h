// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTANIMATIONCACHE_H
#define LOTANIMATIONCACHE_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface LOTAnimationCache : NSObject {
    NSMutableDictionary *animationsCache_;
    NSMutableArray *lruOrderArray_;
}




-(id)init;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(id)animationForKey:(id)arg0 ;
-(void)clearCache;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)disableCaching;
+(id)sharedCache;


@end


#endif