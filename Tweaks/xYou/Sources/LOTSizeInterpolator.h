// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSIZEINTERPOLATOR_H
#define LOTSIZEINTERPOLATOR_H



#import "LOTValueInterpolator.h"
#import "LOTSizeValueDelegate-Protocol.h"

@interface LOTSizeInterpolator : LOTValueInterpolator

@property (weak, nonatomic) NSObject<LOTSizeValueDelegate> *delegate; // ivar: _delegate


-(struct CGSize )sizeValueForFrame:(id)arg0 ;
-(BOOL)hasDelegateOverride;
-(void)setValueDelegate:(id)arg0 ;


@end


#endif