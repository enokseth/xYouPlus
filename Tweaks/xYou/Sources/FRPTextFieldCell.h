// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPTEXTFIELDCELL_H
#define FRPTEXTFIELDCELL_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "FRPCell.h"
#import "UITextFieldDelegate-Protocol.h"

@interface FRPTextFieldCell : FRPCell <UITextFieldDelegate>



@property (retain, nonatomic) UITextField *textField; // ivar: _textField
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)cellWithTitle:(id)arg0 setting:(id)arg1 placeholder:(id)arg2 postNotification:(id)arg3 changeBlock:(id)arg4 ;
-(void)textFieldChanged:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(void)layoutSubviews;
+(id)cellWithTitle:(id)arg0 setting:(id)arg1 placeholder:(id)arg2 postNotification:(id)arg3 changeBlock:(id)arg4 ;


@end


#endif