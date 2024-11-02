// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef XYOUWELCOME_H
#define XYOUWELCOME_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


@interface xYouWelcome : UIViewController

@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (retain, nonatomic) NSString *item_one_title; // ivar: _item_one_title
@property (retain, nonatomic) NSString *item_one_description; // ivar: _item_one_description
@property (retain, nonatomic) NSString *item_two_title; // ivar: _item_two_title
@property (retain, nonatomic) NSString *item_two_description; // ivar: _item_two_description
@property (retain, nonatomic) NSString *item_three_title; // ivar: _item_three_title
@property (retain, nonatomic) NSString *item_three_description; // ivar: _item_three_description
@property (retain, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (retain, nonatomic) NSString *buttonCaption; // ivar: _buttonCaption
@property (retain, nonatomic) NSString *package_ID; // ivar: _package_ID
@property (retain, nonatomic) NSString *bundle_Name; // ivar: _bundle_Name
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property BOOL colorItemsImages; // ivar: _colorItemsImages


-(void)viewDidLoad;
-(void)dismissWelcomeController;
-(void)openTwitterForUser:(id)arg0 ;
-(void)openTwitter;


@end


#endif