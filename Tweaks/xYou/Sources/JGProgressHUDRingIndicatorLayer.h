// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDRINGINDICATORLAYER_H
#define JGPROGRESSHUDRINGINDICATORLAYER_H


#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>


@interface JGProgressHUDRingIndicatorLayer : CALayer

@property (nonatomic) float progress;
@property (weak, nonatomic) UIColor *ringColor;
@property (weak, nonatomic) UIColor *ringBackgroundColor;
@property (nonatomic) BOOL roundProgressLine;
@property (nonatomic) CGFloat ringWidth;


-(id)actionForKey:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
+(BOOL)needsDisplayForKey:(id)arg0 ;


@end


#endif