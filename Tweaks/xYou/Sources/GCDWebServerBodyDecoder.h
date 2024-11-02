// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERBODYDECODER_H
#define GCDWEBSERVERBODYDECODER_H


#import <Foundation/Foundation.h>

#import "GCDWebServerRequest.h"
#import "GCDWebServerBodyWriter-Protocol.h"
#import "GCDWebServerBodyWriter-Protocol.h"

@interface GCDWebServerBodyDecoder : NSObject <GCDWebServerBodyWriter>

 {
    GCDWebServerRequest *_request;
    id<GCDWebServerBodyWriter> *_writer;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithRequest:(id)arg0 writer:(id)arg1 ;
-(BOOL)open:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)close:(*id)arg0 ;


@end


#endif