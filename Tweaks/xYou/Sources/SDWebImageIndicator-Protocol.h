// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol SDWebImageIndicator

@property (readonly, nonatomic) UIView *indicatorView;

-(void)startAnimatingIndicator;
-(void)stopAnimatingIndicator;
-(id)indicatorView;

@optional
-(void)updateIndicatorProgress:(CGFloat)arg0 ;
@end
