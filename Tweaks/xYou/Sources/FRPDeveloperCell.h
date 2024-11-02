// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPDEVELOPERCELL_H
#define FRPDEVELOPERCELL_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "FRPCell.h"

@interface FRPDeveloperCell : FRPCell

@property (retain, nonatomic) NSString *url; // ivar: _url
@property (retain, nonatomic) UIImage *image; // ivar: _image


-(id)cellWithTitle:(id)arg0 detail:(id)arg1 image:(id)arg2 url:(id)arg3 ;
-(void)layoutSubviews;
-(void)didSelectFromTable:(id)arg0 ;
+(id)cellWithTitle:(id)arg0 detail:(id)arg1 image:(id)arg2 url:(id)arg3 ;


@end


#endif