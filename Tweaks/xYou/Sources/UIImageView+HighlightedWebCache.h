// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@interface UIImageView (HighlightedWebCache)

@property (nonatomic) CGFloat cornerRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) CGFloat shadowXOffset;
@property (nonatomic) CGFloat shadowYOffset;
@property (nonatomic) CGFloat shadowRadius;
@property (retain, nonatomic) UIView *shadowContainer;
@property (nonatomic) BOOL rotating;
@property (nonatomic) BOOL circle;
@property (retain, nonatomic) NSString *blurStyle;
@property (nonatomic) CGFloat blurAlpha;
@property (retain, nonatomic) UIVisualEffectView *effectView;


-(void)awakeFromNib;
-(void)layoutSubviews;
-(void)setImageCornerRadius:(CGFloat)arg0 ;
-(void)setShadowWithColor:(id)arg0 shadowXOffset:(CGFloat)arg1 shadowYOffset:(CGFloat)arg2 shadowRadius:(CGFloat)arg3 ;
-(BOOL)initShadowContainerIfNotExist;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startRotate:(CGFloat)arg0 withClockwise:(BOOL)arg1 ;
-(void)stopRotate;
-(void)changeToCircle;
-(void)setBlurEffectViewWithStyle:(NSInteger)arg0 alpha:(CGFloat)arg1 ;
-(void)changeBlurEffectStyle:(NSInteger)arg0 ;
-(NSInteger)getBlurEffectStyle;
-(void)equalToImageViewConstraintFor:(id)arg0 ;
-(id)shadowContainer;
-(void)setShadowContainer:(id)arg0 ;
-(CGFloat)cornerRadius;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(id)shadowColor;
-(void)setShadowColor:(id)arg0 ;
-(CGFloat)shadowXOffset;
-(void)setShadowXOffset:(CGFloat)arg0 ;
-(CGFloat)shadowYOffset;
-(void)setShadowYOffset:(CGFloat)arg0 ;
-(CGFloat)shadowRadius;
-(void)setShadowRadius:(CGFloat)arg0 ;
-(BOOL)rotating;
-(void)setRotating:(BOOL)arg0 ;
-(BOOL)circle;
-(void)setCircle:(BOOL)arg0 ;
-(id)blurStyle;
-(void)setBlurStyle:(id)arg0 ;
-(CGFloat)blurAlpha;
-(void)setBlurAlpha:(CGFloat)arg0 ;
-(id)effectView;
-(void)setEffectView:(id)arg0 ;
-(void)sd_setImageWithURL:(id)arg0 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 ;
-(void)sd_setImageWithURL:(id)arg0 completed:(id)arg1 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 completed:(id)arg2 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 completed:(id)arg3 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 progress:(id)arg3 completed:(unk)arg4 ;
-(void)sd_setImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 progress:(id)arg4 completed:(unk)arg5 ;
-(void)sd_setHighlightedImageWithURL:(id)arg0 ;
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 ;
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
-(void)sd_setHighlightedImageWithURL:(id)arg0 completed:(id)arg1 ;
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 completed:(id)arg2 ;
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 progress:(id)arg2 completed:(unk)arg3 ;
-(void)sd_setHighlightedImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 progress:(id)arg3 completed:(unk)arg4 ;
@end


