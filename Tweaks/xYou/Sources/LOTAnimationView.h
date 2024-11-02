// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTANIMATIONVIEW_H
#define LOTANIMATIONVIEW_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "LOTCompositionContainer.h"
#import "LOTComposition.h"
#import "CAAnimationDelegate-Protocol.h"

@interface LOTAnimationView : UIView <CAAnimationDelegate>

 {
    LOTCompositionContainer *_compContainer;
    NSNumber *_playRangeStartFrame;
    NSNumber *_playRangeEndFrame;
    CGFloat _playRangeStartProgress;
    CGFloat _playRangeEndProgress;
    NSBundle *_bundle;
    CGFloat _animationProgress;
    BOOL _shouldRestoreStateWhenAttachedToWindow;
    id *_completionBlockToRestoreWhenAttachedToWindow;
}


@property (retain, nonatomic) NSString *animation; // ivar: _animation
@property (readonly, nonatomic) BOOL isAnimationPlaying; // ivar: _isAnimationPlaying
@property (nonatomic) BOOL loopAnimation; // ivar: _loopAnimation
@property (nonatomic) BOOL autoReverseAnimation; // ivar: _autoReverseAnimation
@property (nonatomic) CGFloat animationProgress;
@property (nonatomic) CGFloat animationSpeed; // ivar: _animationSpeed
@property (readonly, nonatomic) CGFloat animationDuration;
@property (nonatomic) BOOL cacheEnable; // ivar: _cacheEnable
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) LOTComposition *sceneModel; // ivar: _sceneModel
@property (nonatomic) BOOL shouldRasterizeWhenIdle; // ivar: _shouldRasterizeWhenIdle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithModel:(id)arg0 inBundle:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_initializeAnimationContainer;
-(void)_commonInit;
-(void)dealloc;
-(void)_setupWithSceneModel:(id)arg0 ;
-(void)_restoreState;
-(void)_removeCurrentAnimationIfNecessary;
-(CGFloat)_progressForFrame:(id)arg0 ;
-(id)_frameForProgress:(CGFloat)arg0 ;
-(BOOL)_isSpeedNegative;
-(void)_handleWindowChanges:(BOOL)arg0 ;
-(void)_handleWillEnterBackground;
-(void)_handleWillEnterForeground;
-(void)_callCompletionIfNecessary:(BOOL)arg0 ;
-(void)play;
-(void)playWithCompletion:(id)arg0 ;
-(void)playToProgress:(CGFloat)arg0 withCompletion:(id)arg1 ;
-(void)playFromProgress:(CGFloat)arg0 toProgress:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)playToFrame:(id)arg0 withCompletion:(id)arg1 ;
-(void)playFromFrame:(id)arg0 toFrame:(id)arg1 withCompletion:(id)arg2 ;
-(void)stop;
-(void)pause;
-(void)setProgressWithFrame:(id)arg0 ;
-(void)setProgressWithFrame:(id)arg0 callCompletionIfNecessary:(BOOL)arg1 ;
-(void)forceDrawingUpdate;
-(void)setValueDelegate:(id)arg0 forKeypath:(id)arg1 ;
-(id)keysForKeyPath:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toKeypathLayer:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toKeypathLayer:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromKeypathLayer:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromKeypathLayer:(id)arg1 ;
-(void)addSubview:(id)arg0 toKeypathLayer:(id)arg1 ;
-(void)maskSubview:(id)arg0 toKeypathLayer:(id)arg1 ;
-(id)layerForKey:(id)arg0 ;
-(id)compositionLayers;
-(struct CGSize )intrinsicContentSize;
-(void)didMoveToSuperview;
-(void)willMoveToWindow:(id)arg0 ;
-(void)didMoveToWindow;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)_layoutAndForceUpdate;
-(void)_layout;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)addSubview:(id)arg0 toLayerNamed:(id)arg1 applyTransform:(BOOL)arg2 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toLayerNamed:(id)arg1 ;
-(void)setValue:(id)arg0 forKeypath:(id)arg1 atFrame:(id)arg2 ;
-(void)logHierarchyKeypaths;
+(id)animationNamed:(id)arg0 ;
+(id)animationNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)animationFromJSON:(id)arg0 ;
+(id)animationFromJSON:(id)arg0 inBundle:(id)arg1 ;
+(id)animationWithFilePath:(id)arg0 ;
+(id)animationWithFilePath:(id)arg0 withTint:(id)arg1 ;


@end


#endif