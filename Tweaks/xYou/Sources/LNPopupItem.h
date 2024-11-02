// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPITEM_H
#define LNPOPUPITEM_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>

#import "LNPopupBarAppearance.h"
#import "_LNPopupItemDelegate-Protocol.h"

@interface LNPopupItem : NSObject

@property (copy, nonatomic) NSArray *leftBarButtonItems;
@property (copy, nonatomic) NSArray *rightBarButtonItems;
@property (retain, nonatomic) UIViewController *swiftuiImageController; // ivar: _swiftuiImageController
@property (copy, nonatomic) NSString *accessibilityImageLabel; // ivar: _accessibilityImageLabel
@property (copy, nonatomic) NSString *accessibilityProgressLabel; // ivar: _accessibilityProgressLabel
@property (copy, nonatomic) NSString *accessibilityProgressValue; // ivar: _accessibilityProgressValue
@property (weak, nonatomic, getter=_itemDelegate, setter=_setItemDelegate:) NSObject<_LNPopupItemDelegate> *itemDelegate; // ivar: _itemDelegate
@property (weak, nonatomic, getter=_containerController, setter=_setContainerController:) UIViewController *containerController; // ivar: _containerController
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) float progress; // ivar: _progress
@property (retain, nonatomic) UIColor *progressTintColor; // ivar: _progressTintColor
@property (copy, nonatomic) NSArray *barButtonItems;
@property (copy, nonatomic) NSArray *leadingBarButtonItems; // ivar: _leadingBarButtonItems
@property (copy, nonatomic) NSArray *trailingBarButtonItems; // ivar: _trailingBarButtonItems
@property (copy, nonatomic) LNPopupBarAppearance *standardAppearance; // ivar: _standardAppearance


-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
+(void)load;


@end


#endif