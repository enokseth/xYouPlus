// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef ARCHDETECT_H
#define ARCHDETECT_H


#import <Foundation/Foundation.h>


@interface ArchDetect : NSObject



+(void)initialize;
+(id)getCpuArch;
+(id)getArch;
+(int)isLTSBuild;


@end


#endif