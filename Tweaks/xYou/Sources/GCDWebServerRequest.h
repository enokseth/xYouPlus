// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERREQUEST_H
#define GCDWEBSERVERREQUEST_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "GCDWebServerBodyWriter-Protocol.h"
#import "GCDWebServerBodyWriter-Protocol.h"

@interface GCDWebServerRequest : NSObject <GCDWebServerBodyWriter>

 {
    BOOL _opened;
    NSMutableArray *_decoders;
    id<GCDWebServerBodyWriter> *_writer;
    NSMutableDictionary *_attributes;
}


@property (readonly, nonatomic) BOOL usesChunkedTransferEncoding; // ivar: _usesChunkedTransferEncoding
@property (retain, nonatomic) NSData *localAddressData; // ivar: _localAddressData
@property (retain, nonatomic) NSData *remoteAddressData; // ivar: _remoteAddressData
@property (readonly, nonatomic) NSString *method; // ivar: _method
@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSDictionary *headers; // ivar: _headers
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSDictionary *query; // ivar: _query
@property (readonly, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, nonatomic) NSUInteger contentLength; // ivar: _contentLength
@property (readonly, nonatomic) NSDate *ifModifiedSince; // ivar: _ifModifiedSince
@property (readonly, nonatomic) NSString *ifNoneMatch; // ivar: _ifNoneMatch
@property (readonly, nonatomic) _NSRange byteRange; // ivar: _byteRange
@property (readonly, nonatomic) BOOL acceptsGzipContentEncoding; // ivar: _acceptsGzipContentEncoding
@property (readonly, nonatomic) NSString *localAddressString;
@property (readonly, nonatomic) NSString *remoteAddressString;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithMethod:(id)arg0 url:(id)arg1 headers:(id)arg2 path:(id)arg3 query:(id)arg4 ;
-(BOOL)hasBody;
-(BOOL)hasByteRange;
-(id)attributeForKey:(id)arg0 ;
-(BOOL)open:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)close:(*id)arg0 ;
-(void)prepareForWriting;
-(BOOL)performOpen:(*id)arg0 ;
-(BOOL)performWriteData:(id)arg0 error:(*id)arg1 ;
-(BOOL)performClose:(*id)arg0 ;
-(void)setAttribute:(id)arg0 forKey:(id)arg1 ;


@end


#endif