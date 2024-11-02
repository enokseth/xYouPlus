// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDPIEINDICATORVIEW_H
#define JGPROGRESSHUDPIEINDICATORVIEW_H


#import <UIKit/UIKit.h>

#import "JGProgressHUDIndicatorView.h"

@interface JGProgressHUDPieIndicatorView : JGProgressHUDIndicatorView

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor


-(id)init;
-(id)initWithHUDStyle:(NSUInteger)arg0 ;
-(id)initWithContentView:(id)arg0 ;
-(void)setProgress:(float)arg0 animated:(BOOL)arg1 ;
-(void)setUpForHUDStyle:(NSUInteger)arg0 vibrancyEnabled:(BOOL)arg1 ;
+(Class)layerClass;


@end


#endif