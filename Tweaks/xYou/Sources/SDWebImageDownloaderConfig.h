// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEDOWNLOADERCONFIG_H
#define SDWEBIMAGEDOWNLOADERCONFIG_H


#import <Foundation/Foundation.h>

#import "NSCopying-Protocol.h"

@interface SDWebImageDownloaderConfig : NSObject <NSCopying>



@property (nonatomic) NSInteger maxConcurrentDownloads; // ivar: _maxConcurrentDownloads
@property (nonatomic) CGFloat downloadTimeout; // ivar: _downloadTimeout
@property (nonatomic) CGFloat minimumProgressInterval; // ivar: _minimumProgressInterval
@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // ivar: _sessionConfiguration
@property (nonatomic) Class operationClass; // ivar: _operationClass
@property (nonatomic) NSInteger executionOrder; // ivar: _executionOrder
@property (copy, nonatomic) NSURLCredential *urlCredential; // ivar: _urlCredential
@property (copy, nonatomic) NSString *username; // ivar: _username
@property (copy, nonatomic) NSString *password; // ivar: _password


-(id)init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)defaultDownloaderConfig;


@end


#endif