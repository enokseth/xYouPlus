// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERBODYENCODER_H
#define GCDWEBSERVERBODYENCODER_H


#import <Foundation/Foundation.h>

#import "GCDWebServerResponse.h"
#import "GCDWebServerBodyReader-Protocol.h"
#import "GCDWebServerBodyReader-Protocol.h"

@interface GCDWebServerBodyEncoder : NSObject <GCDWebServerBodyReader>

 {
    GCDWebServerResponse *_response;
    id<GCDWebServerBodyReader> *_reader;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithResponse:(id)arg0 reader:(id)arg1 ;
-(BOOL)open:(*id)arg0 ;
-(id)readData:(*id)arg0 ;
-(void)close;


@end


#endif