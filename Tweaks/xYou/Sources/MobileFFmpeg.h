// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef MOBILEFFMPEG_H
#define MOBILEFFMPEG_H


#import <Foundation/Foundation.h>


@interface MobileFFmpeg : NSObject



+(void)initialize;
+(int)executeWithId:(NSInteger)arg0 andArguments:(id)arg1 ;
+(int)executeWithArguments:(id)arg0 ;
+(int)executeWithArgumentsAsync:(id)arg0 withCallback:(id)arg1 ;
+(int)executeWithArgumentsAsync:(id)arg0 withCallback:(id)arg1 andDispatchQueue:(id)arg2 ;
+(int)execute:(id)arg0 ;
+(int)executeAsync:(id)arg0 withCallback:(id)arg1 ;
+(int)executeAsync:(id)arg0 withCallback:(id)arg1 andDispatchQueue:(id)arg2 ;
+(int)execute:(id)arg0 delimiter:(id)arg1 ;
+(void)cancel;
+(void)cancel:(NSInteger)arg0 ;
+(id)parseArguments:(id)arg0 ;
+(id)argumentsToString:(id)arg0 ;
+(id)listExecutions;


@end


#endif