// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef STPOPUPLEFTBARITEM_H
#define STPOPUPLEFTBARITEM_H


#import <UIKit/UIKit.h>


@interface STPopupLeftBarItem : UIBarButtonItem {
    UIControl *_customView;
    UIView *_bar1;
    UIView *_bar2;
}


@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)updateLayout;
-(void)setTintColor:(id)arg0 ;


@end


#endif