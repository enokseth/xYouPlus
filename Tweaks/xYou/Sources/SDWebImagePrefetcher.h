// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEPREFETCHER_H
#define SDWEBIMAGEPREFETCHER_H

@protocol OS_dispatch_queue, SDWebImagePrefetcherDelegate;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDWebImageManager.h"

@interface SDWebImagePrefetcher : NSObject

@property (retain, nonatomic) SDWebImageManager *manager; // ivar: _manager
@property (retain) NSMutableSet *runningTokens; // ivar: _runningTokens
@property (retain, nonatomic) NSOperationQueue *prefetchQueue; // ivar: _prefetchQueue
@property (nonatomic) NSUInteger maxConcurrentPrefetchCount;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSDictionary *context; // ivar: _context
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (weak, nonatomic) NSObject<SDWebImagePrefetcherDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)initWithImageManager:(id)arg0 ;
-(id)prefetchURLs:(id)arg0 ;
// -(id)prefetchURLs:(id)arg0 progress:(id)arg1 completed:(unk)arg2  ;
-(void)startPrefetchWithToken:(id)arg0 ;
-(void)cancelPrefetching;
-(void)callProgressBlockForToken:(id)arg0 imageURL:(id)arg1 ;
-(void)callCompletionBlockForToken:(id)arg0 ;
-(NSUInteger)tokenTotalCount;
-(NSUInteger)tokenSkippedCount;
-(NSUInteger)tokenFinishedCount;
-(void)addRunningToken:(id)arg0 ;
-(void)removeRunningToken:(id)arg0 ;
-(NSUInteger)countOfRunningTokens;
+(id)sharedImagePrefetcher;


@end


#endif