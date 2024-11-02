// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGECOMBINEDOPERATION_H
#define SDWEBIMAGECOMBINEDOPERATION_H


#import <Foundation/Foundation.h>

#import "SDWebImageManager.h"
#import "SDWebImageOperation-Protocol.h"
#import "SDWebImageOperation-Protocol.h"
#import "SDWebImageOperation-Protocol.h"

@interface SDWebImageCombinedOperation : NSObject <SDWebImageOperation>



@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSObject<SDWebImageOperation> *loaderOperation; // ivar: _loaderOperation
@property (retain, nonatomic) NSObject<SDWebImageOperation> *cacheOperation; // ivar: _cacheOperation
@property (weak, nonatomic) SDWebImageManager *manager; // ivar: _manager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)cancel;


@end


#endif