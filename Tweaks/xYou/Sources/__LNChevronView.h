// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef __LNCHEVRONVIEW_H
#define __LNCHEVRONVIEW_H


#import <UIKit/UIKit.h>


@interface __LNChevronView : UIView {
    UIView *_leftView;
    UIView *_rightView;
    NSInteger _pendingState;
}


@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) CGFloat width; // ivar: _width
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_commonInit;
-(void)layoutSubviews;
-(void)setChevronState:(NSInteger)arg0 ;
-(void)tintColorDidChange;


@end


#endif