// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SSBOUNCYBUTTON_H
#define SSBOUNCYBUTTON_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>


@interface SSBouncyButton : UIButton

@property (retain, nonatomic) NSTimer *touchDelayTimer; // ivar: _touchDelayTimer
@property (nonatomic) BOOL isShrinking; // ivar: _isShrinking
@property (nonatomic) BOOL isShrinked; // ivar: _isShrinked
@property (nonatomic) BOOL touchEnded; // ivar: _touchEnded
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)updateBackgroundImage;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)beginShrinkAnimation;
-(void)beginEnlargeAnimation;


@end


#endif