// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERMULTIPARTARGUMENT_H
#define GCDWEBSERVERMULTIPARTARGUMENT_H


#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "GCDWebServerMultiPart.h"

@interface GCDWebServerMultiPartArgument : GCDWebServerMultiPart

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *string; // ivar: _string


-(id)initWithControlName:(id)arg0 contentType:(id)arg1 data:(id)arg2 ;
-(id)description;


@end


#endif