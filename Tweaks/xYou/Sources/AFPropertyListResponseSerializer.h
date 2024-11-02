// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFPROPERTYLISTRESPONSESERIALIZER_H
#define AFPROPERTYLISTRESPONSESERIALIZER_H



#import "AFHTTPResponseSerializer.h"

@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer

@property (nonatomic) NSUInteger format; // ivar: _format
@property (nonatomic) NSUInteger readOptions; // ivar: _readOptions


-(id)init;
-(id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)serializer;
+(id)serializerWithFormat:(NSUInteger)arg0 readOptions:(NSUInteger)arg1 ;
+(BOOL)supportsSecureCoding;


@end


#endif