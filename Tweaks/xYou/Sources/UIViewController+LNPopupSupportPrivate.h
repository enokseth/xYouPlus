// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@interface UIViewController (LNPopupSupportPrivate)

@property (readonly, nonatomic, getter=_ln_popupController) LNPopupController *ln_popupController;
@property (weak, nonatomic) UIViewController *popupPresentationContainerViewController;
@property (readonly, nonatomic) UIViewController *popupContentViewController;
@property (readonly, nonatomic, getter=_ln_bottomBarSupport) _LNPopupBottomBarSupport *bottomBarSupport;


-(id)_ln_popupController;
-(id)_ln_bottomBarSupport_nocreate;
-(id)_ln_bottomBarSupport;
-(id)bottomDockingViewForPopup_nocreateOrDeveloper;
-(id)bottomDockingViewForPopup_internalOrDeveloper;
-(id)bottomDockingViewForPopupBar;
-(struct UIEdgeInsets )insetsForBottomDockingView;
-(struct CGRect )defaultFrameForBottomDockingView;
-(struct CGRect )defaultFrameForBottomDockingView_internal;
-(struct CGRect )defaultFrameForBottomDockingView_internalOrDeveloper;
-(BOOL)shouldExtendPopupBarUnderSafeArea;
-(void)setShouldExtendPopupBarUnderSafeArea:(BOOL)arg0 ;
-(id)nonMemoryLeakingPresentationController;
-(void)presentPopupBarWithContentViewController:(id)arg0 openPopup:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)presentPopupBarWithContentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)openPopupAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)closePopupAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPopupBarAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)updatePopupBarAppearance;
-(void)setNeedsPopupBarAppearanceUpdate;
-(NSInteger)popupPresentationState;
-(id)popupPresentationDelegate;
-(void)setPopupPresentationDelegate:(id)arg0 ;
-(BOOL)_isContainedInPopupController;
-(BOOL)_isContainedInPopupControllerOrDeallocated;
-(id)popupPresentationContainerViewController;
-(void)setPopupPresentationContainerViewController:(id)arg0 ;
-(id)popupContentViewController;
-(void)setPopupContentViewController:(id)arg0 ;
-(id)popupItem;
-(BOOL)positionPopupCloseButton:(id)arg0 ;
-(id)popupBar;
-(id)popupContentView;
-(NSInteger)popupInteractionStyle;
-(void)setPopupInteractionStyle:(NSInteger)arg0 ;
-(id)_ln_popupController_nocreate;
-(id)viewForPopupInteractionGestureRecognizer;
-(BOOL)_ln_isInPopupAppearanceTransition;
-(void)_ln_beginAppearanceTransition:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_ln_endAppearanceTransition;
@end


