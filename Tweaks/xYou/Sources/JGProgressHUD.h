// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUD_H
#define JGPROGRESSHUD_H

@protocol JGProgressHUDDelegate;

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

#import "JGProgressHUDIndicatorView.h"
#import "JGProgressHUDShadow.h"
#import "JGProgressHUDAnimation.h"

@interface JGProgressHUD : UIView {
    BOOL _transitioning;
    BOOL _updateAfterAppear;
    BOOL _dismissAfterTransitionFinished;
    BOOL _dismissAfterTransitionFinishedWithAnimation;
    CGFloat _displayTimestamp;
    BOOL _effectiveIndicatorViewNeedsUpdate;
    UIView *_blurViewContainer;
    UIView *_shadowView;
    CAShapeLayer *_shadowMaskLayer;
}


@property (readonly, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (readonly, nonatomic) UIVisualEffectView *vibrancyView; // ivar: _vibrancyView
@property (readonly, nonatomic) JGProgressHUDIndicatorView *effectiveIndicatorView; // ivar: _effectiveIndicatorView
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly, weak, nonatomic) UIView *targetView; // ivar: _targetView
@property (weak, nonatomic) NSObject<JGProgressHUDDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIView *HUDView; // ivar: _HUDView
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (readonly, nonatomic) UILabel *detailTextLabel; // ivar: _detailTextLabel
@property (retain, nonatomic) JGProgressHUDIndicatorView *indicatorView; // ivar: _indicatorView
@property (retain, nonatomic) JGProgressHUDShadow *shadow; // ivar: _shadow
@property (nonatomic) NSUInteger position; // ivar: _position
@property (retain, nonatomic) JGProgressHUDAnimation *animation; // ivar: _animation
@property (nonatomic) NSUInteger interactionType; // ivar: _interactionType
@property (nonatomic) NSUInteger parallaxMode; // ivar: _parallaxMode
@property (nonatomic) BOOL square; // ivar: _square
@property (nonatomic) BOOL vibrancyEnabled; // ivar: _vibrancyEnabled
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) UIEdgeInsets marginInsets;
@property (nonatomic) CGFloat layoutChangeAnimationDuration; // ivar: _layoutChangeAnimationDuration
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) float progress; // ivar: _progress
@property (nonatomic) CGFloat minimumDisplayTime; // ivar: _minimumDisplayTime
@property (nonatomic) BOOL voiceOverEnabled; // ivar: _voiceOverEnabled
@property (copy, nonatomic) id *tapOnHUDViewBlock; // ivar: _tapOnHUDViewBlock
@property (copy, nonatomic) id *tapOutsideBlock; // ivar: _tapOutsideBlock


-(void)showInRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)showInRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)updateShadowViewMask;
-(void)layoutHUD;
-(struct CGRect )insetFrameForView:(id)arg0 ;
-(void)applyCornerRadius;
-(void)cleanUpAfterPresentation;
-(void)showInView:(id)arg0 ;
-(void)layoutSubviews;
-(void)showInView:(id)arg0 animated:(BOOL)arg1 ;
-(void)cleanUpAfterDismissal;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissAfterDelay:(CGFloat)arg0 ;
-(void)dismissAfterDelay:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)tapped:(id)arg0 ;
-(void)keyboardFrameChanged:(id)arg0 ;
-(void)animationDidFinish:(BOOL)arg0 ;
-(void)layoutMarginsDidChange;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)dealloc;
-(void)removeObservers;
+(id)allProgressHUDsInView:(id)arg0 ;
+(id)_allProgressHUDsInViewHierarchy:(id)arg0 ;
+(id)allProgressHUDsInViewHierarchy:(id)arg0 ;
+(void)keyboardFrameWillChange:(id)arg0 ;
+(void)keyboardFrameDidChange:(id)arg0 ;
+(void)keyboardDidHide;
+(void)load;
+(struct CGRect )currentKeyboardFrame;
+(id)progressHUDWithStyle:(NSUInteger)arg0 ;


@end


#endif