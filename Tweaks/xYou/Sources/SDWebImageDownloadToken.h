// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEDOWNLOADTOKEN_H
#define SDWEBIMAGEDOWNLOADTOKEN_H

@class NSURLResponse, NSURLSessionTaskMetrics, NSOperation<SDWebImageDownloaderOperation>;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDWebImageOperation-Protocol.h"

@interface SDWebImageDownloadToken : NSObject <SDWebImageOperation>



@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics; // ivar: _metrics
@property (weak, nonatomic) id *downloadOperationCancelToken; // ivar: _downloadOperationCancelToken
@property (weak, nonatomic) NSOperation<SDWebImageDownloaderOperation> *downloadOperation; // ivar: _downloadOperation
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)dealloc;
-(id)initWithDownloadOperation:(id)arg0 ;
-(void)downloadDidReceiveResponse:(id)arg0 ;
-(void)downloadDidStop:(id)arg0 ;
-(void)cancel;


@end


#endif