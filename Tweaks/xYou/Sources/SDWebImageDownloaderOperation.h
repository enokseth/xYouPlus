// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEDOWNLOADEROPERATION_H
#define SDWEBIMAGEDOWNLOADEROPERATION_H

@class NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDWebImageDownloaderOperation-Protocol.h"
#import "SDWebImageDownloaderResponseModifier-Protocol.h"
#import "SDWebImageDownloaderDecryptor-Protocol.h"

@interface SDWebImageDownloaderOperation : NSOperation <SDWebImageDownloaderOperation>



@property (retain, nonatomic) NSMutableArray *callbackBlocks; // ivar: _callbackBlocks
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSDictionary *context; // ivar: _context
@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (retain, nonatomic) NSMutableData *imageData; // ivar: _imageData
@property (copy, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (nonatomic) NSUInteger expectedSize; // ivar: _expectedSize
@property (nonatomic) NSUInteger receivedSize; // ivar: _receivedSize
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (retain, nonatomic) NSError *responseError; // ivar: _responseError
@property (nonatomic) CGFloat previousProgress; // ivar: _previousProgress
@property (retain, nonatomic) NSObject<SDWebImageDownloaderResponseModifier> *responseModifier; // ivar: _responseModifier
@property (retain, nonatomic) NSObject<SDWebImageDownloaderDecryptor> *decryptor; // ivar: _decryptor
@property (weak, nonatomic) NSURLSession *unownedSession; // ivar: _unownedSession
@property (retain, nonatomic) NSURLSession *ownedSession; // ivar: _ownedSession
@property (retain, nonatomic) NSURLSessionTask *dataTask; // ivar: _dataTask
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) NSOperationQueue *coderQueue; // ivar: _coderQueue
@property (nonatomic) NSUInteger backgroundTaskId; // ivar: _backgroundTaskId
@property (readonly, nonatomic) NSURLRequest *request; // ivar: _request
@property (retain, nonatomic) NSURLCredential *credential; // ivar: _credential
@property (nonatomic) CGFloat minimumProgressInterval; // ivar: _minimumProgressInterval
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithRequest:(id)arg0 inSession:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithRequest:(id)arg0 inSession:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 ;
// -(id)addHandlersForProgress:(id)arg0 completed:(unk)arg1  ;
-(id)callbacksForKey:(id)arg0 ;
-(BOOL)cancel:(id)arg0 ;
-(void)start;
-(void)cancel;
-(void)cancelInternal;
-(void)done;
-(void)reset;
-(BOOL)isConcurrent;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(BOOL)shouldContinueWhenAppEntersBackground;
-(void)callCompletionBlocksWithError:(id)arg0 ;
-(void)callCompletionBlocksWithImage:(id)arg0 imageData:(id)arg1 error:(id)arg2 finished:(BOOL)arg3 ;
+(NSUInteger)imageOptionsFromDownloaderOptions:(NSUInteger)arg0 ;


@end


#endif