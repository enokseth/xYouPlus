// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef STPOPUPNAVIGATIONBAR_H
#define STPOPUPNAVIGATIONBAR_H


#import <UIKit/UIKit.h>

#import "STPopupNavigationTouchEventDelegate-Protocol.h"

@interface STPopupNavigationBar : UINavigationBar {
    BOOL _moving;
    CGFloat _movingStartY;
}


@property (weak, nonatomic) NSObject<STPopupNavigationTouchEventDelegate> *touchEventDelegate; // ivar: _touchEventDelegate
@property (nonatomic) BOOL draggable; // ivar: _draggable


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)movingDidEndWithOffset:(float)arg0 ;


@end


#endif