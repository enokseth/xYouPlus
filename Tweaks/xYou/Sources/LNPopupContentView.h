// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPCONTENTVIEW_H
#define LNPOPUPCONTENTVIEW_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "LNPopupCloseButton.h"
#import "UIAppearanceContainer-Protocol.h"

@interface LNPopupContentView : UIView <UIAppearanceContainer>

 {
    NSInteger _userOverrideUserInterfaceStyle;
    NSInteger _controllerOverrideUserInterfaceStyle;
    NSLayoutConstraint *_popupCloseButtonTopConstraint;
    NSLayoutConstraint *_popupCloseButtonCenterConstraint;
    NSLayoutConstraint *_popupCloseButtonLeadingConstraint;
}


@property (retain, nonatomic) UIPanGestureRecognizer *popupInteractionGestureRecognizer; // ivar: _popupInteractionGestureRecognizer
@property (retain, nonatomic) LNPopupCloseButton *popupCloseButton; // ivar: _popupCloseButton
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController *currentPopupContentViewController; // ivar: _currentPopupContentViewController
@property (nonatomic) NSInteger popupCloseButtonStyle; // ivar: _popupCloseButtonStyle
@property (nonatomic) BOOL popupCloseButtonAutomaticallyUnobstructsTopBars; // ivar: _popupCloseButtonAutomaticallyUnobstructsTopBars
@property (copy, nonatomic) UIBlurEffect *backgroundEffect; // ivar: _backgroundEffect
@property (nonatomic, getter=isTranslucent) BOOL translucent; // ivar: _translucent
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(NSInteger)backgroundStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(id)_view:(id)arg0 selfOrSuperviewKindOfClass:(Class)arg1 ;
-(void)_repositionPopupCloseButton;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(NSInteger)overrideUserInterfaceStyle;
-(void)setOverrideUserInterfaceStyle:(NSInteger)arg0 ;
-(void)setControllerOverrideUserInterfaceStyle:(NSInteger)arg0 ;
-(void)_applyBackgroundEffectWithContentViewController:(id)arg0 barEffect:(id)arg1 ;


@end


#endif