// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFJSONREQUESTSERIALIZER_H
#define AFJSONREQUESTSERIALIZER_H



#import "AFHTTPRequestSerializer.h"

@interface AFJSONRequestSerializer : AFHTTPRequestSerializer

@property (nonatomic) NSUInteger writingOptions; // ivar: _writingOptions


-(id)requestBySerializingRequest:(id)arg0 withParameters:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)serializer;
+(id)serializerWithWritingOptions:(NSUInteger)arg0 ;


@end


#endif