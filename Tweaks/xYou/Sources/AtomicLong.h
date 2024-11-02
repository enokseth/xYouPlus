// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef ATOMICLONG_H
#define ATOMICLONG_H


#import <Foundation/Foundation.h>


@interface AtomicLong : NSObject {
    NSRecursiveLock *lock;
    NSInteger value;
}




-(id)initWithInitialValue:(NSInteger)arg0 ;
-(NSInteger)incrementAndGet;


@end


#endif