// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFURLSESSIONMANAGERTASKDELEGATE_H
#define AFURLSESSIONMANAGERTASKDELEGATE_H

@class NSURLSessionTaskMetrics;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "AFURLSessionManager.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@interface AFURLSessionManagerTaskDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>



@property (weak, nonatomic) AFURLSessionManager *manager; // ivar: _manager
@property (retain, nonatomic) NSMutableData *mutableData; // ivar: _mutableData
@property (retain, nonatomic) NSProgress *uploadProgress; // ivar: _uploadProgress
@property (retain, nonatomic) NSProgress *downloadProgress; // ivar: _downloadProgress
@property (copy, nonatomic) NSURL *downloadFileURL; // ivar: _downloadFileURL
@property (retain, nonatomic) NSURLSessionTaskMetrics *sessionTaskMetrics; // ivar: _sessionTaskMetrics
@property (copy, nonatomic) id *downloadTaskDidFinishDownloading; // ivar: _downloadTaskDidFinishDownloading
@property (copy, nonatomic) id *uploadProgressBlock; // ivar: _uploadProgressBlock
@property (copy, nonatomic) id *downloadProgressBlock; // ivar: _downloadProgressBlock
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithTask:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(NSInteger)arg2 expectedTotalBytes:(NSInteger)arg3 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;


@end


#endif