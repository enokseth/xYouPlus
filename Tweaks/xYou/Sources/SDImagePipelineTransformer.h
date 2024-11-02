// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEPIPELINETRANSFORMER_H
#define SDIMAGEPIPELINETRANSFORMER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDImageTransformer-Protocol.h"

@interface SDImagePipelineTransformer : NSObject <SDImageTransformer>



@property (copy, nonatomic) NSArray *transformers; // ivar: _transformers
@property (copy, nonatomic) NSString *transformerKey; // ivar: _transformerKey
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)transformedImageWithImage:(id)arg0 forKey:(id)arg1 ;
+(id)transformerWithTransformers:(id)arg0 ;
+(id)cacheKeyForTransformers:(id)arg0 ;


@end


#endif