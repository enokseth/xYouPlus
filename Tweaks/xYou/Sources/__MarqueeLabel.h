// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef __MARQUEELABEL_H
#define __MARQUEELABEL_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "__MarqueeLabel.h"
#import "CAAnimationDelegate-Protocol.h"

@interface __MarqueeLabel : UILabel <CAAnimationDelegate>



@property (retain, nonatomic) UILabel *subLabel; // ivar: _subLabel
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (readonly, nonatomic) BOOL labelShouldScroll;
@property (weak, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer
@property (nonatomic) CGRect homeLabelFrame; // ivar: _homeLabelFrame
@property (nonatomic) CGFloat awayOffset; // ivar: _awayOffset
@property (nonatomic) BOOL isPaused; // ivar: _isPaused
@property (copy, nonatomic) id *scrollCompletionBlock; // ivar: _scrollCompletionBlock
@property (retain, nonatomic) NSArray *gradientColors; // ivar: _gradientColors
@property (nonatomic) NSUInteger animationCurve; // ivar: _animationCurve
@property (nonatomic) BOOL labelize; // ivar: _labelize
@property (nonatomic) BOOL holdScrolling; // ivar: _holdScrolling
@property (nonatomic) BOOL tapToScroll; // ivar: _tapToScroll
@property (nonatomic) NSUInteger marqueeType; // ivar: _marqueeType
@property (nonatomic) CGFloat scrollDuration; // ivar: _scrollDuration
@property (nonatomic) CGFloat rate; // ivar: _rate
@property (nonatomic) CGFloat leadingBuffer; // ivar: _leadingBuffer
@property (nonatomic) CGFloat trailingBuffer; // ivar: _trailingBuffer
@property (nonatomic) CGFloat continuousMarqueeExtraBuffer;
@property (nonatomic) CGFloat fadeLength; // ivar: _fadeLength
@property (nonatomic) CGFloat animationDelay; // ivar: _animationDelay
@property (weak, nonatomic) __MarqueeLabel *synchronizedLabel; // ivar: _synchronizedLabel
@property (readonly, nonatomic) BOOL awayFromHome;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)viewControllerShouldRestart:(id)arg0 ;
-(void)labelsShouldLabelize:(id)arg0 ;
-(void)labelsShouldAnimate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 duration:(CGFloat)arg1 andFadeLength:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 rate:(CGFloat)arg1 andFadeLength:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)awakeFromNib;
-(void)prepareForInterfaceBuilder;
-(id)repliLayer;
-(id)maskLayer;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)forwardPropertiesToSubLabel;
-(void)setupLabel;
-(void)minimizeLabelFrameWithMaximumSize:(struct CGSize )arg0 adjustHeight:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg0 ;
-(void)didMoveToWindow;
-(void)updateSublabel;
-(void)updateSublabelAndBeginScroll:(BOOL)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(BOOL)labelReadyForScroll;
-(void)beginScroll;
-(void)beginScrollWithDelay:(BOOL)arg0 ;
-(void)returnLabelToOriginImmediately;
-(void)scrollAwayWithInterval:(CGFloat)arg0 ;
-(void)scrollAwayWithInterval:(CGFloat)arg0 delay:(BOOL)arg1 ;
-(void)scrollAwayWithInterval:(CGFloat)arg0 delayAmount:(CGFloat)arg1 shouldReturn:(BOOL)arg2 ;
-(void)scrollContinuousWithInterval:(CGFloat)arg0 after:(CGFloat)arg1 ;
-(void)scrollContinuousWithInterval:(CGFloat)arg0 after:(CGFloat)arg1 labelAnimation:(id)arg2 gradientAnimation:(id)arg3 ;
-(void)applyGradientMaskForFadeLength:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)removeGradientMask;
-(id)keyFrameAnimationForGradientFadeLength:(CGFloat)arg0 interval:(CGFloat)arg1 delay:(CGFloat)arg2 ;
-(id)keyFrameAnimationForProperty:(id)arg0 values:(id)arg1 interval:(CGFloat)arg2 delay:(CGFloat)arg3 ;
-(id)timingFunctionForAnimationOptions:(NSUInteger)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)restartLabel;
-(void)resetLabel;
-(void)shutdownLabel;
-(void)pauseLabel;
-(void)unpauseLabel;
-(void)labelWasTapped:(id)arg0 ;
-(void)triggerScrollStart;
-(void)labelWillBeginScroll;
-(void)labelReturnedToHome:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(id)viewForBaselineLayout;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(id)text;
-(void)setText:(id)arg0 ;
-(id)attributedText;
-(void)setAttributedText:(id)arg0 ;
-(id)font;
-(void)setFont:(id)arg0 ;
-(id)textColor;
-(void)setTextColor:(id)arg0 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg0 ;
-(id)shadowColor;
-(void)setShadowColor:(id)arg0 ;
-(struct CGSize )shadowOffset;
-(void)setShadowOffset:(struct CGSize )arg0 ;
-(id)highlightedTextColor;
-(void)setHighlightedTextColor:(id)arg0 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg0 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setNumberOfLines:(NSInteger)arg0 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg0 ;
-(void)setMinimumFontSize:(CGFloat)arg0 ;
-(NSInteger)baselineAdjustment;
-(void)setBaselineAdjustment:(NSInteger)arg0 ;
-(id)tintColor;
-(void)setTintColor:(id)arg0 ;
-(void)tintColorDidChange;
-(struct CGSize )intrinsicContentSize;
-(void)setAdjustsLetterSpacingToFitWidth:(BOOL)arg0 ;
-(void)setMinimumScaleFactor:(CGFloat)arg0 ;
-(NSInteger)contentMode;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setIsAccessibilityElement:(BOOL)arg0 ;
-(void)dealloc;
+(void)restartLabelsOfController:(id)arg0 ;
+(void)controllerViewWillAppear:(id)arg0 ;
+(void)controllerViewDidAppear:(id)arg0 ;
+(void)controllerViewAppearing:(id)arg0 ;
+(void)controllerLabelsShouldLabelize:(id)arg0 ;
+(void)controllerLabelsShouldAnimate:(id)arg0 ;
+(void)notifyController:(id)arg0 withMessage:(id)arg1 ;
+(Class)layerClass;


@end


#endif