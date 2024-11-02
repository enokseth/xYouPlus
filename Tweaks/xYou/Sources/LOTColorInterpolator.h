// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTCOLORINTERPOLATOR_H
#define LOTCOLORINTERPOLATOR_H



#import "LOTValueInterpolator.h"
#import "LOTColorValueDelegate-Protocol.h"

@interface LOTColorInterpolator : LOTValueInterpolator

@property (weak, nonatomic) NSObject<LOTColorValueDelegate> *delegate; // ivar: _delegate


-(struct CGColor *)colorForFrame:(id)arg0 ;
-(void)setValueDelegate:(id)arg0 ;
-(BOOL)hasDelegateOverride;


@end


#endif