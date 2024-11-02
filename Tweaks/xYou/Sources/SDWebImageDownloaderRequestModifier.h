// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEDOWNLOADERREQUESTMODIFIER_H
#define SDWEBIMAGEDOWNLOADERREQUESTMODIFIER_H


#import <Foundation/Foundation.h>

#import "SDWebImageDownloaderRequestModifier-Protocol.h"

@interface SDWebImageDownloaderRequestModifier : NSObject <SDWebImageDownloaderRequestModifier>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithMethod:(id)arg0 ;
-(id)initWithHeaders:(id)arg0 ;
-(id)initWithBody:(id)arg0 ;
-(id)initWithMethod:(id)arg0 headers:(id)arg1 body:(id)arg2 ;
-(id)initWithBlock:(id)arg0 ;
-(id)modifiedRequestWithRequest:(id)arg0 ;
+(id)requestModifierWithBlock:(id)arg0 ;


@end


#endif