// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTNUMBERINTERPOLATOR_H
#define LOTNUMBERINTERPOLATOR_H



#import "LOTValueInterpolator.h"
#import "LOTNumberValueDelegate-Protocol.h"

@interface LOTNumberInterpolator : LOTValueInterpolator

@property (weak, nonatomic) NSObject<LOTNumberValueDelegate> *delegate; // ivar: _delegate


-(CGFloat)floatValueForFrame:(id)arg0 ;
-(BOOL)hasDelegateOverride;
-(void)setValueDelegate:(id)arg0 ;


@end


#endif