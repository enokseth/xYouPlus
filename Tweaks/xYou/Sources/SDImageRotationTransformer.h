// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEROTATIONTRANSFORMER_H
#define SDIMAGEROTATIONTRANSFORMER_H


#import <Foundation/Foundation.h>

#import "SDImageTransformer-Protocol.h"

@interface SDImageRotationTransformer : NSObject <SDImageTransformer>



@property (nonatomic) CGFloat angle; // ivar: _angle
@property (nonatomic) BOOL fitSize; // ivar: _fitSize
@property (readonly, copy, nonatomic) NSString *transformerKey;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)transformedImageWithImage:(id)arg0 forKey:(id)arg1 ;
+(id)transformerWithAngle:(CGFloat)arg0 fitSize:(BOOL)arg1 ;


@end


#endif