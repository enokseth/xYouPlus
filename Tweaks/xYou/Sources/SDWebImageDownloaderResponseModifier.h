// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEDOWNLOADERRESPONSEMODIFIER_H
#define SDWEBIMAGEDOWNLOADERRESPONSEMODIFIER_H


#import <Foundation/Foundation.h>

#import "SDWebImageDownloaderResponseModifier-Protocol.h"

@interface SDWebImageDownloaderResponseModifier : NSObject <SDWebImageDownloaderResponseModifier>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithStatusCode:(NSInteger)arg0 ;
-(id)initWithVersion:(id)arg0 ;
-(id)initWithHeaders:(id)arg0 ;
-(id)initWithStatusCode:(NSInteger)arg0 version:(id)arg1 headers:(id)arg2 ;
-(id)initWithBlock:(id)arg0 ;
-(id)modifiedResponseWithResponse:(id)arg0 ;
+(id)responseModifierWithBlock:(id)arg0 ;


@end


#endif