// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPCLOSEBUTTON_H
#define LNPOPUPCLOSEBUTTON_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "__LNChevronView.h"
#import "LNPopupContentView.h"
#import "UIAppearanceContainer-Protocol.h"

@interface LNPopupCloseButton : UIButton <UIAppearanceContainer>

 {
    UIVisualEffectView *_effectView;
    UIView *_highlightView;
    __LNChevronView *_chevronView;
}


@property (weak, nonatomic) LNPopupContentView *popupContentView; // ivar: _popupContentView
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) UIVisualEffectView *backgroundView;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)_cleanup;
-(void)_setupForChevronButton;
-(void)_setupForCircularButton;
-(void)_didTouchDown;
-(void)_didTouchDragExit;
-(void)_didTouchDragEnter;
-(void)_didTouchUp;
-(void)_didTouchCancel;
-(void)_setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setButtonContainerStationary;
-(void)_setButtonContainerTransitioning;
-(void)tintColorDidChange;


@end


#endif