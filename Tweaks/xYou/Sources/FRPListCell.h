// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPLISTCELL_H
#define FRPLISTCELL_H


#import <CoreFoundation/CoreFoundation.h>

#import "FRPCell.h"

@interface FRPListCell : FRPCell

@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSArray *values; // ivar: _values
@property (nonatomic) BOOL popView; // ivar: _popView


-(id)cellWithTitle:(id)arg0 setting:(id)arg1 items:(id)arg2 value:(id)arg3 popViewOnSelect:(BOOL)arg4 postNotification:(id)arg5 changedBlock:(id)arg6 ;
-(void)didSelectFromTable:(id)arg0 ;
-(void)layoutSubviews;
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 items:(id)arg2 value:(id)arg3 popViewOnSelect:(BOOL)arg4 postNotification:(id)arg5 changedBlock:(id)arg6 ;


@end


#endif