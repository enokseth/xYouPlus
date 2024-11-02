// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEMANAGER_H
#define SDWEBIMAGEMANAGER_H

@protocol SDWebImageManagerDelegate;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDImageCache.h"
#import "SDImageLoader-Protocol.h"
#import "SDImageTransformer-Protocol.h"
#import "SDWebImageCacheKeyFilter-Protocol.h"
#import "SDWebImageCacheSerializer-Protocol.h"
#import "SDWebImageOptionsProcessor-Protocol.h"

@interface SDWebImageManager : NSObject {
    os_unfair_lock_s _failedURLsLock;
    os_unfair_lock_s _runningOperationsLock;
}


@property (retain, nonatomic) SDImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSObject<SDImageLoader> *imageLoader; // ivar: _imageLoader
@property (retain, nonatomic) NSMutableSet *failedURLs; // ivar: _failedURLs
@property (retain, nonatomic) NSMutableSet *runningOperations; // ivar: _runningOperations
@property (weak, nonatomic) NSObject<SDWebImageManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<SDImageTransformer> *transformer; // ivar: _transformer
@property (retain, nonatomic) NSObject<SDWebImageCacheKeyFilter> *cacheKeyFilter; // ivar: _cacheKeyFilter
@property (retain, nonatomic) NSObject<SDWebImageCacheSerializer> *cacheSerializer; // ivar: _cacheSerializer
@property (retain, nonatomic) NSObject<SDWebImageOptionsProcessor> *optionsProcessor; // ivar: _optionsProcessor
@property (readonly, nonatomic, getter=isRunning) BOOL running;


-(id)init;
-(id)initWithCache:(id)arg0 loader:(id)arg1 ;
-(id)cacheKeyForURL:(id)arg0 ;
-(id)cacheKeyForURL:(id)arg0 context:(id)arg1 ;
// -(id)loadImageWithURL:(id)arg0 options:(NSUInteger)arg1 progress:(id)arg2 completed:(unk)arg3  ;
// -(id)loadImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 progress:(id)arg3 completed:(unk)arg4  ;
-(void)cancelAll;
-(void)removeFailedURL:(id)arg0 ;
-(void)removeAllFailedURLs;
// -(void)callCacheProcessForOperation:(id)arg0 url:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 progress:(id)arg4 completed:(unk)arg5  ;
// -(void)callOriginalCacheProcessForOperation:(id)arg0 url:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 progress:(id)arg4 completed:(unk)arg5  ;
// -(void)callDownloadProcessForOperation:(id)arg0 url:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 cachedImage:(id)arg4 cachedData:(id)arg5 cacheType:(NSInteger)arg6 progress:(id)arg7 completed:(unk)arg8  ;
// -(void)callStoreCacheProcessForOperation:(id)arg0 url:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 downloadedImage:(id)arg4 downloadedData:(id)arg5 finished:(BOOL)arg6 progress:(id)arg7 completed:(unk)arg8  ;
// -(void)callTransformProcessForOperation:(id)arg0 url:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 originalImage:(id)arg4 originalData:(id)arg5 finished:(BOOL)arg6 progress:(id)arg7 completed:(unk)arg8  ;
-(void)safelyRemoveOperationFromRunning:(id)arg0 ;
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(NSInteger)arg3 options:(NSUInteger)arg4 context:(id)arg5 completion:(id)arg6 ;
// -(void)callCompletionBlockForOperation:(id)arg0 completion:(id)arg1 error:(unk)arg2 url:(id)arg3  ;
// -(void)callCompletionBlockForOperation:(id)arg0 completion:(id)arg1 image:(unk)arg2 data:(id)arg3 error:(id)arg4 cacheType:(id)arg5 finished:(NSInteger)arg6 url:(BOOL)arg7  ;
-(BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 ;
-(id)processedResultForURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
+(id)defaultImageCache;
+(void)setDefaultImageCache:(id)arg0 ;
+(id)defaultImageLoader;
+(void)setDefaultImageLoader:(id)arg0 ;
+(id)sharedManager;


@end


#endif