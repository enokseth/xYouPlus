// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFPROPERTYLISTREQUESTSERIALIZER_H
#define AFPROPERTYLISTREQUESTSERIALIZER_H



#import "AFHTTPRequestSerializer.h"

@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer

@property (nonatomic) NSUInteger format; // ivar: _format
@property (nonatomic) NSUInteger writeOptions; // ivar: _writeOptions


-(id)requestBySerializingRequest:(id)arg0 withParameters:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)serializer;
+(id)serializerWithFormat:(NSUInteger)arg0 writeOptions:(NSUInteger)arg1 ;


@end


#endif