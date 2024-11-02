// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTPOINTINTERPOLATOR_H
#define LOTPOINTINTERPOLATOR_H



#import "LOTValueInterpolator.h"
#import "LOTPointValueDelegate-Protocol.h"

@interface LOTPointInterpolator : LOTValueInterpolator

@property (weak, nonatomic) NSObject<LOTPointValueDelegate> *delegate; // ivar: _delegate


-(struct CGPoint )pointValueForFrame:(id)arg0 ;
-(BOOL)hasDelegateOverride;
-(void)setValueDelegate:(id)arg0 ;


@end


#endif