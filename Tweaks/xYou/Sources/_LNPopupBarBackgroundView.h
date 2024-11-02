// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef _LNPOPUPBARBACKGROUNDVIEW_H
#define _LNPOPUPBARBACKGROUNDVIEW_H


#import <UIKit/UIKit.h>


@interface _LNPopupBarBackgroundView : UIVisualEffectView {
    UIView *_colorView;
    UIImageView *_imageView;
}


@property (readonly, nonatomic) UIView *colorView;
@property (readonly, nonatomic) UIImageView *imageView;


-(id)initWithEffect:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif