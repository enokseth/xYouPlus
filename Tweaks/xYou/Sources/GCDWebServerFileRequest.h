// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERFILEREQUEST_H
#define GCDWEBSERVERFILEREQUEST_H


#import <Foundation/Foundation.h>

#import "GCDWebServerRequest.h"

@interface GCDWebServerFileRequest : GCDWebServerRequest {
    int _file;
}


@property (readonly, nonatomic) NSString *temporaryPath; // ivar: _temporaryPath


-(id)initWithMethod:(id)arg0 url:(id)arg1 headers:(id)arg2 path:(id)arg3 query:(id)arg4 ;
-(void)dealloc;
-(BOOL)open:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)close:(*id)arg0 ;
-(id)description;


@end


#endif