// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERMULTIPART_H
#define GCDWEBSERVERMULTIPART_H


#import <Foundation/Foundation.h>


@interface GCDWebServerMultiPart : NSObject

@property (readonly, nonatomic) NSString *controlName; // ivar: _controlName
@property (readonly, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, nonatomic) NSString *mimeType; // ivar: _mimeType


-(id)initWithControlName:(id)arg0 contentType:(id)arg1 ;


@end


#endif