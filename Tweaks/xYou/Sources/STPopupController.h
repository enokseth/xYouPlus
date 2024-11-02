// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef STPOPUPCONTROLLER_H
#define STPOPUPCONTROLLER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>

#import "STPopupContainerViewController.h"
#import "STPopupLeftBarItem.h"
#import "STPopupControllerTransitioningSlideVertical.h"
#import "STPopupControllerTransitioningFade.h"
#import "STPopupNavigationBar.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "STPopupNavigationTouchEventDelegate-Protocol.h"
#import "STPopupControllerTransitioning-Protocol.h"

@interface STPopupController : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, STPopupNavigationTouchEventDelegate>

 {
    STPopupContainerViewController *_containerViewController;
    NSMutableArray *_viewControllers;
    UIView *_contentView;
    UILabel *_defaultTitleLabel;
    STPopupLeftBarItem *_defaultLeftBarItem;
    NSDictionary *_keyboardInfo;
    BOOL _didOverrideSafeAreaInsets;
    BOOL _observing;
    STPopupControllerTransitioningSlideVertical *_transitioningSlideVertical;
    STPopupControllerTransitioningFade *_transitioningFade;
}


@property (nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) NSUInteger transitionStyle; // ivar: _transitionStyle
@property (weak, nonatomic) NSObject<STPopupControllerTransitioning> *transitioning; // ivar: _transitioning
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) BOOL navigationBarHidden; // ivar: _navigationBarHidden
@property (nonatomic) BOOL hidesCloseButton; // ivar: _hidesCloseButton
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) STPopupNavigationBar *navigationBar; // ivar: _navigationBar
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) UIViewController *topViewController;
@property (readonly, nonatomic) BOOL presented;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithRootViewController:(id)arg0 ;
-(void)dealloc;
-(void)setupObservers;
-(void)destroyObservers;
-(void)setupObserversForViewController:(id)arg0 ;
-(void)destroyObserversOfViewController:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentInViewController:(id)arg0 ;
-(void)presentInViewController:(id)arg0 completion:(id)arg1 ;
-(void)dismiss;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)popViewControllerAnimated:(BOOL)arg0 ;
-(void)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(void)transitFromViewController:(id)arg0 toViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateNavigationBarAnimated:(BOOL)arg0 ;
-(void)layoutContainerView;
-(struct CGSize )contentSizeOfTopView;
-(CGFloat)preferredNavigationBarHeight;
-(void)setup;
-(void)setupBackgroundView;
-(void)setupContainerView;
-(void)setupNavigationBar;
-(void)leftBarItemDidTap;
-(void)bgViewDidTap;
-(void)orientationDidChange;
-(void)keyboardWillShow:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)adjustContainerViewOrigin;
-(id)getCurrentTextInputInView:(id)arg0 ;
-(void)firstResponderDidChange;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)convertTransitioningContext:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)popupNavigationBar:(id)arg0 touchDidMoveWithOffset:(CGFloat)arg1 ;
-(void)popupNavigationBar:(id)arg0 touchDidEndWithOffset:(CGFloat)arg1 ;
+(void)load;


@end


#endif