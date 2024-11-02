// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFHTTPRESPONSESERIALIZER_H
#define AFHTTPRESPONSESERIALIZER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "AFURLResponseSerialization-Protocol.h"

@interface AFHTTPResponseSerializer : NSObject <AFURLResponseSerialization>



@property (copy, nonatomic) NSIndexSet *acceptableStatusCodes; // ivar: _acceptableStatusCodes
@property (copy, nonatomic) NSSet *acceptableContentTypes; // ivar: _acceptableContentTypes
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(BOOL)validateResponse:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)serializer;
+(BOOL)supportsSecureCoding;


@end


#endif