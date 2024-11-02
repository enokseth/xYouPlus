// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGECACHE_H
#define SDIMAGECACHE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SDImageCacheConfig.h"
#import "SDImageCache-Protocol.h"
#import "SDMemoryCache-Protocol.h"
#import "SDDiskCache-Protocol.h"

@interface SDImageCache : NSObject <SDImageCache>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<SDMemoryCache> *memoryCache; // ivar: _memoryCache
@property (retain, nonatomic) NSObject<SDDiskCache> *diskCache; // ivar: _diskCache
@property (copy, nonatomic) SDImageCacheConfig *config; // ivar: _config
@property (copy, nonatomic) NSString *diskCachePath; // ivar: _diskCachePath
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // ivar: _ioQueue
@property (copy, nonatomic) id *additionalCachePathBlock; // ivar: _additionalCachePathBlock


-(id)queryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3 ;
-(id)queryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 ;
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 ;
-(void)removeImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)containsImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)clearWithCacheType:(NSInteger)arg0 completion:(id)arg1 ;
-(id)init;
-(id)initWithNamespace:(id)arg0 ;
-(id)initWithNamespace:(id)arg0 diskCacheDirectory:(id)arg1 ;
-(id)initWithNamespace:(id)arg0 diskCacheDirectory:(id)arg1 config:(id)arg2 ;
-(void)dealloc;
-(id)cachePathForKey:(id)arg0 ;
-(void)migrateDiskCacheDirectory;
-(void)storeImage:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)storeImage:(id)arg0 forKey:(id)arg1 toDisk:(BOOL)arg2 completion:(id)arg3 ;
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 toDisk:(BOOL)arg3 completion:(id)arg4 ;
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 toMemory:(BOOL)arg3 toDisk:(BOOL)arg4 completion:(id)arg5 ;
-(void)_archivedDataWithImage:(id)arg0 forKey:(id)arg1 ;
-(void)storeImageToMemory:(id)arg0 forKey:(id)arg1 ;
-(void)storeImageDataToDisk:(id)arg0 forKey:(id)arg1 ;
-(void)_storeImageDataToDisk:(id)arg0 forKey:(id)arg1 ;
-(void)diskImageExistsWithKey:(id)arg0 completion:(id)arg1 ;
-(BOOL)diskImageDataExistsWithKey:(id)arg0 ;
-(BOOL)_diskImageDataExistsWithKey:(id)arg0 ;
-(void)diskImageDataQueryForKey:(id)arg0 completion:(id)arg1 ;
-(id)diskImageDataForKey:(id)arg0 ;
-(id)imageFromMemoryCacheForKey:(id)arg0 ;
-(id)imageFromDiskCacheForKey:(id)arg0 ;
-(id)imageFromDiskCacheForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
-(id)imageFromCacheForKey:(id)arg0 ;
-(id)imageFromCacheForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
-(id)diskImageDataBySearchingAllPathsForKey:(id)arg0 ;
-(id)diskImageForKey:(id)arg0 ;
-(id)diskImageForKey:(id)arg0 data:(id)arg1 ;
-(id)diskImageForKey:(id)arg0 data:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 ;
-(void)_unarchiveObjectWithImage:(id)arg0 forKey:(id)arg1 ;
-(id)queryCacheOperationForKey:(id)arg0 done:(id)arg1 ;
-(id)queryCacheOperationForKey:(id)arg0 options:(NSUInteger)arg1 done:(id)arg2 ;
-(id)queryCacheOperationForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 done:(id)arg3 ;
-(id)queryCacheOperationForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 cacheType:(NSInteger)arg3 done:(id)arg4 ;
-(void)removeImageForKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeImageForKey:(id)arg0 fromDisk:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)removeImageForKey:(id)arg0 fromMemory:(BOOL)arg1 fromDisk:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)removeImageFromMemoryForKey:(id)arg0 ;
-(void)removeImageFromDiskForKey:(id)arg0 ;
-(void)_removeImageFromDiskForKey:(id)arg0 ;
-(void)clearMemory;
-(void)clearDiskOnCompletion:(id)arg0 ;
-(void)deleteOldFilesWithCompletionBlock:(id)arg0 ;
-(void)applicationWillTerminate:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(NSUInteger)totalDiskSize;
-(NSUInteger)totalDiskCount;
-(void)calculateSizeWithCompletionBlock:(id)arg0 ;
+(id)sharedImageCache;
+(id)defaultDiskCacheDirectory;
+(void)setDefaultDiskCacheDirectory:(id)arg0 ;
+(id)userCacheDirectory;
+(NSUInteger)imageOptionsFromCacheOptions:(NSUInteger)arg0 ;


@end


#endif