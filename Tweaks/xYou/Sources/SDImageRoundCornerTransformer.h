// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEROUNDCORNERTRANSFORMER_H
#define SDIMAGEROUNDCORNERTRANSFORMER_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "SDImageTransformer-Protocol.h"

@interface SDImageRoundCornerTransformer : NSObject <SDImageTransformer>



@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSUInteger corners; // ivar: _corners
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (readonly, copy, nonatomic) NSString *transformerKey;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)transformedImageWithImage:(id)arg0 forKey:(id)arg1 ;
+(id)transformerWithRadius:(CGFloat)arg0 corners:(NSUInteger)arg1 borderWidth:(CGFloat)arg2 borderColor:(id)arg3 ;


@end


#endif