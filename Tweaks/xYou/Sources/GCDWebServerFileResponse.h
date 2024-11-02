// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERFILERESPONSE_H
#define GCDWEBSERVERFILERESPONSE_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "GCDWebServerResponse.h"

@interface GCDWebServerFileResponse : GCDWebServerResponse {
    NSString *_path;
    NSUInteger _offset;
    NSUInteger _size;
    int _file;
}


@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *eTag;


-(id)initWithFile:(id)arg0 ;
-(id)initWithFile:(id)arg0 isAttachment:(BOOL)arg1 ;
-(id)initWithFile:(id)arg0 byteRange:(struct _NSRange )arg1 ;
-(id)initWithFile:(id)arg0 byteRange:(struct _NSRange )arg1 isAttachment:(BOOL)arg2 mimeTypeOverrides:(id)arg3 ;
-(BOOL)open:(*id)arg0 ;
-(id)readData:(*id)arg0 ;
-(void)close;
-(id)description;
+(id)responseWithFile:(id)arg0 ;
+(id)responseWithFile:(id)arg0 isAttachment:(BOOL)arg1 ;
+(id)responseWithFile:(id)arg0 byteRange:(struct _NSRange )arg1 ;
+(id)responseWithFile:(id)arg0 byteRange:(struct _NSRange )arg1 isAttachment:(BOOL)arg2 ;


@end


#endif