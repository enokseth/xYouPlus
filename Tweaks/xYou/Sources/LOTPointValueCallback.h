// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTPOINTVALUECALLBACK_H
#define LOTPOINTVALUECALLBACK_H


#import <Foundation/Foundation.h>

#import "LOTPointValueDelegate-Protocol.h"

@interface LOTPointValueCallback : NSObject <LOTPointValueDelegate>



@property (nonatomic) CGPoint pointValue; // ivar: _pointValue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(struct CGPoint )pointForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startPoint:(struct CGPoint )arg4 endPoint:(struct CGPoint )arg5 currentPoint:(struct CGPoint )arg6 ;
+(id)withPointValue:(struct CGPoint )arg0 ;


@end


#endif