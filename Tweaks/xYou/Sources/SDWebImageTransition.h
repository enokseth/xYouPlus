// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGETRANSITION_H
#define SDWEBIMAGETRANSITION_H


#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>


@interface SDWebImageTransition : NSObject

@property (nonatomic) BOOL avoidAutoSetImage; // ivar: _avoidAutoSetImage
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction
@property (nonatomic) NSUInteger animationOptions; // ivar: _animationOptions
@property (copy, nonatomic) id *prepares; // ivar: _prepares
@property (copy, nonatomic) id *animations; // ivar: _animations
@property (copy, nonatomic) id *completion; // ivar: _completion


-(id)init;
+(id)fadeTransition;
+(id)fadeTransitionWithDuration:(CGFloat)arg0 ;
+(id)flipFromLeftTransition;
+(id)flipFromLeftTransitionWithDuration:(CGFloat)arg0 ;
+(id)flipFromRightTransition;
+(id)flipFromRightTransitionWithDuration:(CGFloat)arg0 ;
+(id)flipFromTopTransition;
+(id)flipFromTopTransitionWithDuration:(CGFloat)arg0 ;
+(id)flipFromBottomTransition;
+(id)flipFromBottomTransitionWithDuration:(CGFloat)arg0 ;
+(id)curlUpTransition;
+(id)curlUpTransitionWithDuration:(CGFloat)arg0 ;
+(id)curlDownTransition;
+(id)curlDownTransitionWithDuration:(CGFloat)arg0 ;


@end


#endif