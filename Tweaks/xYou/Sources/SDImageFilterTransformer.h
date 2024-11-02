// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEFILTERTRANSFORMER_H
#define SDIMAGEFILTERTRANSFORMER_H


#import <Foundation/Foundation.h>
#import <CoreImage/CoreImage.h>

#import "SDImageTransformer-Protocol.h"

@interface SDImageFilterTransformer : NSObject <SDImageTransformer>



@property (retain, nonatomic) CIFilter *filter; // ivar: _filter
@property (readonly, copy, nonatomic) NSString *transformerKey;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)transformedImageWithImage:(id)arg0 forKey:(id)arg1 ;
+(id)transformerWithFilter:(id)arg0 ;


@end


#endif