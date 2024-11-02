// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPBAR_H
#define LNPOPUPBAR_H

@class UILabel<__MarqueeLabelType>;
@protocol LNPopupBarPreviewingDelegate;

#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "_LNPopupBarAppearanceChainProxy.h"
#import "LNPopupItem.h"
#import "_LNPopupBarBackgroundView.h"
#import "LNPopupBarAppearance.h"
#import "LNPopupCustomBarViewController.h"
#import "UIPointerInteractionDelegate-Protocol.h"
#import "_LNPopupBarAppearanceDelegate-Protocol.h"
#import "UIAppearanceContainer-Protocol.h"
#import "_LNPopupBarDelegate-Protocol.h"

@interface LNPopupBar : UIView <UIPointerInteractionDelegate, _LNPopupBarAppearanceDelegate, UIAppearanceContainer>

 {
    NSInteger _resolvedStyle;
    BOOL _delaysBarButtonItemLayout;
    UIView *_titlesView;
    UILabel<__MarqueeLabelType> *_titleLabel;
    UILabel<__MarqueeLabelType> *_subtitleLabel;
    BOOL _needsLabelsLayout;
    BOOL _marqueePaused;
    UIColor *_userTintColor;
    UIColor *_userBackgroundColor;
    UIToolbar *_toolbar;
    UIView *_shadowView;
}


@property (nonatomic) BOOL inheritsVisualStyleFromDockingView;
@property (nonatomic) NSInteger backgroundStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (copy, nonatomic) NSDictionary *subtitleTextAttributes;
@property (nonatomic) BOOL marqueeScrollEnabled;
@property (nonatomic) CGFloat marqueeScrollRate;
@property (nonatomic) CGFloat marqueeScrollDelay;
@property (nonatomic) BOOL coordinateMarqueeScroll;
@property (weak, nonatomic) NSObject<LNPopupBarPreviewingDelegate> *previewingDelegate;
@property (readonly, copy, nonatomic) NSArray *leftBarButtonItems;
@property (readonly, copy, nonatomic) NSArray *rightBarButtonItems;
@property (retain, nonatomic) UIColor *systemTintColor; // ivar: _systemTintColor
@property (retain, nonatomic) UIColor *systemBackgroundColor; // ivar: _systemBackgroundColor
@property (retain, nonatomic) UIBarAppearance *systemAppearance; // ivar: _systemAppearance
@property (readonly, nonatomic) _LNPopupBarAppearanceChainProxy *activeAppearanceChain; // ivar: _activeAppearanceChain
@property (retain, nonatomic) UIView *bottomShadowView; // ivar: _bottomShadowView
@property (weak, nonatomic) LNPopupItem *popupItem; // ivar: _popupItem
@property (weak, nonatomic) NSObject<_LNPopupBarDelegate> *_barDelegate; // ivar: __barDelegate
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIViewController *swiftuiImageController; // ivar: _swiftuiImageController
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) UIProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) _LNPopupBarBackgroundView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIVisualEffectView *interactionBackgroundView; // ivar: _interactionBackgroundView
@property (retain, nonatomic) NSString *effectGroupingIdentifier;
@property (copy, nonatomic) NSString *accessibilityCenterLabel; // ivar: _accessibilityCenterLabel
@property (copy, nonatomic) NSString *accessibilityCenterHint; // ivar: _accessibilityCenterHint
@property (copy, nonatomic) NSString *accessibilityImageLabel; // ivar: _accessibilityImageLabel
@property (copy, nonatomic) NSString *accessibilityProgressLabel; // ivar: _accessibilityProgressLabel
@property (copy, nonatomic) NSString *accessibilityProgressValue; // ivar: _accessibilityProgressValue
@property (copy, nonatomic) NSArray *leadingBarButtonItems; // ivar: _leadingBarButtonItems
@property (copy, nonatomic) NSArray *trailingBarButtonItems; // ivar: _trailingBarButtonItems
@property (retain, nonatomic) UITapGestureRecognizer *popupOpenGestureRecognizer; // ivar: _popupOpenGestureRecognizer
@property (retain, nonatomic) UILongPressGestureRecognizer *barHighlightGestureRecognizer; // ivar: _barHighlightGestureRecognizer
@property (nonatomic) BOOL _applySwiftUILayoutFixes; // ivar: __applySwiftUILayoutFixes
@property (nonatomic) BOOL inheritsAppearanceFromDockingView; // ivar: _inheritsAppearanceFromDockingView
@property (readonly, copy, nonatomic) NSArray *barButtonItems;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger barStyle; // ivar: _barStyle
@property (copy, nonatomic) LNPopupBarAppearance *standardAppearance; // ivar: _standardAppearance
@property (nonatomic) NSInteger progressViewStyle; // ivar: _progressViewStyle
@property (nonatomic) NSInteger barItemsSemanticContentAttribute; // ivar: _barItemsSemanticContentAttribute
@property (retain, nonatomic) LNPopupCustomBarViewController *customBarViewController; // ivar: _customBarViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)setHidden:(BOOL)arg0 ;
-(void)_setHighlightAlpha:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)_updateProgressViewWithStyle:(NSInteger)arg0 ;
-(void)updateConstraints;
-(void)_layoutCustomBarController;
-(void)layoutSubviews;
-(void)updatePageStyles;
-(void)_applyGroupingIdentifier:(id)arg0 toVisualEffectView:(id)arg1 ;
-(void)_applyGroupingIdentifierToVisualEffectView:(id)arg0 ;
-(id)backgroundColor;
-(void)_internalSetBackgroundColor:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)_recalcActiveAppearanceChain;
-(void)popupBarAppearanceDidChange:(id)arg0 ;
-(void)_appearanceDidChange;
-(id)tintColor;
-(void)setTintColor:(id)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(id)_newMarqueeLabel;
-(id)_viewForBarButtonItem:(id)arg0 ;
-(void)_getLeftmostView:(*id)arg0 rightmostView:(*id)arg1 fromBarButtonItems:(id)arg2 ;
-(void)_updateTitleInsetsForCompactBar:(struct UIEdgeInsets *)arg0 ;
-(void)_updateTitleInsetsForProminentBar:(struct UIEdgeInsets *)arg0 ;
-(void)_layoutTitles;
-(void)_updateAccessibility;
-(void)_setNeedsTitleLayout;
-(void)_layoutImageView;
-(void)_delayBarButtonLayout;
-(void)_layoutBarButtonItems;
-(void)_updateViewsAfterCustomBarViewControllerUpdate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)_recalculateCoordinatedMarqueeScrollIfNeeded;
-(void)_removeAnimationFromBarItems;
-(void)_transitionCustomBarViewControllerWithPopupContainerSize:(struct CGSize )arg0 withCoordinator:(id)arg1 ;
-(void)_transitionCustomBarViewControllerWithPopupContainerTraitCollection:(id)arg0 withCoordinator:(id)arg1 ;
-(void)dealloc;
-(void)_cancelAnyUserInteraction;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;


@end


#endif