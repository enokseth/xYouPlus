// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@interface UIView (FindUIViewController)

@property (readonly, nonatomic) NSURL *sd_imageURL;
@property (readonly, nonatomic) NSString *sd_latestOperationKey;
@property (retain, nonatomic) NSProgress *sd_imageProgress;
@property (retain, nonatomic) SDWebImageTransition *sd_imageTransition;
@property (retain, nonatomic) NSObject<SDWebImageIndicator> *sd_imageIndicator;


-(id)sd_operationDictionary;
-(id)sd_imageLoadOperationForKey:(id)arg0 ;
-(void)sd_setImageLoadOperation:(id)arg0 forKey:(id)arg1 ;
-(void)sd_cancelImageLoadOperationWithKey:(id)arg0 ;
-(void)sd_removeImageLoadOperationWithKey:(id)arg0 ;
-(id)sd_imageURL;
-(void)setSd_imageURL:(id)arg0 ;
-(id)sd_latestOperationKey;
-(void)setSd_latestOperationKey:(id)arg0 ;
-(id)sd_imageProgress;
-(void)setSd_imageProgress:(id)arg0 ;
-(void)sd_internalSetImageWithURL:(id)arg0 placeholderImage:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 setImageBlock:(id)arg4 progress:(unk)arg5 completed:(id)arg6 ;
-(void)sd_cancelCurrentImageLoad;
-(void)sd_setImage:(id)arg0 imageData:(id)arg1 basedOnClassOrViaCustomSetImageBlock:(id)arg2 cacheType:(unk)arg3 imageURL:(NSInteger)arg4 ;
-(void)sd_setImage:(id)arg0 imageData:(id)arg1 basedOnClassOrViaCustomSetImageBlock:(id)arg2 transition:(unk)arg3 cacheType:(id)arg4 imageURL:(NSInteger)arg5 ;
-(void)sd_setNeedsLayout;
-(id)sd_imageTransition;
-(void)setSd_imageTransition:(id)arg0 ;
-(id)sd_imageIndicator;
-(void)setSd_imageIndicator:(id)arg0 ;
-(void)sd_startImageIndicator;
-(void)sd_stopImageIndicator;
-(id)firstAvailableViewController;
-(id)traverseResponderChainForFirstViewController;
-(id)firstAvailableUIViewController;
-(id)traverseResponderChainForUIViewController;
@end


