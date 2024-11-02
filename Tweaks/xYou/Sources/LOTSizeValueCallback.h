// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTSIZEVALUECALLBACK_H
#define LOTSIZEVALUECALLBACK_H


#import <Foundation/Foundation.h>

#import "LOTSizeValueDelegate-Protocol.h"

@interface LOTSizeValueCallback : NSObject <LOTSizeValueDelegate>



@property (nonatomic) CGSize sizeValue; // ivar: _sizeValue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(struct CGSize )sizeForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startSize:(struct CGSize )arg4 endSize:(struct CGSize )arg5 currentSize:(struct CGSize )arg6 ;
+(id)withPointValue:(struct CGSize )arg0 ;


@end


#endif