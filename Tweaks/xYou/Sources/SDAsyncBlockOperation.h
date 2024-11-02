// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDASYNCBLOCKOPERATION_H
#define SDASYNCBLOCKOPERATION_H


#import <Foundation/Foundation.h>


@interface SDAsyncBlockOperation : NSOperation

@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (copy, nonatomic) id *executionBlock; // ivar: _executionBlock


-(id)initWithBlock:(id)arg0 ;
-(void)start;
-(void)cancel;
-(void)complete;
-(BOOL)isConcurrent;
+(id)blockOperationWithBlock:(id)arg0 ;


@end


#endif