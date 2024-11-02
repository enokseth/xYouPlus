// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef XYOUPANGESTURERECOGNIZER_H
#define XYOUPANGESTURERECOGNIZER_H


#import <UIKit/UIKit.h>


@interface xYouPanGestureRecognizer : UIGestureRecognizer

@property (nonatomic) CGPoint initialLocationOnScreen; // ivar: _initialLocationOnScreen
@property (nonatomic) CGFloat initialScale; // ivar: _initialScale
@property (nonatomic) BOOL pressedLongEnough; // ivar: _pressedLongEnough
@property (nonatomic) BOOL verticalDirection; // ivar: _verticalDirection
@property (nonatomic) NSUInteger numberOfTapsRequired; // ivar: _numberOfTapsRequired
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired
@property (nonatomic) NSUInteger areas; // ivar: _areas
@property (nonatomic) CGFloat minimumPressDuration; // ivar: _minimumPressDuration
@property (nonatomic) CGFloat activateAfter; // ivar: _activateAfter
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL bouncesScale; // ivar: _bouncesScale
@property (nonatomic) CGFloat minimumScale; // ivar: _minimumScale
@property (nonatomic) CGFloat maximumScale; // ivar: _maximumScale


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(CGFloat)screenLocationXOfTouch:(id)arg0 ;
-(CGFloat)screenLocationYOfTouch:(id)arg0 ;
-(CGFloat)zoomRubberBandScaleForZoomScale:(CGFloat)arg0 minimumZoomScale:(CGFloat)arg1 maximumZoomScale:(CGFloat)arg2 ;
-(CGFloat)zoomScaleForRubberBandScale:(CGFloat)arg0 minimumZoomScale:(CGFloat)arg1 maximumZoomScale:(CGFloat)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;


@end


#endif