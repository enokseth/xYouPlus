// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFSTREAMINGMULTIPARTFORMDATA_H
#define AFSTREAMINGMULTIPARTFORMDATA_H


#import <Foundation/Foundation.h>

#import "AFMultipartBodyStream.h"
#import "AFMultipartFormData-Protocol.h"

@interface AFStreamingMultipartFormData : NSObject <AFMultipartFormData>



@property (copy, nonatomic) NSMutableURLRequest *request; // ivar: _request
@property (nonatomic) NSUInteger stringEncoding; // ivar: _stringEncoding
@property (copy, nonatomic) NSString *boundary; // ivar: _boundary
@property (retain, nonatomic) AFMultipartBodyStream *bodyStream; // ivar: _bodyStream


-(id)initWithURLRequest:(id)arg0 stringEncoding:(NSUInteger)arg1 ;
-(BOOL)appendPartWithFileURL:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(BOOL)appendPartWithFileURL:(id)arg0 name:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 error:(*id)arg4 ;
-(void)appendPartWithInputStream:(id)arg0 name:(id)arg1 fileName:(id)arg2 length:(NSInteger)arg3 mimeType:(id)arg4 ;
-(void)appendPartWithFileData:(id)arg0 name:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 ;
-(void)appendPartWithFormData:(id)arg0 name:(id)arg1 ;
-(void)appendPartWithHeaders:(id)arg0 body:(id)arg1 ;
-(void)throttleBandwidthWithPacketSize:(NSUInteger)arg0 delay:(CGFloat)arg1 ;


@end


#endif