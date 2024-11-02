// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTPATHVALUECALLBACK_H
#define LOTPATHVALUECALLBACK_H


#import <Foundation/Foundation.h>

#import "LOTPathValueDelegate-Protocol.h"

@interface LOTPathValueCallback : NSObject <LOTPathValueDelegate>



@property (nonatomic) *CGPath pathValue; // ivar: _pathValue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(struct CGPath *)pathForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 ;
+(id)withCGPath:(struct CGPath *)arg0 ;


@end


#endif