// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPCONTROLLER_H
#define LNPOPUPCONTROLLER_H

@protocol LNPopupPresentationDelegate;

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "LNPopupItem.h"
#import "LNPopupBar.h"
#import "LNPopupContentView.h"
#import "_LNPopupItemDelegate-Protocol.h"
#import "_LNPopupBarDelegate-Protocol.h"

@interface LNPopupController : NSObject <_LNPopupItemDelegate, _LNPopupBarDelegate>

 {
    LNPopupItem *_currentPopupItem;
    BOOL _dismissGestureStarted;
    CGFloat _dismissStartingOffset;
    CGFloat _dismissScrollViewStartingContentOffset;
    NSInteger _stateBeforeDismissStarted;
    BOOL _dismissalOverride;
    CGRect _cachedDefaultFrame;
    UIEdgeInsets _cachedInsets;
    CGRect _cachedOpenPopupFrame;
    CGFloat _statusBarThresholdDir;
    CGFloat _bottomBarOffset;
}


@property (weak, nonatomic) UIView *bottomBar; // ivar: _bottomBar
@property (retain, nonatomic) LNPopupBar *popupBar; // ivar: _popupBar
@property (readonly, nonatomic) LNPopupBar *popupBarStorage;
@property (retain, nonatomic) LNPopupContentView *popupContentView; // ivar: _popupContentView
@property (retain, nonatomic) UIScrollView *popupContentContainerView; // ivar: _popupContentContainerView
@property (nonatomic) NSInteger popupControllerPublicState; // ivar: _popupControllerPublicState
@property (nonatomic) NSInteger popupControllerInternalState; // ivar: _popupControllerInternalState
@property (nonatomic) NSInteger popupControllerTargetState; // ivar: _popupControllerTargetState
@property (weak, nonatomic) NSObject<LNPopupPresentationDelegate> *userPopupPresentationDelegate; // ivar: _userPopupPresentationDelegate
@property (retain, nonatomic) UIViewController *currentContentController; // ivar: _currentContentController
@property (weak, nonatomic) UIViewController *containerController; // ivar: _containerController
@property (nonatomic) CGPoint lastPopupBarLocation; // ivar: _lastPopupBarLocation
@property (nonatomic) CGFloat lastSeenMovement; // ivar: _lastSeenMovement
@property (weak, nonatomic) UIViewController *effectiveStatusBarUpdateController; // ivar: _effectiveStatusBarUpdateController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithContainerViewController:(id)arg0 ;
-(struct CGRect )_frameForOpenPopupBar;
-(struct CGRect )_frameForClosedPopupBar;
-(void)_repositionPopupContentMovingBottomBar:(BOOL)arg0 ;
-(CGFloat)_percentFromPopupBar;
-(CGFloat)_percentFromPopupBarForBottomBarDisplacement;
-(void)_setContentToState:(NSInteger)arg0 ;
-(void)_addContentControllerSubview:(id)arg0 ;
-(void)_removeContentControllerFromContentView:(id)arg0 ;
// -(void)_transitionToState:(NSInteger)arg0 notifyDelegate:(BOOL)arg1 animated:(BOOL)arg2 useSpringAnimation:(BOOL)arg3 allowPopupBarAlphaModification:(BOOL)arg4 completion:(id)arg5 transitionOriginatedByUser:(unk)arg6  ;
-(void)_popupBarLongPressGestureRecognized:(id)arg0 ;
-(void)_popupBarTapGestureRecognized:(id)arg0 ;
-(void)_popupBarPresentationByUserPanGestureHandler_began:(id)arg0 ;
-(CGFloat)rubberbandFromHeight:(CGFloat)arg0 ;
-(void)_popupBarPresentationByUserPanGestureHandler_changed:(id)arg0 ;
-(void)_popupBarPresentationByUserPanGestureHandler_endedOrCancelled:(id)arg0 ;
-(void)_popupBarPresentationByUserPanGestureHandler:(id)arg0 ;
-(NSInteger)positionForBar:(id)arg0 ;
-(void)_closePopupContent;
-(void)_reconfigure_title;
-(void)_reconfigure_subtitle;
-(void)_reconfigure_image;
-(void)_reconfigure_progress;
-(void)_reconfigure_progressTintColor;
-(void)_reconfigure_accessibilityLavel;
-(void)_reconfigure_accessibilityHint;
-(void)_reconfigure_accessibilityImageLabel;
-(void)_reconfigure_accessibilityProgressLabel;
-(void)_reconfigure_accessibilityProgressValue;
-(void)_reconfigureBarItems;
-(void)_reconfigure_leadingBarButtonItems;
-(void)_reconfigure_trailingBarButtonItems;
-(void)_reconfigure_swiftuiImageController;
-(void)_reconfigure_standardAppearance;
-(void)_popupItem:(id)arg0 didChangeValueForKey:(id)arg1 ;
-(void)_reconfigureContentWithOldContentController:(id)arg0 newContentController:(id)arg1 ;
-(void)_configurePopupBarFromBottomBar;
-(void)_updateBarExtensionStyleFromPopupBar;
-(void)_movePopupBarAndContentToBottomBarSuperview;
-(void)dealloc;
-(void)_fixupGestureRecognizersForController:(id)arg0 ;
-(void)_cleanupGestureRecognizersForController:(id)arg0 ;
-(void)presentPopupBarAnimated:(BOOL)arg0 openPopup:(BOOL)arg1 completion:(id)arg2 ;
-(void)openPopupAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)closePopupAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPopupBarAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_applicationWillEnterForeground;
-(void)_removeInteractionGestureForPopupBar:(id)arg0 ;
-(void)_traitCollectionForPopupBarDidChange:(id)arg0 ;
-(void)_popupBarMetricsDidChange:(id)arg0 ;
-(void)_popupBarStyleDidChange:(id)arg0 ;
-(void)_popupBar:(id)arg0 updateCustomBarController:(id)arg1 cleanup:(BOOL)arg2 ;
+(CGFloat)_statusBarHeightForView:(id)arg0 ;


@end


#endif