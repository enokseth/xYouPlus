// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERURLENCODEDFORMREQUEST_H
#define GCDWEBSERVERURLENCODEDFORMREQUEST_H


#import <CoreFoundation/CoreFoundation.h>

#import "GCDWebServerDataRequest.h"

@interface GCDWebServerURLEncodedFormRequest : GCDWebServerDataRequest

@property (readonly, nonatomic) NSDictionary *arguments; // ivar: _arguments


-(BOOL)close:(*id)arg0 ;
-(id)description;
+(id)mimeType;


@end


#endif