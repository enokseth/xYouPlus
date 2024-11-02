// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFHTTPSESSIONMANAGER_H
#define AFHTTPSESSIONMANAGER_H

@class AFHTTPRequestSerializer<AFURLRequestSerialization>, AFHTTPResponseSerializer<AFURLResponseSerialization>;

#import <CoreFoundation/CoreFoundation.h>

#import "AFURLSessionManager.h"
#import "AFSecurityPolicy.h"
#import "NSSecureCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface AFHTTPSessionManager : AFURLSessionManager <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) AFHTTPRequestSerializer<AFURLRequestSerialization> *requestSerializer; // ivar: _requestSerializer
@property (retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer;
@property (retain, nonatomic) AFSecurityPolicy *securityPolicy;


-(id)init;
-(id)initWithBaseURL:(id)arg0 ;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(id)initWithBaseURL:(id)arg0 sessionConfiguration:(id)arg1 ;
// -(id)GET:(id)arg0 parameters:(id)arg1 headers:(id)arg2 progress:(id)arg3 success:(unk)arg4 failure:(id)arg5  ;
// -(id)HEAD:(id)arg0 parameters:(id)arg1 headers:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
// -(id)POST:(id)arg0 parameters:(id)arg1 headers:(id)arg2 progress:(id)arg3 success:(unk)arg4 failure:(id)arg5  ;
// -(id)POST:(id)arg0 parameters:(id)arg1 headers:(id)arg2 constructingBodyWithBlock:(id)arg3 progress:(unk)arg4 success:(id)arg5 failure:(unk)arg6  ;
// -(id)PUT:(id)arg0 parameters:(id)arg1 headers:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
// -(id)PATCH:(id)arg0 parameters:(id)arg1 headers:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
// -(id)DELETE:(id)arg0 parameters:(id)arg1 headers:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
// -(id)dataTaskWithHTTPMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2 headers:(id)arg3 uploadProgress:(id)arg4 downloadProgress:(unk)arg5 success:(id)arg6 failure:(unk)arg7  ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)manager;
+(BOOL)supportsSecureCoding;


@end


#endif