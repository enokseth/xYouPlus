// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTVALUEINTERPOLATOR_H
#define LOTVALUEINTERPOLATOR_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "LOTKeyframe.h"

@interface LOTValueInterpolator : NSObject

@property (retain, nonatomic) NSArray *keyframes; // ivar: _keyframes
@property (weak, nonatomic) LOTKeyframe *leadingKeyframe; // ivar: _leadingKeyframe
@property (weak, nonatomic) LOTKeyframe *trailingKeyframe; // ivar: _trailingKeyframe
@property (readonly, nonatomic) BOOL hasDelegateOverride; // ivar: _hasDelegateOverride


-(id)initWithKeyframes:(id)arg0 ;
-(BOOL)hasUpdateForFrame:(id)arg0 ;
-(void)updateKeyframeSpanForFrame:(id)arg0 ;
-(CGFloat)progressForFrame:(id)arg0 ;
-(void)setValueDelegate:(id)arg0 ;


@end


#endif