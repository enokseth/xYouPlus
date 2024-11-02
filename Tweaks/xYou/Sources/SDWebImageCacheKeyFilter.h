// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGECACHEKEYFILTER_H
#define SDWEBIMAGECACHEKEYFILTER_H


#import <Foundation/Foundation.h>

#import "SDWebImageCacheKeyFilter-Protocol.h"

@interface SDWebImageCacheKeyFilter : NSObject <SDWebImageCacheKeyFilter>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithBlock:(id)arg0 ;
-(id)cacheKeyForURL:(id)arg0 ;
+(id)cacheKeyFilterWithBlock:(id)arg0 ;


@end


#endif