// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDINDICATORVIEW_H
#define JGPROGRESSHUDINDICATORVIEW_H


#import <UIKit/UIKit.h>


@interface JGProgressHUDIndicatorView : UIView {
    BOOL _accessibilityUpdateScheduled;
}


@property (nonatomic) float progress; // ivar: _progress
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithContentView:(id)arg0 ;
-(void)setUpForHUDStyle:(NSUInteger)arg0 vibrancyEnabled:(BOOL)arg1 ;
-(void)setNeedsAccessibilityUpdate;
-(void)updateAccessibilityIfNeeded;
-(void)updateAccessibility;
+(void)runBlock:(id)arg0 ;


@end


#endif