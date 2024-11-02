// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef MOBILEFFPROBE_H
#define MOBILEFFPROBE_H


#import <Foundation/Foundation.h>


@interface MobileFFprobe : NSObject



+(void)initialize;
+(int)executeWithArguments:(id)arg0 ;
+(int)execute:(id)arg0 ;
+(id)getMediaInformation:(id)arg0 ;
+(id)getMediaInformationFromCommand:(id)arg0 ;
+(id)getMediaInformation:(id)arg0 timeout:(NSInteger)arg1 ;
+(id)getMediaInformationFromCommandArguments:(id)arg0 ;


@end


#endif