// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGECACHESMANAGEROPERATION_H
#define SDIMAGECACHESMANAGEROPERATION_H


#import <Foundation/Foundation.h>


@interface SDImageCachesManagerOperation : NSOperation {
    os_unfair_lock_s _pendingCountLock;
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}


@property (readonly, nonatomic) NSUInteger pendingCount; // ivar: _pendingCount


-(id)init;
-(void)beginWithTotalCount:(NSUInteger)arg0 ;
-(void)completeOne;
-(void)cancel;
-(void)done;
-(void)reset;
-(void)setFinished:(BOOL)arg0 ;
-(void)setExecuting:(BOOL)arg0 ;
-(void)setCancelled:(BOOL)arg0 ;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isCancelled;


@end


#endif