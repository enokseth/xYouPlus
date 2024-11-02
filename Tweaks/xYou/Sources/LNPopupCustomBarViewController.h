// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPCUSTOMBARVIEWCONTROLLER_H
#define LNPOPUPCUSTOMBARVIEWCONTROLLER_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "LNPopupBar.h"
#import "LNPopupController.h"
#import "UIPointerInteractionDelegate-Protocol.h"

@interface LNPopupCustomBarViewController : UIViewController <UIPointerInteractionDelegate>



@property (weak, nonatomic) LNPopupBar *containingPopupBar; // ivar: _containingPopupBar
@property (weak, nonatomic) LNPopupController *popupController; // ivar: _popupController
@property (readonly, nonatomic) BOOL wantsDefaultTapGestureRecognizer;
@property (readonly, nonatomic) BOOL wantsDefaultPanGestureRecognizer;
@property (readonly, nonatomic) BOOL wantsDefaultHighlightGestureRecognizer;
@property (nonatomic) CGSize preferredContentSize;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)popupItemDidUpdate;
-(id)popupContentViewController;
-(id)popupPresentationContainerViewController;


@end


#endif