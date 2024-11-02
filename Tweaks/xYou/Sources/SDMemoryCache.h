// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDMEMORYCACHE_H
#define SDMEMORYCACHE_H


#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "SDImageCacheConfig.h"
#import "SDMemoryCache-Protocol.h"

@interface SDMemoryCache : NSCache <SDMemoryCache>

 {
    os_unfair_lock_s _weakCacheLock;
}


@property (retain, nonatomic) SDImageCacheConfig *config; // ivar: _config
@property (retain, nonatomic) NSMapTable *weakCache; // ivar: _weakCache
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)dealloc;
-(id)init;
-(id)initWithConfig:(id)arg0 ;
-(void)commonInit;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 cost:(NSUInteger)arg2 ;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif