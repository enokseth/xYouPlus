// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTCOLORBLOCKCALLBACK_H
#define LOTCOLORBLOCKCALLBACK_H


#import <Foundation/Foundation.h>

#import "LOTColorValueDelegate-Protocol.h"

@interface LOTColorBlockCallback : NSObject <LOTColorValueDelegate>



@property (copy, nonatomic) id *callback; // ivar: _callback
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(struct CGColor *)colorForFrame:(CGFloat)arg0 startKeyframe:(CGFloat)arg1 endKeyframe:(CGFloat)arg2 interpolatedProgress:(CGFloat)arg3 startColor:(struct CGColor *)arg4 endColor:(struct CGColor *)arg5 currentColor:(struct CGColor *)arg6 ;
+(id)withBlock:(id)arg0 ;


@end


#endif