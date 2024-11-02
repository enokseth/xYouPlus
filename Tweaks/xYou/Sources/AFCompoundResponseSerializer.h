// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFCOMPOUNDRESPONSESERIALIZER_H
#define AFCOMPOUNDRESPONSESERIALIZER_H


#import <CoreFoundation/CoreFoundation.h>

#import "AFHTTPResponseSerializer.h"

@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer

@property (copy, nonatomic) NSArray *responseSerializers; // ivar: _responseSerializers


-(id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)compoundSerializerWithResponseSerializers:(id)arg0 ;
+(BOOL)supportsSecureCoding;


@end


#endif