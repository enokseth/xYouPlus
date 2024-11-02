// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef STATISTICS_H
#define STATISTICS_H


#import <Foundation/Foundation.h>


@interface Statistics : NSObject {
    NSInteger executionId;
    int videoFrameNumber;
    float videoFps;
    float videoQuality;
    NSInteger size;
    int time;
    CGFloat bitrate;
    CGFloat speed;
}




-(id)init;
-(id)initWithId:(NSInteger)arg0 videoFrameNumber:(int)arg1 fps:(float)arg2 quality:(float)arg3 size:(NSInteger)arg4 time:(int)arg5 bitrate:(CGFloat)arg6 speed:(CGFloat)arg7 ;
-(void)update:(id)arg0 ;
-(NSInteger)getExecutionId;
-(int)getVideoFrameNumber;
-(float)getVideoFps;
-(float)getVideoQuality;
-(NSInteger)getSize;
-(int)getTime;
-(CGFloat)getBitrate;
-(CGFloat)getSpeed;


@end


#endif