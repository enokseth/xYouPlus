// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERSTREAMEDRESPONSE_H
#define GCDWEBSERVERSTREAMEDRESPONSE_H


#import <Foundation/Foundation.h>

#import "GCDWebServerResponse.h"

@interface GCDWebServerStreamedResponse : GCDWebServerResponse {
    id *_block;
}


@property (copy, nonatomic) NSString *contentType;


-(id)initWithContentType:(id)arg0 streamBlock:(id)arg1 ;
-(id)initWithContentType:(id)arg0 asyncStreamBlock:(id)arg1 ;
-(void)asyncReadDataWithCompletion:(id)arg0 ;
-(id)description;
+(id)responseWithContentType:(id)arg0 streamBlock:(id)arg1 ;
+(id)responseWithContentType:(id)arg0 asyncStreamBlock:(id)arg1 ;


@end


#endif