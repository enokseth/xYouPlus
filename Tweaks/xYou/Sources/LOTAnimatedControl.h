// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTANIMATEDCONTROL_H
#define LOTANIMATEDCONTROL_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>

#import "LOTAnimationView.h"
#import "LOTComposition.h"

@interface LOTAnimatedControl : UIControl {
    NSUInteger _priorState;
    NSMutableDictionary *_layerMap;
}


@property (readonly, nonatomic) LOTAnimationView *animationView; // ivar: _animationView
@property (retain, nonatomic) LOTComposition *animationComp;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_commonInit;
-(void)setLayerName:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(NSUInteger)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)checkStateChangedAndUpdate:(BOOL)arg0 ;


@end


#endif