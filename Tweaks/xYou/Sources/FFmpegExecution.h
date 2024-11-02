// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FFMPEGEXECUTION_H
#define FFMPEGEXECUTION_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface FFmpegExecution : NSObject {
    NSDate *startTime;
    NSInteger executionId;
    NSString *command;
}




-(id)initWithExecutionId:(NSInteger)arg0 andArguments:(id)arg1 ;
-(id)getStartTime;
-(NSInteger)getExecutionId;
-(id)getCommand;


@end


#endif