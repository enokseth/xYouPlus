// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERMULTIPARTFORMREQUEST_H
#define GCDWEBSERVERMULTIPARTFORMREQUEST_H


#import <CoreFoundation/CoreFoundation.h>

#import "GCDWebServerRequest.h"
#import "GCDWebServerMIMEStreamParser.h"

@interface GCDWebServerMultiPartFormRequest : GCDWebServerRequest {
    GCDWebServerMIMEStreamParser *_parser;
}


@property (retain, nonatomic) NSMutableArray *arguments; // ivar: _arguments
@property (retain, nonatomic) NSMutableArray *files; // ivar: _files


-(id)initWithMethod:(id)arg0 url:(id)arg1 headers:(id)arg2 path:(id)arg3 query:(id)arg4 ;
-(BOOL)open:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)close:(*id)arg0 ;
-(id)firstArgumentForControlName:(id)arg0 ;
-(id)firstFileForControlName:(id)arg0 ;
-(id)description;
+(id)mimeType;


@end


#endif