// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@interface UIViewController (STPopup)

@property (nonatomic) CGSize contentSizeInPopup;
@property (nonatomic) CGSize landscapeContentSizeInPopup;
@property (readonly, weak, nonatomic) STPopupController *popupController;


-(void)st_viewDidLoad;
-(void)st_presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)st_dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(id)st_presentedViewController;
-(id)st_presentingViewController;
-(void)setContentSizeInPopup:(struct CGSize )arg0 ;
-(struct CGSize )contentSizeInPopup;
-(void)setLandscapeContentSizeInPopup:(struct CGSize )arg0 ;
-(struct CGSize )landscapeContentSizeInPopup;
-(void)setPopupController:(id)arg0 ;
-(id)popupController;
+(void)load;
+(void)swizzleSelector:(SEL)arg0 toSelector:(SEL)arg1 ;
@end


