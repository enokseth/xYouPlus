// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDPIEINDICATORLAYER_H
#define JGPROGRESSHUDPIEINDICATORLAYER_H


#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>


@interface JGProgressHUDPieIndicatorLayer : CALayer

@property (nonatomic) float progress;
@property (weak, nonatomic) UIColor *color;
@property (weak, nonatomic) UIColor *fillColor;


-(id)actionForKey:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
+(BOOL)needsDisplayForKey:(id)arg0 ;


@end


#endif