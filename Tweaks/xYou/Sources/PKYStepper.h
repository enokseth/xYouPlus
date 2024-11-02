// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef PKYSTEPPER_H
#define PKYSTEPPER_H


#import <UIKit/UIKit.h>


@interface PKYStepper : UIControl

@property (retain, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (retain, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (retain, nonatomic) UIButton *incrementButton; // ivar: _incrementButton
@property (retain, nonatomic) UIButton *decrementButton; // ivar: _decrementButton
@property (nonatomic) float value; // ivar: _value
@property (nonatomic) float stepInterval; // ivar: _stepInterval
@property (nonatomic) float minimum; // ivar: _minimum
@property (nonatomic) float maximum; // ivar: _maximum
@property (nonatomic) BOOL hidesDecrementWhenMinimum; // ivar: _hidesDecrementWhenMinimum
@property (nonatomic) BOOL hidesIncrementWhenMaximum; // ivar: _hidesIncrementWhenMaximum
@property (nonatomic) CGFloat buttonWidth; // ivar: _buttonWidth
@property (copy, nonatomic) id *valueChangedCallback; // ivar: _valueChangedCallback
@property (copy, nonatomic) id *incrementCallback; // ivar: _incrementCallback
@property (copy, nonatomic) id *decrementCallback; // ivar: _decrementCallback


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)setup;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setBorderColor:(id)arg0 ;
-(void)setBorderWidth:(CGFloat)arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setLabelTextColor:(id)arg0 ;
-(void)setLabelFont:(id)arg0 ;
-(void)setButtonTextColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setButtonFont:(id)arg0 ;
-(void)incrementButtonTapped:(id)arg0 ;
-(void)decrementButtonTapped:(id)arg0 ;
-(BOOL)isMinimum;
-(BOOL)isMaximum;


@end


#endif