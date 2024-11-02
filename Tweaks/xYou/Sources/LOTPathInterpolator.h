// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTPATHINTERPOLATOR_H
#define LOTPATHINTERPOLATOR_H



#import "LOTValueInterpolator.h"
#import "LOTPathValueDelegate-Protocol.h"

@interface LOTPathInterpolator : LOTValueInterpolator

@property (weak, nonatomic) NSObject<LOTPathValueDelegate> *delegate; // ivar: _delegate


-(id)pathForFrame:(id)arg0 cacheLengths:(BOOL)arg1 ;
-(void)setValueDelegate:(id)arg0 ;
-(BOOL)hasDelegateOverride;


@end


#endif