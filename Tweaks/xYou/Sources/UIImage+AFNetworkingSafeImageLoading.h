// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@interface UIImage (AFNetworkingSafeImageLoading)

@property (retain, nonatomic) NSObject<NSObject><NSCoding> *sd_extendedObject;
@property (nonatomic) BOOL sd_isDecoded;
@property (nonatomic) NSUInteger sd_memoryCost;
@property (nonatomic) NSUInteger sd_imageLoopCount;
@property (readonly, nonatomic) BOOL sd_isAnimated;
@property (readonly, nonatomic) BOOL sd_isVector;
@property (nonatomic) NSInteger sd_imageFormat;
@property (nonatomic) BOOL sd_isIncremental;


-(id)crop:(struct CGRect )arg0 ;
-(id)tintedImageWithColor:(id)arg0 style:(int)arg1 ;
-(id)imageWithRoundedBounds;
-(id)imageWithCornerRadius:(CGFloat)arg0 ;
-(id)imageWithCornerInset:(struct __UICornerInset )arg0 ;
-(BOOL)isValidCornerInset:(struct __UICornerInset )arg0 ;
-(id)imageAddingImage:(id)arg0 ;
-(id)imageAddingImage:(id)arg0 offset:(struct CGPoint )arg1 ;
-(void)sd_drawInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 scaleMode:(NSUInteger)arg2 clipsToBounds:(BOOL)arg3 ;
-(id)sd_resizedImageWithSize:(struct CGSize )arg0 scaleMode:(NSUInteger)arg1 ;
-(id)sd_croppedImageWithRect:(struct CGRect )arg0 ;
-(id)sd_roundedCornerImageWithRadius:(CGFloat)arg0 corners:(NSUInteger)arg1 borderWidth:(CGFloat)arg2 borderColor:(id)arg3 ;
-(id)sd_rotatedImageWithAngle:(CGFloat)arg0 fitSize:(BOOL)arg1 ;
-(id)sd_flippedImageWithHorizontal:(BOOL)arg0 vertical:(BOOL)arg1 ;
-(id)sd_tintedImageWithColor:(id)arg0 ;
-(id)sd_colorAtPoint:(struct CGPoint )arg0 ;
-(id)sd_colorsWithRect:(struct CGRect )arg0 ;
-(id)sd_blurredImageWithRadius:(CGFloat)arg0 ;
-(id)sd_filteredImageWithFilter:(id)arg0 ;
-(id)sd_imageData;
-(id)sd_imageDataAsFormat:(NSInteger)arg0 ;
-(id)sd_imageDataAsFormat:(NSInteger)arg0 compressionQuality:(CGFloat)arg1 ;
-(id)sd_imageDataAsFormat:(NSInteger)arg0 compressionQuality:(CGFloat)arg1 firstFrameOnly:(BOOL)arg2 ;
-(NSUInteger)sd_imageLoopCount;
-(void)setSd_imageLoopCount:(NSUInteger)arg0 ;
-(BOOL)sd_isAnimated;
-(BOOL)sd_isVector;
-(NSInteger)sd_imageFormat;
-(void)setSd_imageFormat:(NSInteger)arg0 ;
-(void)setSd_isIncremental:(BOOL)arg0 ;
-(BOOL)sd_isIncremental;
-(NSUInteger)sd_memoryCost;
-(void)setSd_memoryCost:(NSUInteger)arg0 ;
-(BOOL)sd_isDecoded;
-(void)setSd_isDecoded:(BOOL)arg0 ;
-(id)sd_extendedObject;
-(void)setSd_extendedObject:(id)arg0 ;
+(id)imageWithColor:(id)arg0 ;
+(id)imageWithColor:(id)arg0 size:(struct CGSize )arg1 ;
+(id)imageWithColor:(id)arg0 borderAttributes:(id)arg1 size:(struct CGSize )arg2 ;
+(id)imageWithColor:(id)arg0 borderAttributes:(id)arg1 size:(struct CGSize )arg2 cornerRadius:(CGFloat)arg3 ;
+(id)imageWithColor:(id)arg0 borderAttributes:(id)arg1 size:(struct CGSize )arg2 cornerInset:(struct __UICornerInset )arg3 ;
+(id)resizableImageWithColor:(id)arg0 ;
+(id)resizableImageWithColor:(id)arg0 cornerRadius:(CGFloat)arg1 ;
+(id)resizableImageWithColor:(id)arg0 borderAttributes:(id)arg1 cornerRadius:(CGFloat)arg2 ;
+(id)resizableImageWithColor:(id)arg0 borderAttributes:(id)arg1 cornerInset:(struct __UICornerInset )arg2 ;
+(id)blackColorImage;
+(id)darkGrayColorImage;
+(id)lightGrayColorImage;
+(id)whiteColorImage;
+(id)grayColorImage;
+(id)redColorImage;
+(id)greenColorImage;
+(id)blueColorImage;
+(id)cyanColorImage;
+(id)yellowColorImage;
+(id)magentaColorImage;
+(id)orangeColorImage;
+(id)purpleColorImage;
+(id)brownColorImage;
+(id)clearColorImage;
+(id)imageNamed:(id)arg0 tintColor:(id)arg1 style:(int)arg2 ;
+(id)_cache;
+(id)_cachedImageWithDescriptors:(id)arg0 ;
+(void)_cacheImage:(id)arg0 withDescriptors:(id)arg1 ;
+(id)_keyForImageWithDescriptors:(id)arg0 ;
+(id)_imageWithColor:(id)arg0 size:(struct CGSize )arg1 cornerInset:(struct __UICornerInset )arg2 saveInCache:(BOOL)arg3 ;
+(id)_imageWithColor:(id)arg0 borderAttributes:(id)arg1 size:(struct CGSize )arg2 cornerInset:(struct __UICornerInset )arg3 saveInCache:(BOOL)arg4 ;
+(id)imageWithGradient:(id)arg0 size:(struct CGSize )arg1 direction:(int)arg2 ;
+(id)resizableImageWithGradient:(id)arg0 size:(struct CGSize )arg1 direction:(int)arg2 ;
+(id)sd_imageWithData:(id)arg0 ;
+(id)sd_imageWithData:(id)arg0 scale:(CGFloat)arg1 ;
+(id)sd_imageWithData:(id)arg0 scale:(CGFloat)arg1 firstFrameOnly:(BOOL)arg2 ;
+(id)sd_imageWithGIFData:(id)arg0 ;
+(id)sd_decodedImageWithImage:(id)arg0 ;
+(id)sd_decodedAndScaledDownImageWithImage:(id)arg0 ;
+(id)sd_decodedAndScaledDownImageWithImage:(id)arg0 limitBytes:(NSUInteger)arg1 ;
+(id)af_safeImageWithData:(id)arg0 ;
@end


