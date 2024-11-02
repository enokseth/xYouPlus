// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFJSONRESPONSESERIALIZER_H
#define AFJSONRESPONSESERIALIZER_H



#import "AFHTTPResponseSerializer.h"

@interface AFJSONResponseSerializer : AFHTTPResponseSerializer

@property (nonatomic) NSUInteger readingOptions; // ivar: _readingOptions
@property (nonatomic) BOOL removesKeysWithNullValues; // ivar: _removesKeysWithNullValues


-(id)init;
-(id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)serializer;
+(id)serializerWithReadingOptions:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;


@end


#endif