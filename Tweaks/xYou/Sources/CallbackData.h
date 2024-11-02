// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef CALLBACKDATA_H
#define CALLBACKDATA_H


#import <Foundation/Foundation.h>


@interface CallbackData : NSObject {
    int type;
    NSInteger executionId;
    int logLevel;
    NSString *logData;
    int statisticsFrameNumber;
    float statisticsFps;
    float statisticsQuality;
    NSInteger statisticsSize;
    int statisticsTime;
    CGFloat statisticsBitrate;
    CGFloat statisticsSpeed;
}




-(id)initWithId:(NSInteger)arg0 logLevel:(int)arg1 data:(id)arg2 ;
-(id)initWithId:(NSInteger)arg0 videoFrameNumber:(int)arg1 fps:(float)arg2 quality:(float)arg3 size:(NSInteger)arg4 time:(int)arg5 bitrate:(CGFloat)arg6 speed:(CGFloat)arg7 ;
-(int)getType;
-(NSInteger)getExecutionId;
-(int)getLogLevel;
-(id)getLogData;
-(int)getStatisticsFrameNumber;
-(float)getStatisticsFps;
-(float)getStatisticsQuality;
-(NSInteger)getStatisticsSize;
-(int)getStatisticsTime;
-(CGFloat)getStatisticsBitrate;
-(CGFloat)getStatisticsSpeed;


@end


#endif