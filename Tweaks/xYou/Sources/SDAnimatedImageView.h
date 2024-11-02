// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDANIMATEDIMAGEVIEW_H
#define SDANIMATEDIMAGEVIEW_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

#import "SDAnimatedImagePlayer.h"

@interface SDAnimatedImageView : UIImageView {
    BOOL _initFinished;
    NSString *_runLoopMode;
    NSUInteger _maxBufferSize;
    CGFloat _playbackRate;
    NSUInteger _playbackMode;
}


@property (retain, nonatomic) SDAnimatedImagePlayer *player; // ivar: _player
@property (retain, nonatomic) UIImage *currentFrame; // ivar: _currentFrame
@property (nonatomic) NSUInteger currentFrameIndex; // ivar: _currentFrameIndex
@property (nonatomic) NSUInteger currentLoopCount; // ivar: _currentLoopCount
@property (nonatomic) BOOL shouldAnimate; // ivar: _shouldAnimate
@property (nonatomic) BOOL isProgressive; // ivar: _isProgressive
@property (retain, nonatomic) CALayer *imageViewLayer; // ivar: _imageViewLayer
@property (nonatomic) BOOL shouldCustomLoopCount; // ivar: _shouldCustomLoopCount
@property (nonatomic) NSInteger animationRepeatCount;
@property (nonatomic) CGFloat playbackRate;
@property (nonatomic) NSUInteger playbackMode;
@property (nonatomic) NSUInteger maxBufferSize;
@property (nonatomic) BOOL shouldIncrementalLoad; // ivar: _shouldIncrementalLoad
@property (nonatomic) BOOL clearBufferWhenStopped; // ivar: _clearBufferWhenStopped
@property (nonatomic) BOOL resetFrameIndexWhenStopped; // ivar: _resetFrameIndexWhenStopped
@property (nonatomic) BOOL autoPlayAnimatedImage; // ivar: _autoPlayAnimatedImage
@property (copy, nonatomic) NSString *runLoopMode;


-(void)sd_setImageWithURL:(id)arg0 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 ;
-(void)sd_setImageWithURL:(id)arg0 completed:(id)arg1 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 completed:(id)arg2 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 completed:(id)arg3 ;
// -(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 progress:(id)arg3 completed:(unk)arg4  ;
// -(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 progress:(id)arg4 completed:(unk)arg5  ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)commonInit;
-(void)setImage:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(BOOL)isAnimating;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)checkPlay;
-(void)updateShouldAnimate;
-(void)updateIsProgressiveWithImage:(id)arg0 ;
-(id)progressiveAnimatedCoderForImage:(id)arg0 ;
-(void)displayLayer:(id)arg0 ;
+(id)defaultRunLoopMode;


@end


#endif