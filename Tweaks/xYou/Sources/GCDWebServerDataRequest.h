// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERDATAREQUEST_H
#define GCDWEBSERVERDATAREQUEST_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "GCDWebServerRequest.h"

@interface GCDWebServerDataRequest : GCDWebServerRequest {
    NSString *_text;
    id *_jsonObject;
}


@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) id *jsonObject;
@property (retain, nonatomic) NSMutableData *data; // ivar: _data


-(BOOL)open:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)close:(*id)arg0 ;
-(id)description;


@end


#endif