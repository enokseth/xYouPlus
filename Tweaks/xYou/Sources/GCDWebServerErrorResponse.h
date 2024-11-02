// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERERRORRESPONSE_H
#define GCDWEBSERVERERRORRESPONSE_H



#import "GCDWebServerDataResponse.h"

@interface GCDWebServerErrorResponse : GCDWebServerDataResponse



-(id)initWithStatusCode:(NSInteger)arg0 underlyingError:(id)arg1 messageFormat:(id)arg2 arguments:(char *)arg3 ;
-(id)initWithClientError:(NSInteger)arg0 message:(id)arg1 ;
-(id)initWithServerError:(NSInteger)arg0 message:(id)arg1 ;
-(id)initWithClientError:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2 ;
-(id)initWithServerError:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2 ;
+(id)responseWithClientError:(NSInteger)arg0 message:(id)arg1 ;
+(id)responseWithServerError:(NSInteger)arg0 message:(id)arg1 ;
+(id)responseWithClientError:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2 ;
+(id)responseWithServerError:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2 ;


@end


#endif