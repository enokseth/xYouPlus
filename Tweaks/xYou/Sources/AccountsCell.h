// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef ACCOUNTSCELL_H
#define ACCOUNTSCELL_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "FRPCell.h"
#import "UserButtonCell.h"

@interface AccountsCell : FRPCell {
    UIViewController *_vc;
    NSString *_user;
    NSString *_user2;
    UserButtonCell *userButton;
    UserButtonCell *donationButton;
    UserButtonCell *designerButton;
}




-(id)initWithColor:(id)arg0 twitter:(id)arg1 label:(id)arg2 designer:(id)arg3 designerLabel:(id)arg4 designerImage:(id)arg5 bundlePath:(id)arg6 vc:(id)arg7 ;
-(void)buttonDidTap:(id)arg0 ;
-(void)didTapDonation;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(id)urlForTwitterUsername:(id)arg0 ;
+(id)initWithColor:(id)arg0 twitter:(id)arg1 label:(id)arg2 designer:(id)arg3 designerLabel:(id)arg4 designerImage:(id)arg5 bundlePath:(id)arg6 vc:(id)arg7 ;


@end


#endif