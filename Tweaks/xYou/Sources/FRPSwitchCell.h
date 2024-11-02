// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPSWITCHCELL_H
#define FRPSWITCHCELL_H



#import "FRPCell.h"
#import "JTMaterialSwitch.h"

@interface FRPSwitchCell : FRPCell

@property (retain, nonatomic) JTMaterialSwitch *switchView; // ivar: _switchView


-(id)cellWithTitle:(id)arg0 setting:(id)arg1 postNotification:(id)arg2 changeBlock:(id)arg3 ;
-(void)switchChanged:(id)arg0 ;
-(void)layoutSubviews;
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 postNotification:(id)arg2 changeBlock:(id)arg3 ;


@end


#endif