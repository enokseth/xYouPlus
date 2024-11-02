// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERRESPONSE_H
#define GCDWEBSERVERRESPONSE_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "GCDWebServerBodyReader-Protocol.h"
#import "GCDWebServerBodyReader-Protocol.h"

@interface GCDWebServerResponse : NSObject <GCDWebServerBodyReader>

 {
    BOOL _opened;
    NSMutableArray *_encoders;
    id<GCDWebServerBodyReader> *_reader;
}


@property (readonly, nonatomic) NSDictionary *additionalHeaders; // ivar: _additionalHeaders
@property (readonly, nonatomic) BOOL usesChunkedTransferEncoding;
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (nonatomic) NSUInteger contentLength; // ivar: _contentLength
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (nonatomic) NSUInteger cacheControlMaxAge; // ivar: _cacheControlMaxAge
@property (retain, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (copy, nonatomic) NSString *eTag; // ivar: _eTag
@property (nonatomic, getter=isGZipContentEncodingEnabled) BOOL gzipContentEncodingEnabled; // ivar: _gzipContentEncodingEnabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithStatusCode:(NSInteger)arg0 ;
-(id)initWithRedirect:(id)arg0 permanent:(BOOL)arg1 ;
-(id)init;
-(void)setValue:(id)arg0 forAdditionalHeader:(id)arg1 ;
-(BOOL)hasBody;
-(BOOL)open:(*id)arg0 ;
-(id)readData:(*id)arg0 ;
-(void)close;
-(void)prepareForReading;
-(BOOL)performOpen:(*id)arg0 ;
-(void)performReadDataWithCompletion:(id)arg0 ;
-(void)performClose;
+(id)responseWithStatusCode:(NSInteger)arg0 ;
+(id)responseWithRedirect:(id)arg0 permanent:(BOOL)arg1 ;
+(id)response;


@end


#endif