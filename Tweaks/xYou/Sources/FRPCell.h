// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPCELL_H
#define FRPCELL_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "FRPSettings.h"

@interface FRPCell : UITableViewCell

@property (retain, nonatomic) UIColor *tintUIColor; // ivar: _tintUIColor
@property (retain, nonatomic) FRPSettings *setting; // ivar: _setting
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *postNotification; // ivar: _postNotification
@property (copy, nonatomic) id *valueChanged; // ivar: _valueChanged
@property (nonatomic) int height; // ivar: _height


-(id)initWithTitle:(id)arg0 setting:(id)arg1 ;
-(void)didSelectFromTable:(id)arg0 ;
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 ;


@end


#endif