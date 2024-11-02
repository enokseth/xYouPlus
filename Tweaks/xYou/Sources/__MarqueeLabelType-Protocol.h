// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol __MarqueeLabelType

@property (nonatomic) CGFloat rate;
@property (nonatomic) CGFloat animationDelay;
@property (weak, nonatomic) __MarqueeLabel *synchronizedLabel;
@property (readonly, nonatomic) CGFloat animationDuration;
@property (nonatomic) BOOL holdScrolling;

-(void)resetLabel;
-(void)unpauseLabel;
-(void)pauseLabel;
-(void)restartLabel;
-(BOOL)isPaused;
-(void)shutdownLabel;
-(CGFloat)rate;
-(void)setRate:(CGFloat)arg0 ;
-(CGFloat)animationDelay;
-(void)setAnimationDelay:(CGFloat)arg0 ;
-(id)synchronizedLabel;
-(void)setSynchronizedLabel:(id)arg0 ;
-(CGFloat)animationDuration;
-(BOOL)holdScrolling;
-(void)setHoldScrolling:(BOOL)arg0 ;

@end

