// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPVIEWCELL_H
#define FRPVIEWCELL_H



#import "FRPCell.h"

@interface FRPViewCell : FRPCell

@property (copy, nonatomic) id *layoutBlock; // ivar: _layoutBlock
@property (nonatomic) BOOL hideSeperators; // ivar: _hideSeperators


// -(id)cellWithHeight:(int)arg0 initBlock:(id)arg1 layoutBlock:(unk)arg2  ;
-(void)layoutSubviews;
-(void)addSubview:(id)arg0 ;
// +(id)cellWithHeight:(int)arg0 initBlock:(id)arg1 layoutBlock:(unk)arg2  ;


@end


#endif