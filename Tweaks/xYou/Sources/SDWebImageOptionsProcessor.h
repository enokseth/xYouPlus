// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEOPTIONSPROCESSOR_H
#define SDWEBIMAGEOPTIONSPROCESSOR_H


#import <Foundation/Foundation.h>

#import "SDWebImageOptionsProcessor-Protocol.h"

@interface SDWebImageOptionsProcessor : NSObject <SDWebImageOptionsProcessor>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithBlock:(id)arg0 ;
-(id)processedResultForURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
+(id)optionsProcessorWithBlock:(id)arg0 ;


@end


#endif