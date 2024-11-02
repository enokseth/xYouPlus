// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JTMATERIALSWITCH_H
#define JTMATERIALSWITCH_H

@protocol JTMaterialSwitchDelegate;

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>


@interface JTMaterialSwitch : UIControl {
    float thumbOnPosition;
    float thumbOffPosition;
    float bounceOffset;
    int thumbStyle;
    CAShapeLayer *rippleLayer;
}


@property (nonatomic) CGFloat trackThickness; // ivar: _trackThickness
@property (nonatomic) CGFloat thumbSize; // ivar: _thumbSize
@property (nonatomic) NSObject<JTMaterialSwitchDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isOn; // ivar: _isOn
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isBounceEnabled; // ivar: _isBounceEnabled
@property (nonatomic) BOOL isRippleEnabled; // ivar: _isRippleEnabled
@property (retain, nonatomic) UIColor *thumbOnTintColor; // ivar: _thumbOnTintColor
@property (retain, nonatomic) UIColor *thumbOffTintColor; // ivar: _thumbOffTintColor
@property (retain, nonatomic) UIColor *trackOnTintColor; // ivar: _trackOnTintColor
@property (retain, nonatomic) UIColor *trackOffTintColor; // ivar: _trackOffTintColor
@property (retain, nonatomic) UIColor *thumbDisabledTintColor; // ivar: _thumbDisabledTintColor
@property (retain, nonatomic) UIColor *trackDisabledTintColor; // ivar: _trackDisabledTintColor
@property (retain, nonatomic) UIColor *rippleFillColor; // ivar: _rippleFillColor
@property (retain, nonatomic) UIButton *switchThumb; // ivar: _switchThumb
@property (retain, nonatomic) UIView *track; // ivar: _track


-(id)init;
-(id)initWithSize:(int)arg0 state:(int)arg1 ;
-(id)initWithSize:(int)arg0 style:(int)arg1 state:(int)arg2 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(BOOL)getSwitchState;
-(void)setOn:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)switchAreaTapped:(id)arg0 ;
-(void)changeThumbState;
-(void)changeThumbStateONwithAnimation;
-(void)changeThumbStateOFFwithAnimation;
-(void)changeThumbStateONwithoutAnimation;
-(void)changeThumbStateOFFwithoutAnimation;
-(void)initializeRipple;
-(void)animateRippleEffect;
-(void)onTouchDown:(id)arg0 withEvent:(id)arg1 ;
-(void)switchThumbTapped:(id)arg0 ;
-(void)onTouchUpOutsideOrCanceled:(id)arg0 withEvent:(id)arg1 ;
-(void)onTouchDragInside:(id)arg0 withEvent:(id)arg1 ;


@end


#endif