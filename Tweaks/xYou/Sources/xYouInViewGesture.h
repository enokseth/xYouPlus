// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef XYOUINVIEWGESTURE_H
#define XYOUINVIEWGESTURE_H



#import "xYouPanGestureRecognizer.h"

@interface xYouInViewGesture : xYouPanGestureRecognizer

@property (nonatomic) BOOL isStarted; // ivar: _isStarted
@property (nonatomic) NSUInteger currentPoint; // ivar: _currentPoint
@property (nonatomic) NSUInteger previousPoint; // ivar: _previousPoint
@property (nonatomic) CGFloat startedScale; // ivar: _startedScale
@property (nonatomic) NSUInteger gestureSpeed; // ivar: _gestureSpeed
@property (nonatomic) id *currentLayout; // ivar: _currentLayout
@property (nonatomic) NSUInteger startedPoint; // ivar: _startedPoint
@property (nonatomic) NSUInteger targetHeight; // ivar: _targetHeight


-(BOOL)isMovingToLeft;
-(BOOL)isMovingToRight;
-(void)started;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif