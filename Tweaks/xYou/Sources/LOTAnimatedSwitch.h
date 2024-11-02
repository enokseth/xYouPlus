// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTANIMATEDSWITCH_H
#define LOTANIMATEDSWITCH_H



#import "LOTAnimatedControl.h"

@interface LOTAnimatedSwitch : LOTAnimatedControl {
    CGFloat _onStartProgress;
    CGFloat _onEndProgress;
    CGFloat _offStartProgress;
    CGFloat _offEndProgress;
    CGPoint _touchTrackingStart;
    BOOL _suppressToggle;
    BOOL _toggleToState;
}


@property (nonatomic, getter=isOn) BOOL on; // ivar: _on
@property (nonatomic) BOOL interactiveGesture; // ivar: _interactiveGesture


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setAnimationComp:(id)arg0 ;
-(void)setProgressRangeForOnState:(CGFloat)arg0 toProgress:(CGFloat)arg1 ;
-(void)setProgressRangeForOffState:(CGFloat)arg0 toProgress:(CGFloat)arg1 ;
-(id)accessibilityValue;
-(void)_toggle;
-(void)_toggleAndSendActions;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
+(id)switchNamed:(id)arg0 ;
+(id)switchNamed:(id)arg0 inBundle:(id)arg1 ;


@end


#endif