// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol UIViewControllerTransitionCoordinatorContext

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly, nonatomic) BOOL initiallyInteractive;
@property (readonly, nonatomic) BOOL isInterruptible;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) CGFloat transitionDuration;
@property (readonly, nonatomic) CGFloat percentComplete;
@property (readonly, nonatomic) CGFloat completionVelocity;
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) CGAffineTransform targetTransform;

-(id)viewControllerForKey:(id)arg0 ;
-(id)viewForKey:(id)arg0 ;
-(BOOL)isAnimated;
-(NSInteger)presentationStyle;
-(BOOL)initiallyInteractive;
-(BOOL)isInterruptible;
-(BOOL)isInteractive;
-(BOOL)isCancelled;
-(CGFloat)transitionDuration;
-(CGFloat)percentComplete;
-(CGFloat)completionVelocity;
-(NSInteger)completionCurve;
-(id)containerView;
-(struct CGAffineTransform )targetTransform;

@end

