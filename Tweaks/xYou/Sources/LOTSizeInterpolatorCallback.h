// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSIZEINTERPOLATORCALLBACK_H
#define LOTSIZEINTERPOLATORCALLBACK_H


#import <Foundation/Foundation.h>

#import "LOTSizeValueDelegate-Protocol.h"

@interface LOTSizeInterpolatorCallback : NSObject <LOTSizeValueDelegate>



@property (nonatomic) CGSize fromSize; // ivar: _fromSize
@property (nonatomic) CGSize toSize; // ivar: _toSize
@property (nonatomic) CGFloat currentProgress; // ivar: _currentProgress
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(struct CGSize )sizeForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startSize:(struct CGSize )arg4 endSize:(struct CGSize )arg5 currentSize:(struct CGSize )arg6 ;
+(id)withFromSize:(struct CGSize )arg0 toSize:(struct CGSize )arg1 ;


@end


#endif