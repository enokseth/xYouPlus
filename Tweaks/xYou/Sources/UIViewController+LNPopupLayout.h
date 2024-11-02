// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@interface UIViewController (LNPopupLayout)



-(BOOL)_ln_isModalInPresentation;
-(void)_ln_popup_setOverrideUserInterfaceStyle:(NSInteger)arg0 ;
-(void)_ln_setAdditionalSafeAreaInsets:(struct UIEdgeInsets )arg0 ;
-(void)_ln_setChildAdditiveSafeAreaInsets:(struct UIEdgeInsets )arg0 ;
-(struct UIEdgeInsets )_ln_additionalSafeAreaInsets;
-(struct UIEdgeInsets )_ln_popupSafeAreaInsetsForChildController;
-(void)_ln_sPVC:(id)arg0 ;
-(void)_ln_presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_ln_setNeedsStatusBarAppearanceUpdate;
-(void)_ln_viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_ln_willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(id)_findAncestorParentPopupContainerController;
-(id)_findChildInPopupPresentation;
-(id)_common_childviewControllersForStatusBarLogic;
-(id)_ln_common_childViewControllerForStatusBarHidden;
-(id)_ln_common_childViewControllerForStatusBarStyle;
-(id)_ln_childViewControllerForStatusBarHidden;
-(id)_ln_childViewControllerForStatusBarStyle;
-(void)_ln_setPopupPresentationState:(NSInteger)arg0 ;
-(id)_aSTVC;
-(void)_common_uLFSBAIO;
-(void)_uLFSBAIO;
-(struct UIEdgeInsets )_vSAIFS;
-(BOOL)_vCUSB;
-(void)_layoutPopupBarOrderForTransition;
-(void)_layoutPopupBarOrderForUse;
-(id)_ln_bottomBarExtension_nocreate;
-(id)_ln_bottomBarExtension;
-(void)_ln_popup_viewDidLayoutSubviews;
-(BOOL)_ignoringLayoutDuringTransition;
-(void)_setIgnoringLayoutDuringTransition:(BOOL)arg0 ;
+(void)load;
@end


