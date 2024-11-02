// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEDOWNLOADER_H
#define SDWEBIMAGEDOWNLOADER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDWebImageDownloaderConfig.h"
#import "SDImageLoader-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "SDWebImageDownloaderRequestModifier-Protocol.h"
#import "SDWebImageDownloaderResponseModifier-Protocol.h"
#import "SDWebImageDownloaderDecryptor-Protocol.h"

@interface SDWebImageDownloader : NSObject <SDImageLoader, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

 {
    os_unfair_lock_s _HTTPHeadersLock;
    os_unfair_lock_s _operationsLock;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSOperationQueue *downloadQueue; // ivar: _downloadQueue
@property (retain, nonatomic) NSMutableDictionary *URLOperations; // ivar: _URLOperations
@property (retain, nonatomic) NSMutableDictionary *HTTPHeaders; // ivar: _HTTPHeaders
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly, copy, nonatomic) SDWebImageDownloaderConfig *config; // ivar: _config
@property (retain, nonatomic) NSObject<SDWebImageDownloaderRequestModifier> *requestModifier; // ivar: _requestModifier
@property (retain, nonatomic) NSObject<SDWebImageDownloaderResponseModifier> *responseModifier; // ivar: _responseModifier
@property (retain, nonatomic) NSObject<SDWebImageDownloaderDecryptor> *decryptor; // ivar: _decryptor
@property (readonly, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) NSUInteger currentDownloadCount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)canRequestImageForURL:(id)arg0 ;
-(BOOL)canRequestImageForURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
// -(id)requestImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 progress:(id)arg3 completed:(unk)arg4  ;
-(BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 ;
-(BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 ;
-(id)init;
-(id)initWithConfig:(id)arg0 ;
-(void)dealloc;
-(void)invalidateSessionAndCancel:(BOOL)arg0 ;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;
-(id)valueForHTTPHeaderField:(id)arg0 ;
-(id)downloadImageWithURL:(id)arg0 completed:(id)arg1 ;
// -(id)downloadImageWithURL:(id)arg0 options:(NSUInteger)arg1 progress:(id)arg2 completed:(unk)arg3  ;
// -(id)downloadImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 progress:(id)arg3 completed:(unk)arg4  ;
-(id)createDownloaderOperationWithUrl:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
-(void)cancelAllDownloads;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(id)operationWithTask:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
+(void)initialize;
+(id)sharedDownloader;


@end


#endif