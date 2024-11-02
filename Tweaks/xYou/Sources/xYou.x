#import "xYou.dylib"

%hook ArchDetect
+(void)initialize { %log; %orig; }
+(id)getCpuArch { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)getArch { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(int)isLTSBuild { %log; int r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook AtomicLong
-(id)initWithInitialValue:(NSInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(NSInteger)incrementAndGet { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
%end
%hook FFmpegExecution
-(id)initWithExecutionId:(NSInteger)arg0 andArguments:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getStartTime { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(NSInteger)getExecutionId { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(id)getCommand { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook MediaInformation
-(id)init:(id)arg0 withStreams:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getFilename { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getFormat { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getLongFormat { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getDuration { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getSize { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getBitrate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getTags { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getStreams { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getStringProperty:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getNumberProperty:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getProperties:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getMediaProperties { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getAllProperties { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook MediaInformationParser
+(id)from:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)from:(id)arg0 with:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook MobileFFmpeg
+(int)executeWithId:(NSInteger)arg0 andArguments:(id)arg1  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(int)executeWithArguments:(id)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(int)executeWithArgumentsAsync:(id)arg0 withCallback:(id)arg1  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(int)executeWithArgumentsAsync:(id)arg0 withCallback:(id)arg1 andDispatchQueue:(id)arg2  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(int)execute:(id)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(int)executeAsync:(id)arg0 withCallback:(id)arg1  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(int)executeAsync:(id)arg0 withCallback:(id)arg1 andDispatchQueue:(id)arg2  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(int)execute:(id)arg0 delimiter:(id)arg1  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(void)cancel { %log; %orig; }
+(void)cancel:(NSInteger)arg0  { %log; %orig; }
+(id)parseArguments:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)argumentsToString:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)listExecutions { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook CallbackData
-(id)initWithId:(NSInteger)arg0 logLevel:(int)arg1 data:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithId:(NSInteger)arg0 videoFrameNumber:(int)arg1 fps:(float)arg2 quality:(float)arg3 size:(NSInteger)arg4 time:(int)arg5 bitrate:(CGFloat)arg6 speed:(CGFloat)arg7  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(int)getType { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(int)getLogLevel { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(id)getLogData { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(int)getStatisticsFrameNumber { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(float)getStatisticsFps { %log; float r = %orig; NSLog(@" = %f", r); return r; }
-(float)getStatisticsQuality { %log; float r = %orig; NSLog(@" = %f", r); return r; }
-(NSInteger)getStatisticsSize { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(int)getStatisticsTime { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(CGFloat)getStatisticsBitrate { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)getStatisticsSpeed { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
%end
%hook MobileFFmpegConfig
+(void)enableRedirection { %log; %orig; }
+(void)disableRedirection { %log; %orig; }
+(int)getLogLevel { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(void)setLogLevel:(int)arg0  { %log; %orig; }
+(id)logLevelToString:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)setLogDelegate:(id)arg0  { %log; %orig; }
+(void)setStatisticsDelegate:(id)arg0  { %log; %orig; }
+(id)getLastReceivedStatistics { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)resetStatistics { %log; %orig; }
+(void)setFontconfigConfigurationPath:(id)arg0  { %log; %orig; }
+(void)setFontDirectory:(id)arg0 with:(id)arg1  { %log; %orig; }
+(id)getBuildConf { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)getPackageName { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)getExternalLibraries { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)registerNewFFmpegPipe { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)closeFFmpegPipe:(id)arg0  { %log; %orig; }
+(id)getFFmpegVersion { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)getVersion { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)getBuildDate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(int)getLastReturnCode { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(id)getLastCommandOutput { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)ignoreSignal:(int)arg0  { %log; %orig; }
%end
%hook MobileFFprobe
+(id)getMediaInformation:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)getMediaInformationFromCommand:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)getMediaInformation:(id)arg0 timeout:(NSInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)getMediaInformationFromCommandArguments:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook Statistics
-(id)init { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)update:(id)arg0  { %log; %orig; }
-(int)getVideoFrameNumber { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(float)getVideoFps { %log; float r = %orig; NSLog(@" = %f", r); return r; }
-(float)getVideoQuality { %log; float r = %orig; NSLog(@" = %f", r); return r; }
-(NSInteger)getSize { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(int)getTime { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(CGFloat)getBitrate { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)getSpeed { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
%end
%hook StreamInformation
-(id)init:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getIndex { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getType { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getCodec { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getFullCodec { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getWidth { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getHeight { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getSampleRate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getSampleFormat { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getChannelLayout { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getSampleAspectRatio { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getDisplayAspectRatio { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getAverageFrameRate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getRealFrameRate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getTimeBase { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getCodecTimeBase { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AVFFrameReceiver
-(id)initWithContext:(struct ? *)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2  { %log; %orig; }
%end
%hook AVFAudioReceiver
%end
%hook AFHTTPSessionManager
- (void)setBaseURL:(NSURL *)baseURL { %log; %orig; }
- (NSURL *)baseURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRequestSerializer:(AFHTTPRequestSerializer<AFURLRequestSerialization> *)requestSerializer { %log; %orig; }
- (AFHTTPRequestSerializer<AFURLRequestSerialization> *)requestSerializer { %log; AFHTTPRequestSerializer<AFURLRequestSerialization> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setResponseSerializer:(AFHTTPResponseSerializer<AFURLResponseSerialization> *)responseSerializer { %log; %orig; }
- (AFHTTPResponseSerializer<AFURLResponseSerialization> *)responseSerializer { %log; AFHTTPResponseSerializer<AFURLResponseSerialization> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setSecurityPolicy:(AFSecurityPolicy *)securityPolicy { %log; %orig; }
- (AFSecurityPolicy *)securityPolicy { %log; AFSecurityPolicy * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithBaseURL:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithSessionConfiguration:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithBaseURL:(id)arg0 sessionConfiguration:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)description { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithCoder:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)encodeWithCoder:(id)arg0  { %log; %orig; }
-(id)copyWithZone:(struct _NSZone *)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)manager { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(BOOL)supportsSecureCoding { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook AFNetworkReachabilityManager
- (*__SCNetworkReachability)networkReachability { %log; *__SCNetworkReachability r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setNetworkReachabilityStatus:(NSInteger)networkReachabilityStatus { %log; %orig; }
- (NSInteger)networkReachabilityStatus { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setNetworkReachabilityStatusBlock:(id *)networkReachabilityStatusBlock { %log; %orig; }
- (id *)networkReachabilityStatusBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (BOOL)isReachable { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)isReachableViaWWAN { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)isReachableViaWiFi { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithReachability:(struct __SCNetworkReachability *)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)dealloc { %log; %orig; }
-(void)startMonitoring { %log; %orig; }
-(void)stopMonitoring { %log; %orig; }
-(id)localizedNetworkReachabilityStatusString { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setReachabilityStatusChangeBlock:(id)arg0  { %log; %orig; }
+(id)sharedManager { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)managerForDomain:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)managerForAddress:(*void)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFSecurityPolicy
- (void)setSSLPinningMode:(NSUInteger)SSLPinningMode { %log; %orig; }
- (NSUInteger)SSLPinningMode { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setPinnedPublicKeys:(NSSet *)pinnedPublicKeys { %log; %orig; }
- (NSSet *)pinnedPublicKeys { %log; NSSet * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPinnedCertificates:(NSSet *)pinnedCertificates { %log; %orig; }
- (NSSet *)pinnedCertificates { %log; NSSet * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAllowInvalidCertificates:(BOOL)allowInvalidCertificates { %log; %orig; }
- (BOOL)allowInvalidCertificates { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setValidatesDomainName:(BOOL)validatesDomainName { %log; %orig; }
- (BOOL)validatesDomainName { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)evaluateServerTrust:(struct __SecTrust *)arg0 forDomain:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)certificatesInBundle:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)defaultPolicy { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)policyWithPinningMode:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)policyWithPinningMode:(NSUInteger)arg0 withPinnedCertificates:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)keyPathsForValuesAffectingPinnedPublicKeys { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFQueryStringPair
- (void)setField:(id *)field { %log; %orig; }
- (id *)field { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setValue:(id *)value { %log; %orig; }
- (id *)value { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(id)initWithField:(id)arg0 value:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)URLEncodedStringValue { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFHTTPRequestSerializer
- (void)setMutableObservedChangedKeyPaths:(NSMutableSet *)mutableObservedChangedKeyPaths { %log; %orig; }
- (NSMutableSet *)mutableObservedChangedKeyPaths { %log; NSMutableSet * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMutableHTTPRequestHeaders:(NSMutableDictionary *)mutableHTTPRequestHeaders { %log; %orig; }
- (NSMutableDictionary *)mutableHTTPRequestHeaders { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRequestHeaderModificationQueue:(NSObject<OS_dispatch_queue> *)requestHeaderModificationQueue { %log; %orig; }
- (NSObject<OS_dispatch_queue> *)requestHeaderModificationQueue { %log; NSObject<OS_dispatch_queue> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setQueryStringSerializationStyle:(NSUInteger)queryStringSerializationStyle { %log; %orig; }
- (NSUInteger)queryStringSerializationStyle { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setQueryStringSerialization:(id *)queryStringSerialization { %log; %orig; }
- (id *)queryStringSerialization { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setStringEncoding:(NSUInteger)stringEncoding { %log; %orig; }
- (NSUInteger)stringEncoding { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setAllowsCellularAccess:(BOOL)allowsCellularAccess { %log; %orig; }
- (BOOL)allowsCellularAccess { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setCachePolicy:(NSUInteger)cachePolicy { %log; %orig; }
- (NSUInteger)cachePolicy { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setHTTPShouldHandleCookies:(BOOL)HTTPShouldHandleCookies { %log; %orig; }
- (BOOL)HTTPShouldHandleCookies { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setHTTPShouldUsePipelining:(BOOL)HTTPShouldUsePipelining { %log; %orig; }
- (BOOL)HTTPShouldUsePipelining { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setNetworkServiceType:(NSUInteger)networkServiceType { %log; %orig; }
- (NSUInteger)networkServiceType { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setTimeoutInterval:(CGFloat)timeoutInterval { %log; %orig; }
- (CGFloat)timeoutInterval { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (NSDictionary *)HTTPRequestHeaders { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHTTPMethodsEncodingParametersInURI:(NSSet *)HTTPMethodsEncodingParametersInURI { %log; %orig; }
- (NSSet *)HTTPMethodsEncodingParametersInURI { %log; NSSet * r = %orig; NSLog(@" = %@", r); return r; }
- (NSUInteger)hash { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (Class)superclass { %log; Class r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)debugDescription { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1  { %log; %orig; }
-(id)valueForHTTPHeaderField:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setAuthorizationHeaderFieldWithUsername:(id)arg0 password:(id)arg1  { %log; %orig; }
-(void)clearAuthorizationHeader { %log; %orig; }
-(id)requestWithMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2 error:(*id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)requestWithMultipartFormRequest:(id)arg0 writingStreamContentsToFile:(id)arg1 completionHandler:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)requestBySerializingRequest:(id)arg0 withParameters:(id)arg1 error:(*id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3  { %log; %orig; }
+(id)serializer { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook AFStreamingMultipartFormData
- (void)setRequest:(NSMutableURLRequest *)request { %log; %orig; }
- (NSMutableURLRequest *)request { %log; NSMutableURLRequest * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBoundary:(NSString *)boundary { %log; %orig; }
- (NSString *)boundary { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBodyStream:(AFMultipartBodyStream *)bodyStream { %log; %orig; }
- (AFMultipartBodyStream *)bodyStream { %log; AFMultipartBodyStream * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithURLRequest:(id)arg0 stringEncoding:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)appendPartWithFileURL:(id)arg0 name:(id)arg1 error:(*id)arg2  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)appendPartWithFileURL:(id)arg0 name:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 error:(*id)arg4  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)appendPartWithInputStream:(id)arg0 name:(id)arg1 fileName:(id)arg2 length:(NSInteger)arg3 mimeType:(id)arg4  { %log; %orig; }
-(void)appendPartWithFileData:(id)arg0 name:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3  { %log; %orig; }
-(void)appendPartWithFormData:(id)arg0 name:(id)arg1  { %log; %orig; }
-(void)appendPartWithHeaders:(id)arg0 body:(id)arg1  { %log; %orig; }
-(void)throttleBandwidthWithPacketSize:(NSUInteger)arg0 delay:(CGFloat)arg1  { %log; %orig; }
%end
%hook AFMultipartBodyStream
- (void)setHTTPBodyParts:(NSMutableArray *)HTTPBodyParts { %log; %orig; }
- (NSMutableArray *)HTTPBodyParts { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHTTPBodyPartEnumerator:(NSEnumerator *)HTTPBodyPartEnumerator { %log; %orig; }
- (NSEnumerator *)HTTPBodyPartEnumerator { %log; NSEnumerator * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCurrentHTTPBodyPart:(AFHTTPBodyPart *)currentHTTPBodyPart { %log; %orig; }
- (AFHTTPBodyPart *)currentHTTPBodyPart { %log; AFHTTPBodyPart * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setOutputStream:(NSOutputStream *)outputStream { %log; %orig; }
- (NSOutputStream *)outputStream { %log; NSOutputStream * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBuffer:(NSMutableData *)buffer { %log; %orig; }
- (NSMutableData *)buffer { %log; NSMutableData * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setNumberOfBytesInPacket:(NSUInteger)numberOfBytesInPacket { %log; %orig; }
- (NSUInteger)numberOfBytesInPacket { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setDelay:(CGFloat)delay { %log; %orig; }
- (CGFloat)delay { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setInputStream:(NSInputStream *)inputStream { %log; %orig; }
- (NSInputStream *)inputStream { %log; NSInputStream * r = %orig; NSLog(@" = %@", r); return r; }
- (NSUInteger)contentLength { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (BOOL)isEmpty { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithStringEncoding:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setInitialAndFinalBoundaries { %log; %orig; }
-(void)appendHTTPBodyPart:(id)arg0  { %log; %orig; }
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)hasBytesAvailable { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)open { %log; %orig; }
-(void)close { %log; %orig; }
-(id)propertyForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1  { %log; %orig; }
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1  { %log; %orig; }
-(void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1  { %log; %orig; }
-(void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1  { %log; %orig; }
-(?)_setCFClientFlags:(?)arg0 callbackcontext { %log; ? r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(id)delegate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setDelegate:(id)arg0  { %log; %orig; }
-(NSUInteger)streamStatus { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(void)setStreamStatus:(NSUInteger)arg0  { %log; %orig; }
-(id)streamError { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setStreamError:(id)arg0  { %log; %orig; }
%end
%hook AFHTTPBodyPart
- (void)setHeaders:(NSDictionary *)headers { %log; %orig; }
- (NSDictionary *)headers { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBody:(id *)body { %log; %orig; }
- (id *)body { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setBodyContentLength:(NSUInteger)bodyContentLength { %log; %orig; }
- (NSUInteger)bodyContentLength { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setHasInitialBoundary:(BOOL)hasInitialBoundary { %log; %orig; }
- (BOOL)hasInitialBoundary { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setHasFinalBoundary:(BOOL)hasFinalBoundary { %log; %orig; }
- (BOOL)hasFinalBoundary { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)stringForHeaders { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(NSInteger)readData:(id)arg0 intoBuffer:(char *)arg1 maxLength:(NSUInteger)arg2  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(BOOL)transitionToNextPhase { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook AFJSONRequestSerializer
- (void)setWritingOptions:(NSUInteger)writingOptions { %log; %orig; }
- (NSUInteger)writingOptions { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
+(id)serializerWithWritingOptions:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFPropertyListRequestSerializer
- (void)setFormat:(NSUInteger)format { %log; %orig; }
- (NSUInteger)format { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setWriteOptions:(NSUInteger)writeOptions { %log; %orig; }
- (NSUInteger)writeOptions { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
+(id)serializerWithFormat:(NSUInteger)arg0 writeOptions:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFHTTPResponseSerializer
- (void)setAcceptableStatusCodes:(NSIndexSet *)acceptableStatusCodes { %log; %orig; }
- (NSIndexSet *)acceptableStatusCodes { %log; NSIndexSet * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAcceptableContentTypes:(NSSet *)acceptableContentTypes { %log; %orig; }
- (NSSet *)acceptableContentTypes { %log; NSSet * r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)validateResponse:(id)arg0 data:(id)arg1 error:(*id)arg2  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(*id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFJSONResponseSerializer
- (void)setReadingOptions:(NSUInteger)readingOptions { %log; %orig; }
- (NSUInteger)readingOptions { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setRemovesKeysWithNullValues:(BOOL)removesKeysWithNullValues { %log; %orig; }
- (BOOL)removesKeysWithNullValues { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)serializerWithReadingOptions:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFXMLParserResponseSerializer
%end
%hook AFPropertyListResponseSerializer
- (void)setReadOptions:(NSUInteger)readOptions { %log; %orig; }
- (NSUInteger)readOptions { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
+(id)serializerWithFormat:(NSUInteger)arg0 readOptions:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFImageResponseSerializer
- (void)setImageScale:(CGFloat)imageScale { %log; %orig; }
- (CGFloat)imageScale { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setAutomaticallyInflatesResponseImage:(BOOL)automaticallyInflatesResponseImage { %log; %orig; }
- (BOOL)automaticallyInflatesResponseImage { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook AFCompoundResponseSerializer
- (void)setResponseSerializers:(NSArray *)responseSerializers { %log; %orig; }
- (NSArray *)responseSerializers { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
+(id)compoundSerializerWithResponseSerializers:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AFURLSessionManagerTaskDelegate
- (void)setManager:(AFURLSessionManager *)manager { %log; %orig; }
- (AFURLSessionManager *)manager { %log; AFURLSessionManager * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMutableData:(NSMutableData *)mutableData { %log; %orig; }
- (NSMutableData *)mutableData { %log; NSMutableData * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setUploadProgress:(NSProgress *)uploadProgress { %log; %orig; }
- (NSProgress *)uploadProgress { %log; NSProgress * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDownloadProgress:(NSProgress *)downloadProgress { %log; %orig; }
- (NSProgress *)downloadProgress { %log; NSProgress * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDownloadFileURL:(NSURL *)downloadFileURL { %log; %orig; }
- (NSURL *)downloadFileURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSessionTaskMetrics:(NSURLSessionTaskMetrics *)sessionTaskMetrics { %log; %orig; }
- (NSURLSessionTaskMetrics *)sessionTaskMetrics { %log; NSURLSessionTaskMetrics * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDownloadTaskDidFinishDownloading:(id *)downloadTaskDidFinishDownloading { %log; %orig; }
- (id *)downloadTaskDidFinishDownloading { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setUploadProgressBlock:(id *)uploadProgressBlock { %log; %orig; }
- (id *)uploadProgressBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDownloadProgressBlock:(id *)downloadProgressBlock { %log; %orig; }
- (id *)downloadProgressBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setCompletionHandler:(id *)completionHandler { %log; %orig; }
- (id *)completionHandler { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(id)initWithTask:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2  { %log; %orig; }
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2  { %log; %orig; }
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2  { %log; %orig; }
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4  { %log; %orig; }
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4  { %log; %orig; }
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(NSInteger)arg2 expectedTotalBytes:(NSInteger)arg3  { %log; %orig; }
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2  { %log; %orig; }
%end
%hook _AFURLSessionTaskSwizzling
-(NSInteger)state { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)af_resume { %log; %orig; }
-(void)af_suspend { %log; %orig; }
+(void)load { %log; %orig; }
+(void)swizzleResumeAndSuspendMethodForClass:(Class)arg0  { %log; %orig; }
%end
%hook AFURLSessionManager
- (void)setSessionConfiguration:(NSURLSessionConfiguration *)sessionConfiguration { %log; %orig; }
- (NSURLSessionConfiguration *)sessionConfiguration { %log; NSURLSessionConfiguration * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setOperationQueue:(NSOperationQueue *)operationQueue { %log; %orig; }
- (NSOperationQueue *)operationQueue { %log; NSOperationQueue * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSession:(NSURLSession *)session { %log; %orig; }
- (NSURLSession *)session { %log; NSURLSession * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMutableTaskDelegatesKeyedByTaskIdentifier:(NSMutableDictionary *)mutableTaskDelegatesKeyedByTaskIdentifier { %log; %orig; }
- (NSMutableDictionary *)mutableTaskDelegatesKeyedByTaskIdentifier { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)taskDescriptionForSessionTasks { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLock:(NSLock *)lock { %log; %orig; }
- (NSLock *)lock { %log; NSLock * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSessionDidBecomeInvalid:(id *)sessionDidBecomeInvalid { %log; %orig; }
- (id *)sessionDidBecomeInvalid { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setSessionDidReceiveAuthenticationChallenge:(id *)sessionDidReceiveAuthenticationChallenge { %log; %orig; }
- (id *)sessionDidReceiveAuthenticationChallenge { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDidFinishEventsForBackgroundURLSession:(id *)didFinishEventsForBackgroundURLSession { %log; %orig; }
- (id *)didFinishEventsForBackgroundURLSession { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setTaskWillPerformHTTPRedirection:(id *)taskWillPerformHTTPRedirection { %log; %orig; }
- (id *)taskWillPerformHTTPRedirection { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setAuthenticationChallengeHandler:(id *)authenticationChallengeHandler { %log; %orig; }
- (id *)authenticationChallengeHandler { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setTaskNeedNewBodyStream:(id *)taskNeedNewBodyStream { %log; %orig; }
- (id *)taskNeedNewBodyStream { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setTaskDidSendBodyData:(id *)taskDidSendBodyData { %log; %orig; }
- (id *)taskDidSendBodyData { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setTaskDidComplete:(id *)taskDidComplete { %log; %orig; }
- (id *)taskDidComplete { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setTaskDidFinishCollectingMetrics:(id *)taskDidFinishCollectingMetrics { %log; %orig; }
- (id *)taskDidFinishCollectingMetrics { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDataTaskDidReceiveResponse:(id *)dataTaskDidReceiveResponse { %log; %orig; }
- (id *)dataTaskDidReceiveResponse { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDataTaskDidBecomeDownloadTask:(id *)dataTaskDidBecomeDownloadTask { %log; %orig; }
- (id *)dataTaskDidBecomeDownloadTask { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDataTaskDidReceiveData:(id *)dataTaskDidReceiveData { %log; %orig; }
- (id *)dataTaskDidReceiveData { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDataTaskWillCacheResponse:(id *)dataTaskWillCacheResponse { %log; %orig; }
- (id *)dataTaskWillCacheResponse { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDownloadTaskDidWriteData:(id *)downloadTaskDidWriteData { %log; %orig; }
- (id *)downloadTaskDidWriteData { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDownloadTaskDidResume:(id *)downloadTaskDidResume { %log; %orig; }
- (id *)downloadTaskDidResume { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setResponseSerializer:(NSObject<AFURLResponseSerialization> *)responseSerializer { %log; %orig; }
- (NSObject<AFURLResponseSerialization> *)responseSerializer { %log; NSObject<AFURLResponseSerialization> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setReachabilityManager:(AFNetworkReachabilityManager *)reachabilityManager { %log; %orig; }
- (AFNetworkReachabilityManager *)reachabilityManager { %log; AFNetworkReachabilityManager * r = %orig; NSLog(@" = %@", r); return r; }
- (NSArray *)tasks { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (NSArray *)dataTasks { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (NSArray *)uploadTasks { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (NSArray *)downloadTasks { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)completionQueue { %log; %orig; }
- (NSObject<OS_dispatch_queue> *)completionQueue { %log; NSObject<OS_dispatch_queue> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setCompletionGroup:(NSObject<OS_dispatch_group> *)completionGroup { %log; %orig; }
- (NSObject<OS_dispatch_group> *)completionGroup { %log; NSObject<OS_dispatch_group> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(void)taskDidResume:(id)arg0  { %log; %orig; }
-(void)taskDidSuspend:(id)arg0  { %log; %orig; }
-(id)delegateForTask:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setDelegate:(id)arg0 forTask:(id)arg1  { %log; %orig; }
-(void)removeDelegateForTask:(id)arg0  { %log; %orig; }
-(id)tasksForKeyPath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)addNotificationObserverForTask:(id)arg0  { %log; %orig; }
-(void)removeNotificationObserverForTask:(id)arg0  { %log; %orig; }
-(id)uploadProgressForTask:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)downloadProgressForTask:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)respondsToSelector:(SEL)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1  { %log; %orig; }
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2  { %log; %orig; }
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4  { %log; %orig; }
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3  { %log; %orig; }
-(id)serverTrustErrorForServerTrust:(struct __SecTrust *)arg0 url:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2  { %log; %orig; }
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3  { %log; %orig; }
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2  { %log; %orig; }
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3  { %log; %orig; }
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0  { %log; %orig; }
%end
%hook GCDWebServerHandler
- (id *)matchBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (id *)asyncProcessBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
%end
%hook GCDWebServer
- (NSURL *)serverURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (NSURL *)bonjourServerURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (NSURL *)publicServerURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (NSMutableArray *)handlers { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)serverName { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)authenticationRealm { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSMutableDictionary *)authenticationBasicAccounts { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (NSMutableDictionary *)authenticationDigestAccounts { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)shouldAutomaticallyMapHEADToGET { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSInteger)dispatchQueuePriority { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setDelegate:(NSObject<GCDWebServerDelegate> *)delegate { %log; %orig; }
- (NSObject<GCDWebServerDelegate> *)delegate { %log; NSObject<GCDWebServerDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (BOOL)isRunning { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSUInteger)port { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (NSString *)bonjourName { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)bonjourType { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(void)logVerbose:(id)arg0  { %log; %orig; }
-(void)logInfo:(id)arg0  { %log; %orig; }
-(void)logWarning:(id)arg0  { %log; %orig; }
-(void)logError:(id)arg0  { %log; %orig; }
-(void)addGETHandlerForPath:(id)arg0 staticData:(id)arg1 contentType:(id)arg2 cacheAge:(NSUInteger)arg3  { %log; %orig; }
-(void)addGETHandlerForPath:(id)arg0 filePath:(id)arg1 isAttachment:(BOOL)arg2 cacheAge:(NSUInteger)arg3 allowRangeRequests:(BOOL)arg4  { %log; %orig; }
-(id)_responseWithContentsOfDirectory:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)addGETHandlerForBasePath:(id)arg0 directoryPath:(id)arg1 indexFilename:(id)arg2 cacheAge:(NSUInteger)arg3 allowRangeRequests:(BOOL)arg4  { %log; %orig; }
-(void)addDefaultHandlerForMethod:(id)arg0 requestClass:(Class)arg1 processBlock:(id)arg2  { %log; %orig; }
-(void)addDefaultHandlerForMethod:(id)arg0 requestClass:(Class)arg1 asyncProcessBlock:(id)arg2  { %log; %orig; }
-(void)addHandlerForMethod:(id)arg0 path:(id)arg1 requestClass:(Class)arg2 processBlock:(id)arg3  { %log; %orig; }
-(void)addHandlerForMethod:(id)arg0 path:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(id)arg3  { %log; %orig; }
-(void)addHandlerForMethod:(id)arg0 pathRegex:(id)arg1 requestClass:(Class)arg2 processBlock:(id)arg3  { %log; %orig; }
-(void)addHandlerForMethod:(id)arg0 pathRegex:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(id)arg3  { %log; %orig; }
-(BOOL)start { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)startWithPort:(NSUInteger)arg0 bonjourName:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_startBackgroundTask { %log; %orig; }
-(void)_didConnect { %log; %orig; }
-(void)willStartConnection:(id)arg0  { %log; %orig; }
-(void)_endBackgroundTask { %log; %orig; }
-(void)_didDisconnect { %log; %orig; }
-(void)didEndConnection:(id)arg0  { %log; %orig; }
-(void)removeAllHandlers { %log; %orig; }
-(int)_createListeningSocket:(BOOL)arg0 localAddress:(*void)arg1 length:(unsigned int)arg2 maxPendingConnections:(NSUInteger)arg3 error:(*id)arg4  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(id)_createDispatchSourceWithListeningSocket:(int)arg0 isIPv6:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)_start:(*id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_stop { %log; %orig; }
-(void)_didEnterBackground:(id)arg0  { %log; %orig; }
-(void)_willEnterForeground:(id)arg0  { %log; %orig; }
-(BOOL)startWithOptions:(id)arg0 error:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)stop { %log; %orig; }
+(void)setBuiltInLogger:(id)arg0  { %log; %orig; }
%end
%hook GCDWebServerConnection
- (GCDWebServer *)server { %log; GCDWebServer * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)isUsingIPv6 { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSData *)localAddressData { %log; NSData * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)localAddressString { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSData *)remoteAddressData { %log; NSData * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)remoteAddressString { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSUInteger)totalBytesRead { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (NSUInteger)totalBytesWritten { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(BOOL)open { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)didReadBytes:(*void)arg0 length:(NSUInteger)arg1  { %log; %orig; }
-(void)didWriteBytes:(*void)arg0 length:(NSUInteger)arg1  { %log; %orig; }
-(id)rewriteRequestURL:(id)arg0 withMethod:(id)arg1 headers:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)preflightRequest:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)processRequest:(id)arg0 completion:(id)arg1  { %log; %orig; }
-(id)overrideResponse:(id)arg0 forRequest:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)abortRequest:(id)arg0 withStatusCode:(NSInteger)arg1  { %log; %orig; }
-(void)writeData:(id)arg0 withCompletionBlock:(id)arg1  { %log; %orig; }
-(void)writeHeadersWithCompletionBlock:(id)arg0  { %log; %orig; }
-(void)writeBodyWithCompletionBlock:(id)arg0  { %log; %orig; }
-(void)readData:(id)arg0 withLength:(NSUInteger)arg1 completionBlock:(id)arg2  { %log; %orig; }
-(void)readHeaders:(id)arg0 withCompletionBlock:(id)arg1  { %log; %orig; }
-(void)readBodyWithRemainingLength:(NSUInteger)arg0 completionBlock:(id)arg1  { %log; %orig; }
-(void)readNextBodyChunk:(id)arg0 completionBlock:(id)arg1  { %log; %orig; }
-(void)_initializeResponseHeadersWithStatusCode:(NSInteger)arg0  { %log; %orig; }
-(void)_startProcessingRequest { %log; %orig; }
-(void)_finishProcessingRequest:(id)arg0  { %log; %orig; }
-(void)_readBodyWithLength:(NSUInteger)arg0 initialData:(id)arg1  { %log; %orig; }
-(void)_readChunkedBodyWithInitialData:(id)arg0  { %log; %orig; }
-(void)_readRequestHeaders { %log; %orig; }
-(id)initWithServer:(id)arg0 localAddress:(id)arg1 remoteAddress:(id)arg2 socket:(int)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerDataRequest
- (NSString *)text { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (id *)jsonObject { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setData:(NSMutableData *)data { %log; %orig; }
- (NSMutableData *)data { %log; NSMutableData * r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)open:(*id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)writeData:(id)arg0 error:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)close:(*id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook GCDWebServerDataResponse
- (void)setContentType:(NSString *)contentType { %log; %orig; }
- (NSString *)contentType { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithText:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithHTML:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithHTMLTemplate:(id)arg0 variables:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithJSONObject:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithJSONObject:(id)arg0 contentType:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithData:(id)arg0 contentType:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)readData:(*id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithText:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithHTML:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithHTMLTemplate:(id)arg0 variables:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithJSONObject:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithJSONObject:(id)arg0 contentType:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithData:(id)arg0 contentType:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerErrorResponse
-(id)initWithStatusCode:(NSInteger)arg0 underlyingError:(id)arg1 messageFormat:(id)arg2 arguments:(char *)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithClientError:(NSInteger)arg0 message:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithServerError:(NSInteger)arg0 message:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithClientError:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithServerError:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithClientError:(NSInteger)arg0 message:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithServerError:(NSInteger)arg0 message:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithClientError:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithServerError:(NSInteger)arg0 underlyingError:(id)arg1 message:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerFileRequest
- (NSString *)temporaryPath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithMethod:(id)arg0 url:(id)arg1 headers:(id)arg2 path:(id)arg3 query:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerFileResponse
- (void)setLastModifiedDate:(NSDate *)lastModifiedDate { %log; %orig; }
- (NSDate *)lastModifiedDate { %log; NSDate * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setETag:(NSString *)eTag { %log; %orig; }
- (NSString *)eTag { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithFile:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithFile:(id)arg0 isAttachment:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithFile:(id)arg0 byteRange:(struct _NSRange )arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithFile:(id)arg0 byteRange:(struct _NSRange )arg1 isAttachment:(BOOL)arg2 mimeTypeOverrides:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithFile:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithFile:(id)arg0 isAttachment:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithFile:(id)arg0 byteRange:(struct _NSRange )arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithFile:(id)arg0 byteRange:(struct _NSRange )arg1 isAttachment:(BOOL)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerMultiPart
- (NSString *)controlName { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)mimeType { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithControlName:(id)arg0 contentType:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerMultiPartArgument
- (NSData *)data { %log; NSData * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)string { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithControlName:(id)arg0 contentType:(id)arg1 data:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerMultiPartFile
- (NSString *)fileName { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithControlName:(id)arg0 contentType:(id)arg1 fileName:(id)arg2 temporaryPath:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerMIMEStreamParser
-(id)initWithBoundary:(id)arg0 defaultControlName:(id)arg1 arguments:(id)arg2 files:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)_parseData { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)appendBytes:(*void)arg0 length:(NSUInteger)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)isAtEnd { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook GCDWebServerMultiPartFormRequest
- (void)setArguments:(NSMutableArray *)arguments { %log; %orig; }
- (NSMutableArray *)arguments { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFiles:(NSMutableArray *)files { %log; %orig; }
- (NSMutableArray *)files { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
-(id)firstArgumentForControlName:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)firstFileForControlName:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)mimeType { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerBodyDecoder
-(id)initWithRequest:(id)arg0 writer:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerGZipDecoder
%end
%hook GCDWebServerRequest
- (BOOL)usesChunkedTransferEncoding { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setLocalAddressData:(NSData *)localAddressData { %log; %orig; }
- (void)setRemoteAddressData:(NSData *)remoteAddressData { %log; %orig; }
- (NSString *)method { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSURL *)URL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)path { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSDictionary *)query { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (NSDate *)ifModifiedSince { %log; NSDate * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)ifNoneMatch { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (_NSRange)byteRange { %log; _NSRange r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (BOOL)acceptsGzipContentEncoding { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)hasBody { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)hasByteRange { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)attributeForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)prepareForWriting { %log; %orig; }
-(BOOL)performOpen:(*id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)performWriteData:(id)arg0 error:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)performClose:(*id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setAttribute:(id)arg0 forKey:(id)arg1  { %log; %orig; }
%end
%hook GCDWebServerBodyEncoder
-(id)initWithResponse:(id)arg0 reader:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerGZipEncoder
%end
%hook GCDWebServerResponse
- (NSDictionary *)additionalHeaders { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setContentLength:(NSUInteger)contentLength { %log; %orig; }
- (void)setStatusCode:(NSInteger)statusCode { %log; %orig; }
- (NSInteger)statusCode { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setCacheControlMaxAge:(NSUInteger)cacheControlMaxAge { %log; %orig; }
- (NSUInteger)cacheControlMaxAge { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setGzipContentEncodingEnabled:(BOOL)gzipContentEncodingEnabled { %log; %orig; }
- (BOOL)isGZipContentEncodingEnabled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithStatusCode:(NSInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithRedirect:(id)arg0 permanent:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setValue:(id)arg0 forAdditionalHeader:(id)arg1  { %log; %orig; }
-(void)prepareForReading { %log; %orig; }
-(void)performReadDataWithCompletion:(id)arg0  { %log; %orig; }
-(void)performClose { %log; %orig; }
+(id)responseWithStatusCode:(NSInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithRedirect:(id)arg0 permanent:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)response { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerStreamedResponse
-(id)initWithContentType:(id)arg0 streamBlock:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithContentType:(id)arg0 asyncStreamBlock:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)asyncReadDataWithCompletion:(id)arg0  { %log; %orig; }
+(id)responseWithContentType:(id)arg0 streamBlock:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseWithContentType:(id)arg0 asyncStreamBlock:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook GCDWebServerURLEncodedFormRequest
- (NSDictionary *)arguments { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook JGProgressHUD
- (UIVisualEffectView *)blurView { %log; UIVisualEffectView * r = %orig; NSLog(@" = %@", r); return r; }
- (UIVisualEffectView *)vibrancyView { %log; UIVisualEffectView * r = %orig; NSLog(@" = %@", r); return r; }
- (JGProgressHUDIndicatorView *)effectiveIndicatorView { %log; JGProgressHUDIndicatorView * r = %orig; NSLog(@" = %@", r); return r; }
- (NSUInteger)style { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (UIView *)targetView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDelegate:(NSObject<JGProgressHUDDelegate> *)delegate { %log; %orig; }
- (NSObject<JGProgressHUDDelegate> *)delegate { %log; NSObject<JGProgressHUDDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (UIView *)HUDView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (UIView *)contentView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (UILabel *)textLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (UILabel *)detailTextLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIndicatorView:(JGProgressHUDIndicatorView *)indicatorView { %log; %orig; }
- (JGProgressHUDIndicatorView *)indicatorView { %log; JGProgressHUDIndicatorView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setShadow:(JGProgressHUDShadow *)shadow { %log; %orig; }
- (JGProgressHUDShadow *)shadow { %log; JGProgressHUDShadow * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPosition:(NSUInteger)position { %log; %orig; }
- (NSUInteger)position { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setAnimation:(JGProgressHUDAnimation *)animation { %log; %orig; }
- (JGProgressHUDAnimation *)animation { %log; JGProgressHUDAnimation * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setInteractionType:(NSUInteger)interactionType { %log; %orig; }
- (NSUInteger)interactionType { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setParallaxMode:(NSUInteger)parallaxMode { %log; %orig; }
- (NSUInteger)parallaxMode { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setSquare:(BOOL)square { %log; %orig; }
- (BOOL)square { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setVibrancyEnabled:(BOOL)vibrancyEnabled { %log; %orig; }
- (BOOL)vibrancyEnabled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setCornerRadius:(CGFloat)cornerRadius { %log; %orig; }
- (CGFloat)cornerRadius { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setContentInsets:(UIEdgeInsets)contentInsets { %log; %orig; }
- (UIEdgeInsets)contentInsets { %log; UIEdgeInsets r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setMarginInsets:(UIEdgeInsets)marginInsets { %log; %orig; }
- (UIEdgeInsets)marginInsets { %log; UIEdgeInsets r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setLayoutChangeAnimationDuration:(CGFloat)layoutChangeAnimationDuration { %log; %orig; }
- (CGFloat)layoutChangeAnimationDuration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (BOOL)isVisible { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setProgress:(float)progress { %log; %orig; }
- (float)progress { %log; float r = %orig; NSLog(@" = %f", r); return r; }
- (void)setMinimumDisplayTime:(CGFloat)minimumDisplayTime { %log; %orig; }
- (CGFloat)minimumDisplayTime { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setVoiceOverEnabled:(BOOL)voiceOverEnabled { %log; %orig; }
- (BOOL)voiceOverEnabled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setTapOnHUDViewBlock:(id *)tapOnHUDViewBlock { %log; %orig; }
- (id *)tapOnHUDViewBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setTapOutsideBlock:(id *)tapOutsideBlock { %log; %orig; }
- (id *)tapOutsideBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(void)showInRect:(struct CGRect )arg0 inView:(id)arg1  { %log; %orig; }
-(void)showInRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2  { %log; %orig; }
-(id)initWithFrame:(struct CGRect )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithStyle:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateShadowViewMask { %log; %orig; }
-(void)layoutHUD { %log; %orig; }
-(struct CGRect )insetFrameForView:(id)arg0  { %log; struct CGRect  r = %orig; return r; }
-(void)applyCornerRadius { %log; %orig; }
-(void)cleanUpAfterPresentation { %log; %orig; }
-(void)showInView:(id)arg0  { %log; %orig; }
-(void)layoutSubviews { %log; %orig; }
-(void)showInView:(id)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(void)cleanUpAfterDismissal { %log; %orig; }
-(void)dismiss { %log; %orig; }
-(void)dismissAnimated:(BOOL)arg0  { %log; %orig; }
-(void)dismissAfterDelay:(CGFloat)arg0  { %log; %orig; }
-(void)dismissAfterDelay:(CGFloat)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(void)tapped:(id)arg0  { %log; %orig; }
-(void)keyboardFrameChanged:(id)arg0  { %log; %orig; }
-(void)animationDidFinish:(BOOL)arg0  { %log; %orig; }
-(void)layoutMarginsDidChange { %log; %orig; }
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)removeObservers { %log; %orig; }
+(id)allProgressHUDsInView:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)_allProgressHUDsInViewHierarchy:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)allProgressHUDsInViewHierarchy:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)keyboardFrameWillChange:(id)arg0  { %log; %orig; }
+(void)keyboardFrameDidChange:(id)arg0  { %log; %orig; }
+(void)keyboardDidHide { %log; %orig; }
+(struct CGRect )currentKeyboardFrame { %log; struct CGRect  r = %orig; return r; }
+(id)progressHUDWithStyle:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook JGProgressHUDAnimation
- (void)setProgressHUD:(JGProgressHUD *)progressHUD { %log; %orig; }
- (JGProgressHUD *)progressHUD { %log; JGProgressHUD * r = %orig; NSLog(@" = %@", r); return r; }
-(void)show { %log; %orig; }
-(void)hide { %log; %orig; }
-(void)animationFinished { %log; %orig; }
+(id)animation { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook JGProgressHUDErrorIndicatorView
-(id)initWithContentView:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateAccessibility { %log; %orig; }
%end
%hook JGProgressHUDFadeAnimation
- (void)setDuration:(CGFloat)duration { %log; %orig; }
- (CGFloat)duration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setAnimationOptions:(NSUInteger)animationOptions { %log; %orig; }
- (NSUInteger)animationOptions { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
%end
%hook JGProgressHUDFadeZoomAnimation
- (void)setShrinkAnimationDuaration:(CGFloat)shrinkAnimationDuaration { %log; %orig; }
- (CGFloat)shrinkAnimationDuaration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setExpandAnimationDuaration:(CGFloat)expandAnimationDuaration { %log; %orig; }
- (CGFloat)expandAnimationDuaration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setExpandScale:(CGSize)expandScale { %log; %orig; }
- (CGSize)expandScale { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
%end
%hook JGProgressHUDImageIndicatorView
-(id)initWithImage:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setUpForHUDStyle:(NSUInteger)arg0 vibrancyEnabled:(BOOL)arg1  { %log; %orig; }
-(void)setTintColor:(id)arg0  { %log; %orig; }
%end
%hook JGProgressHUDIndeterminateIndicatorView
-(id)initWithHUDStyle:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setColor:(id)arg0  { %log; %orig; }
%end
%hook JGProgressHUDIndicatorView
-(void)setNeedsAccessibilityUpdate { %log; %orig; }
-(void)updateAccessibilityIfNeeded { %log; %orig; }
+(void)runBlock:(id)arg0  { %log; %orig; }
%end
%hook JGProgressHUDLottieDownloadingView
- (void)setAnimation:(LOTAnimationView *)animation { %log; %orig; }
- (LOTAnimationView *)animation { %log; LOTAnimationView * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook JGProgressHUDLottieErrorView
%end
%hook JGProgressHUDLottieLoadingView
%end
%hook JGProgressHUDLottieSuccessView
%end
%hook JGProgressHUDPieIndicatorLayer
- (void)setColor:(UIColor *)color { %log; %orig; }
- (UIColor *)color { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFillColor:(UIColor *)fillColor { %log; %orig; }
- (UIColor *)fillColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
-(id)actionForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)drawInContext:(struct CGContext *)arg0  { %log; %orig; }
+(BOOL)needsDisplayForKey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook JGProgressHUDPieIndicatorView
-(void)setProgress:(float)arg0 animated:(BOOL)arg1  { %log; %orig; }
+(Class)layerClass { %log; Class r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook JGProgressHUDRingIndicatorLayer
- (void)setRingColor:(UIColor *)ringColor { %log; %orig; }
- (UIColor *)ringColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRingBackgroundColor:(UIColor *)ringBackgroundColor { %log; %orig; }
- (UIColor *)ringBackgroundColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRoundProgressLine:(BOOL)roundProgressLine { %log; %orig; }
- (BOOL)roundProgressLine { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setRingWidth:(CGFloat)ringWidth { %log; %orig; }
- (CGFloat)ringWidth { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
%end
%hook JGProgressHUDRingIndicatorView
%end
%hook JGProgressHUDShadow
- (CGSize)offset { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
- (CGFloat)radius { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (float)opacity { %log; float r = %orig; NSLog(@" = %f", r); return r; }
-(id)initWithColor:(id)arg0 offset:(struct CGSize )arg1 radius:(CGFloat)arg2 opacity:(float)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)shadowWithColor:(id)arg0 offset:(struct CGSize )arg1 radius:(CGFloat)arg2 opacity:(float)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook JGProgressHUDSuccessIndicatorView
%end
%hook __LNChevronView
- (void)setState:(NSInteger)state { %log; %orig; }
- (void)setWidth:(CGFloat)width { %log; %orig; }
- (CGFloat)width { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setAnimationDuration:(CGFloat)animationDuration { %log; %orig; }
- (CGFloat)animationDuration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(void)_commonInit { %log; %orig; }
-(void)setChevronState:(NSInteger)arg0  { %log; %orig; }
-(void)tintColorDidChange { %log; %orig; }
%end
%hook LNForwardingDelegate
- (void)setForwardedDelegate:(id *)forwardedDelegate { %log; %orig; }
- (id *)forwardedDelegate { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(void)forwardInvocation:(id)arg0  { %log; %orig; }
-(id)methodSignatureForSelector:(SEL)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook _LNPopupBarContentView
%end
%hook _LNPopupBarTitlesView
%end
%hook _LNPopupBarShadowView
%end
%hook _LNPopupToolbar
-(void)_deepSetSemanticContentAttribute:(NSInteger)arg0 toView:(id)arg1 startingFromView:(id)arg2  { %log; %orig; }
-(void)setSemanticContentAttribute:(NSInteger)arg0  { %log; %orig; }
%end
%hook __FakeMarqueeLabel
- (void)setRate:(CGFloat)rate { %log; %orig; }
- (CGFloat)rate { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setAnimationDelay:(CGFloat)animationDelay { %log; %orig; }
- (CGFloat)animationDelay { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setSynchronizedLabel:(__MarqueeLabel *)synchronizedLabel { %log; %orig; }
- (__MarqueeLabel *)synchronizedLabel { %log; __MarqueeLabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHoldScrolling:(BOOL)holdScrolling { %log; %orig; }
- (BOOL)holdScrolling { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)resetLabel { %log; %orig; }
-(void)unpauseLabel { %log; %orig; }
-(void)pauseLabel { %log; %orig; }
-(void)restartLabel { %log; %orig; }
-(void)shutdownLabel { %log; %orig; }
-(BOOL)isPaused { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook LNPopupBar
- (void)setInheritsVisualStyleFromDockingView:(BOOL)inheritsVisualStyleFromDockingView { %log; %orig; }
- (BOOL)inheritsVisualStyleFromDockingView { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setBackgroundStyle:(NSInteger)backgroundStyle { %log; %orig; }
- (NSInteger)backgroundStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setBarTintColor:(UIColor *)barTintColor { %log; %orig; }
- (UIColor *)barTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTranslucent:(BOOL)translucent { %log; %orig; }
- (BOOL)isTranslucent { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setTitleTextAttributes:(NSDictionary *)titleTextAttributes { %log; %orig; }
- (NSDictionary *)titleTextAttributes { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSubtitleTextAttributes:(NSDictionary *)subtitleTextAttributes { %log; %orig; }
- (NSDictionary *)subtitleTextAttributes { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMarqueeScrollEnabled:(BOOL)marqueeScrollEnabled { %log; %orig; }
- (BOOL)marqueeScrollEnabled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setMarqueeScrollRate:(CGFloat)marqueeScrollRate { %log; %orig; }
- (CGFloat)marqueeScrollRate { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setMarqueeScrollDelay:(CGFloat)marqueeScrollDelay { %log; %orig; }
- (CGFloat)marqueeScrollDelay { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setCoordinateMarqueeScroll:(BOOL)coordinateMarqueeScroll { %log; %orig; }
- (BOOL)coordinateMarqueeScroll { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setPreviewingDelegate:(NSObject<LNPopupBarPreviewingDelegate> *)previewingDelegate { %log; %orig; }
- (NSObject<LNPopupBarPreviewingDelegate> *)previewingDelegate { %log; NSObject<LNPopupBarPreviewingDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (NSArray *)leftBarButtonItems { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (NSArray *)rightBarButtonItems { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSystemTintColor:(UIColor *)systemTintColor { %log; %orig; }
- (UIColor *)systemTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSystemBackgroundColor:(UIColor *)systemBackgroundColor { %log; %orig; }
- (UIColor *)systemBackgroundColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSystemAppearance:(UIBarAppearance *)systemAppearance { %log; %orig; }
- (UIBarAppearance *)systemAppearance { %log; UIBarAppearance * r = %orig; NSLog(@" = %@", r); return r; }
- (_LNPopupBarAppearanceChainProxy *)activeAppearanceChain { %log; _LNPopupBarAppearanceChainProxy * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBottomShadowView:(UIView *)bottomShadowView { %log; %orig; }
- (UIView *)bottomShadowView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupItem:(LNPopupItem *)popupItem { %log; %orig; }
- (LNPopupItem *)popupItem { %log; LNPopupItem * r = %orig; NSLog(@" = %@", r); return r; }
- (void)set_barDelegate:(NSObject<_LNPopupBarDelegate> *)_barDelegate { %log; %orig; }
- (NSObject<_LNPopupBarDelegate> *)_barDelegate { %log; NSObject<_LNPopupBarDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setTitle:(NSString *)title { %log; %orig; }
- (NSString *)title { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSubtitle:(NSString *)subtitle { %log; %orig; }
- (NSString *)subtitle { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setImage:(UIImage *)image { %log; %orig; }
- (UIImage *)image { %log; UIImage * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSwiftuiImageController:(UIViewController *)swiftuiImageController { %log; %orig; }
- (UIViewController *)swiftuiImageController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHighlightView:(UIView *)highlightView { %log; %orig; }
- (UIView *)highlightView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setProgressView:(UIProgressView *)progressView { %log; %orig; }
- (UIProgressView *)progressView { %log; UIProgressView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setContentView:(UIView *)contentView { %log; %orig; }
- (void)setBackgroundView:(_LNPopupBarBackgroundView *)backgroundView { %log; %orig; }
- (_LNPopupBarBackgroundView *)backgroundView { %log; _LNPopupBarBackgroundView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setInteractionBackgroundView:(UIVisualEffectView *)interactionBackgroundView { %log; %orig; }
- (UIVisualEffectView *)interactionBackgroundView { %log; UIVisualEffectView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setEffectGroupingIdentifier:(NSString *)effectGroupingIdentifier { %log; %orig; }
- (NSString *)effectGroupingIdentifier { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAccessibilityCenterLabel:(NSString *)accessibilityCenterLabel { %log; %orig; }
- (NSString *)accessibilityCenterLabel { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAccessibilityCenterHint:(NSString *)accessibilityCenterHint { %log; %orig; }
- (NSString *)accessibilityCenterHint { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAccessibilityImageLabel:(NSString *)accessibilityImageLabel { %log; %orig; }
- (NSString *)accessibilityImageLabel { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAccessibilityProgressLabel:(NSString *)accessibilityProgressLabel { %log; %orig; }
- (NSString *)accessibilityProgressLabel { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAccessibilityProgressValue:(NSString *)accessibilityProgressValue { %log; %orig; }
- (NSString *)accessibilityProgressValue { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLeadingBarButtonItems:(NSArray *)leadingBarButtonItems { %log; %orig; }
- (NSArray *)leadingBarButtonItems { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTrailingBarButtonItems:(NSArray *)trailingBarButtonItems { %log; %orig; }
- (NSArray *)trailingBarButtonItems { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupOpenGestureRecognizer:(UITapGestureRecognizer *)popupOpenGestureRecognizer { %log; %orig; }
- (UITapGestureRecognizer *)popupOpenGestureRecognizer { %log; UITapGestureRecognizer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBarHighlightGestureRecognizer:(UILongPressGestureRecognizer *)barHighlightGestureRecognizer { %log; %orig; }
- (UILongPressGestureRecognizer *)barHighlightGestureRecognizer { %log; UILongPressGestureRecognizer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)set_applySwiftUILayoutFixes:(BOOL)_applySwiftUILayoutFixes { %log; %orig; }
- (BOOL)_applySwiftUILayoutFixes { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setInheritsAppearanceFromDockingView:(BOOL)inheritsAppearanceFromDockingView { %log; %orig; }
- (BOOL)inheritsAppearanceFromDockingView { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSArray *)barButtonItems { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (UIImageView *)imageView { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBarStyle:(NSInteger)barStyle { %log; %orig; }
- (NSInteger)barStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setStandardAppearance:(LNPopupBarAppearance *)standardAppearance { %log; %orig; }
- (LNPopupBarAppearance *)standardAppearance { %log; LNPopupBarAppearance * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setProgressViewStyle:(NSInteger)progressViewStyle { %log; %orig; }
- (NSInteger)progressViewStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setBarItemsSemanticContentAttribute:(NSInteger)barItemsSemanticContentAttribute { %log; %orig; }
- (NSInteger)barItemsSemanticContentAttribute { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setCustomBarViewController:(LNPopupCustomBarViewController *)customBarViewController { %log; %orig; }
- (LNPopupCustomBarViewController *)customBarViewController { %log; LNPopupCustomBarViewController * r = %orig; NSLog(@" = %@", r); return r; }
-(void)setHidden:(BOOL)arg0  { %log; %orig; }
-(void)_setHighlightAlpha:(CGFloat)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(void)traitCollectionDidChange:(id)arg0  { %log; %orig; }
-(void)_updateProgressViewWithStyle:(NSInteger)arg0  { %log; %orig; }
-(void)updateConstraints { %log; %orig; }
-(void)_layoutCustomBarController { %log; %orig; }
-(void)updatePageStyles { %log; %orig; }
-(void)_applyGroupingIdentifier:(id)arg0 toVisualEffectView:(id)arg1  { %log; %orig; }
-(void)_applyGroupingIdentifierToVisualEffectView:(id)arg0  { %log; %orig; }
-(id)backgroundColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_internalSetBackgroundColor:(id)arg0  { %log; %orig; }
-(void)setBackgroundColor:(id)arg0  { %log; %orig; }
-(void)_recalcActiveAppearanceChain { %log; %orig; }
-(void)popupBarAppearanceDidChange:(id)arg0  { %log; %orig; }
-(void)_appearanceDidChange { %log; %orig; }
-(id)tintColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_newMarqueeLabel { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_viewForBarButtonItem:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_getLeftmostView:(*id)arg0 rightmostView:(*id)arg1 fromBarButtonItems:(id)arg2  { %log; %orig; }
-(void)_updateTitleInsetsForCompactBar:(struct UIEdgeInsets *)arg0  { %log; %orig; }
-(void)_updateTitleInsetsForProminentBar:(struct UIEdgeInsets *)arg0  { %log; %orig; }
-(void)_layoutTitles { %log; %orig; }
-(void)_updateAccessibility { %log; %orig; }
-(void)_setNeedsTitleLayout { %log; %orig; }
-(void)_layoutImageView { %log; %orig; }
-(void)_delayBarButtonLayout { %log; %orig; }
-(void)_layoutBarButtonItems { %log; %orig; }
-(void)_updateViewsAfterCustomBarViewControllerUpdate { %log; %orig; }
-(void)_recalculateCoordinatedMarqueeScrollIfNeeded { %log; %orig; }
-(void)_removeAnimationFromBarItems { %log; %orig; }
-(void)_transitionCustomBarViewControllerWithPopupContainerSize:(struct CGSize )arg0 withCoordinator:(id)arg1  { %log; %orig; }
-(void)_transitionCustomBarViewControllerWithPopupContainerTraitCollection:(id)arg0 withCoordinator:(id)arg1  { %log; %orig; }
-(void)_cancelAnyUserInteraction { %log; %orig; }
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2  { %log; %orig; }
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2  { %log; %orig; }
%end
%hook _LNPopupBarAppearanceChainProxy
-(id)initWithAppearanceChain:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)objectForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)boolForKey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(NSUInteger)unsignedIntegerForKey:(id)arg0  { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(CGFloat)doubleForKey:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(void)setChainDelegate:(id)arg0  { %log; %orig; }
%end
%hook LNPopupBarAppearance
- (void)setDelegate:(NSObject<_LNPopupBarAppearanceDelegate> *)delegate { %log; %orig; }
- (NSObject<_LNPopupBarAppearanceDelegate> *)delegate { %log; NSObject<_LNPopupBarAppearanceDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setButtonAppearance:(UIBarButtonItemAppearance *)buttonAppearance { %log; %orig; }
- (UIBarButtonItemAppearance *)buttonAppearance { %log; UIBarButtonItemAppearance * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHighlightColor:(UIColor *)highlightColor { %log; %orig; }
- (UIColor *)highlightColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDoneButtonAppearance:(UIBarButtonItemAppearance *)doneButtonAppearance { %log; %orig; }
- (UIBarButtonItemAppearance *)doneButtonAppearance { %log; UIBarButtonItemAppearance * r = %orig; NSLog(@" = %@", r); return r; }
-(void)_notify { %log; %orig; }
-(void)a:(id)arg0 cC:(NSUInteger)arg1  { %log; %orig; }
-(id)initWithIdiom:(NSInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithBarAppearance:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)copy { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)configureWithDefaultHighlightColor { %log; %orig; }
-(void)configureWithDefaultMarqueeScroll { %log; %orig; }
-(void)configureWithDisabledMarqueeScroll { %log; %orig; }
%end
%hook LNPopupCloseButton
- (void)setPopupContentView:(LNPopupContentView *)popupContentView { %log; %orig; }
- (LNPopupContentView *)popupContentView { %log; LNPopupContentView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setStyle:(NSInteger)style { %log; %orig; }
- (NSInteger)style { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (UIVisualEffectView *)backgroundView { %log; UIVisualEffectView * r = %orig; NSLog(@" = %@", r); return r; }
-(void)_cleanup { %log; %orig; }
-(void)_setupForChevronButton { %log; %orig; }
-(void)_setupForCircularButton { %log; %orig; }
-(void)_didTouchDown { %log; %orig; }
-(void)_didTouchDragExit { %log; %orig; }
-(void)_didTouchDragEnter { %log; %orig; }
-(void)_didTouchUp { %log; %orig; }
-(void)_didTouchCancel { %log; %orig; }
-(void)_setHighlighted:(BOOL)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(struct CGSize )sizeThatFits:(struct CGSize )arg0  { %log; struct CGSize  r = %orig; return r; }
-(struct CGSize )intrinsicContentSize { %log; struct CGSize  r = %orig; return r; }
-(void)_setButtonContainerStationary { %log; %orig; }
-(void)_setButtonContainerTransitioning { %log; %orig; }
%end
%hook LNPopupContentView
- (void)setPopupInteractionGestureRecognizer:(UIPanGestureRecognizer *)popupInteractionGestureRecognizer { %log; %orig; }
- (UIPanGestureRecognizer *)popupInteractionGestureRecognizer { %log; UIPanGestureRecognizer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupCloseButton:(LNPopupCloseButton *)popupCloseButton { %log; %orig; }
- (LNPopupCloseButton *)popupCloseButton { %log; LNPopupCloseButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setEffectView:(UIVisualEffectView *)effectView { %log; %orig; }
- (UIVisualEffectView *)effectView { %log; UIVisualEffectView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCurrentPopupContentViewController:(UIViewController *)currentPopupContentViewController { %log; %orig; }
- (UIViewController *)currentPopupContentViewController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupCloseButtonStyle:(NSInteger)popupCloseButtonStyle { %log; %orig; }
- (NSInteger)popupCloseButtonStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setPopupCloseButtonAutomaticallyUnobstructsTopBars:(BOOL)popupCloseButtonAutomaticallyUnobstructsTopBars { %log; %orig; }
- (BOOL)popupCloseButtonAutomaticallyUnobstructsTopBars { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setBackgroundEffect:(UIBlurEffect *)backgroundEffect { %log; %orig; }
- (UIBlurEffect *)backgroundEffect { %log; UIBlurEffect * r = %orig; NSLog(@" = %@", r); return r; }
-(void)setBackgroundStyle:(NSInteger)arg0  { %log; %orig; }
-(id)_view:(id)arg0 selfOrSuperviewKindOfClass:(Class)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_repositionPopupCloseButton { %log; %orig; }
-(void)scrollViewDidScroll:(id)arg0  { %log; %orig; }
-(void)safeAreaInsetsDidChange { %log; %orig; }
-(NSInteger)overrideUserInterfaceStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)setOverrideUserInterfaceStyle:(NSInteger)arg0  { %log; %orig; }
-(void)setControllerOverrideUserInterfaceStyle:(NSInteger)arg0  { %log; %orig; }
-(void)_applyBackgroundEffectWithContentViewController:(id)arg0 barEffect:(id)arg1  { %log; %orig; }
%end
%hook _LNPopupTransitionCoordinator
- (BOOL)isAnimated { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSInteger)presentationStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (BOOL)initiallyInteractive { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)isInterruptible { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)isInteractive { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)isCancelled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (CGFloat)transitionDuration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (CGFloat)percentComplete { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (CGFloat)completionVelocity { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (NSInteger)completionCurve { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (UIView *)containerView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (CGAffineTransform)targetTransform { %log; CGAffineTransform r = %orig; return r; }
-(id)viewControllerForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)viewForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)notifyWhenInteractionEndsUsingBlock:(id)arg0  { %log; %orig; }
-(void)notifyWhenInteractionChangesUsingBlock:(id)arg0  { %log; %orig; }
%end
%hook LNPopupController
- (void)setBottomBar:(UIView *)bottomBar { %log; %orig; }
- (UIView *)bottomBar { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupBar:(LNPopupBar *)popupBar { %log; %orig; }
- (LNPopupBar *)popupBar { %log; LNPopupBar * r = %orig; NSLog(@" = %@", r); return r; }
- (LNPopupBar *)popupBarStorage { %log; LNPopupBar * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupContentContainerView:(UIScrollView *)popupContentContainerView { %log; %orig; }
- (UIScrollView *)popupContentContainerView { %log; UIScrollView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupControllerPublicState:(NSInteger)popupControllerPublicState { %log; %orig; }
- (NSInteger)popupControllerPublicState { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setPopupControllerInternalState:(NSInteger)popupControllerInternalState { %log; %orig; }
- (NSInteger)popupControllerInternalState { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setPopupControllerTargetState:(NSInteger)popupControllerTargetState { %log; %orig; }
- (NSInteger)popupControllerTargetState { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setUserPopupPresentationDelegate:(NSObject<LNPopupPresentationDelegate> *)userPopupPresentationDelegate { %log; %orig; }
- (NSObject<LNPopupPresentationDelegate> *)userPopupPresentationDelegate { %log; NSObject<LNPopupPresentationDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setCurrentContentController:(UIViewController *)currentContentController { %log; %orig; }
- (UIViewController *)currentContentController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setContainerController:(UIViewController *)containerController { %log; %orig; }
- (UIViewController *)containerController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLastPopupBarLocation:(CGPoint)lastPopupBarLocation { %log; %orig; }
- (CGPoint)lastPopupBarLocation { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (void)setLastSeenMovement:(CGFloat)lastSeenMovement { %log; %orig; }
- (CGFloat)lastSeenMovement { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setEffectiveStatusBarUpdateController:(UIViewController *)effectiveStatusBarUpdateController { %log; %orig; }
- (UIViewController *)effectiveStatusBarUpdateController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithContainerViewController:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(struct CGRect )_frameForOpenPopupBar { %log; struct CGRect  r = %orig; return r; }
-(struct CGRect )_frameForClosedPopupBar { %log; struct CGRect  r = %orig; return r; }
-(void)_repositionPopupContentMovingBottomBar:(BOOL)arg0  { %log; %orig; }
-(CGFloat)_percentFromPopupBar { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)_percentFromPopupBarForBottomBarDisplacement { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(void)_setContentToState:(NSInteger)arg0  { %log; %orig; }
-(void)_addContentControllerSubview:(id)arg0  { %log; %orig; }
-(void)_removeContentControllerFromContentView:(id)arg0  { %log; %orig; }
-(void)_popupBarLongPressGestureRecognized:(id)arg0  { %log; %orig; }
-(void)_popupBarTapGestureRecognized:(id)arg0  { %log; %orig; }
-(void)_popupBarPresentationByUserPanGestureHandler_began:(id)arg0  { %log; %orig; }
-(CGFloat)rubberbandFromHeight:(CGFloat)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(void)_popupBarPresentationByUserPanGestureHandler_changed:(id)arg0  { %log; %orig; }
-(void)_popupBarPresentationByUserPanGestureHandler_endedOrCancelled:(id)arg0  { %log; %orig; }
-(void)_popupBarPresentationByUserPanGestureHandler:(id)arg0  { %log; %orig; }
-(NSInteger)positionForBar:(id)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)_closePopupContent { %log; %orig; }
-(void)_reconfigure_title { %log; %orig; }
-(void)_reconfigure_subtitle { %log; %orig; }
-(void)_reconfigure_image { %log; %orig; }
-(void)_reconfigure_progress { %log; %orig; }
-(void)_reconfigure_progressTintColor { %log; %orig; }
-(void)_reconfigure_accessibilityLavel { %log; %orig; }
-(void)_reconfigure_accessibilityHint { %log; %orig; }
-(void)_reconfigure_accessibilityImageLabel { %log; %orig; }
-(void)_reconfigure_accessibilityProgressLabel { %log; %orig; }
-(void)_reconfigure_accessibilityProgressValue { %log; %orig; }
-(void)_reconfigureBarItems { %log; %orig; }
-(void)_reconfigure_leadingBarButtonItems { %log; %orig; }
-(void)_reconfigure_trailingBarButtonItems { %log; %orig; }
-(void)_reconfigure_swiftuiImageController { %log; %orig; }
-(void)_reconfigure_standardAppearance { %log; %orig; }
-(void)_popupItem:(id)arg0 didChangeValueForKey:(id)arg1  { %log; %orig; }
-(void)_reconfigureContentWithOldContentController:(id)arg0 newContentController:(id)arg1  { %log; %orig; }
-(void)_configurePopupBarFromBottomBar { %log; %orig; }
-(void)_updateBarExtensionStyleFromPopupBar { %log; %orig; }
-(void)_movePopupBarAndContentToBottomBarSuperview { %log; %orig; }
-(void)_fixupGestureRecognizersForController:(id)arg0  { %log; %orig; }
-(void)_cleanupGestureRecognizersForController:(id)arg0  { %log; %orig; }
-(void)presentPopupBarAnimated:(BOOL)arg0 openPopup:(BOOL)arg1 completion:(id)arg2  { %log; %orig; }
-(void)openPopupAnimated:(BOOL)arg0 completion:(id)arg1  { %log; %orig; }
-(void)closePopupAnimated:(BOOL)arg0 completion:(id)arg1  { %log; %orig; }
-(void)dismissPopupBarAnimated:(BOOL)arg0 completion:(id)arg1  { %log; %orig; }
-(void)_applicationDidEnterBackground { %log; %orig; }
-(void)_applicationWillEnterForeground { %log; %orig; }
-(void)_removeInteractionGestureForPopupBar:(id)arg0  { %log; %orig; }
-(void)_traitCollectionForPopupBarDidChange:(id)arg0  { %log; %orig; }
-(void)_popupBarMetricsDidChange:(id)arg0  { %log; %orig; }
-(void)_popupBarStyleDidChange:(id)arg0  { %log; %orig; }
-(void)_popupBar:(id)arg0 updateCustomBarController:(id)arg1 cleanup:(BOOL)arg2  { %log; %orig; }
+(CGFloat)_statusBarHeightForView:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
%end
%hook LNPopupCustomBarViewController
- (void)setContainingPopupBar:(LNPopupBar *)containingPopupBar { %log; %orig; }
- (LNPopupBar *)containingPopupBar { %log; LNPopupBar * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupController:(LNPopupController *)popupController { %log; %orig; }
- (LNPopupController *)popupController { %log; LNPopupController * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)wantsDefaultTapGestureRecognizer { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)wantsDefaultPanGestureRecognizer { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)wantsDefaultHighlightGestureRecognizer { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setPreferredContentSize:(CGSize)preferredContentSize { %log; %orig; }
- (CGSize)preferredContentSize { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
-(id)initWithNibName:(id)arg0 bundle:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)viewDidLoad { %log; %orig; }
-(void)popupItemDidUpdate { %log; %orig; }
-(id)popupContentViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)popupPresentationContainerViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LNPopupInteractionPanGestureRecognizerDelegate
-(id)initWithPopupController:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)gestureRecognizerShouldBegin:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook LNPopupInteractionPanGestureRecognizer
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 popupController:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LNPopupItem
- (void)setLeftBarButtonItems:(NSArray *)leftBarButtonItems { %log; %orig; }
- (void)setRightBarButtonItems:(NSArray *)rightBarButtonItems { %log; %orig; }
- (void)_setItemDelegate:(NSObject<_LNPopupItemDelegate> *)itemDelegate { %log; %orig; }
- (NSObject<_LNPopupItemDelegate> *)_itemDelegate { %log; NSObject<_LNPopupItemDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)_setContainerController:(UIViewController *)containerController { %log; %orig; }
- (UIViewController *)_containerController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setProgressTintColor:(UIColor *)progressTintColor { %log; %orig; }
- (UIColor *)progressTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBarButtonItems:(NSArray *)barButtonItems { %log; %orig; }
%end
%hook LNPopupControllerLongPressGestureDelegate
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook LNPopupLongPressGestureRecognizer
-(id)initWithTarget:(id)arg0 action:(SEL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LNPopupOpenTapGestureRecognizerForwardingDelegate
%end
%hook LNPopupOpenTapGestureRecognizer
%end
%hook __MarqueeLabel
- (void)setSubLabel:(UILabel *)subLabel { %log; %orig; }
- (UILabel *)subLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)labelShouldScroll { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setTapRecognizer:(UITapGestureRecognizer *)tapRecognizer { %log; %orig; }
- (UITapGestureRecognizer *)tapRecognizer { %log; UITapGestureRecognizer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHomeLabelFrame:(CGRect)homeLabelFrame { %log; %orig; }
- (CGRect)homeLabelFrame { %log; CGRect r = %orig; NSLog(@" = {{%g, %g}, {%g, %g}}", r.origin.x, r.origin.y, r.size.width, r.size.height); return r; }
- (void)setAwayOffset:(CGFloat)awayOffset { %log; %orig; }
- (CGFloat)awayOffset { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setIsPaused:(BOOL)isPaused { %log; %orig; }
- (void)setScrollCompletionBlock:(id *)scrollCompletionBlock { %log; %orig; }
- (id *)scrollCompletionBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setGradientColors:(NSArray *)gradientColors { %log; %orig; }
- (NSArray *)gradientColors { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAnimationCurve:(NSUInteger)animationCurve { %log; %orig; }
- (NSUInteger)animationCurve { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setLabelize:(BOOL)labelize { %log; %orig; }
- (BOOL)labelize { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setTapToScroll:(BOOL)tapToScroll { %log; %orig; }
- (BOOL)tapToScroll { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setMarqueeType:(NSUInteger)marqueeType { %log; %orig; }
- (NSUInteger)marqueeType { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setScrollDuration:(CGFloat)scrollDuration { %log; %orig; }
- (CGFloat)scrollDuration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setLeadingBuffer:(CGFloat)leadingBuffer { %log; %orig; }
- (CGFloat)leadingBuffer { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setTrailingBuffer:(CGFloat)trailingBuffer { %log; %orig; }
- (CGFloat)trailingBuffer { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setContinuousMarqueeExtraBuffer:(CGFloat)continuousMarqueeExtraBuffer { %log; %orig; }
- (CGFloat)continuousMarqueeExtraBuffer { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setFadeLength:(CGFloat)fadeLength { %log; %orig; }
- (CGFloat)fadeLength { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (BOOL)awayFromHome { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)viewControllerShouldRestart:(id)arg0  { %log; %orig; }
-(void)labelsShouldLabelize:(id)arg0  { %log; %orig; }
-(void)labelsShouldAnimate:(id)arg0  { %log; %orig; }
-(id)initWithFrame:(struct CGRect )arg0 duration:(CGFloat)arg1 andFadeLength:(CGFloat)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithFrame:(struct CGRect )arg0 rate:(CGFloat)arg1 andFadeLength:(CGFloat)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)awakeFromNib { %log; %orig; }
-(void)prepareForInterfaceBuilder { %log; %orig; }
-(id)repliLayer { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)maskLayer { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1  { %log; %orig; }
-(void)forwardPropertiesToSubLabel { %log; %orig; }
-(void)setupLabel { %log; %orig; }
-(void)minimizeLabelFrameWithMaximumSize:(struct CGSize )arg0 adjustHeight:(BOOL)arg1  { %log; %orig; }
-(void)didMoveToSuperview { %log; %orig; }
-(void)willMoveToWindow:(id)arg0  { %log; %orig; }
-(void)didMoveToWindow { %log; %orig; }
-(void)updateSublabel { %log; %orig; }
-(void)updateSublabelAndBeginScroll:(BOOL)arg0  { %log; %orig; }
-(BOOL)labelReadyForScroll { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)beginScroll { %log; %orig; }
-(void)beginScrollWithDelay:(BOOL)arg0  { %log; %orig; }
-(void)returnLabelToOriginImmediately { %log; %orig; }
-(void)scrollAwayWithInterval:(CGFloat)arg0  { %log; %orig; }
-(void)scrollAwayWithInterval:(CGFloat)arg0 delay:(BOOL)arg1  { %log; %orig; }
-(void)scrollAwayWithInterval:(CGFloat)arg0 delayAmount:(CGFloat)arg1 shouldReturn:(BOOL)arg2  { %log; %orig; }
-(void)scrollContinuousWithInterval:(CGFloat)arg0 after:(CGFloat)arg1  { %log; %orig; }
-(void)scrollContinuousWithInterval:(CGFloat)arg0 after:(CGFloat)arg1 labelAnimation:(id)arg2 gradientAnimation:(id)arg3  { %log; %orig; }
-(void)applyGradientMaskForFadeLength:(CGFloat)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(void)removeGradientMask { %log; %orig; }
-(id)keyFrameAnimationForGradientFadeLength:(CGFloat)arg0 interval:(CGFloat)arg1 delay:(CGFloat)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)keyFrameAnimationForProperty:(id)arg0 values:(id)arg1 interval:(CGFloat)arg2 delay:(CGFloat)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)timingFunctionForAnimationOptions:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1  { %log; %orig; }
-(void)labelWasTapped:(id)arg0  { %log; %orig; }
-(void)triggerScrollStart { %log; %orig; }
-(void)labelWillBeginScroll { %log; %orig; }
-(void)labelReturnedToHome:(BOOL)arg0  { %log; %orig; }
-(void)setFrame:(struct CGRect )arg0  { %log; %orig; }
-(void)setBounds:(struct CGRect )arg0  { %log; %orig; }
-(id)viewForBaselineLayout { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)viewForLastBaselineLayout { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)viewForFirstBaselineLayout { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)text { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setText:(id)arg0  { %log; %orig; }
-(id)attributedText { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setAttributedText:(id)arg0  { %log; %orig; }
-(id)font { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setFont:(id)arg0  { %log; %orig; }
-(id)textColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setTextColor:(id)arg0  { %log; %orig; }
-(id)shadowColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setShadowColor:(id)arg0  { %log; %orig; }
-(struct CGSize )shadowOffset { %log; struct CGSize  r = %orig; return r; }
-(void)setShadowOffset:(struct CGSize )arg0  { %log; %orig; }
-(id)highlightedTextColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setHighlightedTextColor:(id)arg0  { %log; %orig; }
-(BOOL)isHighlighted { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setHighlighted:(BOOL)arg0  { %log; %orig; }
-(BOOL)isEnabled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setEnabled:(BOOL)arg0  { %log; %orig; }
-(void)setNumberOfLines:(NSInteger)arg0  { %log; %orig; }
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg0  { %log; %orig; }
-(void)setMinimumFontSize:(CGFloat)arg0  { %log; %orig; }
-(NSInteger)baselineAdjustment { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)setBaselineAdjustment:(NSInteger)arg0  { %log; %orig; }
-(void)setAdjustsLetterSpacingToFitWidth:(BOOL)arg0  { %log; %orig; }
-(void)setMinimumScaleFactor:(CGFloat)arg0  { %log; %orig; }
-(NSInteger)contentMode { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)setContentMode:(NSInteger)arg0  { %log; %orig; }
-(void)setIsAccessibilityElement:(BOOL)arg0  { %log; %orig; }
+(void)restartLabelsOfController:(id)arg0  { %log; %orig; }
+(void)controllerViewWillAppear:(id)arg0  { %log; %orig; }
+(void)controllerViewDidAppear:(id)arg0  { %log; %orig; }
+(void)controllerViewAppearing:(id)arg0  { %log; %orig; }
+(void)controllerLabelsShouldLabelize:(id)arg0  { %log; %orig; }
+(void)controllerLabelsShouldAnimate:(id)arg0  { %log; %orig; }
+(void)notifyController:(id)arg0 withMessage:(id)arg1  { %log; %orig; }
%end
%hook __GradientSetupAnimation
%end
%hook _LNPopupBottomBarSupport
%end
%hook _LN_UIViewController_AppearanceControl
-(void)viewWillAppear:(BOOL)arg0  { %log; %orig; }
-(void)viewDidAppear:(BOOL)arg0  { %log; %orig; }
-(void)viewWillDisappear:(BOOL)arg0  { %log; %orig; }
-(void)viewDidDisappear:(BOOL)arg0  { %log; %orig; }
-(Class)class { %log; Class r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook _LNPopupBarBackgroundView
- (UIView *)colorView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithEffect:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook _LNWeakRef
- (id *)object { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
+(id)refWithObject:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTAnimatedControl
- (LOTAnimationView *)animationView { %log; LOTAnimationView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAnimationComp:(LOTComposition *)animationComp { %log; %orig; }
- (LOTComposition *)animationComp { %log; LOTComposition * r = %orig; NSLog(@" = %@", r); return r; }
-(void)setLayerName:(id)arg0 forState:(NSUInteger)arg1  { %log; %orig; }
-(void)setSelected:(BOOL)arg0  { %log; %orig; }
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1  { %log; %orig; }
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1  { %log; %orig; }
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1  { %log; %orig; }
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1  { %log; %orig; }
-(NSUInteger)accessibilityTraits { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(BOOL)isAccessibilityElement { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)checkStateChangedAndUpdate:(BOOL)arg0  { %log; %orig; }
%end
%hook LOTAnimatedSwitch
- (void)setOn:(BOOL)on { %log; %orig; }
- (BOOL)isOn { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setInteractiveGesture:(BOOL)interactiveGesture { %log; %orig; }
- (BOOL)interactiveGesture { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setAnimationComp:(id)arg0  { %log; %orig; }
-(void)setProgressRangeForOnState:(CGFloat)arg0 toProgress:(CGFloat)arg1  { %log; %orig; }
-(void)setProgressRangeForOffState:(CGFloat)arg0 toProgress:(CGFloat)arg1  { %log; %orig; }
-(id)accessibilityValue { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_toggle { %log; %orig; }
-(void)_toggleAndSendActions { %log; %orig; }
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1  { %log; %orig; }
+(id)switchNamed:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)switchNamed:(id)arg0 inBundle:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTAnimationCache
-(void)addAnimation:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(id)animationForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)clearCache { %log; %orig; }
-(void)removeAnimationForKey:(id)arg0  { %log; %orig; }
-(void)disableCaching { %log; %orig; }
+(id)sharedCache { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTAnimationTransitionController
-(id)initWithAnimationNamed:(id)arg0 fromLayerNamed:(id)arg1 toLayerNamed:(id)arg2 applyAnimationTransform:(BOOL)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithAnimationNamed:(id)arg0 fromLayerNamed:(id)arg1 toLayerNamed:(id)arg2 applyAnimationTransform:(BOOL)arg3 inBundle:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(CGFloat)transitionDuration:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(void)animateTransition:(id)arg0  { %log; %orig; }
%end
%hook LOTAnimationView
- (void)setAnimation:(NSString *)animation { %log; %orig; }
- (NSString *)animation { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)isAnimationPlaying { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setLoopAnimation:(BOOL)loopAnimation { %log; %orig; }
- (BOOL)loopAnimation { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setAutoReverseAnimation:(BOOL)autoReverseAnimation { %log; %orig; }
- (BOOL)autoReverseAnimation { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setAnimationProgress:(CGFloat)animationProgress { %log; %orig; }
- (CGFloat)animationProgress { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setAnimationSpeed:(CGFloat)animationSpeed { %log; %orig; }
- (CGFloat)animationSpeed { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setCacheEnable:(BOOL)cacheEnable { %log; %orig; }
- (BOOL)cacheEnable { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setCompletionBlock:(id *)completionBlock { %log; %orig; }
- (id *)completionBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setSceneModel:(LOTComposition *)sceneModel { %log; %orig; }
- (LOTComposition *)sceneModel { %log; LOTComposition * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setShouldRasterizeWhenIdle:(BOOL)shouldRasterizeWhenIdle { %log; %orig; }
- (BOOL)shouldRasterizeWhenIdle { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithContentsOfURL:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithModel:(id)arg0 inBundle:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_initializeAnimationContainer { %log; %orig; }
-(void)_setupWithSceneModel:(id)arg0  { %log; %orig; }
-(void)_restoreState { %log; %orig; }
-(void)_removeCurrentAnimationIfNecessary { %log; %orig; }
-(CGFloat)_progressForFrame:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(id)_frameForProgress:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)_isSpeedNegative { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_handleWindowChanges:(BOOL)arg0  { %log; %orig; }
-(void)_handleWillEnterBackground { %log; %orig; }
-(void)_handleWillEnterForeground { %log; %orig; }
-(void)_callCompletionIfNecessary:(BOOL)arg0  { %log; %orig; }
-(void)play { %log; %orig; }
-(void)playWithCompletion:(id)arg0  { %log; %orig; }
-(void)playToProgress:(CGFloat)arg0 withCompletion:(id)arg1  { %log; %orig; }
-(void)playFromProgress:(CGFloat)arg0 toProgress:(CGFloat)arg1 withCompletion:(id)arg2  { %log; %orig; }
-(void)playToFrame:(id)arg0 withCompletion:(id)arg1  { %log; %orig; }
-(void)playFromFrame:(id)arg0 toFrame:(id)arg1 withCompletion:(id)arg2  { %log; %orig; }
-(void)pause { %log; %orig; }
-(void)setProgressWithFrame:(id)arg0  { %log; %orig; }
-(void)setProgressWithFrame:(id)arg0 callCompletionIfNecessary:(BOOL)arg1  { %log; %orig; }
-(void)forceDrawingUpdate { %log; %orig; }
-(void)setValueDelegate:(id)arg0 forKeypath:(id)arg1  { %log; %orig; }
-(id)keysForKeyPath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toKeypathLayer:(id)arg1  { %log; struct CGPoint  r = %orig; return r; }
-(struct CGRect )convertRect:(struct CGRect )arg0 toKeypathLayer:(id)arg1  { %log; struct CGRect  r = %orig; return r; }
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromKeypathLayer:(id)arg1  { %log; struct CGPoint  r = %orig; return r; }
-(struct CGRect )convertRect:(struct CGRect )arg0 fromKeypathLayer:(id)arg1  { %log; struct CGRect  r = %orig; return r; }
-(void)addSubview:(id)arg0 toKeypathLayer:(id)arg1  { %log; %orig; }
-(void)maskSubview:(id)arg0 toKeypathLayer:(id)arg1  { %log; %orig; }
-(id)layerForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)compositionLayers { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_layoutAndForceUpdate { %log; %orig; }
-(void)_layout { %log; %orig; }
-(void)addSubview:(id)arg0 toLayerNamed:(id)arg1 applyTransform:(BOOL)arg2  { %log; %orig; }
-(struct CGRect )convertRect:(struct CGRect )arg0 toLayerNamed:(id)arg1  { %log; struct CGRect  r = %orig; return r; }
-(void)setValue:(id)arg0 forKeypath:(id)arg1 atFrame:(id)arg2  { %log; %orig; }
-(void)logHierarchyKeypaths { %log; %orig; }
+(id)animationNamed:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)animationNamed:(id)arg0 inBundle:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)animationFromJSON:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)animationFromJSON:(id)arg0 inBundle:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)animationWithFilePath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)animationWithFilePath:(id)arg0 withTint:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTAnimatorNode
- (NSDictionary *)valueInterpolators { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)keyname { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)currentFrame { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTAnimatorNode *)inputNode { %log; LOTAnimatorNode * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLocalPath:(LOTBezierPath *)localPath { %log; %orig; }
- (LOTBezierPath *)localPath { %log; LOTBezierPath * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setOutputPath:(LOTBezierPath *)outputPath { %log; %orig; }
- (LOTBezierPath *)outputPath { %log; LOTBezierPath * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPathShouldCacheLengths:(BOOL)pathShouldCacheLengths { %log; %orig; }
- (BOOL)pathShouldCacheLengths { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithInputNode:(id)arg0 keyName:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)needsUpdateForFrame:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)updateWithFrame:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)forceSetCurrentFrame:(id)arg0  { %log; %orig; }
-(void)logString:(id)arg0  { %log; %orig; }
-(void)performLocalUpdate { %log; %orig; }
-(void)rebuildOutputs { %log; %orig; }
-(void)searchNodesForKeypath:(id)arg0  { %log; %orig; }
%end
%hook LOTArrayInterpolator
-(id)numberArrayForFrame:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTAsset
- (NSString *)referenceID { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)assetWidth { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)assetHeight { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)imageName { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)imageDirectory { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTLayerGroup *)layerGroup { %log; LOTLayerGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRootDirectory:(NSString *)rootDirectory { %log; %orig; }
- (NSString *)rootDirectory { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSBundle *)assetBundle { %log; NSBundle * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithJSON:(id)arg0 withAssetGroup:(id)arg1 withAssetBundle:(id)arg2 withFramerate:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_mapFromJSON:(id)arg0 withAssetGroup:(id)arg1 withFramerate:(id)arg2  { %log; %orig; }
%end
%hook LOTAssetGroup
-(id)initWithJSON:(id)arg0 withAssetBundle:(id)arg1 withFramerate:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)buildAssetNamed:(id)arg0 withFramerate:(id)arg1  { %log; %orig; }
-(void)finalizeInitializationWithFramerate:(id)arg0  { %log; %orig; }
-(id)assetModelForID:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTBezierData
- (NSInteger)count { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (BOOL)closed { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithData:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(struct CGPoint )vertexAtIndex:(NSInteger)arg0  { %log; struct CGPoint  r = %orig; return r; }
-(struct CGPoint )inTangentAtIndex:(NSInteger)arg0  { %log; struct CGPoint  r = %orig; return r; }
-(struct CGPoint )outTangentAtIndex:(NSInteger)arg0  { %log; struct CGPoint  r = %orig; return r; }
-(void)initializeData:(id)arg0  { %log; %orig; }
-(struct CGPoint )_vertexAtIndex:(NSInteger)arg0 inArray:(id)arg1  { %log; struct CGPoint  r = %orig; return r; }
%end
%hook LOTBezierPath
- (*LOT_Subpath)headSubpath { %log; *LOT_Subpath r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setCacheLengths:(BOOL)cacheLengths { %log; %orig; }
- (BOOL)cacheLengths { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (CGFloat)length { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (*CGPath)CGPath { %log; *CGPath r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (CGPoint)currentPoint { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (void)setLineWidth:(CGFloat)lineWidth { %log; %orig; }
- (CGFloat)lineWidth { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setLineCapStyle:(int)lineCapStyle { %log; %orig; }
- (int)lineCapStyle { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (void)setLineJoinStyle:(int)lineJoinStyle { %log; %orig; }
- (int)lineJoinStyle { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (void)setMiterLimit:(CGFloat)miterLimit { %log; %orig; }
- (CGFloat)miterLimit { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setFlatness:(CGFloat)flatness { %log; %orig; }
- (CGFloat)flatness { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setUsesEvenOddFillRule:(BOOL)usesEvenOddFillRule { %log; %orig; }
- (BOOL)usesEvenOddFillRule { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (CGRect)bounds { %log; CGRect r = %orig; NSLog(@" = {{%g, %g}, {%g, %g}}", r.origin.x, r.origin.y, r.size.width, r.size.height); return r; }
-(void)removeAllSubpaths { %log; %orig; }
-(void)addSubpathWithType:(int)arg0 length:(CGFloat)arg1 endPoint:(struct CGPoint )arg2 controlPoint1:(struct CGPoint )arg3 controlPoint1:(struct CGPoint )arg4  { %log; %orig; }
-(void)LOT_moveToPoint:(struct CGPoint )arg0  { %log; %orig; }
-(void)LOT_addLineToPoint:(struct CGPoint )arg0  { %log; %orig; }
-(void)LOT_addCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2  { %log; %orig; }
-(void)LOT_closePath { %log; %orig; }
-(void)_clearPathData { %log; %orig; }
-(void)LOT_removeAllPoints { %log; %orig; }
-(BOOL)containsPoint:(struct CGPoint )arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)LOT_applyTransform:(struct CGAffineTransform )arg0  { %log; %orig; }
-(void)LOT_appendPath:(id)arg0  { %log; %orig; }
-(void)trimPathFromT:(CGFloat)arg0 toT:(CGFloat)arg1 offset:(CGFloat)arg2  { %log; %orig; }
-(void)setWithCGPath:(struct CGPath *)arg0  { %log; %orig; }
-(void)lot_enumeratePath:(struct CGPath *)arg0 elementsUsingBlock:(id)arg1  { %log; %orig; }
+(id)pathWithCGPath:(struct CGPath *)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)newPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTColorBlockCallback
- (void)setCallback:(id *)callback { %log; %orig; }
- (id *)callback { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(struct CGColor *)colorForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startColor:(struct CGColor *)arg4 endColor:(struct CGColor *)arg5 currentColor:(struct CGColor *)arg6  { %log; struct CGColor * r = %orig; NSLog(@" = %p", r); return r; }
+(id)withBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTNumberBlockCallback
-(CGFloat)floatValueForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startValue:(CGFloat)arg4 endValue:(CGFloat)arg5 currentValue:(CGFloat)arg6  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
%end
%hook LOTPointBlockCallback
-(struct CGPoint )pointForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startPoint:(struct CGPoint )arg4 endPoint:(struct CGPoint )arg5 currentPoint:(struct CGPoint )arg6  { %log; struct CGPoint  r = %orig; return r; }
%end
%hook LOTSizeBlockCallback
-(struct CGSize )sizeForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startSize:(struct CGSize )arg4 endSize:(struct CGSize )arg5 currentSize:(struct CGSize )arg6  { %log; struct CGSize  r = %orig; return r; }
%end
%hook LOTPathBlockCallback
-(struct CGPath *)pathForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3  { %log; struct CGPath * r = %orig; NSLog(@" = %p", r); return r; }
%end
%hook LOTCacheProvider
+(id)imageCache { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)setImageCache:(id)arg0  { %log; %orig; }
%end
%hook LOTCircleAnimator
-(id)initWithInputNode:(id)arg0 shapeCircle:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)valueInterpolators { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTColorInterpolator
- (void)setDelegate:(NSObject<LOTColorValueDelegate> *)delegate { %log; %orig; }
- (NSObject<LOTColorValueDelegate> *)delegate { %log; NSObject<LOTColorValueDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(struct CGColor *)colorForFrame:(id)arg0  { %log; struct CGColor * r = %orig; NSLog(@" = %p", r); return r; }
-(void)setValueDelegate:(id)arg0  { %log; %orig; }
-(BOOL)hasDelegateOverride { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook LOTComposition
- (CGRect)compBounds { %log; CGRect r = %orig; NSLog(@" = {{%g, %g}, {%g, %g}}", r.origin.x, r.origin.y, r.size.width, r.size.height); return r; }
- (NSNumber *)startFrame { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)endFrame { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)framerate { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (CGFloat)timeDuration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (LOTAssetGroup *)assetGroup { %log; LOTAssetGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCacheKey:(NSString *)cacheKey { %log; %orig; }
- (NSString *)cacheKey { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithJSON:(id)arg0 withAssetBundle:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_mapFromJSON:(id)arg0 withAssetBundle:(id)arg1  { %log; %orig; }
%end
%hook LOTCompositionContainer
- (NSArray *)childLayers { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (NSDictionary *)childMap { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithModel:(id)arg0 inLayerGroup:(id)arg1 withLayerGroup:(id)arg2 withAssestGroup:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)initializeWithChildGroup:(id)arg0 withAssetGroup:(id)arg1  { %log; %orig; }
-(void)displayWithFrame:(id)arg0 forceUpdate:(BOOL)arg1  { %log; %orig; }
-(void)setViewportBounds:(struct CGRect )arg0  { %log; %orig; }
-(id)_layerForKeypath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toKeypathLayer:(id)arg1 withParentLayer:(id)arg2  { %log; struct CGPoint  r = %orig; return r; }
-(struct CGRect )convertRect:(struct CGRect )arg0 toKeypathLayer:(id)arg1 withParentLayer:(id)arg2  { %log; struct CGRect  r = %orig; return r; }
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromKeypathLayer:(id)arg1 withParentLayer:(id)arg2  { %log; struct CGPoint  r = %orig; return r; }
-(struct CGRect )convertRect:(struct CGRect )arg0 fromKeypathLayer:(id)arg1 withParentLayer:(id)arg2  { %log; struct CGRect  r = %orig; return r; }
-(void)addSublayer:(id)arg0 toKeypathLayer:(id)arg1  { %log; %orig; }
-(void)maskSublayer:(id)arg0 toKeypathLayer:(id)arg1  { %log; %orig; }
%end
%hook LOTFillRenderer
-(id)initWithInputNode:(id)arg0 shapeFill:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)actionsForRenderLayer { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTGradientFillRender
-(id)initWithInputNode:(id)arg0 shapeGradientFill:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTFloatInterpolatorCallback
- (void)setFromFloat:(CGFloat)fromFloat { %log; %orig; }
- (CGFloat)fromFloat { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setToFloat:(CGFloat)toFloat { %log; %orig; }
- (CGFloat)toFloat { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setCurrentProgress:(CGFloat)currentProgress { %log; %orig; }
- (CGFloat)currentProgress { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
+(id)withFromFloat:(CGFloat)arg0 toFloat:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTPointInterpolatorCallback
- (void)setFromPoint:(CGPoint)fromPoint { %log; %orig; }
- (CGPoint)fromPoint { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (void)setToPoint:(CGPoint)toPoint { %log; %orig; }
- (CGPoint)toPoint { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
+(id)withFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTSizeInterpolatorCallback
- (void)setFromSize:(CGSize)fromSize { %log; %orig; }
- (CGSize)fromSize { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
- (void)setToSize:(CGSize)toSize { %log; %orig; }
- (CGSize)toSize { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
+(id)withFromSize:(struct CGSize )arg0 toSize:(struct CGSize )arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTKeyframe
- (NSNumber *)keyframeTime { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)isHold { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (CGPoint)inTangent { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (CGPoint)outTangent { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (CGPoint)spatialInTangent { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (CGPoint)spatialOutTangent { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (CGFloat)floatValue { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (CGPoint)pointValue { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (CGSize)sizeValue { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
- (UIColor *)colorValue { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTBezierData *)pathData { %log; LOTBezierData * r = %orig; NSLog(@" = %@", r); return r; }
- (NSArray *)arrayValue { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithKeyframe:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithValue:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithLOTKeyframe:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)copyWithData:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setData:(id)arg0  { %log; %orig; }
-(void)remapValueWithBlock:(id)arg0  { %log; %orig; }
-(void)setupOutputWithData:(id)arg0  { %log; %orig; }
-(struct CGPoint )_pointFromValueArray:(id)arg0  { %log; struct CGPoint  r = %orig; return r; }
-(struct CGPoint )_pointFromValueDict:(id)arg0  { %log; struct CGPoint  r = %orig; return r; }
-(id)_colorValueFromArray:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTKeyframeGroup
- (NSArray *)keyframes { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
-(void)buildKeyframesFromData:(id)arg0  { %log; %orig; }
-(void)remapKeyframesWithBlock:(id)arg0  { %log; %orig; }
%end
%hook LOTKeypath
- (NSString *)absoluteKeypath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)currentKey { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)currentKeyPath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSDictionary *)searchResults { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)hasFuzzyWildcard { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)hasWildcard { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)endOfKeypath { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithKeys:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)pushKey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)popKey { %log; %orig; }
-(void)popToRootKey { %log; %orig; }
-(void)addSearchResultForCurrentPath:(id)arg0  { %log; %orig; }
+(id)keypathWithString:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)keypathWithKeys:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTLayer
- (NSString *)layerName { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)layerID { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSInteger)layerType { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (NSNumber *)parentID { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)inFrame { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)outFrame { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)timeStretch { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (CGRect)layerBounds { %log; CGRect r = %orig; NSLog(@" = {{%g, %g}, {%g, %g}}", r.origin.x, r.origin.y, r.size.width, r.size.height); return r; }
- (NSArray *)shapes { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (NSArray *)masks { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)layerWidth { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (NSNumber *)layerHeight { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (UIColor *)solidColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTAsset *)imageAsset { %log; LOTAsset * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)opacity { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)timeRemapping { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)rotation { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)position { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)positionX { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)positionY { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)anchor { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)scale { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (NSInteger)matteType { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(id)initWithJSON:(id)arg0 withAssetGroup:(id)arg1 withFramerate:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTLayerContainer
- (void)setCurrentFrame:(NSNumber *)currentFrame { %log; %orig; }
- (NSNumber *)timeStretchFactor { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setViewportBounds:(CGRect)viewportBounds { %log; %orig; }
- (CGRect)viewportBounds { %log; CGRect r = %orig; NSLog(@" = {{%g, %g}, {%g, %g}}", r.origin.x, r.origin.y, r.size.width, r.size.height); return r; }
- (CALayer *)wrapperLayer { %log; CALayer * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithModel:(id)arg0 inLayerGroup:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)commonInitializeWith:(id)arg0 inLayerGroup:(id)arg1  { %log; %orig; }
-(void)buildContents:(id)arg0  { %log; %orig; }
-(void)_setImageForAsset:(id)arg0  { %log; %orig; }
-(id)initWithLayer:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)display { %log; %orig; }
-(void)displayWithFrame:(id)arg0  { %log; %orig; }
%end
%hook LOTLayerGroup
- (NSArray *)layers { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithLayerJSON:(id)arg0 withAssetGroup:(id)arg1 withFramerate:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)layerModelForID:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)layerForReferenceID:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTMask
- (BOOL)inverted { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSUInteger)maskMode { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (LOTKeyframeGroup *)maskPath { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)expansion { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithJSON:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_mapFromJSON:(id)arg0  { %log; %orig; }
%end
%hook LOTMaskNodeLayer
- (LOTMask *)maskNode { %log; LOTMask * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithMask:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateForFrame:(id)arg0 withViewBounds:(struct CGRect )arg1  { %log; %orig; }
-(BOOL)hasUpdateForFrame:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook LOTMaskContainer
-(id)initWithMasks:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTNumberInterpolator
- (void)setDelegate:(NSObject<LOTNumberValueDelegate> *)delegate { %log; %orig; }
- (NSObject<LOTNumberValueDelegate> *)delegate { %log; NSObject<LOTNumberValueDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(CGFloat)floatValueForFrame:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
%end
%hook LOTPathAnimator
-(id)initWithInputNode:(id)arg0 shapePath:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTPathInterpolator
- (void)setDelegate:(NSObject<LOTPathValueDelegate> *)delegate { %log; %orig; }
- (NSObject<LOTPathValueDelegate> *)delegate { %log; NSObject<LOTPathValueDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(id)pathForFrame:(id)arg0 cacheLengths:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTPointInterpolator
- (void)setDelegate:(NSObject<LOTPointValueDelegate> *)delegate { %log; %orig; }
- (NSObject<LOTPointValueDelegate> *)delegate { %log; NSObject<LOTPointValueDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(struct CGPoint )pointValueForFrame:(id)arg0  { %log; struct CGPoint  r = %orig; return r; }
%end
%hook LOTPolygonAnimator
-(id)initWithInputNode:(id)arg0 shapePolygon:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTPolystarAnimator
-(id)initWithInputNode:(id)arg0 shapeStar:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTRadialGradientLayer
- (void)setColors:(NSArray *)colors { %log; %orig; }
- (NSArray *)colors { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLocations:(NSArray *)locations { %log; %orig; }
- (NSArray *)locations { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIsRadial:(BOOL)isRadial { %log; %orig; }
- (BOOL)isRadial { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook LOTRenderGroup
- (CALayer *)containerLayer { %log; CALayer * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithInputNode:(id)arg0 contents:(id)arg1 keyname:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setPathShouldCacheLengths:(BOOL)arg0  { %log; %orig; }
-(id)localPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)outputPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTRenderNode
- (CAShapeLayer *)outputLayer { %log; CAShapeLayer * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTRepeaterRenderer
-(id)initWithInputNode:(id)arg0 shapeRepeater:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)recursivelyAddChildLayers:(id)arg0  { %log; %orig; }
%end
%hook LOTRoundedRectAnimator
-(id)initWithInputNode:(id)arg0 shapeRectangle:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)addCorner:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 toPath:(id)arg2 clockwise:(BOOL)arg3  { %log; %orig; }
%end
%hook LOTShapeCircle
- (LOTKeyframeGroup *)size { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)reversed { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook LOTShapeFill
- (BOOL)fillEnabled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (LOTKeyframeGroup *)color { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)evenOddFillRule { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook LOTShapeGradientFill
- (NSNumber *)numberOfColors { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)startPoint { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)endPoint { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)gradient { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (NSUInteger)type { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
%end
%hook LOTShapeGroup
- (NSArray *)items { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
+(id)shapeItemWithJSON:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTShapePath
- (NSNumber *)index { %log; NSNumber * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)shapePath { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTShapeRectangle
- (LOTKeyframeGroup *)cornerRadius { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTShapeRepeater
- (LOTKeyframeGroup *)copies { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)offset { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)anchorPoint { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)startOpacity { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)endOpacity { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTShapeStar
- (LOTKeyframeGroup *)outerRadius { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)outerRoundness { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)innerRadius { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)innerRoundness { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)numberOfPoints { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTShapeStroke
- (LOTKeyframeGroup *)width { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)dashOffset { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (NSUInteger)capType { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (NSUInteger)joinType { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (NSArray *)lineDashPattern { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTShapeTransform
%end
%hook LOTShapeTrimPath
- (LOTKeyframeGroup *)start { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTKeyframeGroup *)end { %log; LOTKeyframeGroup * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTSizeInterpolator
- (void)setDelegate:(NSObject<LOTSizeValueDelegate> *)delegate { %log; %orig; }
- (NSObject<LOTSizeValueDelegate> *)delegate { %log; NSObject<LOTSizeValueDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(struct CGSize )sizeValueForFrame:(id)arg0  { %log; struct CGSize  r = %orig; return r; }
%end
%hook LOTStrokeRenderer
-(id)initWithInputNode:(id)arg0 shapeStroke:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_updateLineDashPatternsForFrame:(id)arg0  { %log; %orig; }
%end
%hook LOTTransformInterpolator
- (void)setInputNode:(LOTTransformInterpolator *)inputNode { %log; %orig; }
- (LOTTransformInterpolator *)inputNode { %log; LOTTransformInterpolator * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTPointInterpolator *)positionInterpolator { %log; LOTPointInterpolator * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTPointInterpolator *)anchorInterpolator { %log; LOTPointInterpolator * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTSizeInterpolator *)scaleInterpolator { %log; LOTSizeInterpolator * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTNumberInterpolator *)rotationInterpolator { %log; LOTNumberInterpolator * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTNumberInterpolator *)positionXInterpolator { %log; LOTNumberInterpolator * r = %orig; NSLog(@" = %@", r); return r; }
- (LOTNumberInterpolator *)positionYInterpolator { %log; LOTNumberInterpolator * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setParentKeyName:(NSString *)parentKeyName { %log; %orig; }
- (NSString *)parentKeyName { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithPosition:(id)arg0 rotation:(id)arg1 anchor:(id)arg2 scale:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithPositionX:(id)arg0 positionY:(id)arg1 rotation:(id)arg2 anchor:(id)arg3 scale:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)initializeWithPositionX:(id)arg0 positionY:(id)arg1 position:(id)arg2 rotation:(id)arg3 anchor:(id)arg4 scale:(id)arg5  { %log; %orig; }
-(struct CATransform3D )transformForFrame:(id)arg0  { %log; struct CATransform3D  r = %orig; return r; }
+(id)transformForLayer:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTTrimPathNode
-(id)initWithInputNode:(id)arg0 trimPath:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTColorValueCallback
- (void)setColorValue:(*CGColor)colorValue { %log; %orig; }
- (*CGColor)colorValue { %log; *CGColor r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
+(id)withCGColor:(struct CGColor *)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTNumberValueCallback
- (void)setNumberValue:(CGFloat)numberValue { %log; %orig; }
- (CGFloat)numberValue { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
+(id)withFloatValue:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTPointValueCallback
- (void)setPointValue:(CGPoint)pointValue { %log; %orig; }
+(id)withPointValue:(struct CGPoint )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTSizeValueCallback
- (void)setSizeValue:(CGSize)sizeValue { %log; %orig; }
+(id)withPointValue:(struct CGSize )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTPathValueCallback
- (void)setPathValue:(*CGPath)pathValue { %log; %orig; }
- (*CGPath)pathValue { %log; *CGPath r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
+(id)withCGPath:(struct CGPath *)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook LOTValueInterpolator
- (void)setKeyframes:(NSArray *)keyframes { %log; %orig; }
- (void)setLeadingKeyframe:(LOTKeyframe *)leadingKeyframe { %log; %orig; }
- (LOTKeyframe *)leadingKeyframe { %log; LOTKeyframe * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTrailingKeyframe:(LOTKeyframe *)trailingKeyframe { %log; %orig; }
- (LOTKeyframe *)trailingKeyframe { %log; LOTKeyframe * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithKeyframes:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateKeyframeSpanForFrame:(id)arg0  { %log; %orig; }
-(CGFloat)progressForFrame:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
%end
%hook UserButtonCell
- (void)setLeftSeparator:(UIView *)leftSeparator { %log; %orig; }
- (UIView *)leftSeparator { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRightSeparator:(UIView *)rightSeparator { %log; %orig; }
- (UIView *)rightSeparator { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithLabel:(id)arg0 account:(id)arg1 imageName:(id)arg2 logo:(id)arg3 roll:(id)arg4 color:(id)arg5 bundlePath:(id)arg6 avatarBackground:(BOOL)arg7  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook AccountsCell
-(id)initWithColor:(id)arg0 twitter:(id)arg1 label:(id)arg2 designer:(id)arg3 designerLabel:(id)arg4 designerImage:(id)arg5 bundlePath:(id)arg6 vc:(id)arg7  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)buttonDidTap:(id)arg0  { %log; %orig; }
-(void)didTapDonation { %log; %orig; }
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(id)urlForTwitterUsername:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)initWithColor:(id)arg0 twitter:(id)arg1 label:(id)arg2 designer:(id)arg3 designerLabel:(id)arg4 designerImage:(id)arg5 bundlePath:(id)arg6 vc:(id)arg7  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPCell
- (void)setTintUIColor:(UIColor *)tintUIColor { %log; %orig; }
- (UIColor *)tintUIColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSetting:(FRPSettings *)setting { %log; %orig; }
- (FRPSettings *)setting { %log; FRPSettings * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPostNotification:(NSString *)postNotification { %log; %orig; }
- (NSString *)postNotification { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setValueChanged:(id *)valueChanged { %log; %orig; }
- (id *)valueChanged { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setHeight:(int)height { %log; %orig; }
- (int)height { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithTitle:(id)arg0 setting:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)didSelectFromTable:(id)arg0  { %log; %orig; }
+(id)cellWithTitle:(id)arg0 setting:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPDeveloperCell
- (void)setUrl:(NSString *)url { %log; %orig; }
- (NSString *)url { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)cellWithTitle:(id)arg0 detail:(id)arg1 image:(id)arg2 url:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cellWithTitle:(id)arg0 detail:(id)arg1 image:(id)arg2 url:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPLinkCell
-(id)cellWithTitle:(id)arg0 selectedBlock:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cellWithTitle:(id)arg0 selectedBlock:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPListCell
- (void)setItems:(NSArray *)items { %log; %orig; }
- (void)setValues:(NSArray *)values { %log; %orig; }
- (NSArray *)values { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopView:(BOOL)popView { %log; %orig; }
- (BOOL)popView { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)cellWithTitle:(id)arg0 setting:(id)arg1 items:(id)arg2 value:(id)arg3 popViewOnSelect:(BOOL)arg4 postNotification:(id)arg5 changedBlock:(id)arg6  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 items:(id)arg2 value:(id)arg3 popViewOnSelect:(BOOL)arg4 postNotification:(id)arg5 changedBlock:(id)arg6  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPSection
- (void)setHeaderTitle:(NSString *)headerTitle { %log; %orig; }
- (NSString *)headerTitle { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFooterTitle:(NSString *)footerTitle { %log; %orig; }
- (NSString *)footerTitle { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFooterAlignment:(NSUInteger)footerAlignment { %log; %orig; }
- (NSUInteger)footerAlignment { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setCells:(NSMutableArray *)cells { %log; %orig; }
- (NSMutableArray *)cells { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithTitle:(id)arg0 footer:(id)arg1 footerAlignment:(NSUInteger)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)addCell:(id)arg0  { %log; %orig; }
-(void)addCells:(id)arg0  { %log; %orig; }
+(id)sectionWithTitle:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)sectionWithTitle:(id)arg0 footer:(id)arg1 footerAlignment:(NSUInteger)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPSegmentCell
- (void)setSegment:(UISegmentedControl *)segment { %log; %orig; }
- (UISegmentedControl *)segment { %log; UISegmentedControl * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDisplayedValues:(NSArray *)displayedValues { %log; %orig; }
- (NSArray *)displayedValues { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
-(id)cellWithTitle:(id)arg0 setting:(id)arg1 values:(id)arg2 displayedValues:(id)arg3 postNotification:(id)arg4 changeBlock:(id)arg5  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)segmentAction:(id)arg0  { %log; %orig; }
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 items:(id)arg2 postNotification:(id)arg3 changeBlock:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 values:(id)arg2 displayedValues:(id)arg3 postNotification:(id)arg4 changeBlock:(id)arg5  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 values:(id)arg2 postNotification:(id)arg3 changeBlock:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPSelectListTable
- (void)setItemChanged:(id *)itemChanged { %log; %orig; }
- (id *)itemChanged { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(id)initWithStyle:(NSInteger)arg0 title:(id)arg1 items:(id)arg2 values:(id)arg3 currentValue:(id)arg4 popViewOnSelect:(BOOL)arg5 changeBlock:(id)arg6  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(NSInteger)numberOfSectionsInTableView:(id)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1  { %log; %orig; }
-(void)didReceiveMemoryWarning { %log; %orig; }
%end
%hook FRPSettings
- (void)setValueDidChangeBlock:(id *)valueDidChangeBlock { %log; %orig; }
- (id *)valueDidChangeBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setKey:(NSString *)key { %log; %orig; }
- (NSString *)key { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFileSave:(NSString *)fileSave { %log; %orig; }
- (NSString *)fileSave { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithKey:(id)arg0 defaultValue:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)saveValue:(id)arg0  { %log; %orig; }
+(id)settingsWithKey:(id)arg0 defaultValue:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPSliderCell
- (void)setSliderCell:(UISlider *)sliderCell { %log; %orig; }
- (UISlider *)sliderCell { %log; UISlider * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLLabel:(UILabel *)lLabel { %log; %orig; }
- (UILabel *)lLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRLabel:(UILabel *)rLabel { %log; %orig; }
- (UILabel *)rLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCLabel:(UILabel *)cLabel { %log; %orig; }
- (UILabel *)cLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setVLabel:(UILabel *)vLabel { %log; %orig; }
- (UILabel *)vLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMin:(float)min { %log; %orig; }
- (float)min { %log; float r = %orig; NSLog(@" = %f", r); return r; }
- (void)setMax:(float)max { %log; %orig; }
- (float)max { %log; float r = %orig; NSLog(@" = %f", r); return r; }
-(id)cellWithTitle:(id)arg0 setting:(id)arg1 min:(float)arg2 max:(float)arg3 postNotification:(id)arg4 changeBlock:(id)arg5  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)sliderChanged:(id)arg0  { %log; %orig; }
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 min:(float)arg2 max:(float)arg3 postNotification:(id)arg4 changeBlock:(id)arg5  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPSwitchCell
- (void)setSwitchView:(JTMaterialSwitch *)switchView { %log; %orig; }
- (JTMaterialSwitch *)switchView { %log; JTMaterialSwitch * r = %orig; NSLog(@" = %@", r); return r; }
-(id)cellWithTitle:(id)arg0 setting:(id)arg1 postNotification:(id)arg2 changeBlock:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)switchChanged:(id)arg0  { %log; %orig; }
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 postNotification:(id)arg2 changeBlock:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPTextFieldCell
- (void)setTextField:(UITextField *)textField { %log; %orig; }
- (UITextField *)textField { %log; UITextField * r = %orig; NSLog(@" = %@", r); return r; }
-(id)cellWithTitle:(id)arg0 setting:(id)arg1 placeholder:(id)arg2 postNotification:(id)arg3 changeBlock:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)textFieldChanged:(id)arg0  { %log; %orig; }
-(BOOL)textFieldShouldReturn:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 placeholder:(id)arg2 postNotification:(id)arg3 changeBlock:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPValueCell
-(id)cellWithTitle:(id)arg0 detail:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cellWithTitle:(id)arg0 detail:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FRPViewCell
- (void)setLayoutBlock:(id *)layoutBlock { %log; %orig; }
- (id *)layoutBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setHideSeperators:(BOOL)hideSeperators { %log; %orig; }
- (BOOL)hideSeperators { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)addSubview:(id)arg0  { %log; %orig; }
%end
%hook FRPViewSection
- (void)setCellBlock:(id *)cellBlock { %log; %orig; }
- (id *)cellBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
%end
%hook FRPreferences
- (void)setSections:(NSArray *)sections { %log; %orig; }
- (NSArray *)sections { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPlistPath:(NSString *)plistPath { %log; %orig; }
- (NSString *)plistPath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initTableWithSections:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateTintColors { %log; %orig; }
-(id)cellForIndexPath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2  { %log; %orig; }
+(id)tableWithSections:(id)arg0 title:(id)arg1 tintColor:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook JTMaterialSwitch
- (void)setTrackThickness:(CGFloat)trackThickness { %log; %orig; }
- (CGFloat)trackThickness { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setThumbSize:(CGFloat)thumbSize { %log; %orig; }
- (CGFloat)thumbSize { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setDelegate:(NSObject<JTMaterialSwitchDelegate> *)delegate { %log; %orig; }
- (NSObject<JTMaterialSwitchDelegate> *)delegate { %log; NSObject<JTMaterialSwitchDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setIsOn:(BOOL)isOn { %log; %orig; }
- (void)setIsEnabled:(BOOL)isEnabled { %log; %orig; }
- (void)setIsBounceEnabled:(BOOL)isBounceEnabled { %log; %orig; }
- (BOOL)isBounceEnabled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setIsRippleEnabled:(BOOL)isRippleEnabled { %log; %orig; }
- (BOOL)isRippleEnabled { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setThumbOnTintColor:(UIColor *)thumbOnTintColor { %log; %orig; }
- (UIColor *)thumbOnTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setThumbOffTintColor:(UIColor *)thumbOffTintColor { %log; %orig; }
- (UIColor *)thumbOffTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTrackOnTintColor:(UIColor *)trackOnTintColor { %log; %orig; }
- (UIColor *)trackOnTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTrackOffTintColor:(UIColor *)trackOffTintColor { %log; %orig; }
- (UIColor *)trackOffTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setThumbDisabledTintColor:(UIColor *)thumbDisabledTintColor { %log; %orig; }
- (UIColor *)thumbDisabledTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTrackDisabledTintColor:(UIColor *)trackDisabledTintColor { %log; %orig; }
- (UIColor *)trackDisabledTintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRippleFillColor:(UIColor *)rippleFillColor { %log; %orig; }
- (UIColor *)rippleFillColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSwitchThumb:(UIButton *)switchThumb { %log; %orig; }
- (UIButton *)switchThumb { %log; UIButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTrack:(UIView *)track { %log; %orig; }
- (UIView *)track { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithSize:(int)arg0 state:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithSize:(int)arg0 style:(int)arg1 state:(int)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)willMoveToSuperview:(id)arg0  { %log; %orig; }
-(BOOL)getSwitchState { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setOn:(BOOL)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(void)switchAreaTapped:(id)arg0  { %log; %orig; }
-(void)changeThumbState { %log; %orig; }
-(void)changeThumbStateONwithAnimation { %log; %orig; }
-(void)changeThumbStateOFFwithAnimation { %log; %orig; }
-(void)changeThumbStateONwithoutAnimation { %log; %orig; }
-(void)changeThumbStateOFFwithoutAnimation { %log; %orig; }
-(void)initializeRipple { %log; %orig; }
-(void)animateRippleEffect { %log; %orig; }
-(void)onTouchDown:(id)arg0 withEvent:(id)arg1  { %log; %orig; }
-(void)switchThumbTapped:(id)arg0  { %log; %orig; }
-(void)onTouchUpOutsideOrCanceled:(id)arg0 withEvent:(id)arg1  { %log; %orig; }
-(void)onTouchDragInside:(id)arg0 withEvent:(id)arg1  { %log; %orig; }
%end
%hook SDAnimatedImage
- (void)setAnimatedCoder:(NSObject<SDAnimatedImageCoder> *)animatedCoder { %log; %orig; }
- (NSObject<SDAnimatedImageCoder> *)animatedCoder { %log; NSObject<SDAnimatedImageCoder> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setAnimatedImageFormat:(NSInteger)animatedImageFormat { %log; %orig; }
- (NSInteger)animatedImageFormat { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setLoadedAnimatedImageFrames:(NSArray *)loadedAnimatedImageFrames { %log; %orig; }
- (NSArray *)loadedAnimatedImageFrames { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAllFramesLoaded:(BOOL)allFramesLoaded { %log; %orig; }
- (BOOL)isAllFramesLoaded { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSData *)animatedImageData { %log; NSData * r = %orig; NSLog(@" = %@", r); return r; }
- (CGFloat)scale { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (NSUInteger)animatedImageFrameCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (NSUInteger)animatedImageLoopCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(id)sd_imageData { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_imageDataAsFormat:(NSInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_imageDataAsFormat:(NSInteger)arg0 compressionQuality:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_imageDataAsFormat:(NSInteger)arg0 compressionQuality:(CGFloat)arg1 firstFrameOnly:(BOOL)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)sd_isAnimated { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(NSUInteger)sd_imageLoopCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(void)setSd_imageLoopCount:(NSUInteger)arg0  { %log; %orig; }
-(NSInteger)sd_imageFormat { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)setSd_imageFormat:(NSInteger)arg0  { %log; %orig; }
-(BOOL)sd_isVector { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(NSUInteger)sd_memoryCost { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(id)initWithContentsOfFile:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 options:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithAnimatedCoder:(id)arg0 scale:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)preloadAllFrames { %log; %orig; }
-(void)unloadAllFrames { %log; %orig; }
-(id)animatedImageFrameAtIndex:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(CGFloat)animatedImageDurationAtIndex:(NSUInteger)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
+(id)sd_imageWithData:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)sd_imageWithData:(id)arg0 scale:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)sd_imageWithData:(id)arg0 scale:(CGFloat)arg1 firstFrameOnly:(BOOL)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageNamed:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 compatibleWithTraitCollection:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 scale:(CGFloat)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageWithContentsOfFile:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageWithData:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageWithData:(id)arg0 scale:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDAnimatedImagePlayer
- (void)setCurrentFrame:(UIImage *)currentFrame { %log; %orig; }
- (UIImage *)currentFrame { %log; UIImage * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCurrentFrameIndex:(NSUInteger)currentFrameIndex { %log; %orig; }
- (NSUInteger)currentFrameIndex { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setCurrentLoopCount:(NSUInteger)currentLoopCount { %log; %orig; }
- (NSUInteger)currentLoopCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setAnimatedProvider:(NSObject<SDAnimatedImageProvider> *)animatedProvider { %log; %orig; }
- (NSObject<SDAnimatedImageProvider> *)animatedProvider { %log; NSObject<SDAnimatedImageProvider> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setFrameBuffer:(NSMutableDictionary *)frameBuffer { %log; %orig; }
- (NSMutableDictionary *)frameBuffer { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCurrentTime:(CGFloat)currentTime { %log; %orig; }
- (CGFloat)currentTime { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setBufferMiss:(BOOL)bufferMiss { %log; %orig; }
- (BOOL)bufferMiss { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setNeedsDisplayWhenImageBecomesAvailable:(BOOL)needsDisplayWhenImageBecomesAvailable { %log; %orig; }
- (BOOL)needsDisplayWhenImageBecomesAvailable { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setShouldReverse:(BOOL)shouldReverse { %log; %orig; }
- (BOOL)shouldReverse { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setMaxBufferCount:(NSUInteger)maxBufferCount { %log; %orig; }
- (NSUInteger)maxBufferCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setFetchQueue:(NSOperationQueue *)fetchQueue { %log; %orig; }
- (NSOperationQueue *)fetchQueue { %log; NSOperationQueue * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDisplayLink:(SDDisplayLink *)displayLink { %log; %orig; }
- (SDDisplayLink *)displayLink { %log; SDDisplayLink * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTotalFrameCount:(NSUInteger)totalFrameCount { %log; %orig; }
- (NSUInteger)totalFrameCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setTotalLoopCount:(NSUInteger)totalLoopCount { %log; %orig; }
- (NSUInteger)totalLoopCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setPlaybackRate:(CGFloat)playbackRate { %log; %orig; }
- (CGFloat)playbackRate { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setPlaybackMode:(NSUInteger)playbackMode { %log; %orig; }
- (NSUInteger)playbackMode { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setMaxBufferSize:(NSUInteger)maxBufferSize { %log; %orig; }
- (NSUInteger)maxBufferSize { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setRunLoopMode:(NSString *)runLoopMode { %log; %orig; }
- (NSString *)runLoopMode { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAnimationFrameHandler:(id *)animationFrameHandler { %log; %orig; }
- (id *)animationFrameHandler { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setAnimationLoopHandler:(id *)animationLoopHandler { %log; %orig; }
- (id *)animationLoopHandler { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (BOOL)isPlaying { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithProvider:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)didReceiveMemoryWarning:(id)arg0  { %log; %orig; }
-(void)setupCurrentFrame { %log; %orig; }
-(void)clearFrameBuffer { %log; %orig; }
-(void)startPlaying { %log; %orig; }
-(void)stopPlaying { %log; %orig; }
-(void)pausePlaying { %log; %orig; }
-(void)seekToFrameAtIndex:(NSUInteger)arg0 loopCount:(NSUInteger)arg1  { %log; %orig; }
-(void)displayDidRefresh:(id)arg0  { %log; %orig; }
-(void)handleFrameChange { %log; %orig; }
-(void)handleLoopChange { %log; %orig; }
-(void)calculateMaxBufferCount { %log; %orig; }
+(id)playerWithProvider:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)defaultRunLoopMode { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDAnimatedImageView
- (void)setPlayer:(SDAnimatedImagePlayer *)player { %log; %orig; }
- (SDAnimatedImagePlayer *)player { %log; SDAnimatedImagePlayer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setShouldAnimate:(BOOL)shouldAnimate { %log; %orig; }
- (BOOL)shouldAnimate { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setIsProgressive:(BOOL)isProgressive { %log; %orig; }
- (BOOL)isProgressive { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setImageViewLayer:(CALayer *)imageViewLayer { %log; %orig; }
- (CALayer *)imageViewLayer { %log; CALayer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setShouldCustomLoopCount:(BOOL)shouldCustomLoopCount { %log; %orig; }
- (BOOL)shouldCustomLoopCount { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setAnimationRepeatCount:(NSInteger)animationRepeatCount { %log; %orig; }
- (NSInteger)animationRepeatCount { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setShouldIncrementalLoad:(BOOL)shouldIncrementalLoad { %log; %orig; }
- (BOOL)shouldIncrementalLoad { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setClearBufferWhenStopped:(BOOL)clearBufferWhenStopped { %log; %orig; }
- (BOOL)clearBufferWhenStopped { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setResetFrameIndexWhenStopped:(BOOL)resetFrameIndexWhenStopped { %log; %orig; }
- (BOOL)resetFrameIndexWhenStopped { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setAutoPlayAnimatedImage:(BOOL)autoPlayAnimatedImage { %log; %orig; }
- (BOOL)autoPlayAnimatedImage { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)sd_setImageWithURL:(id)arg0  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 completed:(id)arg1  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 completed:(id)arg2  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 completed:(id)arg3  { %log; %orig; }
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)commonInit { %log; %orig; }
-(void)setImage:(id)arg0  { %log; %orig; }
-(void)setAlpha:(CGFloat)arg0  { %log; %orig; }
-(void)startAnimating { %log; %orig; }
-(void)stopAnimating { %log; %orig; }
-(BOOL)isAnimating { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)checkPlay { %log; %orig; }
-(void)updateShouldAnimate { %log; %orig; }
-(void)updateIsProgressiveWithImage:(id)arg0  { %log; %orig; }
-(id)progressiveAnimatedCoderForImage:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)displayLayer:(id)arg0  { %log; %orig; }
%end
%hook SDAsyncBlockOperation
- (void)setExecuting:(BOOL)executing { %log; %orig; }
- (BOOL)isExecuting { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setFinished:(BOOL)finished { %log; %orig; }
- (BOOL)isFinished { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setExecutionBlock:(id *)executionBlock { %log; %orig; }
- (id *)executionBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(id)initWithBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)start { %log; %orig; }
-(void)cancel { %log; %orig; }
-(void)complete { %log; %orig; }
-(BOOL)isConcurrent { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)blockOperationWithBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDDeviceHelper
+(NSUInteger)totalMemory { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
+(NSUInteger)freeMemory { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
%end
%hook SDDiskCache
- (void)setDiskCachePath:(NSString *)diskCachePath { %log; %orig; }
- (NSString *)diskCachePath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFileManager:(NSFileManager *)fileManager { %log; %orig; }
- (NSFileManager *)fileManager { %log; NSFileManager * r = %orig; NSLog(@" = %@", r); return r; }
- (SDImageCacheConfig *)config { %log; SDImageCacheConfig * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithCachePath:(id)arg0 config:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)containsDataForKey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)dataForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setData:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(id)extendedDataForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setExtendedData:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(void)removeDataForKey:(id)arg0  { %log; %orig; }
-(void)removeAllData { %log; %orig; }
-(void)removeExpiredData { %log; %orig; }
-(id)cachePathForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(NSUInteger)totalSize { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(NSUInteger)totalCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(id)cachePathForKey:(id)arg0 inPath:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)moveCacheDirectoryFromPath:(id)arg0 toPath:(id)arg1  { %log; %orig; }
%end
%hook SDDisplayLink
- (void)setDisplayLink:(CADisplayLink *)displayLink { %log; %orig; }
- (CADisplayLink *)displayLink { %log; CADisplayLink * r = %orig; NSLog(@" = %@", r); return r; }
- (id *)target { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (SEL)selector { %log; SEL r = %orig; NSLog(@" = %@", NSStringFromSelector(r)); return r; }
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)addToRunLoop:(id)arg0 forMode:(id)arg1  { %log; %orig; }
-(void)displayLinkDidRefresh:(id)arg0  { %log; %orig; }
+(id)displayLinkWithTarget:(id)arg0 selector:(SEL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDFileAttributeHelper
+(id)extendedAttributeNamesAtPath:(id)arg0 traverseLink:(BOOL)arg1 error:(*id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(BOOL)hasExtendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(*id)arg3  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)extendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(*id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(BOOL)setExtendedAttribute:(id)arg0 value:(id)arg1 atPath:(id)arg2 traverseLink:(BOOL)arg3 overwrite:(BOOL)arg4 error:(*id)arg5  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(BOOL)removeExtendedAttribute:(id)arg0 atPath:(id)arg1 traverseLink:(BOOL)arg2 error:(*id)arg3  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook SDGraphicsImageRendererFormat
- (void)setUiformat:(UIGraphicsImageRendererFormat *)uiformat { %log; %orig; }
- (UIGraphicsImageRendererFormat *)uiformat { %log; UIGraphicsImageRendererFormat * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setScale:(CGFloat)scale { %log; %orig; }
- (void)setOpaque:(BOOL)opaque { %log; %orig; }
- (BOOL)opaque { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setPreferredRange:(NSInteger)preferredRange { %log; %orig; }
- (NSInteger)preferredRange { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(id)initForMainScreen { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)preferredFormat { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDGraphicsImageRenderer
- (void)setSize:(CGSize)size { %log; %orig; }
- (CGSize)size { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
- (void)setFormat:(SDGraphicsImageRendererFormat *)format { %log; %orig; }
- (SDGraphicsImageRendererFormat *)format { %log; SDGraphicsImageRendererFormat * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setUirenderer:(UIGraphicsImageRenderer *)uirenderer { %log; %orig; }
- (UIGraphicsImageRenderer *)uirenderer { %log; UIGraphicsImageRenderer * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithSize:(struct CGSize )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithSize:(struct CGSize )arg0 format:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageWithActions:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageAPNGCoder
+(id)sharedCoder { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(NSInteger)imageFormat { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
+(id)imageUTType { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)dictionaryProperty { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)unclampedDelayTimeProperty { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)delayTimeProperty { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)loopCountProperty { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(NSUInteger)defaultLoopCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
%end
%hook SDImageAWebPCoder
-(BOOL)canDecodeFromData:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)canIncrementalDecodeFromData:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)canEncodeToFormat:(NSInteger)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook SDImageAssetManager
- (void)setImageTable:(NSMapTable *)imageTable { %log; %orig; }
- (NSMapTable *)imageTable { %log; NSMapTable * r = %orig; NSLog(@" = %@", r); return r; }
-(id)getPathForName:(id)arg0 bundle:(id)arg1 preferredScale:(*CGFloat)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageForName:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)storeImage:(id)arg0 forName:(id)arg1  { %log; %orig; }
+(id)sharedAssetManager { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageCache
- (void)setMemoryCache:(NSObject<SDMemoryCache> *)memoryCache { %log; %orig; }
- (NSObject<SDMemoryCache> *)memoryCache { %log; NSObject<SDMemoryCache> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setDiskCache:(NSObject<SDDiskCache> *)diskCache { %log; %orig; }
- (NSObject<SDDiskCache> *)diskCache { %log; NSObject<SDDiskCache> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setConfig:(SDImageCacheConfig *)config { %log; %orig; }
- (void)setIoQueue:(NSObject<OS_dispatch_queue> *)ioQueue { %log; %orig; }
- (NSObject<OS_dispatch_queue> *)ioQueue { %log; NSObject<OS_dispatch_queue> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setAdditionalCachePathBlock:(id *)additionalCachePathBlock { %log; %orig; }
- (id *)additionalCachePathBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(id)queryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)queryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4  { %log; %orig; }
-(void)removeImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2  { %log; %orig; }
-(void)containsImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2  { %log; %orig; }
-(void)clearWithCacheType:(NSInteger)arg0 completion:(id)arg1  { %log; %orig; }
-(id)initWithNamespace:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithNamespace:(id)arg0 diskCacheDirectory:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithNamespace:(id)arg0 diskCacheDirectory:(id)arg1 config:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)migrateDiskCacheDirectory { %log; %orig; }
-(void)storeImage:(id)arg0 forKey:(id)arg1 completion:(id)arg2  { %log; %orig; }
-(void)storeImage:(id)arg0 forKey:(id)arg1 toDisk:(BOOL)arg2 completion:(id)arg3  { %log; %orig; }
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 toDisk:(BOOL)arg3 completion:(id)arg4  { %log; %orig; }
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 toMemory:(BOOL)arg3 toDisk:(BOOL)arg4 completion:(id)arg5  { %log; %orig; }
-(void)_archivedDataWithImage:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(void)storeImageToMemory:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(void)storeImageDataToDisk:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(void)_storeImageDataToDisk:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(void)diskImageExistsWithKey:(id)arg0 completion:(id)arg1  { %log; %orig; }
-(BOOL)diskImageDataExistsWithKey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)_diskImageDataExistsWithKey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)diskImageDataQueryForKey:(id)arg0 completion:(id)arg1  { %log; %orig; }
-(id)diskImageDataForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageFromMemoryCacheForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageFromDiskCacheForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageFromDiskCacheForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageFromCacheForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageFromCacheForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)diskImageDataBySearchingAllPathsForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)diskImageForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)diskImageForKey:(id)arg0 data:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)diskImageForKey:(id)arg0 data:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_unarchiveObjectWithImage:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(id)queryCacheOperationForKey:(id)arg0 done:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)queryCacheOperationForKey:(id)arg0 options:(NSUInteger)arg1 done:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)queryCacheOperationForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 done:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)queryCacheOperationForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 cacheType:(NSInteger)arg3 done:(id)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)removeImageForKey:(id)arg0 withCompletion:(id)arg1  { %log; %orig; }
-(void)removeImageForKey:(id)arg0 fromDisk:(BOOL)arg1 withCompletion:(id)arg2  { %log; %orig; }
-(void)removeImageForKey:(id)arg0 fromMemory:(BOOL)arg1 fromDisk:(BOOL)arg2 withCompletion:(id)arg3  { %log; %orig; }
-(void)removeImageFromMemoryForKey:(id)arg0  { %log; %orig; }
-(void)removeImageFromDiskForKey:(id)arg0  { %log; %orig; }
-(void)_removeImageFromDiskForKey:(id)arg0  { %log; %orig; }
-(void)clearMemory { %log; %orig; }
-(void)clearDiskOnCompletion:(id)arg0  { %log; %orig; }
-(void)deleteOldFilesWithCompletionBlock:(id)arg0  { %log; %orig; }
-(void)applicationWillTerminate:(id)arg0  { %log; %orig; }
-(void)applicationDidEnterBackground:(id)arg0  { %log; %orig; }
-(NSUInteger)totalDiskSize { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(NSUInteger)totalDiskCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(void)calculateSizeWithCompletionBlock:(id)arg0  { %log; %orig; }
+(id)sharedImageCache { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)defaultDiskCacheDirectory { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)setDefaultDiskCacheDirectory:(id)arg0  { %log; %orig; }
+(id)userCacheDirectory { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(NSUInteger)imageOptionsFromCacheOptions:(NSUInteger)arg0  { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
%end
%hook SDImageCacheConfig
- (void)setShouldDisableiCloud:(BOOL)shouldDisableiCloud { %log; %orig; }
- (BOOL)shouldDisableiCloud { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setShouldCacheImagesInMemory:(BOOL)shouldCacheImagesInMemory { %log; %orig; }
- (BOOL)shouldCacheImagesInMemory { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setShouldUseWeakMemoryCache:(BOOL)shouldUseWeakMemoryCache { %log; %orig; }
- (BOOL)shouldUseWeakMemoryCache { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setShouldRemoveExpiredDataWhenEnterBackground:(BOOL)shouldRemoveExpiredDataWhenEnterBackground { %log; %orig; }
- (BOOL)shouldRemoveExpiredDataWhenEnterBackground { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setDiskCacheReadingOptions:(NSUInteger)diskCacheReadingOptions { %log; %orig; }
- (NSUInteger)diskCacheReadingOptions { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setDiskCacheWritingOptions:(NSUInteger)diskCacheWritingOptions { %log; %orig; }
- (NSUInteger)diskCacheWritingOptions { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setMaxDiskAge:(CGFloat)maxDiskAge { %log; %orig; }
- (CGFloat)maxDiskAge { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setMaxDiskSize:(NSUInteger)maxDiskSize { %log; %orig; }
- (NSUInteger)maxDiskSize { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setMaxMemoryCost:(NSUInteger)maxMemoryCost { %log; %orig; }
- (NSUInteger)maxMemoryCost { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setMaxMemoryCount:(NSUInteger)maxMemoryCount { %log; %orig; }
- (NSUInteger)maxMemoryCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setDiskCacheExpireType:(NSUInteger)diskCacheExpireType { %log; %orig; }
- (NSUInteger)diskCacheExpireType { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setMemoryCacheClass:(Class)memoryCacheClass { %log; %orig; }
- (Class)memoryCacheClass { %log; Class r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDiskCacheClass:(Class)diskCacheClass { %log; %orig; }
- (Class)diskCacheClass { %log; Class r = %orig; NSLog(@" = %@", r); return r; }
+(id)defaultCacheConfig { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageCachesManager
- (void)setImageCaches:(NSMutableArray *)imageCaches { %log; %orig; }
- (NSMutableArray *)imageCaches { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setQueryOperationPolicy:(NSUInteger)queryOperationPolicy { %log; %orig; }
- (NSUInteger)queryOperationPolicy { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setStoreOperationPolicy:(NSUInteger)storeOperationPolicy { %log; %orig; }
- (NSUInteger)storeOperationPolicy { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setRemoveOperationPolicy:(NSUInteger)removeOperationPolicy { %log; %orig; }
- (NSUInteger)removeOperationPolicy { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setContainsOperationPolicy:(NSUInteger)containsOperationPolicy { %log; %orig; }
- (NSUInteger)containsOperationPolicy { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setClearOperationPolicy:(NSUInteger)clearOperationPolicy { %log; %orig; }
- (NSUInteger)clearOperationPolicy { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setCaches:(NSArray *)caches { %log; %orig; }
- (NSArray *)caches { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
-(void)addCache:(id)arg0  { %log; %orig; }
-(void)removeCache:(id)arg0  { %log; %orig; }
%end
%hook SDImageCachesManagerOperation
- (NSUInteger)pendingCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(void)beginWithTotalCount:(NSUInteger)arg0  { %log; %orig; }
-(void)completeOne { %log; %orig; }
-(void)done { %log; %orig; }
-(void)reset { %log; %orig; }
-(void)setFinished:(BOOL)arg0  { %log; %orig; }
-(void)setExecuting:(BOOL)arg0  { %log; %orig; }
-(void)setCancelled:(BOOL)arg0  { %log; %orig; }
%end
%hook SDImageCoderHelper
+(id)animatedImageWithFrames:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)framesFromAnimatedImage:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(struct CGColorSpace *)colorSpaceGetDeviceRGB { %log; struct CGColorSpace * r = %orig; NSLog(@" = %p", r); return r; }
+(BOOL)CGImageContainsAlpha:(struct CGImage *)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(struct CGImage *)CGImageCreateDecoded:(struct CGImage *)arg0  { %log; struct CGImage * r = %orig; NSLog(@" = %p", r); return r; }
+(struct CGImage *)CGImageCreateDecoded:(struct CGImage *)arg0 orientation:(unsigned int)arg1  { %log; struct CGImage * r = %orig; NSLog(@" = %p", r); return r; }
+(struct CGImage *)CGImageCreateScaled:(struct CGImage *)arg0 size:(struct CGSize )arg1  { %log; struct CGImage * r = %orig; NSLog(@" = %p", r); return r; }
+(id)decodedImageWithImage:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)decodedAndScaledDownImageWithImage:(id)arg0 limitBytes:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(NSUInteger)defaultScaleDownLimitBytes { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
+(void)setDefaultScaleDownLimitBytes:(NSUInteger)arg0  { %log; %orig; }
+(NSInteger)imageOrientationFromEXIFOrientation:(unsigned int)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
+(unsigned int)exifOrientationFromImageOrientation:(NSInteger)arg0  { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
+(BOOL)shouldDecodeImage:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(BOOL)shouldScaleDownImage:(id)arg0 limitBytes:(NSUInteger)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook SDImageCodersManager
- (void)setImageCoders:(NSMutableArray *)imageCoders { %log; %orig; }
- (NSMutableArray *)imageCoders { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCoders:(NSArray *)coders { %log; %orig; }
- (NSArray *)coders { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
-(void)addCoder:(id)arg0  { %log; %orig; }
-(void)removeCoder:(id)arg0  { %log; %orig; }
-(id)decodedImageWithData:(id)arg0 options:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)encodedDataWithImage:(id)arg0 format:(NSInteger)arg1 options:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageFrame
+(id)frameWithImage:(id)arg0 duration:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageGIFCoder
%end
%hook SDImageHEICCoder
%end
%hook SDImageIOCoderFrame
- (void)setIndex:(NSUInteger)index { %log; %orig; }
- (NSUInteger)index { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
%end
%hook SDImageIOAnimatedCoder
-(id)initIncrementalWithOptions:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateIncrementalData:(id)arg0 finished:(BOOL)arg1  { %log; %orig; }
-(id)incrementalDecodedImageWithOptions:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithAnimatedImageData:(id)arg0 options:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)scanAndCheckFramesValidWithImageSource:(struct CGImageSource *)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(BOOL)canDecodeFromFormat:(NSInteger)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(BOOL)canEncodeToFormat:(NSInteger)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(NSUInteger)imageLoopCountWithSource:(struct CGImageSource *)arg0  { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
+(CGFloat)frameDurationAtIndex:(NSUInteger)arg0 source:(struct CGImageSource *)arg1  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
+(id)createFrameAtIndex:(NSUInteger)arg0 source:(struct CGImageSource *)arg1 scale:(CGFloat)arg2 preserveAspectRatio:(BOOL)arg3 thumbnailSize:(struct CGSize )arg4 options:(id)arg5  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageIOCoder
%end
%hook SDImageLoadersManager
- (void)setImageLoaders:(NSMutableArray *)imageLoaders { %log; %orig; }
- (NSMutableArray *)imageLoaders { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLoaders:(NSArray *)loaders { %log; %orig; }
- (NSArray *)loaders { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
-(void)addLoader:(id)arg0  { %log; %orig; }
-(void)removeLoader:(id)arg0  { %log; %orig; }
-(BOOL)canRequestImageForURL:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook SDImagePipelineTransformer
- (void)setTransformers:(NSArray *)transformers { %log; %orig; }
- (NSArray *)transformers { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTransformerKey:(NSString *)transformerKey { %log; %orig; }
- (NSString *)transformerKey { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)transformedImageWithImage:(id)arg0 forKey:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)transformerWithTransformers:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cacheKeyForTransformers:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageRoundCornerTransformer
- (void)setCorners:(NSUInteger)corners { %log; %orig; }
- (NSUInteger)corners { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setBorderWidth:(CGFloat)borderWidth { %log; %orig; }
- (CGFloat)borderWidth { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setBorderColor:(UIColor *)borderColor { %log; %orig; }
- (UIColor *)borderColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
+(id)transformerWithRadius:(CGFloat)arg0 corners:(NSUInteger)arg1 borderWidth:(CGFloat)arg2 borderColor:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageResizingTransformer
- (void)setScaleMode:(NSUInteger)scaleMode { %log; %orig; }
- (NSUInteger)scaleMode { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
+(id)transformerWithSize:(struct CGSize )arg0 scaleMode:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageCroppingTransformer
- (void)setRect:(CGRect)rect { %log; %orig; }
- (CGRect)rect { %log; CGRect r = %orig; NSLog(@" = {{%g, %g}, {%g, %g}}", r.origin.x, r.origin.y, r.size.width, r.size.height); return r; }
+(id)transformerWithRect:(struct CGRect )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageFlippingTransformer
- (void)setHorizontal:(BOOL)horizontal { %log; %orig; }
- (BOOL)horizontal { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setVertical:(BOOL)vertical { %log; %orig; }
- (BOOL)vertical { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)transformerWithHorizontal:(BOOL)arg0 vertical:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageRotationTransformer
- (void)setAngle:(CGFloat)angle { %log; %orig; }
- (CGFloat)angle { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setFitSize:(BOOL)fitSize { %log; %orig; }
- (BOOL)fitSize { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)transformerWithAngle:(CGFloat)arg0 fitSize:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageTintTransformer
- (void)setTintColor:(UIColor *)tintColor { %log; %orig; }
- (UIColor *)tintColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
+(id)transformerWithColor:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageBlurTransformer
- (void)setBlurRadius:(CGFloat)blurRadius { %log; %orig; }
- (CGFloat)blurRadius { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
+(id)transformerWithRadius:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDImageFilterTransformer
- (void)setFilter:(CIFilter *)filter { %log; %orig; }
- (CIFilter *)filter { %log; CIFilter * r = %orig; NSLog(@" = %@", r); return r; }
+(id)transformerWithFilter:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDMemoryCache
- (void)setWeakCache:(NSMapTable *)weakCache { %log; %orig; }
- (NSMapTable *)weakCache { %log; NSMapTable * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithConfig:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setObject:(id)arg0 forKey:(id)arg1 cost:(NSUInteger)arg2  { %log; %orig; }
-(void)removeObjectForKey:(id)arg0  { %log; %orig; }
-(void)removeAllObjects { %log; %orig; }
%end
%hook SDWeakProxy
-(id)initWithTarget:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)forwardingTargetForSelector:(SEL)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)isEqual:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)isKindOfClass:(Class)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)isMemberOfClass:(Class)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)conformsToProtocol:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)isProxy { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)debugDescription { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)proxyWithTarget:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageCacheKeyFilter
- (void)setBlock:(id *)block { %log; %orig; }
- (id *)block { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(id)cacheKeyForURL:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cacheKeyFilterWithBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageCacheSerializer
-(id)cacheDataWithImage:(id)arg0 originalData:(id)arg1 imageURL:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cacheSerializerWithBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageDownloader
- (void)setDownloadQueue:(NSOperationQueue *)downloadQueue { %log; %orig; }
- (NSOperationQueue *)downloadQueue { %log; NSOperationQueue * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setURLOperations:(NSMutableDictionary *)URLOperations { %log; %orig; }
- (NSMutableDictionary *)URLOperations { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHTTPHeaders:(NSMutableDictionary *)HTTPHeaders { %log; %orig; }
- (NSMutableDictionary *)HTTPHeaders { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (SDWebImageDownloaderConfig *)config { %log; SDWebImageDownloaderConfig * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRequestModifier:(NSObject<SDWebImageDownloaderRequestModifier> *)requestModifier { %log; %orig; }
- (NSObject<SDWebImageDownloaderRequestModifier> *)requestModifier { %log; NSObject<SDWebImageDownloaderRequestModifier> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setResponseModifier:(NSObject<SDWebImageDownloaderResponseModifier> *)responseModifier { %log; %orig; }
- (NSObject<SDWebImageDownloaderResponseModifier> *)responseModifier { %log; NSObject<SDWebImageDownloaderResponseModifier> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setDecryptor:(NSObject<SDWebImageDownloaderDecryptor> *)decryptor { %log; %orig; }
- (NSObject<SDWebImageDownloaderDecryptor> *)decryptor { %log; NSObject<SDWebImageDownloaderDecryptor> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setSuspended:(BOOL)suspended { %log; %orig; }
- (BOOL)isSuspended { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSUInteger)currentDownloadCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(BOOL)canRequestImageForURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)invalidateSessionAndCancel:(BOOL)arg0  { %log; %orig; }
-(id)downloadImageWithURL:(id)arg0 completed:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)createDownloaderOperationWithUrl:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)cancelAllDownloads { %log; %orig; }
-(id)operationWithTask:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)sharedDownloader { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageDownloadToken
- (void)setUrl:(NSURL *)url { %log; %orig; }
- (NSURL *)url { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRequest:(NSURLRequest *)request { %log; %orig; }
- (NSURLRequest *)request { %log; NSURLRequest * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setResponse:(NSURLResponse *)response { %log; %orig; }
- (NSURLResponse *)response { %log; NSURLResponse * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMetrics:(NSURLSessionTaskMetrics *)metrics { %log; %orig; }
- (NSURLSessionTaskMetrics *)metrics { %log; NSURLSessionTaskMetrics * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDownloadOperationCancelToken:(id *)downloadOperationCancelToken { %log; %orig; }
- (id *)downloadOperationCancelToken { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDownloadOperation:(NSOperation<SDWebImageDownloaderOperation> *)downloadOperation { %log; %orig; }
- (NSOperation<SDWebImageDownloaderOperation> *)downloadOperation { %log; NSOperation<SDWebImageDownloaderOperation> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setCancelled:(BOOL)cancelled { %log; %orig; }
-(id)initWithDownloadOperation:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)downloadDidReceiveResponse:(id)arg0  { %log; %orig; }
-(void)downloadDidStop:(id)arg0  { %log; %orig; }
%end
%hook SDWebImageDownloaderConfig
- (void)setMaxConcurrentDownloads:(NSInteger)maxConcurrentDownloads { %log; %orig; }
- (NSInteger)maxConcurrentDownloads { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setDownloadTimeout:(CGFloat)downloadTimeout { %log; %orig; }
- (CGFloat)downloadTimeout { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setMinimumProgressInterval:(CGFloat)minimumProgressInterval { %log; %orig; }
- (CGFloat)minimumProgressInterval { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setOperationClass:(Class)operationClass { %log; %orig; }
- (Class)operationClass { %log; Class r = %orig; NSLog(@" = %@", r); return r; }
- (void)setExecutionOrder:(NSInteger)executionOrder { %log; %orig; }
- (NSInteger)executionOrder { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (void)setUrlCredential:(NSURLCredential *)urlCredential { %log; %orig; }
- (NSURLCredential *)urlCredential { %log; NSURLCredential * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setUsername:(NSString *)username { %log; %orig; }
- (NSString *)username { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPassword:(NSString *)password { %log; %orig; }
- (NSString *)password { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
+(id)defaultDownloaderConfig { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageDownloaderDecryptor
-(id)decryptedDataWithData:(id)arg0 response:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)base64Decryptor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)decryptorWithBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageDownloaderOperation
- (void)setCallbackBlocks:(NSMutableArray *)callbackBlocks { %log; %orig; }
- (NSMutableArray *)callbackBlocks { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setOptions:(NSUInteger)options { %log; %orig; }
- (NSUInteger)options { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setContext:(NSDictionary *)context { %log; %orig; }
- (NSDictionary *)context { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setImageData:(NSMutableData *)imageData { %log; %orig; }
- (NSMutableData *)imageData { %log; NSMutableData * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCachedData:(NSData *)cachedData { %log; %orig; }
- (NSData *)cachedData { %log; NSData * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setExpectedSize:(NSUInteger)expectedSize { %log; %orig; }
- (NSUInteger)expectedSize { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setReceivedSize:(NSUInteger)receivedSize { %log; %orig; }
- (NSUInteger)receivedSize { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setResponseError:(NSError *)responseError { %log; %orig; }
- (NSError *)responseError { %log; NSError * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPreviousProgress:(CGFloat)previousProgress { %log; %orig; }
- (CGFloat)previousProgress { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setUnownedSession:(NSURLSession *)unownedSession { %log; %orig; }
- (NSURLSession *)unownedSession { %log; NSURLSession * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setOwnedSession:(NSURLSession *)ownedSession { %log; %orig; }
- (NSURLSession *)ownedSession { %log; NSURLSession * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDataTask:(NSURLSessionTask *)dataTask { %log; %orig; }
- (NSURLSessionTask *)dataTask { %log; NSURLSessionTask * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCoderQueue:(NSOperationQueue *)coderQueue { %log; %orig; }
- (NSOperationQueue *)coderQueue { %log; NSOperationQueue * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBackgroundTaskId:(NSUInteger)backgroundTaskId { %log; %orig; }
- (NSUInteger)backgroundTaskId { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setCredential:(NSURLCredential *)credential { %log; %orig; }
- (NSURLCredential *)credential { %log; NSURLCredential * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithRequest:(id)arg0 inSession:(id)arg1 options:(NSUInteger)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithRequest:(id)arg0 inSession:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)callbacksForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)cancel:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)cancelInternal { %log; %orig; }
-(BOOL)shouldContinueWhenAppEntersBackground { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)callCompletionBlocksWithError:(id)arg0  { %log; %orig; }
-(void)callCompletionBlocksWithImage:(id)arg0 imageData:(id)arg1 error:(id)arg2 finished:(BOOL)arg3  { %log; %orig; }
+(NSUInteger)imageOptionsFromDownloaderOptions:(NSUInteger)arg0  { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
%end
%hook SDWebImageDownloaderRequestModifier
-(id)initWithMethod:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithHeaders:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithBody:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithMethod:(id)arg0 headers:(id)arg1 body:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)modifiedRequestWithRequest:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)requestModifierWithBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageDownloaderResponseModifier
-(id)initWithVersion:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithStatusCode:(NSInteger)arg0 version:(id)arg1 headers:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)modifiedResponseWithResponse:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)responseModifierWithBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageActivityIndicator
- (void)setIndicatorView:(UIActivityIndicatorView *)indicatorView { %log; %orig; }
- (UIActivityIndicatorView *)indicatorView { %log; UIActivityIndicatorView * r = %orig; NSLog(@" = %@", r); return r; }
-(void)startAnimatingIndicator { %log; %orig; }
-(void)stopAnimatingIndicator { %log; %orig; }
+(id)grayIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)grayLargeIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)whiteIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)whiteLargeIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)largeIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)mediumIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageProgressIndicator
- (void)setIndicatorView:(UIProgressView *)indicatorView { %log; %orig; }
- (UIProgressView *)indicatorView { %log; UIProgressView * r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateIndicatorProgress:(CGFloat)arg0  { %log; %orig; }
+(id)defaultIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)barIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageManager
- (void)setImageCache:(SDImageCache *)imageCache { %log; %orig; }
- (SDImageCache *)imageCache { %log; SDImageCache * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setImageLoader:(NSObject<SDImageLoader> *)imageLoader { %log; %orig; }
- (NSObject<SDImageLoader> *)imageLoader { %log; NSObject<SDImageLoader> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setFailedURLs:(NSMutableSet *)failedURLs { %log; %orig; }
- (NSMutableSet *)failedURLs { %log; NSMutableSet * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRunningOperations:(NSMutableSet *)runningOperations { %log; %orig; }
- (NSMutableSet *)runningOperations { %log; NSMutableSet * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDelegate:(NSObject<SDWebImageManagerDelegate> *)delegate { %log; %orig; }
- (NSObject<SDWebImageManagerDelegate> *)delegate { %log; NSObject<SDWebImageManagerDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setTransformer:(NSObject<SDImageTransformer> *)transformer { %log; %orig; }
- (NSObject<SDImageTransformer> *)transformer { %log; NSObject<SDImageTransformer> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setCacheKeyFilter:(NSObject<SDWebImageCacheKeyFilter> *)cacheKeyFilter { %log; %orig; }
- (NSObject<SDWebImageCacheKeyFilter> *)cacheKeyFilter { %log; NSObject<SDWebImageCacheKeyFilter> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setCacheSerializer:(NSObject<SDWebImageCacheSerializer> *)cacheSerializer { %log; %orig; }
- (NSObject<SDWebImageCacheSerializer> *)cacheSerializer { %log; NSObject<SDWebImageCacheSerializer> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setOptionsProcessor:(NSObject<SDWebImageOptionsProcessor> *)optionsProcessor { %log; %orig; }
- (NSObject<SDWebImageOptionsProcessor> *)optionsProcessor { %log; NSObject<SDWebImageOptionsProcessor> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(id)initWithCache:(id)arg0 loader:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)cacheKeyForURL:(id)arg0 context:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)cancelAll { %log; %orig; }
-(void)removeFailedURL:(id)arg0  { %log; %orig; }
-(void)removeAllFailedURLs { %log; %orig; }
-(void)safelyRemoveOperationFromRunning:(id)arg0  { %log; %orig; }
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(NSInteger)arg3 options:(NSUInteger)arg4 context:(id)arg5 completion:(id)arg6  { %log; %orig; }
-(id)processedResultForURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)defaultImageCache { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)setDefaultImageCache:(id)arg0  { %log; %orig; }
+(id)defaultImageLoader { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)setDefaultImageLoader:(id)arg0  { %log; %orig; }
%end
%hook SDWebImageCombinedOperation
- (void)setLoaderOperation:(NSObject<SDWebImageOperation> *)loaderOperation { %log; %orig; }
- (NSObject<SDWebImageOperation> *)loaderOperation { %log; NSObject<SDWebImageOperation> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setCacheOperation:(NSObject<SDWebImageOperation> *)cacheOperation { %log; %orig; }
- (NSObject<SDWebImageOperation> *)cacheOperation { %log; NSObject<SDWebImageOperation> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setManager:(SDWebImageManager *)manager { %log; %orig; }
- (SDWebImageManager *)manager { %log; SDWebImageManager * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageOptionsResult
-(id)initWithOptions:(NSUInteger)arg0 context:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImageOptionsProcessor
+(id)optionsProcessorWithBlock:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImagePrefetcher
- (void)setRunningTokens:(NSMutableSet *)runningTokens { %log; %orig; }
- (NSMutableSet *)runningTokens { %log; NSMutableSet * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPrefetchQueue:(NSOperationQueue *)prefetchQueue { %log; %orig; }
- (NSOperationQueue *)prefetchQueue { %log; NSOperationQueue * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMaxConcurrentPrefetchCount:(NSUInteger)maxConcurrentPrefetchCount { %log; %orig; }
- (NSUInteger)maxConcurrentPrefetchCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)delegateQueue { %log; %orig; }
- (NSObject<OS_dispatch_queue> *)delegateQueue { %log; NSObject<OS_dispatch_queue> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setDelegate:(NSObject<SDWebImagePrefetcherDelegate> *)delegate { %log; %orig; }
- (NSObject<SDWebImagePrefetcherDelegate> *)delegate { %log; NSObject<SDWebImagePrefetcherDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(id)initWithImageManager:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)prefetchURLs:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)startPrefetchWithToken:(id)arg0  { %log; %orig; }
-(void)cancelPrefetching { %log; %orig; }
-(void)callProgressBlockForToken:(id)arg0 imageURL:(id)arg1  { %log; %orig; }
-(void)callCompletionBlockForToken:(id)arg0  { %log; %orig; }
-(NSUInteger)tokenTotalCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(NSUInteger)tokenSkippedCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(NSUInteger)tokenFinishedCount { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(void)addRunningToken:(id)arg0  { %log; %orig; }
-(void)removeRunningToken:(id)arg0  { %log; %orig; }
-(NSUInteger)countOfRunningTokens { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
+(id)sharedImagePrefetcher { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook SDWebImagePrefetchToken
- (void)setUrls:(NSArray *)urls { %log; %orig; }
- (NSArray *)urls { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLoadOperations:(NSPointerArray *)loadOperations { %log; %orig; }
- (NSPointerArray *)loadOperations { %log; NSPointerArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPrefetchOperations:(NSPointerArray *)prefetchOperations { %log; %orig; }
- (NSPointerArray *)prefetchOperations { %log; NSPointerArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPrefetcher:(SDWebImagePrefetcher *)prefetcher { %log; %orig; }
- (SDWebImagePrefetcher *)prefetcher { %log; SDWebImagePrefetcher * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setProgressBlock:(id *)progressBlock { %log; %orig; }
- (id *)progressBlock { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
%end
%hook SDWebImageTransition
- (void)setAvoidAutoSetImage:(BOOL)avoidAutoSetImage { %log; %orig; }
- (BOOL)avoidAutoSetImage { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setTimingFunction:(CAMediaTimingFunction *)timingFunction { %log; %orig; }
- (CAMediaTimingFunction *)timingFunction { %log; CAMediaTimingFunction * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPrepares:(id *)prepares { %log; %orig; }
- (id *)prepares { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setAnimations:(id *)animations { %log; %orig; }
- (id *)animations { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setCompletion:(id *)completion { %log; %orig; }
- (id *)completion { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
+(id)fadeTransition { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)fadeTransitionWithDuration:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)flipFromLeftTransition { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)flipFromLeftTransitionWithDuration:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)flipFromRightTransition { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)flipFromRightTransitionWithDuration:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)flipFromTopTransition { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)flipFromTopTransitionWithDuration:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)flipFromBottomTransition { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)flipFromBottomTransitionWithDuration:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)curlUpTransition { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)curlUpTransitionWithDuration:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)curlDownTransition { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)curlDownTransitionWithDuration:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook STPopupControllerTransitioningContext
- (NSUInteger)action { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(id)initWithContainerView:(id)arg0 action:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook STPopupContainerViewController
-(NSInteger)preferredStatusBarStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(id)childViewControllerForStatusBarHidden { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)childViewControllerForStatusBarStyle { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)showViewController:(id)arg0 sender:(id)arg1  { %log; %orig; }
-(void)showDetailViewController:(id)arg0 sender:(id)arg1  { %log; %orig; }
%end
%hook STPopupController
- (void)setStyle:(NSUInteger)style { %log; %orig; }
- (void)setTransitionStyle:(NSUInteger)transitionStyle { %log; %orig; }
- (NSUInteger)transitionStyle { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setTransitioning:(NSObject<STPopupControllerTransitioning> *)transitioning { %log; %orig; }
- (NSObject<STPopupControllerTransitioning> *)transitioning { %log; NSObject<STPopupControllerTransitioning> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setNavigationBarHidden:(BOOL)navigationBarHidden { %log; %orig; }
- (BOOL)navigationBarHidden { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setHidesCloseButton:(BOOL)hidesCloseButton { %log; %orig; }
- (BOOL)hidesCloseButton { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setSafeAreaInsets:(UIEdgeInsets)safeAreaInsets { %log; %orig; }
- (UIEdgeInsets)safeAreaInsets { %log; UIEdgeInsets r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (STPopupNavigationBar *)navigationBar { %log; STPopupNavigationBar * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBackgroundView:(UIView *)backgroundView { %log; %orig; }
- (UIView *)backgroundView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (UIViewController *)topViewController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (BOOL)presented { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithRootViewController:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setupObservers { %log; %orig; }
-(void)destroyObservers { %log; %orig; }
-(void)setupObserversForViewController:(id)arg0  { %log; %orig; }
-(void)destroyObserversOfViewController:(id)arg0  { %log; %orig; }
-(void)presentInViewController:(id)arg0  { %log; %orig; }
-(void)presentInViewController:(id)arg0 completion:(id)arg1  { %log; %orig; }
-(void)dismissWithCompletion:(id)arg0  { %log; %orig; }
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(void)popViewControllerAnimated:(BOOL)arg0  { %log; %orig; }
-(void)popToRootViewControllerAnimated:(BOOL)arg0  { %log; %orig; }
-(void)transitFromViewController:(id)arg0 toViewController:(id)arg1 animated:(BOOL)arg2  { %log; %orig; }
-(void)updateNavigationBarAnimated:(BOOL)arg0  { %log; %orig; }
-(void)layoutContainerView { %log; %orig; }
-(struct CGSize )contentSizeOfTopView { %log; struct CGSize  r = %orig; return r; }
-(CGFloat)preferredNavigationBarHeight { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(void)setup { %log; %orig; }
-(void)setupBackgroundView { %log; %orig; }
-(void)setupContainerView { %log; %orig; }
-(void)setupNavigationBar { %log; %orig; }
-(void)leftBarItemDidTap { %log; %orig; }
-(void)bgViewDidTap { %log; %orig; }
-(void)orientationDidChange { %log; %orig; }
-(void)keyboardWillShow:(id)arg0  { %log; %orig; }
-(void)keyboardWillHide:(id)arg0  { %log; %orig; }
-(void)adjustContainerViewOrigin { %log; %orig; }
-(id)getCurrentTextInputInView:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)firstResponderDidChange { %log; %orig; }
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)animationControllerForDismissedController:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)convertTransitioningContext:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)popupNavigationBar:(id)arg0 touchDidMoveWithOffset:(CGFloat)arg1  { %log; %orig; }
-(void)popupNavigationBar:(id)arg0 touchDidEndWithOffset:(CGFloat)arg1  { %log; %orig; }
%end
%hook STPopupControllerTransitioningFade
-(CGFloat)popupControllerTransitionDuration:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(void)popupControllerAnimateTransition:(id)arg0 completion:(id)arg1  { %log; %orig; }
%end
%hook STPopupControllerTransitioningSlideVertical
%end
%hook STPopupLeftBarItem
- (void)setType:(NSUInteger)type { %log; %orig; }
-(void)updateLayout { %log; %orig; }
%end
%hook STPopupNavigationBar
- (void)setTouchEventDelegate:(NSObject<STPopupNavigationTouchEventDelegate> *)touchEventDelegate { %log; %orig; }
- (NSObject<STPopupNavigationTouchEventDelegate> *)touchEventDelegate { %log; NSObject<STPopupNavigationTouchEventDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setDraggable:(BOOL)draggable { %log; %orig; }
- (BOOL)draggable { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)movingDidEndWithOffset:(float)arg0  { %log; %orig; }
%end
%hook FMDatabase
- (void)setApplicationID:(unsigned int)applicationID { %log; %orig; }
- (unsigned int)applicationID { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (void)setUserVersion:(unsigned int)userVersion { %log; %orig; }
- (unsigned int)userVersion { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (void)setCachedStatements:(NSMutableDictionary *)cachedStatements { %log; %orig; }
- (NSMutableDictionary *)cachedStatements { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIsOpen:(BOOL)isOpen { %log; %orig; }
- (BOOL)isOpen { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)goodConnection { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSInteger)lastInsertRowId { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
- (int)changes { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)isInTransaction { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)hasOpenResultSets { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setShouldCacheStatements:(BOOL)shouldCacheStatements { %log; %orig; }
- (BOOL)shouldCacheStatements { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (NSString *)databasePath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSURL *)databaseURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (*void)sqliteHandle { %log; *void r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setMaxBusyRetryTimeInterval:(CGFloat)maxBusyRetryTimeInterval { %log; %orig; }
- (CGFloat)maxBusyRetryTimeInterval { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(id)stringForQuery:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(int)intForQuery:(id)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(NSInteger)longForQuery:(id)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(BOOL)boolForQuery:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(CGFloat)doubleForQuery:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(id)dataForQuery:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)dateForQuery:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)tableExists:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)getSchema { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)getTableSchema:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)columnExists:(id)arg0 inTableWithName:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)columnExists:(id)arg0 columnName:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)validateSQL:(id)arg0 error:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithURL:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithPath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(char *)sqlitePath { %log; char * r = %orig; NSLog(@" = %s", r); return r; }
-(int)limitFor:(int)arg0 value:(int)arg1  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)openWithFlags:(int)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)openWithFlags:(int)arg0 vfs:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)close { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(int)busyRetryTimeout { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(void)setBusyRetryTimeout:(int)arg0  { %log; %orig; }
-(void)closeOpenResultSets { %log; %orig; }
-(void)resultSetDidClose:(id)arg0  { %log; %orig; }
-(void)clearCachedStatements { %log; %orig; }
-(id)cachedStatementForQuery:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setCachedStatement:(id)arg0 forQuery:(id)arg1  { %log; %orig; }
-(BOOL)rekey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)rekeyWithData:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)setKey:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)setKeyWithData:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)hasDateFormatter { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setDateFormat:(id)arg0  { %log; %orig; }
-(id)dateFromString:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)stringFromDate:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)warnInUse { %log; %orig; }
-(BOOL)databaseExists { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)lastErrorMessage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)hadError { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(int)lastErrorCode { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(int)lastExtendedErrorCode { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(id)errorWithMessage:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)lastError { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(int)bindObject:(id)arg0 toColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(void)extractSQL:(id)arg0 argumentsList:(char *)arg1 intoString:(id)arg2 arguments:(id)arg3  { %log; %orig; }
-(id)executeQuery:(id)arg0 withParameterDictionary:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)executeQuery:(id)arg0 withArgumentsInArray:(id)arg1 orDictionary:(id)arg2 orVAList:(char *)arg3 shouldBind:(BOOL)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)bindStatement:(struct sqlite3_stmt *)arg0 WithArgumentsInArray:(id)arg1 orDictionary:(id)arg2 orVAList:(char *)arg3  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)executeQuery:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)executeQueryWithFormat:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)executeQuery:(id)arg0 withArgumentsInArray:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)executeQuery:(id)arg0 values:(id)arg1 error:(*id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)executeQuery:(id)arg0 withVAList:(char *)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)executeUpdate:(id)arg0 error:(*id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char *)arg4  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeUpdate:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeUpdate:(id)arg0 withArgumentsInArray:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeUpdate:(id)arg0 values:(id)arg1 error:(*id)arg2  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeUpdate:(id)arg0 withParameterDictionary:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeUpdate:(id)arg0 withVAList:(char *)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeUpdateWithFormat:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeStatements:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeStatements:(id)arg0 withResultBlock:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)executeUpdate:(id)arg0 withErrorAndBindings:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)update:(id)arg0 withErrorAndBindings:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)prepare:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)rollback { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)commit { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)beginTransaction { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)beginDeferredTransaction { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)beginImmediateTransaction { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)beginExclusiveTransaction { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)inTransaction { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)interrupt { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)startSavePointWithName:(id)arg0 error:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)releaseSavePointWithName:(id)arg0 error:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)rollbackToSavePointWithName:(id)arg0 error:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)inSavePoint:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)checkpoint:(int)arg0 error:(*id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 error:(*id)arg2  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 logFrameCount:(*int)arg2 checkpointCount:(*int)arg3 error:(*id)arg4  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)makeFunctionNamed:(id)arg0 maximumArguments:(int)arg1 withBlock:(id)arg2  { %log; %orig; }
-(void)makeFunctionNamed:(id)arg0 arguments:(int)arg1 block:(id)arg2  { %log; %orig; }
-(int)valueType:(*void)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(int)valueInt:(*void)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(NSInteger)valueLong:(*void)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(CGFloat)valueDouble:(*void)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(id)valueData:(*void)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)valueString:(*void)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)resultNullInContext:(*void)arg0  { %log; %orig; }
-(void)resultInt:(int)arg0 context:(*void)arg1  { %log; %orig; }
-(void)resultLong:(NSInteger)arg0 context:(*void)arg1  { %log; %orig; }
-(void)resultDouble:(CGFloat)arg0 context:(*void)arg1  { %log; %orig; }
-(void)resultData:(id)arg0 context:(*void)arg1  { %log; %orig; }
-(void)resultString:(id)arg0 context:(*void)arg1  { %log; %orig; }
-(void)resultError:(id)arg0 context:(*void)arg1  { %log; %orig; }
-(void)resultErrorCode:(int)arg0 context:(*void)arg1  { %log; %orig; }
-(void)resultErrorNoMemoryInContext:(*void)arg0  { %log; %orig; }
-(void)resultErrorTooBigInContext:(*void)arg0  { %log; %orig; }
+(id)databaseWithPath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)databaseWithURL:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)FMDBUserVersion { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(int)FMDBVersion { %log; int r = %orig; NSLog(@" = %d", r); return r; }
+(id)sqliteLibVersion { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(BOOL)isSQLiteThreadSafe { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)storeableDateFormat:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FMStatement
- (void)setQuery:(NSString *)query { %log; %orig; }
- (NSString *)query { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FMDatabasePool
- (void)setPath:(NSString *)path { %log; %orig; }
- (int)openFlags { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (void)setVfsName:(NSString *)vfsName { %log; %orig; }
- (NSString *)vfsName { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSUInteger)countOfCheckedInDatabases { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (NSUInteger)countOfCheckedOutDatabases { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (NSUInteger)countOfOpenDatabases { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(id)initWithURL:(id)arg0 flags:(int)arg1 vfs:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithPath:(id)arg0 flags:(int)arg1 vfs:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithPath:(id)arg0 flags:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithURL:(id)arg0 flags:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)executeLocked:(id)arg0  { %log; %orig; }
-(void)pushDatabaseBackInPool:(id)arg0  { %log; %orig; }
-(id)db { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)releaseAllDatabases { %log; %orig; }
-(void)inDatabase:(id)arg0  { %log; %orig; }
-(void)beginTransaction:(NSInteger)arg0 withBlock:(id)arg1  { %log; %orig; }
-(void)inTransaction:(id)arg0  { %log; %orig; }
-(void)inDeferredTransaction:(id)arg0  { %log; %orig; }
-(void)inExclusiveTransaction:(id)arg0  { %log; %orig; }
-(void)inImmediateTransaction:(id)arg0  { %log; %orig; }
+(id)databasePoolWithPath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)databasePoolWithURL:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)databasePoolWithPath:(id)arg0 flags:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)databasePoolWithURL:(id)arg0 flags:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(Class)databaseClass { %log; Class r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FMDatabaseQueue
-(void)interrupt { %log; %orig; }
-(id)database { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)databaseQueueWithPath:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)databaseQueueWithURL:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)databaseQueueWithPath:(id)arg0 flags:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)databaseQueueWithURL:(id)arg0 flags:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook FMResultSet
- (void)setShouldAutoClose:(BOOL)shouldAutoClose { %log; %orig; }
- (BOOL)shouldAutoClose { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setParentDB:(FMDatabase *)parentDB { %log; %orig; }
- (FMDatabase *)parentDB { %log; FMDatabase * r = %orig; NSLog(@" = %@", r); return r; }
- (NSMutableDictionary *)columnNameToIndexMap { %log; NSMutableDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setStatement:(FMStatement *)statement { %log; %orig; }
- (FMStatement *)statement { %log; FMStatement * r = %orig; NSLog(@" = %@", r); return r; }
- (int)columnCount { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (NSDictionary *)resultDictionary { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
-(void)kvcMagic:(id)arg0  { %log; %orig; }
-(id)resultDict { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)next { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)nextWithError:(*id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)step { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)stepWithError:(*id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(int)internalStepWithError:(*id)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)hasAnotherRow { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(int)columnIndexForName:(id)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(int)intForColumn:(id)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(int)intForColumnIndex:(int)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(NSInteger)longForColumn:(id)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(NSInteger)longForColumnIndex:(int)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(NSInteger)longLongIntForColumn:(id)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(NSInteger)longLongIntForColumnIndex:(int)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(NSUInteger)unsignedLongLongIntForColumn:(id)arg0  { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(NSUInteger)unsignedLongLongIntForColumnIndex:(int)arg0  { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(BOOL)boolForColumn:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)boolForColumnIndex:(int)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(CGFloat)doubleForColumn:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)doubleForColumnIndex:(int)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(id)stringForColumnIndex:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)stringForColumn:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)dateForColumn:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)dateForColumnIndex:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)dataForColumn:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)dataForColumnIndex:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)dataNoCopyForColumn:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)dataNoCopyForColumnIndex:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)columnIndexIsNull:(int)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)columnIsNull:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(char *)UTF8StringForColumnIndex:(int)arg0  { %log; char * r = %orig; NSLog(@" = %s", r); return r; }
-(char *)UTF8StringForColumn:(id)arg0  { %log; char * r = %orig; NSLog(@" = %s", r); return r; }
-(char *)UTF8StringForColumnName:(id)arg0  { %log; char * r = %orig; NSLog(@" = %s", r); return r; }
-(id)objectForColumnIndex:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)objectForColumnName:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)objectForColumn:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)columnNameForIndex:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)objectAtIndexedSubscript:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)objectForKeyedSubscript:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)bindWithArray:(id)arg0 orDictionary:(id)arg1 orVAList:(char *)arg2  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)bindWithArray:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)bindWithDictionary:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(id)resultSetWithStatement:(id)arg0 usingParentDatabase:(id)arg1 shouldAutoClose:(BOOL)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook DownloadItem
- (void)setDownloadIdentifier:(NSString *)downloadIdentifier { %log; %orig; }
- (NSString *)downloadIdentifier { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setVideoID:(NSString *)videoID { %log; %orig; }
- (NSString *)videoID { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFilePath:(NSString *)filePath { %log; %orig; }
- (NSString *)filePath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCachedPath:(NSString *)cachedPath { %log; %orig; }
- (NSString *)cachedPath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRemoteURL:(NSURL *)remoteURL { %log; %orig; }
- (NSURL *)remoteURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setXYouItem:(xYouItem *)xYouItem { %log; %orig; }
- (xYouItem *)xYouItem { %log; xYouItem * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setType:(int)type { %log; %orig; }
- (int)type { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (void)setDownloadTask:(NSURLSessionDownloadTask *)downloadTask { %log; %orig; }
- (NSURLSessionDownloadTask *)downloadTask { %log; NSURLSessionDownloadTask * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDownloadStartDate:(NSDate *)downloadStartDate { %log; %orig; }
- (NSDate *)downloadStartDate { %log; NSDate * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setStatus:(NSUInteger)status { %log; %orig; }
- (NSUInteger)status { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setError:(NSError *)error { %log; %orig; }
- (NSError *)error { %log; NSError * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTotalSize:(NSString *)totalSize { %log; %orig; }
- (NSString *)totalSize { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDownloadedSize:(NSString *)downloadedSize { %log; %orig; }
- (NSString *)downloadedSize { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSpeed:(NSString *)speed { %log; %orig; }
- (NSString *)speed { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRemainingTime:(int)remainingTime { %log; %orig; }
- (int)remainingTime { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithVideoID:(id)arg0 xYouItem:(id)arg1 downloadID:(id)arg2 url:(id)arg3 filePath:(id)arg4 cachedPath:(id)arg5 type:(int)arg6  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)createDownloadTask { %log; %orig; }
-(void)resumeDownloadTask { %log; %orig; }
-(void)cancelDownloadTask { %log; %orig; }
-(void)updateProgress { %log; %orig; }
-(void)appWillEnterForeground:(id)arg0  { %log; %orig; }
%end
%hook DownloadsManager
- (void)setDownloadItemsArray:(NSMutableArray *)downloadItemsArray { %log; %orig; }
- (NSMutableArray *)downloadItemsArray { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSessionManager:(AFHTTPSessionManager *)sessionManager { %log; %orig; }
- (AFHTTPSessionManager *)sessionManager { %log; AFHTTPSessionManager * r = %orig; NSLog(@" = %@", r); return r; }
-(void)setupURLSessionConfiguration { %log; %orig; }
-(id)topViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)tapticFeedback { %log; %orig; }
-(BOOL)fileExist:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)sendPushWithTitle:(id)arg0 body:(id)arg1  { %log; %orig; }
-(void)localPushWithTitle:(id)arg0 body:(id)arg1  { %log; %orig; }
-(void)loadingHUDWithMeessage:(id)arg0 inView:(id)arg1  { %log; %orig; }
-(void)downloadingHUDWithMeessage:(id)arg0 inView:(id)arg1  { %log; %orig; }
-(void)successHUDWithMeessage:(id)arg0 inView:(id)arg1  { %log; %orig; }
-(void)errorHUDWithMeessage:(id)arg0 inView:(id)arg1 delay:(float)arg2  { %log; %orig; }
-(void)dismissHUD { %log; %orig; }
-(void)showHUDMessageWithText:(id)arg0  { %log; %orig; }
-(void)getLinksLocallyPlayerItem:(id)arg0 videoID:(id)arg1 sourceView:(id)arg2 isShorts:(BOOL)arg3  { %log; %orig; }
-(void)exportVideoToCameraRollWithPath:(id)arg0 removeFile:(BOOL)arg1  { %log; %orig; }
-(void)video:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(*void)arg2  { %log; %orig; }
-(void)mergeAudioWithMP4VideoForDownloadItem:(id)arg0  { %log; %orig; }
-(void)addMetadataToAudioForDownloadItem:(id)arg0  { %log; %orig; }
-(int)convertVideo:(id)arg0 toAudio:(id)arg1  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(void)mergeAudioWithVideoForDownloadItem:(id)arg0  { %log; %orig; }
-(void)convertAsyncMkvToMp4:(id)arg0 forXYouItem:(id)arg1  { %log; %orig; }
-(int)ffmpegWithArguments:(id)arg0  { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(void)executeCallback:(NSInteger)arg0  { %log; %orig; }
-(void)statisticsCallback:(id)arg0  { %log; %orig; }
-(id)downloadItemForIdentifier:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)startDownloadWithRequestItem:(id)arg0 info:(id)arg1  { %log; %orig; }
-(void)startDownloadWithDownloadItem:(id)arg0  { %log; %orig; }
-(void)pauseDownloadWithDownloadIdentifier:(id)arg0  { %log; %orig; }
-(void)pauseDownloadWithXYouItem:(id)arg0  { %log; %orig; }
-(void)resumeDownloadWithDownloadIdentifier:(id)arg0  { %log; %orig; }
-(void)cancelDownloadWithDownloadIdentifier:(id)arg0  { %log; %orig; }
-(void)cancelDownloadWithXYouItem:(id)arg0  { %log; %orig; }
-(void)prepareForTermination { %log; %orig; }
-(void)deleteDownloadItem:(id)arg0  { %log; %orig; }
-(void)deleteXYouItem:(id)arg0  { %log; %orig; }
-(void)setDownloadingItems { %log; %orig; }
-(id)getDownloadingItems { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)clearDownloading { %log; %orig; }
-(void)clearDownloaded { %log; %orig; }
-(id)openDatabase { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)migrateToSQL { %log; %orig; }
+(id)sharedInstance { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook MetadataItem
- (void)setChannel:(NSString *)channel { %log; %orig; }
- (NSString *)channel { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setChannelURL:(NSString *)channelURL { %log; %orig; }
- (NSString *)channelURL { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setQualityLabel:(NSString *)qualityLabel { %log; %orig; }
- (NSString *)qualityLabel { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTypeAndQuality:(NSString *)typeAndQuality { %log; %orig; }
- (NSString *)typeAndQuality { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAudioFormat:(NSString *)audioFormat { %log; %orig; }
- (NSString *)audioFormat { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setVideoFormat:(NSString *)videoFormat { %log; %orig; }
- (NSString *)videoFormat { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLyrics:(NSString *)lyrics { %log; %orig; }
- (NSString *)lyrics { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIsVideo:(BOOL)isVideo { %log; %orig; }
- (BOOL)isVideo { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setIsShorts:(BOOL)isShorts { %log; %orig; }
- (BOOL)isShorts { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)initWithXYouItem:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithDictionary:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)allMetadata { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook RequestItem
- (void)setPlayerID:(NSString *)playerID { %log; %orig; }
- (NSString *)playerID { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDownloadQuality:(NSString *)downloadQuality { %log; %orig; }
- (NSString *)downloadQuality { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSourceView:(UIView *)sourceView { %log; %orig; }
- (UIView *)sourceView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setVideoInfo:(NSDictionary *)videoInfo { %log; %orig; }
- (NSDictionary *)videoInfo { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAudioURL:(NSString *)audioURL { %log; %orig; }
- (NSString *)audioURL { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook xYouItem
- (void)setQuality:(NSString *)quality { %log; %orig; }
- (NSString *)quality { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setVideoURL:(NSString *)videoURL { %log; %orig; }
- (NSString *)videoURL { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAudioItem:(DownloadItem *)audioItem { %log; %orig; }
- (DownloadItem *)audioItem { %log; DownloadItem * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setVideoItem:(DownloadItem *)videoItem { %log; %orig; }
- (DownloadItem *)videoItem { %log; DownloadItem * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIsConverting:(BOOL)isConverting { %log; %orig; }
- (BOOL)isConverting { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setIsFinished:(BOOL)isFinished { %log; %orig; }
- (void)setConversionPercentage:(int)conversionPercentage { %log; %orig; }
- (int)conversionPercentage { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (void)setConversionInfoText:(NSString *)conversionInfoText { %log; %orig; }
- (NSString *)conversionInfoText { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithWithRequestItem:(id)arg0 info:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)cachedAudioPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)cachedVideoPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)tmpAudioPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)tmpVideoPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)tmpMKVPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)tmpMP4Path { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)filePath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)path { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)thumbnailPath { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)isMP4 { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)isDownloadFinished { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook DownloadedCell
- (void)setTableView:(UITableView *)tableView { %log; %orig; }
- (UITableView *)tableView { %log; UITableView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMainView:(SSBouncyButton *)mainView { %log; %orig; }
- (SSBouncyButton *)mainView { %log; SSBouncyButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setOptionsButton:(SSBouncyButton *)optionsButton { %log; %orig; }
- (SSBouncyButton *)optionsButton { %log; SSBouncyButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPlayButton:(SSBouncyButton *)playButton { %log; %orig; }
- (SSBouncyButton *)playButton { %log; SSBouncyButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setVideoPlayButton:(SSBouncyButton *)videoPlayButton { %log; %orig; }
- (SSBouncyButton *)videoPlayButton { %log; SSBouncyButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAlbumImage:(UIImageView *)albumImage { %log; %orig; }
- (UIImageView *)albumImage { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAlbumImagePlaceholder:(UIImage *)albumImagePlaceholder { %log; %orig; }
- (UIImage *)albumImagePlaceholder { %log; UIImage * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setName:(__MarqueeLabel *)name { %log; %orig; }
- (__MarqueeLabel *)name { %log; __MarqueeLabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setChannel:(__MarqueeLabel *)channel { %log; %orig; }
- (__MarqueeLabel *)channel { %log; __MarqueeLabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setType:(UILabel *)type { %log; %orig; }
- (UILabel *)type { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDurationAndSize:(UILabel *)durationAndSize { %log; %orig; }
- (UILabel *)durationAndSize { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDate:(UILabel *)date { %log; %orig; }
- (UILabel *)date { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBackgroundImageView:(UIImageView *)backgroundImageView { %log; %orig; }
- (UIImageView *)backgroundImageView { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setMetadata:(NSDictionary *)metadata { %log; %orig; }
- (NSDictionary *)metadata { %log; NSDictionary * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)isColorLight:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)ytBackgroundColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)ytTextColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook DownloadedVC
- (void)setParentVC:(DownloadsPagerVC *)parentVC { %log; %orig; }
- (DownloadsPagerVC *)parentVC { %log; DownloadsPagerVC * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAllDownloaded:(NSMutableArray *)allDownloaded { %log; %orig; }
- (NSMutableArray *)allDownloaded { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSearchedDownloaded:(NSMutableArray *)searchedDownloaded { %log; %orig; }
- (NSMutableArray *)searchedDownloaded { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithParentVC:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initAllWithParentVC:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initAudiosWithParentVC:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initVideosWithParentVC:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)initShortsWithParentVC:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)reloadDownloadedVC { %log; %orig; }
-(void)reloadTable { %log; %orig; }
-(void)loadDownloaded { %log; %orig; }
-(id)metadataKey:(id)arg0 atIndex:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateSearchResultsForKey:(id)arg0  { %log; %orig; }
-(BOOL)shouldHideCell { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)shouldHideApplicationSpecifiers { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)prepareMusicCell:(id)arg0 atIndexPath:(id)arg1  { %log; %orig; }
-(void)enableEditing:(id)arg0  { %log; %orig; }
-(void)selectedCellsOptions { %log; %orig; }
-(void)play:(id)arg0  { %log; %orig; }
-(void)pause:(id)arg0  { %log; %orig; }
-(void)playVideo:(id)arg0  { %log; %orig; }
-(id)createTmpLinkURLToFileAtPath:(id)arg0 withName:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)cellOptionsButton:(id)arg0  { %log; %orig; }
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1  { %log; %orig; }
-(id)convertDateFormate:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook DownloadingCell
- (void)setInfoButton:(DownloadingInfoButton *)infoButton { %log; %orig; }
- (DownloadingInfoButton *)infoButton { %log; DownloadingInfoButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSecondaryInfoButton:(DownloadingInfoButton *)secondaryInfoButton { %log; %orig; }
- (DownloadingInfoButton *)secondaryInfoButton { %log; DownloadingInfoButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setConversionInfo:(DownloadingConversionInfo *)conversionInfo { %log; %orig; }
- (DownloadingConversionInfo *)conversionInfo { %log; DownloadingConversionInfo * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAlbumImageView:(UIImageView *)albumImageView { %log; %orig; }
- (UIImageView *)albumImageView { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTitle:(__MarqueeLabel *)title { %log; %orig; }
- (__MarqueeLabel *)title { %log; __MarqueeLabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTypeAndQuality:(UILabel *)typeAndQuality { %log; %orig; }
- (UILabel *)typeAndQuality { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setAVideoImage:(UIImageView *)aVideoImage { %log; %orig; }
- (UIImageView *)aVideoImage { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDownloadingVC:(DownloadingVC *)downloadingVC { %log; %orig; }
- (DownloadingVC *)downloadingVC { %log; DownloadingVC * r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateCellInfo { %log; %orig; }
-(void)updateAlbumeImageView { %log; %orig; }
-(void)updateProgressWithNotification:(id)arg0  { %log; %orig; }
-(void)updateProgressForInfoButton:(id)arg0 downloadItem:(id)arg1  { %log; %orig; }
-(void)updateConversionProgress { %log; %orig; }
-(void)setPlaceholderImage { %log; %orig; }
-(void)cellOptionsButton { %log; %orig; }
%end
%hook DownloadingConversionInfo
- (void)setProgressLabel:(UILabel *)progressLabel { %log; %orig; }
- (UILabel *)progressLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setStatusLabel:(__MarqueeLabel *)statusLabel { %log; %orig; }
- (__MarqueeLabel *)statusLabel { %log; __MarqueeLabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setProgressBar:(UIProgressView *)progressBar { %log; %orig; }
- (UIProgressView *)progressBar { %log; UIProgressView * r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook DownloadingInfoButton
- (void)setDownloadIcon:(UIImageView *)downloadIcon { %log; %orig; }
- (UIImageView *)downloadIcon { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSizeLabel:(UILabel *)sizeLabel { %log; %orig; }
- (UILabel *)sizeLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSpeedAndProgressLabel:(UILabel *)speedAndProgressLabel { %log; %orig; }
- (UILabel *)speedAndProgressLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTimeLabel:(UILabel *)timeLabel { %log; %orig; }
- (UILabel *)timeLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initForAudio:(BOOL)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)updateLabelsForProgress:(id)arg0 tintColor:(id)arg1 statusLabel:(id)arg2  { %log; %orig; }
%end
%hook DownloadingVC
- (void)setDownloadItemsArray:(NSArray *)downloadItemsArray { %log; %orig; }
- (NSArray *)downloadItemsArray { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPauseChar:(NSString *)pauseChar { %log; %orig; }
- (NSString *)pauseChar { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setResumeChar:(NSString *)resumeChar { %log; %orig; }
- (NSString *)resumeChar { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(void)reloadVC { %log; %orig; }
-(void)prepareDownloadCell:(id)arg0 atIndexPath:(id)arg1  { %log; %orig; }
-(void)cancelDownload:(id)arg0  { %log; %orig; }
-(id)findIndexPathForView:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)onStartIndividualDownload:(id)arg0  { %log; %orig; }
-(void)onCancelIndividualDownload:(id)arg0  { %log; %orig; }
-(void)onPauseResumeIndividualDownload:(id)arg0  { %log; %orig; }
-(void)cancelDownloadWithIdentifier:(id)arg0  { %log; %orig; }
-(void)pauseDownloadWithIdentifier:(id)arg0  { %log; %orig; }
-(void)resumeDownloadWithIdentifier:(id)arg0  { %log; %orig; }
%end
%hook DownloadsPagerVC
- (void)setViewControllers:(NSArray *)viewControllers { %log; %orig; }
- (NSArray *)viewControllers { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTagTitles:(NSArray *)tagTitles { %log; %orig; }
- (NSArray *)tagTitles { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFullfillTabs:(BOOL)fullfillTabs { %log; %orig; }
- (BOOL)fullfillTabs { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setDefaultTabButtons:(UIView *)defaultTabButtons { %log; %orig; }
- (UIView *)defaultTabButtons { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setEditingTabButtons:(UIView *)editingTabButtons { %log; %orig; }
- (UIView *)editingTabButtons { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
-(void)model { %log; %orig; }
-(NSUInteger)numberOfTabsForViewPager:(id)arg0  { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(id)viewPager:(id)arg0 viewForTabIndex:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)viewPager:(id)arg0 contentViewControllerForTabAtIndex:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)viewPager:(id)arg0 didChangeTabToIndex:(NSUInteger)arg1 fromTabIndex:(NSUInteger)arg2  { %log; %orig; }
-(void)viewPager:(id)arg0 willChangeTabToIndex:(NSUInteger)arg1 fromTabIndex:(NSUInteger)arg2 withTransitionProgress:(CGFloat)arg3  { %log; %orig; }
-(CGFloat)viewPager:(id)arg0 widthForTabIndex:(NSUInteger)arg1  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)tabsFulFillToScreenWidthInset { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)estimateTabsWidthInView { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)screenleftWidthForTabs { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(BOOL)isTabsWidthGreaterThanScreenWidth { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)updateSearchResultsForSearchController:(id)arg0  { %log; %orig; }
-(void)settingsVC { %log; %orig; }
-(void)tweet { %log; %orig; }
-(void)showSearch { %log; %orig; }
-(void)sorting:(id)arg0  { %log; %orig; }
-(void)cancelEditingVC { %log; %orig; }
-(void)cancelEditingVCForIndex:(NSUInteger)arg0  { %log; %orig; }
%end
%hook GLViewPagerViewController
- (void)setContentViewControllers:(NSMutableArray *)contentViewControllers { %log; %orig; }
- (NSMutableArray *)contentViewControllers { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setContentViews:(NSMutableArray *)contentViews { %log; %orig; }
- (NSMutableArray *)contentViews { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTabContentView:(UIScrollView *)tabContentView { %log; %orig; }
- (UIScrollView *)tabContentView { %log; UIScrollView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTabViews:(NSMutableArray *)tabViews { %log; %orig; }
- (NSMutableArray *)tabViews { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIndicatorView:(UIView *)indicatorView { %log; %orig; }
- (UIView *)indicatorView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPageViewController:(UIPageViewController *)pageViewController { %log; %orig; }
- (UIPageViewController *)pageViewController { %log; UIPageViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHeaderView:(UIView *)headerView { %log; %orig; }
- (UIView *)headerView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDataSource:(NSObject<GLViewPagerViewControllerDataSource> *)dataSource { %log; %orig; }
- (NSObject<GLViewPagerViewControllerDataSource> *)dataSource { %log; NSObject<GLViewPagerViewControllerDataSource> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setDelegate:(NSObject<GLViewPagerViewControllerDelegate> *)delegate { %log; %orig; }
- (NSObject<GLViewPagerViewControllerDelegate> *)delegate { %log; NSObject<GLViewPagerViewControllerDelegate> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setIndicatorColor:(UIColor *)indicatorColor { %log; %orig; }
- (UIColor *)indicatorColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTabFontDefault:(UIFont *)tabFontDefault { %log; %orig; }
- (UIFont *)tabFontDefault { %log; UIFont * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTabFontSelected:(UIFont *)tabFontSelected { %log; %orig; }
- (UIFont *)tabFontSelected { %log; UIFont * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTabTextColorDefault:(UIColor *)tabTextColorDefault { %log; %orig; }
- (UIColor *)tabTextColorDefault { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTabTextColorSelected:(UIColor *)tabTextColorSelected { %log; %orig; }
- (UIColor *)tabTextColorSelected { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFixTabWidth:(BOOL)fixTabWidth { %log; %orig; }
- (BOOL)fixTabWidth { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setTabWidth:(CGFloat)tabWidth { %log; %orig; }
- (CGFloat)tabWidth { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setTabHeight:(CGFloat)tabHeight { %log; %orig; }
- (CGFloat)tabHeight { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setIndicatorHeight:(CGFloat)indicatorHeight { %log; %orig; }
- (CGFloat)indicatorHeight { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setIndicatorWidth:(CGFloat)indicatorWidth { %log; %orig; }
- (CGFloat)indicatorWidth { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setFixIndicatorWidth:(BOOL)fixIndicatorWidth { %log; %orig; }
- (BOOL)fixIndicatorWidth { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setPadding:(CGFloat)padding { %log; %orig; }
- (CGFloat)padding { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setLeadingPadding:(CGFloat)leadingPadding { %log; %orig; }
- (CGFloat)leadingPadding { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setTrailingPadding:(CGFloat)trailingPadding { %log; %orig; }
- (CGFloat)trailingPadding { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setDefaultDisplayPageIndex:(NSUInteger)defaultDisplayPageIndex { %log; %orig; }
- (NSUInteger)defaultDisplayPageIndex { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setAnimationTabDuration:(CGFloat)animationTabDuration { %log; %orig; }
- (CGFloat)animationTabDuration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setTabAnimationType:(NSUInteger)tabAnimationType { %log; %orig; }
- (NSUInteger)tabAnimationType { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setSupportArabic:(BOOL)supportArabic { %log; %orig; }
- (BOOL)supportArabic { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setCurrentPageIndex:(NSUInteger)currentPageIndex { %log; %orig; }
- (NSUInteger)currentPageIndex { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(void)viewWillLayoutSubviews { %log; %orig; }
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3  { %log; %orig; }
-(void)scrollViewWillBeginDragging:(id)arg0  { %log; %orig; }
-(void)scrollViewDidEndDecelerating:(id)arg0  { %log; %orig; }
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2  { %log; %orig; }
-(void)tapInTabView:(id)arg0  { %log; %orig; }
-(void)defaultSetup { %log; %orig; }
-(void)reloadData { %log; %orig; }
-(id)tabViewAtIndex:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_selectTab:(NSUInteger)arg0 animate:(BOOL)arg1  { %log; %orig; }
-(void)_setNeedsReload { %log; %orig; }
-(void)_reloadDataIfNeed { %log; %orig; }
-(void)_layoutSubviews { %log; %orig; }
-(void)_setActiveTabIndex:(NSUInteger)arg0  { %log; %orig; }
-(void)_setActivePageIndex:(NSUInteger)arg0  { %log; %orig; }
-(CGFloat)_getTabWidthAtIndex:(NSUInteger)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(struct CGRect )_caculateIndicatorViewFrame:(NSUInteger)arg0  { %log; struct CGRect  r = %orig; return r; }
-(void)_caculateTabOffsetWidth:(NSUInteger)arg0  { %log; %orig; }
-(void)_disableViewPagerScroll { %log; %orig; }
-(void)_enableViewPagerScroll { %log; %orig; }
%end
%hook xYouImportVC
- (void)setImport:(FRPreferences *)import { %log; %orig; }
- (FRPreferences *)import { %log; FRPreferences * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithTitle:(id)arg0 artist:(id)arg1 artworkImage:(id)arg2 filePath:(id)arg3 isAudio:(BOOL)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)changeArtwork { %log; %orig; }
-(void)dismissVC { %log; %orig; }
-(void)startImporting { %log; %orig; }
%end
%hook PlayerManager
- (void)setCurrentArtwork:(UIImage *)currentArtwork { %log; %orig; }
- (UIImage *)currentArtwork { %log; UIImage * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPlayer:(AVPlayer *)player { %log; %orig; }
- (AVPlayer *)player { %log; AVPlayer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setVideoPlayer:(AVPlayer *)videoPlayer { %log; %orig; }
- (AVPlayer *)videoPlayer { %log; AVPlayer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPlayerViewController:(AVPlayerViewController *)playerViewController { %log; %orig; }
- (AVPlayerViewController *)playerViewController { %log; AVPlayerViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSource:(DownloadedVC *)source { %log; %orig; }
- (DownloadedVC *)source { %log; DownloadedVC * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCurrentPlayingPath:(NSString *)currentPlayingPath { %log; %orig; }
- (NSString *)currentPlayingPath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRepeatStatus:(int)repeatStatus { %log; %orig; }
- (int)repeatStatus { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (void)setShuffleStatus:(BOOL)shuffleStatus { %log; %orig; }
- (BOOL)shuffleStatus { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setYtMediaTime:(CGFloat)ytMediaTime { %log; %orig; }
- (CGFloat)ytMediaTime { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setPlayed:(NSMutableArray *)played { %log; %orig; }
- (NSMutableArray *)played { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
-(void)audioHardwareRouteChanged:(id)arg0  { %log; %orig; }
-(void)setUpCommandCenter { %log; %orig; }
-(id)currentMetadataForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(int)currentPlayingIndex { %log; int r = %orig; NSLog(@" = %d", r); return r; }
-(id)allDownloaded { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)playSongAtIndex:(int)arg0 source:(id)arg1  { %log; %orig; }
-(void)playSongAtIndex:(int)arg0  { %log; %orig; }
-(void)playSongAtPath:(id)arg0 source:(id)arg1  { %log; %orig; }
-(void)playSongAtPath:(id)arg0  { %log; %orig; }
-(void)playVideoAtPath:(id)arg0 forVC:(id)arg1  { %log; %orig; }
-(void)playerViewController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1  { %log; %orig; }
-(void)next { %log; %orig; }
-(void)previous { %log; %orig; }
-(void)setMetadataForCurrentIndex { %log; %orig; }
-(void)setMetadataForIndex:(int)arg0  { %log; %orig; }
-(void)updateElapsedPlaybackTime { %log; %orig; }
-(NSInteger)changedScrubber:(id)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(float)duration { %log; float r = %orig; NSLog(@" = %f", r); return r; }
-(float)currentTime { %log; float r = %orig; NSLog(@" = %f", r); return r; }
-(void)setCurrentTime:(CGFloat)arg0  { %log; %orig; }
-(id)timeStringFromSeconds:(int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setAudioSessionActive { %log; %orig; }
-(void)setShuffle:(BOOL)arg0  { %log; %orig; }
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1  { %log; %orig; }
%end
%hook ArtworkImageView
- (void)setImageView:(UIImageView *)imageView { %log; %orig; }
%end
%hook PlayerVC
- (void)setPlayButton:(UIBarButtonItem *)playButton { %log; %orig; }
- (UIBarButtonItem *)playButton { %log; UIBarButtonItem * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setNextButton:(UIBarButtonItem *)nextButton { %log; %orig; }
- (UIBarButtonItem *)nextButton { %log; UIBarButtonItem * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPreviousButton:(UIBarButtonItem *)previousButton { %log; %orig; }
- (UIBarButtonItem *)previousButton { %log; UIBarButtonItem * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCloseButton:(UIBarButtonItem *)closeButton { %log; %orig; }
- (UIBarButtonItem *)closeButton { %log; UIBarButtonItem * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setArtworkImageView:(ArtworkImageView *)artworkImageView { %log; %orig; }
- (ArtworkImageView *)artworkImageView { %log; ArtworkImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSlider:(UISlider *)slider { %log; %orig; }
- (UISlider *)slider { %log; UISlider * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLyricsView:(UITextView *)lyricsView { %log; %orig; }
- (UITextView *)lyricsView { %log; UITextView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLyricsButton:(SSBouncyButton *)lyricsButton { %log; %orig; }
- (SSBouncyButton *)lyricsButton { %log; SSBouncyButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPlayPlayerButton:(UIButton *)playPlayerButton { %log; %orig; }
- (UIButton *)playPlayerButton { %log; UIButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setNextPlayerButton:(UIButton *)nextPlayerButton { %log; %orig; }
- (UIButton *)nextPlayerButton { %log; UIButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPreviousPlayerButton:(UIButton *)previousPlayerButton { %log; %orig; }
- (UIButton *)previousPlayerButton { %log; UIButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRepeatPlayerButton:(UIButton *)repeatPlayerButton { %log; %orig; }
- (UIButton *)repeatPlayerButton { %log; UIButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setShufflePlayerButton:(UIButton *)shufflePlayerButton { %log; %orig; }
- (UIButton *)shufflePlayerButton { %log; UIButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTotalSongs:(__MarqueeLabel *)totalSongs { %log; %orig; }
- (__MarqueeLabel *)totalSongs { %log; __MarqueeLabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSongTitle:(__MarqueeLabel *)songTitle { %log; %orig; }
- (__MarqueeLabel *)songTitle { %log; __MarqueeLabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCurrentTime:(UILabel *)currentTime { %log; %orig; }
- (UILabel *)currentTime { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTotalTime:(UILabel *)totalTime { %log; %orig; }
- (UILabel *)totalTime { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIsScrubbing:(BOOL)isScrubbing { %log; %orig; }
- (BOOL)isScrubbing { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setIsShowingLyricsView:(BOOL)isShowingLyricsView { %log; %orig; }
- (BOOL)isShowingLyricsView { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1  { %log; %orig; }
-(void)_setPopupItemButtonsWithTraitCollection:(id)arg0  { %log; %orig; }
-(BOOL)prefersStatusBarHidden { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(NSInteger)preferredStatusBarUpdateAnimation { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)repeat { %log; %orig; }
-(void)shuffle { %log; %orig; }
-(void)updatePlayer { %log; %orig; }
-(void)sliderValueChanged:(id)arg0 forEvent:(id)arg1  { %log; %orig; }
-(void)optionButton:(id)arg0  { %log; %orig; }
-(void)getLyricsButton:(id)arg0  { %log; %orig; }
-(BOOL)textViewShouldBeginEditing:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)isRTL { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook BRYSerialAnimationQueue
- (void)setQueue:(NSObject<OS_dispatch_queue> *)queue { %log; %orig; }
- (NSObject<OS_dispatch_queue> *)queue { %log; NSObject<OS_dispatch_queue> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setSemaphore:(NSObject<OS_dispatch_semaphore> *)semaphore { %log; %orig; }
- (NSObject<OS_dispatch_semaphore> *)semaphore { %log; NSObject<OS_dispatch_semaphore> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(void)animateWithDuration:(CGFloat)arg0 animations:(id)arg1  { %log; %orig; }
-(void)performAnimationsSerially:(id)arg0  { %log; %orig; }
%end
%hook LottieHolder
%end
%hook PKYStepper
- (void)setCountLabel:(UILabel *)countLabel { %log; %orig; }
- (UILabel *)countLabel { %log; UILabel * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLabelColor:(UIColor *)labelColor { %log; %orig; }
- (UIColor *)labelColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIncrementButton:(UIButton *)incrementButton { %log; %orig; }
- (UIButton *)incrementButton { %log; UIButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setDecrementButton:(UIButton *)decrementButton { %log; %orig; }
- (UIButton *)decrementButton { %log; UIButton * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setValue:(float)value { %log; %orig; }
- (float)value { %log; float r = %orig; NSLog(@" = %f", r); return r; }
- (void)setStepInterval:(float)stepInterval { %log; %orig; }
- (float)stepInterval { %log; float r = %orig; NSLog(@" = %f", r); return r; }
- (void)setMinimum:(float)minimum { %log; %orig; }
- (float)minimum { %log; float r = %orig; NSLog(@" = %f", r); return r; }
- (void)setMaximum:(float)maximum { %log; %orig; }
- (float)maximum { %log; float r = %orig; NSLog(@" = %f", r); return r; }
- (void)setHidesDecrementWhenMinimum:(BOOL)hidesDecrementWhenMinimum { %log; %orig; }
- (BOOL)hidesDecrementWhenMinimum { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setHidesIncrementWhenMaximum:(BOOL)hidesIncrementWhenMaximum { %log; %orig; }
- (BOOL)hidesIncrementWhenMaximum { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setButtonWidth:(CGFloat)buttonWidth { %log; %orig; }
- (CGFloat)buttonWidth { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setValueChangedCallback:(id *)valueChangedCallback { %log; %orig; }
- (id *)valueChangedCallback { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setIncrementCallback:(id *)incrementCallback { %log; %orig; }
- (id *)incrementCallback { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setDecrementCallback:(id *)decrementCallback { %log; %orig; }
- (id *)decrementCallback { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
-(void)setBorderColor:(id)arg0  { %log; %orig; }
-(void)setBorderWidth:(CGFloat)arg0  { %log; %orig; }
-(void)setCornerRadius:(CGFloat)arg0  { %log; %orig; }
-(void)setLabelTextColor:(id)arg0  { %log; %orig; }
-(void)setLabelFont:(id)arg0  { %log; %orig; }
-(void)setButtonTextColor:(id)arg0 forState:(NSUInteger)arg1  { %log; %orig; }
-(void)setButtonFont:(id)arg0  { %log; %orig; }
-(void)incrementButtonTapped:(id)arg0  { %log; %orig; }
-(void)decrementButtonTapped:(id)arg0  { %log; %orig; }
-(BOOL)isMinimum { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)isMaximum { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
%end
%hook SSBouncyButton
- (void)setTouchDelayTimer:(NSTimer *)touchDelayTimer { %log; %orig; }
- (NSTimer *)touchDelayTimer { %log; NSTimer * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setIsShrinking:(BOOL)isShrinking { %log; %orig; }
- (BOOL)isShrinking { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setIsShrinked:(BOOL)isShrinked { %log; %orig; }
- (BOOL)isShrinked { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setTouchEnded:(BOOL)touchEnded { %log; %orig; }
- (BOOL)touchEnded { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1  { %log; %orig; }
-(void)updateBackgroundImage { %log; %orig; }
-(void)beginShrinkAnimation { %log; %orig; }
-(void)beginEnlargeAnimation { %log; %orig; }
%end
%hook SettingsVC
- (void)setPreferences:(FRPreferences *)preferences { %log; %orig; }
- (FRPreferences *)preferences { %log; FRPreferences * r = %orig; NSLog(@" = %@", r); return r; }
-(void)clearAll { %log; %orig; }
%end
%hook boolSettingsVC
-(id)initWithTitle:(id)arg0 sections:(id)arg1 footer:(id)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook settingsReorderTable
- (void)setDefaultValues:(NSArray *)defaultValues { %log; %orig; }
- (NSArray *)defaultValues { %log; NSArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setCurrentValues:(NSMutableArray *)currentValues { %log; %orig; }
- (NSMutableArray *)currentValues { %log; NSMutableArray * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setHeader:(NSString *)header { %log; %orig; }
- (NSString *)header { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFooter:(NSString *)footer { %log; %orig; }
- (NSString *)footer { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)initWithTitle:(id)arg0 items:(id)arg1 defaultValues:(id)arg2 key:(id)arg3 header:(id)arg4 footer:(id)arg5  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)save { %log; %orig; }
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2  { %log; %orig; }
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
%end
%hook xYouCheckUpdate
-(id)initWithTweakName:(id)arg0 tweakID:(id)arg1 version:(id)arg2 message:(id)arg3 tintColor:(id)arg4 showAllButtons:(BOOL)arg5  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)dontShow { %log; %orig; }
-(void)updateAction { %log; %orig; }
%end
%hook xYouInViewGesture
- (void)setIsStarted:(BOOL)isStarted { %log; %orig; }
- (BOOL)isStarted { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setCurrentPoint:(NSUInteger)currentPoint { %log; %orig; }
- (NSUInteger)currentPoint { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setPreviousPoint:(NSUInteger)previousPoint { %log; %orig; }
- (NSUInteger)previousPoint { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setStartedScale:(CGFloat)startedScale { %log; %orig; }
- (CGFloat)startedScale { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setGestureSpeed:(NSUInteger)gestureSpeed { %log; %orig; }
- (NSUInteger)gestureSpeed { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setCurrentLayout:(id *)currentLayout { %log; %orig; }
- (id *)currentLayout { %log; id * r = %orig; NSLog(@" = %p", r); return r; }
- (void)setStartedPoint:(NSUInteger)startedPoint { %log; %orig; }
- (NSUInteger)startedPoint { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setTargetHeight:(NSUInteger)targetHeight { %log; %orig; }
- (NSUInteger)targetHeight { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
-(BOOL)isMovingToLeft { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)isMovingToRight { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)started { %log; %orig; }
%end
%hook xYouMigrating
-(id)initWithTitle:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)copyAllCercube { %log; %orig; }
-(void)moveAllCercube { %log; %orig; }
-(void)copyAllDLEasy { %log; %orig; }
-(void)moveAllDLEasy { %log; %orig; }
-(void)moveAllDownloadsFromCercube:(BOOL)arg0  { %log; %orig; }
-(void)moveAllDownloadsFromDLEasy:(BOOL)arg0  { %log; %orig; }
%end
%hook xYouPanGestureRecognizer
- (void)setInitialLocationOnScreen:(CGPoint)initialLocationOnScreen { %log; %orig; }
- (CGPoint)initialLocationOnScreen { %log; CGPoint r = %orig; NSLog(@" = {%g, %g}", r.x, r.y); return r; }
- (void)setInitialScale:(CGFloat)initialScale { %log; %orig; }
- (CGFloat)initialScale { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setPressedLongEnough:(BOOL)pressedLongEnough { %log; %orig; }
- (BOOL)pressedLongEnough { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setVerticalDirection:(BOOL)verticalDirection { %log; %orig; }
- (BOOL)verticalDirection { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setNumberOfTapsRequired:(NSUInteger)numberOfTapsRequired { %log; %orig; }
- (NSUInteger)numberOfTapsRequired { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setNumberOfTouchesRequired:(NSUInteger)numberOfTouchesRequired { %log; %orig; }
- (NSUInteger)numberOfTouchesRequired { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setAreas:(NSUInteger)areas { %log; %orig; }
- (NSUInteger)areas { %log; NSUInteger r = %orig; NSLog(@" = %lu", (unsigned long)r); return r; }
- (void)setMinimumPressDuration:(CGFloat)minimumPressDuration { %log; %orig; }
- (CGFloat)minimumPressDuration { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setActivateAfter:(CGFloat)activateAfter { %log; %orig; }
- (CGFloat)activateAfter { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setScaleFactor:(CGFloat)scaleFactor { %log; %orig; }
- (CGFloat)scaleFactor { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setBouncesScale:(BOOL)bouncesScale { %log; %orig; }
- (BOOL)bouncesScale { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setMinimumScale:(CGFloat)minimumScale { %log; %orig; }
- (CGFloat)minimumScale { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setMaximumScale:(CGFloat)maximumScale { %log; %orig; }
- (CGFloat)maximumScale { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)screenLocationXOfTouch:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)screenLocationYOfTouch:(id)arg0  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)zoomRubberBandScaleForZoomScale:(CGFloat)arg0 minimumZoomScale:(CGFloat)arg1 maximumZoomScale:(CGFloat)arg2  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)zoomScaleForRubberBandScale:(CGFloat)arg0 minimumZoomScale:(CGFloat)arg1 maximumZoomScale:(CGFloat)arg2  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
%end
%hook xYouWelcome
- (void)setTitleText:(NSString *)titleText { %log; %orig; }
- (NSString *)titleText { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSubtitleText:(NSString *)subtitleText { %log; %orig; }
- (NSString *)subtitleText { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setItem_one_title:(NSString *)item_one_title { %log; %orig; }
- (NSString *)item_one_title { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setItem_one_description:(NSString *)item_one_description { %log; %orig; }
- (NSString *)item_one_description { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setItem_two_title:(NSString *)item_two_title { %log; %orig; }
- (NSString *)item_two_title { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setItem_two_description:(NSString *)item_two_description { %log; %orig; }
- (NSString *)item_two_description { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setItem_three_title:(NSString *)item_three_title { %log; %orig; }
- (NSString *)item_three_title { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setItem_three_description:(NSString *)item_three_description { %log; %orig; }
- (NSString *)item_three_description { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setButtonTitle:(NSString *)buttonTitle { %log; %orig; }
- (NSString *)buttonTitle { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setButtonCaption:(NSString *)buttonCaption { %log; %orig; }
- (NSString *)buttonCaption { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPackage_ID:(NSString *)package_ID { %log; %orig; }
- (NSString *)package_ID { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBundle_Name:(NSString *)bundle_Name { %log; %orig; }
- (NSString *)bundle_Name { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(void)dismissWelcomeController { %log; %orig; }
-(void)openTwitterForUser:(id)arg0  { %log; %orig; }
-(void)openTwitter { %log; %orig; }
%end
%hook UIView
- (NSURL *)sd_imageURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)sd_latestOperationKey { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSd_imageProgress:(NSProgress *)sd_imageProgress { %log; %orig; }
- (NSProgress *)sd_imageProgress { %log; NSProgress * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSd_imageTransition:(SDWebImageTransition *)sd_imageTransition { %log; %orig; }
- (SDWebImageTransition *)sd_imageTransition { %log; SDWebImageTransition * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setSd_imageIndicator:(NSObject<SDWebImageIndicator> *)sd_imageIndicator { %log; %orig; }
- (NSObject<SDWebImageIndicator> *)sd_imageIndicator { %log; NSObject<SDWebImageIndicator> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
-(id)sd_operationDictionary { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_imageLoadOperationForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)sd_setImageLoadOperation:(id)arg0 forKey:(id)arg1  { %log; %orig; }
-(void)sd_cancelImageLoadOperationWithKey:(id)arg0  { %log; %orig; }
-(void)sd_removeImageLoadOperationWithKey:(id)arg0  { %log; %orig; }
-(id)sd_imageURL { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setSd_imageURL:(id)arg0  { %log; %orig; }
-(id)sd_latestOperationKey { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setSd_latestOperationKey:(id)arg0  { %log; %orig; }
-(id)sd_imageProgress { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setSd_imageProgress:(id)arg0  { %log; %orig; }
-(void)sd_internalSetImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 setImageBlock:(id)arg4 progress:(unk)arg5 completed:(id)arg6  { %log; %orig; }
-(void)sd_cancelCurrentImageLoad { %log; %orig; }
-(void)sd_setImage:(id)arg0 imageData:(id)arg1 basedOnClassOrViaCustomSetImageBlock:(id)arg2 cacheType:(unk)arg3 imageURL:(NSInteger)arg4  { %log; %orig; }
-(void)sd_setImage:(id)arg0 imageData:(id)arg1 basedOnClassOrViaCustomSetImageBlock:(id)arg2 transition:(unk)arg3 cacheType:(id)arg4 imageURL:(NSInteger)arg5  { %log; %orig; }
-(void)sd_setNeedsLayout { %log; %orig; }
-(id)sd_imageTransition { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setSd_imageTransition:(id)arg0  { %log; %orig; }
-(id)sd_imageIndicator { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setSd_imageIndicator:(id)arg0  { %log; %orig; }
-(void)sd_startImageIndicator { %log; %orig; }
-(void)sd_stopImageIndicator { %log; %orig; }
-(id)firstAvailableViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)traverseResponderChainForFirstViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)firstAvailableUIViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)traverseResponderChainForUIViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook UIImage
- (void)setSd_extendedObject:(NSObject<NSObject><NSCoding> *)sd_extendedObject { %log; %orig; }
- (NSObject<NSObject><NSCoding> *)sd_extendedObject { %log; NSObject<NSObject><NSCoding> * r = %orig; NSLog(@" = 0x%llx", (uint64_t)r); return r; }
- (void)setSd_isDecoded:(BOOL)sd_isDecoded { %log; %orig; }
- (BOOL)sd_isDecoded { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setSd_memoryCost:(NSUInteger)sd_memoryCost { %log; %orig; }
- (void)setSd_imageLoopCount:(NSUInteger)sd_imageLoopCount { %log; %orig; }
- (void)setSd_imageFormat:(NSInteger)sd_imageFormat { %log; %orig; }
- (void)setSd_isIncremental:(BOOL)sd_isIncremental { %log; %orig; }
- (BOOL)sd_isIncremental { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)crop:(struct CGRect )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)tintedImageWithColor:(id)arg0 style:(int)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageWithRoundedBounds { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageWithCornerRadius:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageWithCornerInset:(struct __UICornerInset )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)isValidCornerInset:(struct __UICornerInset )arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)imageAddingImage:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)imageAddingImage:(id)arg0 offset:(struct CGPoint )arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)sd_drawInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 scaleMode:(NSUInteger)arg2 clipsToBounds:(BOOL)arg3  { %log; %orig; }
-(id)sd_resizedImageWithSize:(struct CGSize )arg0 scaleMode:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_croppedImageWithRect:(struct CGRect )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_roundedCornerImageWithRadius:(CGFloat)arg0 corners:(NSUInteger)arg1 borderWidth:(CGFloat)arg2 borderColor:(id)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_rotatedImageWithAngle:(CGFloat)arg0 fitSize:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_flippedImageWithHorizontal:(BOOL)arg0 vertical:(BOOL)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_tintedImageWithColor:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_colorAtPoint:(struct CGPoint )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_colorsWithRect:(struct CGRect )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_blurredImageWithRadius:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_filteredImageWithFilter:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setSd_isIncremental:(BOOL)arg0  { %log; %orig; }
-(void)setSd_memoryCost:(NSUInteger)arg0  { %log; %orig; }
-(void)setSd_isDecoded:(BOOL)arg0  { %log; %orig; }
-(id)sd_extendedObject { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setSd_extendedObject:(id)arg0  { %log; %orig; }
+(id)imageWithColor:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageWithColor:(id)arg0 size:(struct CGSize )arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageWithColor:(id)arg0 borderAttributes:(id)arg1 size:(struct CGSize )arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageWithColor:(id)arg0 borderAttributes:(id)arg1 size:(struct CGSize )arg2 cornerRadius:(CGFloat)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageWithColor:(id)arg0 borderAttributes:(id)arg1 size:(struct CGSize )arg2 cornerInset:(struct __UICornerInset )arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)resizableImageWithColor:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)resizableImageWithColor:(id)arg0 cornerRadius:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)resizableImageWithColor:(id)arg0 borderAttributes:(id)arg1 cornerRadius:(CGFloat)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)resizableImageWithColor:(id)arg0 borderAttributes:(id)arg1 cornerInset:(struct __UICornerInset )arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)blackColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)darkGrayColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)lightGrayColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)whiteColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)grayColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)redColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)greenColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)blueColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)cyanColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)yellowColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)magentaColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)orangeColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)purpleColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)brownColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)clearColorImage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageNamed:(id)arg0 tintColor:(id)arg1 style:(int)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)_cache { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)_cachedImageWithDescriptors:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(void)_cacheImage:(id)arg0 withDescriptors:(id)arg1  { %log; %orig; }
+(id)_keyForImageWithDescriptors:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)_imageWithColor:(id)arg0 size:(struct CGSize )arg1 cornerInset:(struct __UICornerInset )arg2 saveInCache:(BOOL)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)_imageWithColor:(id)arg0 borderAttributes:(id)arg1 size:(struct CGSize )arg2 cornerInset:(struct __UICornerInset )arg3 saveInCache:(BOOL)arg4  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)imageWithGradient:(id)arg0 size:(struct CGSize )arg1 direction:(int)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)resizableImageWithGradient:(id)arg0 size:(struct CGSize )arg1 direction:(int)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)sd_imageWithGIFData:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)sd_decodedImageWithImage:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)sd_decodedAndScaledDownImageWithImage:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)sd_decodedAndScaledDownImageWithImage:(id)arg0 limitBytes:(NSUInteger)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)af_safeImageWithData:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook CAMediaTimingFunction
-(CGFloat)durationPercentageForPositionPercentage:(CGFloat)arg0 withDuration:(CGFloat)arg1  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)solveTForY:(CGFloat)arg0 withEpsilon:(CGFloat)arg1 controlPoints:(id)arg2  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)YforCurveAt:(CGFloat)arg0 withControlPoints:(id)arg1  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)XforCurveAt:(CGFloat)arg0 withControlPoints:(id)arg1  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(CGFloat)derivativeYValueForCurveAt:(CGFloat)arg0 withControlPoints:(id)arg1  { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(id)controlPoints { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook NSObject
-(id)__ln_valueForKey:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook UIContextMenuInteraction
-(id)_ln_d_pFHFC:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_d_cMIWEFC:(id)arg0 p:(id)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook UIView
-(void)_ln__dMFW:(id)arg0 tW:(id)arg1  { %log; %orig; }
-(void)_ln_setNotifying:(BOOL)arg0  { %log; %orig; }
-(BOOL)_ln_isNotifying { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_ln_notify { %log; %orig; }
-(void)_ln_letMeKnowWhenViewInWindowHierarchy:(id)arg0  { %log; %orig; }
-(void)_ln_forgetAboutIt { %log; %orig; }
-(id)_effectGroupingIdentifierIfAvailable { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook UIViewController
- (LNPopupController *)_ln_popupController { %log; LNPopupController * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setPopupPresentationContainerViewController:(UIViewController *)popupPresentationContainerViewController { %log; %orig; }
- (UIViewController *)popupPresentationContainerViewController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (UIViewController *)popupContentViewController { %log; UIViewController * r = %orig; NSLog(@" = %@", r); return r; }
- (_LNPopupBottomBarSupport *)_ln_bottomBarSupport { %log; _LNPopupBottomBarSupport * r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_popupController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_bottomBarSupport_nocreate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_bottomBarSupport { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)bottomDockingViewForPopup_nocreateOrDeveloper { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)bottomDockingViewForPopup_internalOrDeveloper { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)bottomDockingViewForPopupBar { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(struct UIEdgeInsets )insetsForBottomDockingView { %log; struct UIEdgeInsets  r = %orig; return r; }
-(struct CGRect )defaultFrameForBottomDockingView { %log; struct CGRect  r = %orig; return r; }
-(struct CGRect )defaultFrameForBottomDockingView_internal { %log; struct CGRect  r = %orig; return r; }
-(struct CGRect )defaultFrameForBottomDockingView_internalOrDeveloper { %log; struct CGRect  r = %orig; return r; }
-(BOOL)shouldExtendPopupBarUnderSafeArea { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setShouldExtendPopupBarUnderSafeArea:(BOOL)arg0  { %log; %orig; }
-(id)nonMemoryLeakingPresentationController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)presentPopupBarWithContentViewController:(id)arg0 openPopup:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3  { %log; %orig; }
-(void)presentPopupBarWithContentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2  { %log; %orig; }
-(void)updatePopupBarAppearance { %log; %orig; }
-(void)setNeedsPopupBarAppearanceUpdate { %log; %orig; }
-(NSInteger)popupPresentationState { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(id)popupPresentationDelegate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setPopupPresentationDelegate:(id)arg0  { %log; %orig; }
-(BOOL)_isContainedInPopupController { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(BOOL)_isContainedInPopupControllerOrDeallocated { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)setPopupPresentationContainerViewController:(id)arg0  { %log; %orig; }
-(void)setPopupContentViewController:(id)arg0  { %log; %orig; }
-(id)popupItem { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)positionPopupCloseButton:(id)arg0  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)popupBar { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)popupContentView { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(NSInteger)popupInteractionStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)setPopupInteractionStyle:(NSInteger)arg0  { %log; %orig; }
-(id)_ln_popupController_nocreate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)viewForPopupInteractionGestureRecognizer { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)_ln_isInPopupAppearanceTransition { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_ln_beginAppearanceTransition:(BOOL)arg0 animated:(BOOL)arg1  { %log; %orig; }
-(void)_ln_endAppearanceTransition { %log; %orig; }
%end
%hook UIViewController
-(BOOL)_ln_isModalInPresentation { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_ln_popup_setOverrideUserInterfaceStyle:(NSInteger)arg0  { %log; %orig; }
-(void)_ln_setAdditionalSafeAreaInsets:(struct UIEdgeInsets )arg0  { %log; %orig; }
-(void)_ln_setChildAdditiveSafeAreaInsets:(struct UIEdgeInsets )arg0  { %log; %orig; }
-(struct UIEdgeInsets )_ln_additionalSafeAreaInsets { %log; struct UIEdgeInsets  r = %orig; return r; }
-(struct UIEdgeInsets )_ln_popupSafeAreaInsetsForChildController { %log; struct UIEdgeInsets  r = %orig; return r; }
-(void)_ln_sPVC:(id)arg0  { %log; %orig; }
-(void)_ln_presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2  { %log; %orig; }
-(void)_ln_setNeedsStatusBarAppearanceUpdate { %log; %orig; }
-(void)_ln_viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1  { %log; %orig; }
-(void)_ln_willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1  { %log; %orig; }
-(id)_findAncestorParentPopupContainerController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_findChildInPopupPresentation { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_common_childviewControllersForStatusBarLogic { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_common_childViewControllerForStatusBarHidden { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_common_childViewControllerForStatusBarStyle { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_childViewControllerForStatusBarHidden { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_childViewControllerForStatusBarStyle { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_ln_setPopupPresentationState:(NSInteger)arg0  { %log; %orig; }
-(id)_aSTVC { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_common_uLFSBAIO { %log; %orig; }
-(void)_uLFSBAIO { %log; %orig; }
-(struct UIEdgeInsets )_vSAIFS { %log; struct UIEdgeInsets  r = %orig; return r; }
-(BOOL)_vCUSB { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_layoutPopupBarOrderForTransition { %log; %orig; }
-(void)_layoutPopupBarOrderForUse { %log; %orig; }
-(id)_ln_bottomBarExtension_nocreate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)_ln_bottomBarExtension { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_ln_popup_viewDidLayoutSubviews { %log; %orig; }
-(BOOL)_ignoringLayoutDuringTransition { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_setIgnoringLayoutDuringTransition:(BOOL)arg0  { %log; %orig; }
%end
%hook UITabBarController
-(BOOL)_isTabBarHiddenDuringTransition { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_setTabBarHiddenDuringTransition:(BOOL)arg0  { %log; %orig; }
-(BOOL)_isPrepareTabBarIgnored { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)_setPrepareTabBarIgnored:(BOOL)arg0  { %log; %orig; }
-(id)bottomDockingViewForPopup_nocreate { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)_ln_popup_viewDidLayoutSubviews_tvc { %log; %orig; }
-(void)__repositionPopupBarToClosed_hack { %log; %orig; }
-(void)hBWT:(NSInteger)arg0 iE:(BOOL)arg1  { %log; %orig; }
-(void)sBWT:(NSInteger)arg0 iE:(BOOL)arg1  { %log; %orig; }
-(void)_ln_pTB { %log; %orig; }
%end
%hook UINavigationController
-(void)_ln_popup_viewDidLayoutSubviews_nvc { %log; %orig; }
-(void)_sTH:(BOOL)arg0 e:(NSUInteger)arg1 d:(CGFloat)arg2  { %log; %orig; }
-(void)hSNBDS:(id)arg0 f:(id)arg1 c:(id)arg2  { %log; %orig; }
-(void)_ln_setNavigationBarHidden:(BOOL)arg0 animated:(BOOL)arg1  { %log; %orig; }
%end
%hook UISplitViewController
-(void)_ln_popup_viewDidLayoutSubviews_SplitViewNastyApple { %log; %orig; }
%end
%hook UIColor
- (int)colorSpaceModel { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (BOOL)canProvideRGBComponents { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (CGFloat)red { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (CGFloat)green { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (CGFloat)blue { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (CGFloat)white { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (CGFloat)alpha { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (unsigned int)rgbHex { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (NSString *)sd_hexString { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_hexString { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorSpaceString { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_arrayFromRGBAComponents { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(BOOL)LOT_red:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3  { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(id)LOT_colorByLuminanceMapping { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByMultiplyingByRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByAddingRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByLighteningToRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByDarkeningToRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByMultiplyingBy:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByAdding:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByLighteningTo:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByDarkeningTo:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByMultiplyingByColor:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByAddingColor:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByLighteningToColor:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_colorByDarkeningToColor:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_stringFromColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)LOT_hexStringValue { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)colorWithHex:(NSInteger)arg0 alpha:(CGFloat)arg1  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)colorWithHex:(NSInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)whiteColorWithAlpha:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)blackColorWithAlpha:(CGFloat)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)searchForColorByName:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)LOT_colorWithString:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)LOT_randomColor { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)LOT_colorWithRGBHex:(unsigned int)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)LOT_colorWithHexString:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)LOT_colorWithName:(id)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+(id)LOT_colorByLerpingFromColor:(id)arg0 toColor:(id)arg1 amount:(CGFloat)arg2  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook NSData
+(NSInteger)sd_imageFormatForImageData:(id)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
+(struct __CFString *)sd_UTTypeFromImageFormat:(NSInteger)arg0  { %log; struct __CFString * r = %orig; NSLog(@" = %p", r); return r; }
+(NSInteger)sd_imageFormatFromUTType:(struct __CFString *)arg0  { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
%end
%hook NSOperation
%end
%hook UIButton
- (NSURL *)sd_currentImageURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
- (NSURL *)sd_currentBackgroundImageURL { %log; NSURL * r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_currentImageURL { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_imageURLForState:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 context:(id)arg4  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 completed:(id)arg2  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 completed:(id)arg3  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 completed:(id)arg4  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 progress:(id)arg4 completed:(unk)arg5  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 context:(id)arg4 progress:(id)arg5 completed:(unk)arg6  { %log; %orig; }
-(id)sd_currentBackgroundImageURL { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)sd_backgroundImageURLForState:(NSUInteger)arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1  { %log; %orig; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2  { %log; %orig; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3  { %log; %orig; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 context:(id)arg4  { %log; %orig; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 completed:(id)arg2  { %log; %orig; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 completed:(id)arg3  { %log; %orig; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 completed:(id)arg4  { %log; %orig; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 progress:(id)arg4 completed:(unk)arg5  { %log; %orig; }
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 context:(id)arg4 progress:(id)arg5 completed:(unk)arg6  { %log; %orig; }
-(void)sd_cancelImageLoadForState:(NSUInteger)arg0  { %log; %orig; }
-(void)sd_cancelBackgroundImageLoadForState:(NSUInteger)arg0  { %log; %orig; }
-(id)sd_imageURLStorage { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook UIImageView
- (void)setShadowColor:(UIColor *)shadowColor { %log; %orig; }
- (UIColor *)shadowColor { %log; UIColor * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setShadowXOffset:(CGFloat)shadowXOffset { %log; %orig; }
- (CGFloat)shadowXOffset { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setShadowYOffset:(CGFloat)shadowYOffset { %log; %orig; }
- (CGFloat)shadowYOffset { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setShadowRadius:(CGFloat)shadowRadius { %log; %orig; }
- (CGFloat)shadowRadius { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
- (void)setShadowContainer:(UIView *)shadowContainer { %log; %orig; }
- (UIView *)shadowContainer { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setRotating:(BOOL)rotating { %log; %orig; }
- (BOOL)rotating { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setCircle:(BOOL)circle { %log; %orig; }
- (BOOL)circle { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
- (void)setBlurStyle:(NSString *)blurStyle { %log; %orig; }
- (NSString *)blurStyle { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setBlurAlpha:(CGFloat)blurAlpha { %log; %orig; }
- (CGFloat)blurAlpha { %log; CGFloat r = %orig; NSLog(@" = %f", r); return r; }
-(void)setImageCornerRadius:(CGFloat)arg0  { %log; %orig; }
-(void)setShadowWithColor:(id)arg0 shadowXOffset:(CGFloat)arg1 shadowYOffset:(CGFloat)arg2 shadowRadius:(CGFloat)arg3  { %log; %orig; }
-(BOOL)initShadowContainerIfNotExist { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
-(void)startRotate:(CGFloat)arg0 withClockwise:(BOOL)arg1  { %log; %orig; }
-(void)stopRotate { %log; %orig; }
-(void)changeToCircle { %log; %orig; }
-(void)setBlurEffectViewWithStyle:(NSInteger)arg0 alpha:(CGFloat)arg1  { %log; %orig; }
-(void)changeBlurEffectStyle:(NSInteger)arg0  { %log; %orig; }
-(NSInteger)getBlurEffectStyle { %log; NSInteger r = %orig; NSLog(@" = %ld", (long)r); return r; }
-(void)equalToImageViewConstraintFor:(id)arg0  { %log; %orig; }
-(id)shadowContainer { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setShadowContainer:(id)arg0  { %log; %orig; }
-(void)setShadowXOffset:(CGFloat)arg0  { %log; %orig; }
-(void)setShadowYOffset:(CGFloat)arg0  { %log; %orig; }
-(void)setShadowRadius:(CGFloat)arg0  { %log; %orig; }
-(void)setRotating:(BOOL)arg0  { %log; %orig; }
-(void)setCircle:(BOOL)arg0  { %log; %orig; }
-(id)blurStyle { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setBlurStyle:(id)arg0  { %log; %orig; }
-(void)setBlurAlpha:(CGFloat)arg0  { %log; %orig; }
-(id)effectView { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setEffectView:(id)arg0  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 progress:(id)arg3 completed:(unk)arg4  { %log; %orig; }
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 progress:(id)arg4 completed:(unk)arg5  { %log; %orig; }
-(void)sd_setHighlightedImageWithURL:(id)arg0  { %log; %orig; }
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1  { %log; %orig; }
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2  { %log; %orig; }
-(void)sd_setHighlightedImageWithURL:(id)arg0 completed:(id)arg1  { %log; %orig; }
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 completed:(id)arg2  { %log; %orig; }
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 progress:(id)arg2 completed:(unk)arg3  { %log; %orig; }
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 progress:(id)arg3 completed:(unk)arg4  { %log; %orig; }
%end
%hook UIResponder
-(BOOL)st_becomeFirstResponder { %log; BOOL r = %orig; NSLog(@" = %d", r); return r; }
+(void)swizzleSelector:(SEL)arg0 toSelector:(SEL)arg1  { %log; %orig; }
%end
%hook UIViewController
- (void)setContentSizeInPopup:(CGSize)contentSizeInPopup { %log; %orig; }
- (CGSize)contentSizeInPopup { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
- (void)setLandscapeContentSizeInPopup:(CGSize)landscapeContentSizeInPopup { %log; %orig; }
- (CGSize)landscapeContentSizeInPopup { %log; CGSize r = %orig; NSLog(@" = {%g, %g}", r.width, r.height); return r; }
- (STPopupController *)popupController { %log; STPopupController * r = %orig; NSLog(@" = %@", r); return r; }
-(void)st_viewDidLoad { %log; %orig; }
-(void)st_presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2  { %log; %orig; }
-(void)st_dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1  { %log; %orig; }
-(id)st_presentedViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(id)st_presentingViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
-(void)setContentSizeInPopup:(struct CGSize )arg0  { %log; %orig; }
-(struct CGSize )contentSizeInPopup { %log; struct CGSize  r = %orig; return r; }
-(void)setLandscapeContentSizeInPopup:(struct CGSize )arg0  { %log; %orig; }
-(struct CGSize )landscapeContentSizeInPopup { %log; struct CGSize  r = %orig; return r; }
-(void)setPopupController:(id)arg0  { %log; %orig; }
-(id)popupController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook NSString
-(id)md5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
%hook NSValue
-(struct __UICornerInset )UICornerInsetValue { %log; struct __UICornerInset  r = %orig; return r; }
+(id)valueWithUICornerInset:(struct __UICornerInset )arg0  { %log; id r = %orig; NSLog(@" = %@", r); return r; }
%end
