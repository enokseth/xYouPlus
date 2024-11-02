// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef MOBILEFFMPEGCONFIG_H
#define MOBILEFFMPEGCONFIG_H


#import <Foundation/Foundation.h>


@interface MobileFFmpegConfig : NSObject



+(void)initialize;
+(void)enableRedirection;
+(void)disableRedirection;
+(int)getLogLevel;
+(void)setLogLevel:(int)arg0 ;
+(id)logLevelToString:(int)arg0 ;
+(void)setLogDelegate:(id)arg0 ;
+(void)setStatisticsDelegate:(id)arg0 ;
+(id)getLastReceivedStatistics;
+(void)resetStatistics;
+(void)setFontconfigConfigurationPath:(id)arg0 ;
+(void)setFontDirectory:(id)arg0 with:(id)arg1 ;
+(id)getBuildConf;
+(id)getPackageName;
+(id)getExternalLibraries;
+(id)registerNewFFmpegPipe;
+(void)closeFFmpegPipe:(id)arg0 ;
+(id)getFFmpegVersion;
+(id)getVersion;
+(id)getBuildDate;
+(int)getLastReturnCode;
+(id)getLastCommandOutput;
+(void)ignoreSignal:(int)arg0 ;


@end


#endif