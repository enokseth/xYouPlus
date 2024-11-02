// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDRINGINDICATORVIEW_H
#define JGPROGRESSHUDRINGINDICATORVIEW_H


#import <UIKit/UIKit.h>

#import "JGProgressHUDIndicatorView.h"

@interface JGProgressHUDRingIndicatorView : JGProgressHUDIndicatorView

@property (retain, nonatomic) UIColor *ringBackgroundColor; // ivar: _ringBackgroundColor
@property (retain, nonatomic) UIColor *ringColor; // ivar: _ringColor
@property (nonatomic) BOOL roundProgressLine; // ivar: _roundProgressLine
@property (nonatomic) CGFloat ringWidth; // ivar: _ringWidth


-(id)init;
-(id)initWithHUDStyle:(NSUInteger)arg0 ;
-(id)initWithContentView:(id)arg0 ;
-(void)setProgress:(float)arg0 animated:(BOOL)arg1 ;
-(void)setUpForHUDStyle:(NSUInteger)arg0 vibrancyEnabled:(BOOL)arg1 ;
+(Class)layerClass;


@end


#endif