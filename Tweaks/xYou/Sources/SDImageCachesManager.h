// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGECACHESMANAGER_H
#define SDIMAGECACHESMANAGER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDImageCache-Protocol.h"

@interface SDImageCachesManager : NSObject <SDImageCache>

 {
    os_unfair_lock_s _cachesLock;
}


@property (retain, nonatomic) NSMutableArray *imageCaches; // ivar: _imageCaches
@property (nonatomic) NSUInteger queryOperationPolicy; // ivar: _queryOperationPolicy
@property (nonatomic) NSUInteger storeOperationPolicy; // ivar: _storeOperationPolicy
@property (nonatomic) NSUInteger removeOperationPolicy; // ivar: _removeOperationPolicy
@property (nonatomic) NSUInteger containsOperationPolicy; // ivar: _containsOperationPolicy
@property (nonatomic) NSUInteger clearOperationPolicy; // ivar: _clearOperationPolicy
@property (copy, nonatomic) NSArray *caches;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)addCache:(id)arg0 ;
-(void)removeCache:(id)arg0 ;
-(id)queryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3 ;
-(id)queryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 ;
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 ;
-(void)removeImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)containsImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)clearWithCacheType:(NSInteger)arg0 completion:(id)arg1 ;
// -(void)concurrentQueryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 enumerator:(unk)arg5 operation:(id)arg6  ;
// -(void)concurrentStoreImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 enumerator:(unk)arg5 operation:(id)arg6  ;
// -(void)concurrentRemoveImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 enumerator:(unk)arg3 operation:(id)arg4  ;
// -(void)concurrentContainsImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 enumerator:(unk)arg3 operation:(id)arg4  ;
// -(void)concurrentClearWithCacheType:(NSInteger)arg0 completion:(id)arg1 enumerator:(unk)arg2 operation:(id)arg3  ;
// -(void)serialQueryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 enumerator:(unk)arg5 operation:(id)arg6  ;
// -(void)serialStoreImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 enumerator:(unk)arg5  ;
// -(void)serialRemoveImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 enumerator:(unk)arg3  ;
// -(void)serialContainsImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 enumerator:(unk)arg3 operation:(id)arg4  ;
// -(void)serialClearWithCacheType:(NSInteger)arg0 completion:(id)arg1 enumerator:(unk)arg2  ;
+(id)sharedManager;


@end


#endif