// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef BRYSERIALANIMATIONQUEUE_H
#define BRYSERIALANIMATIONQUEUE_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface BRYSerialAnimationQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


-(id)init;
// -(void)animateWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 options:(NSUInteger)arg2 animations:(id)arg3 completion:(unk)arg4  ;
// -(void)animateWithDuration:(CGFloat)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(void)animateWithDuration:(CGFloat)arg0 animations:(id)arg1 ;
// -(void)animateWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 usingSpringWithDamping:(CGFloat)arg2 initialSpringVelocity:(CGFloat)arg3 options:(NSUInteger)arg4 animations:(id)arg5 completion:(unk)arg6  ;
-(void)performAnimationsSerially:(id)arg0 ;
// -(void)runCompletionBlock:(id)arg0 animationDidFinish:(unk)arg1  ;


@end


#endif