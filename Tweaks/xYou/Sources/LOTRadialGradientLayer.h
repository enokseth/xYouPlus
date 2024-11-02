// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTRADIALGRADIENTLAYER_H
#define LOTRADIALGRADIENTLAYER_H


#import <QuartzCore/QuartzCore.h>
#import <CoreFoundation/CoreFoundation.h>


@interface LOTRadialGradientLayer : CALayer

@property CGPoint startPoint;
@property CGPoint endPoint;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) BOOL isRadial;


-(id)actionForKey:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
+(BOOL)needsDisplayForKey:(id)arg0 ;


@end


#endif