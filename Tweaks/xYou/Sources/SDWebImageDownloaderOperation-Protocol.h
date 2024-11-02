// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol SDWebImageDownloaderOperation

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) NSURLSessionTask *dataTask;
@property (readonly, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (retain, nonatomic) NSURLCredential *credential;
@property (nonatomic) CGFloat minimumProgressInterval;

-(id)initWithRequest:(id)arg0 inSession:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithRequest:(id)arg0 inSession:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 ;
-(id)addHandlersForProgress:(id)arg0 completed:(unk)arg1 ;
-(BOOL)cancel:(id)arg0 ;
-(id)request;
-(id)response;

@optional
-(id)dataTask;
-(id)metrics;
-(id)credential;
-(void)setCredential:(id)arg0 ;
-(CGFloat)minimumProgressInterval;
-(void)setMinimumProgressInterval:(CGFloat)arg0 ;
@end

