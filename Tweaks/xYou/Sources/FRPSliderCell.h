// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPSLIDERCELL_H
#define FRPSLIDERCELL_H


#import <UIKit/UIKit.h>

#import "FRPCell.h"

@interface FRPSliderCell : FRPCell

@property (retain, nonatomic) UISlider *sliderCell; // ivar: _sliderCell
@property (retain, nonatomic) UILabel *lLabel; // ivar: _lLabel
@property (retain, nonatomic) UILabel *rLabel; // ivar: _rLabel
@property (retain, nonatomic) UILabel *cLabel; // ivar: _cLabel
@property (retain, nonatomic) UILabel *vLabel; // ivar: _vLabel
@property (nonatomic) float min; // ivar: _min
@property (nonatomic) float max; // ivar: _max


-(id)cellWithTitle:(id)arg0 setting:(id)arg1 min:(float)arg2 max:(float)arg3 postNotification:(id)arg4 changeBlock:(id)arg5 ;
-(void)layoutSubviews;
-(void)sliderChanged:(id)arg0 ;
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 min:(float)arg2 max:(float)arg3 postNotification:(id)arg4 changeBlock:(id)arg5 ;


@end


#endif