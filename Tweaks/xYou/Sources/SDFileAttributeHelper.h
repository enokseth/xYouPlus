// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDFILEATTRIBUTEHELPER_H
#define SDFILEATTRIBUTEHELPER_H


#import <Foundation/Foundation.h>


@interface SDFileAttributeHelper : NSObject



+(id)extendedAttributeNamesAtPath:(id)arg0 traverseLink:(BOOL)arg1 error:(*id)arg2 ;
+(BOOL)hasExtendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(*id)arg3 ;
+(id)extendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)setExtendedAttribute:(id)arg0 value:(id)arg1 atPath:(id)arg2 traverseLink:(BOOL)arg3 overwrite:(BOOL)arg4 error:(*id)arg5 ;
+(BOOL)removeExtendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif