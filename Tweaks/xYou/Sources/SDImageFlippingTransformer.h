// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEFLIPPINGTRANSFORMER_H
#define SDIMAGEFLIPPINGTRANSFORMER_H


#import <Foundation/Foundation.h>

#import "SDImageTransformer-Protocol.h"

@interface SDImageFlippingTransformer : NSObject <SDImageTransformer>



@property (nonatomic) BOOL horizontal; // ivar: _horizontal
@property (nonatomic) BOOL vertical; // ivar: _vertical
@property (readonly, copy, nonatomic) NSString *transformerKey;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)transformedImageWithImage:(id)arg0 forKey:(id)arg1 ;
+(id)transformerWithHorizontal:(BOOL)arg0 vertical:(BOOL)arg1 ;


@end


#endif