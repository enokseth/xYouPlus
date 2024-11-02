// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEPREFETCHTOKEN_H
#define SDWEBIMAGEPREFETCHTOKEN_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDWebImagePrefetcher.h"
#import "SDWebImageOperation-Protocol.h"

@interface SDWebImagePrefetchToken : NSObject <SDWebImageOperation>

 {
    uint8_t _skippedCount;
    uint8_t _finishedCount;
    atomic_flag _isAllFinished;
    NSUInteger _totalCount;
    os_unfair_lock_s _prefetchOperationsLock;
    os_unfair_lock_s _loadOperationsLock;
}


@property (copy, nonatomic) NSArray *urls; // ivar: _urls
@property (retain, nonatomic) NSPointerArray *loadOperations; // ivar: _loadOperations
@property (retain, nonatomic) NSPointerArray *prefetchOperations; // ivar: _prefetchOperations
@property (weak, nonatomic) SDWebImagePrefetcher *prefetcher; // ivar: _prefetcher
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)cancel;


@end


#endif