// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef _AFURLSESSIONTASKSWIZZLING_H
#define _AFURLSESSIONTASKSWIZZLING_H


#import <Foundation/Foundation.h>


@interface _AFURLSessionTaskSwizzling : NSObject



-(NSInteger)state;
-(void)af_resume;
-(void)af_suspend;
+(void)load;
+(void)swizzleResumeAndSuspendMethodForClass:(Class)arg0 ;


@end


#endif