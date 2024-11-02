// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERMULTIPARTFILE_H
#define GCDWEBSERVERMULTIPARTFILE_H


#import <Foundation/Foundation.h>

#import "GCDWebServerMultiPart.h"

@interface GCDWebServerMultiPartFile : GCDWebServerMultiPart

@property (readonly, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) NSString *temporaryPath; // ivar: _temporaryPath


-(id)initWithControlName:(id)arg0 contentType:(id)arg1 fileName:(id)arg2 temporaryPath:(id)arg3 ;
-(void)dealloc;
-(id)description;


@end


#endif