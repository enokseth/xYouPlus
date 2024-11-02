// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@interface UIButton (WebCache)

@property (readonly, nonatomic) NSURL *sd_currentImageURL;
@property (readonly, nonatomic) NSURL *sd_currentBackgroundImageURL;


-(id)sd_currentImageURL;
-(id)sd_imageURLForState:(NSUInteger)arg0 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 context:(id)arg4 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 completed:(id)arg2 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 completed:(id)arg3 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 completed:(id)arg4 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 progress:(id)arg4 completed:(unk)arg5 ;
-(void)sd_setImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 context:(id)arg4 progress:(id)arg5 completed:(unk)arg6 ;
-(id)sd_currentBackgroundImageURL;
-(id)sd_backgroundImageURLForState:(NSUInteger)arg0 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 context:(id)arg4 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 completed:(id)arg2 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 completed:(id)arg3 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 completed:(id)arg4 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 progress:(id)arg4 completed:(unk)arg5 ;
-(void)sd_setBackgroundImageWithURL:(id)arg0 forState:(NSUInteger)arg1 placeholderImage:(id)arg2 options:(NSUInteger)arg3 context:(id)arg4 progress:(id)arg5 completed:(unk)arg6 ;
-(void)sd_cancelImageLoadForState:(NSUInteger)arg0 ;
-(void)sd_cancelBackgroundImageLoadForState:(NSUInteger)arg0 ;
-(id)sd_imageURLStorage;
@end


