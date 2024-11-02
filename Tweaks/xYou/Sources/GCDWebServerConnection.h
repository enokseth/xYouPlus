// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERCONNECTION_H
#define GCDWEBSERVERCONNECTION_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "GCDWebServerRequest.h"
#import "GCDWebServerHandler.h"
#import "GCDWebServerResponse.h"
#import "GCDWebServer.h"

@interface GCDWebServerConnection : NSObject {
    int _socket;
    BOOL _virtualHEAD;
    *__CFHTTPMessage _requestMessage;
    GCDWebServerRequest *_request;
    GCDWebServerHandler *_handler;
    *__CFHTTPMessage _responseMessage;
    GCDWebServerResponse *_response;
    NSInteger _statusCode;
    BOOL _opened;
}


@property (readonly, nonatomic) GCDWebServer *server; // ivar: _server
@property (readonly, nonatomic, getter=isUsingIPv6) BOOL usingIPv6;
@property (readonly, nonatomic) NSData *localAddressData; // ivar: _localAddressData
@property (readonly, nonatomic) NSString *localAddressString;
@property (readonly, nonatomic) NSData *remoteAddressData; // ivar: _remoteAddressData
@property (readonly, nonatomic) NSString *remoteAddressString;
@property (readonly, nonatomic) NSUInteger totalBytesRead; // ivar: _totalBytesRead
@property (readonly, nonatomic) NSUInteger totalBytesWritten; // ivar: _totalBytesWritten


-(BOOL)open;
-(void)didReadBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)didWriteBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)rewriteRequestURL:(id)arg0 withMethod:(id)arg1 headers:(id)arg2 ;
-(id)preflightRequest:(id)arg0 ;
-(void)processRequest:(id)arg0 completion:(id)arg1 ;
-(id)overrideResponse:(id)arg0 forRequest:(id)arg1 ;
-(void)abortRequest:(id)arg0 withStatusCode:(NSInteger)arg1 ;
-(void)close;
-(void)writeData:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)writeHeadersWithCompletionBlock:(id)arg0 ;
-(void)writeBodyWithCompletionBlock:(id)arg0 ;
-(void)readData:(id)arg0 withLength:(NSUInteger)arg1 completionBlock:(id)arg2 ;
-(void)readHeaders:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)readBodyWithRemainingLength:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)readNextBodyChunk:(id)arg0 completionBlock:(id)arg1 ;
-(void)_initializeResponseHeadersWithStatusCode:(NSInteger)arg0 ;
-(void)_startProcessingRequest;
-(void)_finishProcessingRequest:(id)arg0 ;
-(void)_readBodyWithLength:(NSUInteger)arg0 initialData:(id)arg1 ;
-(void)_readChunkedBodyWithInitialData:(id)arg0 ;
-(void)_readRequestHeaders;
-(id)initWithServer:(id)arg0 localAddress:(id)arg1 remoteAddress:(id)arg2 socket:(int)arg3 ;
-(void)dealloc;
+(void)initialize;


@end


#endif