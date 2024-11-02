// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPSEGMENTCELL_H
#define FRPSEGMENTCELL_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>

#import "FRPCell.h"

@interface FRPSegmentCell : FRPCell

@property (retain, nonatomic) UISegmentedControl *segment; // ivar: _segment
@property (retain, nonatomic) NSArray *values; // ivar: _values
@property (retain, nonatomic) NSArray *displayedValues; // ivar: _displayedValues


-(id)cellWithTitle:(id)arg0 setting:(id)arg1 values:(id)arg2 displayedValues:(id)arg3 postNotification:(id)arg4 changeBlock:(id)arg5 ;
-(void)segmentAction:(id)arg0 ;
-(void)layoutSubviews;
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 items:(id)arg2 postNotification:(id)arg3 changeBlock:(id)arg4 ;
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 values:(id)arg2 displayedValues:(id)arg3 postNotification:(id)arg4 changeBlock:(id)arg5 ;
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 values:(id)arg2 postNotification:(id)arg3 changeBlock:(id)arg4 ;


@end


#endif