// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTFLOATINTERPOLATORCALLBACK_H
#define LOTFLOATINTERPOLATORCALLBACK_H


#import <Foundation/Foundation.h>

#import "LOTNumberValueDelegate-Protocol.h"

@interface LOTFloatInterpolatorCallback : NSObject <LOTNumberValueDelegate>



@property (nonatomic) CGFloat fromFloat; // ivar: _fromFloat
@property (nonatomic) CGFloat toFloat; // ivar: _toFloat
@property (nonatomic) CGFloat currentProgress; // ivar: _currentProgress
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(CGFloat)floatValueForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startValue:(CGFloat)arg4 endValue:(CGFloat)arg5 currentValue:(CGFloat)arg6 ;
+(id)withFromFloat:(CGFloat)arg0 toFloat:(CGFloat)arg1 ;


@end


#endif