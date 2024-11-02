// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERDATARESPONSE_H
#define GCDWEBSERVERDATARESPONSE_H


#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "GCDWebServerResponse.h"

@interface GCDWebServerDataResponse : GCDWebServerResponse {
    NSData *_data;
    BOOL _done;
}


@property (copy, nonatomic) NSString *contentType;


-(id)initWithText:(id)arg0 ;
-(id)initWithHTML:(id)arg0 ;
-(id)initWithHTMLTemplate:(id)arg0 variables:(id)arg1 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 contentType:(id)arg1 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 ;
-(id)readData:(*id)arg0 ;
-(id)description;
+(id)responseWithText:(id)arg0 ;
+(id)responseWithHTML:(id)arg0 ;
+(id)responseWithHTMLTemplate:(id)arg0 variables:(id)arg1 ;
+(id)responseWithJSONObject:(id)arg0 ;
+(id)responseWithJSONObject:(id)arg0 contentType:(id)arg1 ;
+(id)responseWithData:(id)arg0 contentType:(id)arg1 ;


@end


#endif