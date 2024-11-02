// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@interface UIColor (UIColor_Expanded)

@property (readonly, nonatomic) int colorSpaceModel;
@property (readonly, nonatomic) BOOL canProvideRGBComponents;
@property (readonly, nonatomic) CGFloat red;
@property (readonly, nonatomic) CGFloat green;
@property (readonly, nonatomic) CGFloat blue;
@property (readonly, nonatomic) CGFloat white;
@property (readonly, nonatomic) CGFloat alpha;
@property (readonly, nonatomic) unsigned int rgbHex;
@property (readonly, copy, nonatomic) NSString *sd_hexString;


-(id)sd_hexString;
-(int)colorSpaceModel;
-(id)LOT_colorSpaceString;
-(BOOL)canProvideRGBComponents;
-(id)LOT_arrayFromRGBAComponents;
-(BOOL)LOT_red:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(CGFloat)red;
-(CGFloat)green;
-(CGFloat)blue;
-(CGFloat)white;
-(CGFloat)alpha;
-(unsigned int)rgbHex;
-(id)LOT_colorByLuminanceMapping;
-(id)LOT_colorByMultiplyingByRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)LOT_colorByAddingRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)LOT_colorByLighteningToRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)LOT_colorByDarkeningToRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)LOT_colorByMultiplyingBy:(CGFloat)arg0 ;
-(id)LOT_colorByAdding:(CGFloat)arg0 ;
-(id)LOT_colorByLighteningTo:(CGFloat)arg0 ;
-(id)LOT_colorByDarkeningTo:(CGFloat)arg0 ;
-(id)LOT_colorByMultiplyingByColor:(id)arg0 ;
-(id)LOT_colorByAddingColor:(id)arg0 ;
-(id)LOT_colorByLighteningToColor:(id)arg0 ;
-(id)LOT_colorByDarkeningToColor:(id)arg0 ;
-(id)LOT_stringFromColor;
-(id)LOT_hexStringValue;
+(id)colorWithHex:(NSInteger)arg0 alpha:(CGFloat)arg1 ;
+(id)colorWithHex:(NSInteger)arg0 ;
+(id)whiteColorWithAlpha:(CGFloat)arg0 ;
+(id)blackColorWithAlpha:(CGFloat)arg0 ;
+(id)searchForColorByName:(id)arg0 ;
+(id)LOT_colorWithString:(id)arg0 ;
+(id)LOT_randomColor;
+(id)LOT_colorWithRGBHex:(unsigned int)arg0 ;
+(id)LOT_colorWithHexString:(id)arg0 ;
+(id)LOT_colorWithName:(id)arg0 ;
+(id)LOT_colorByLerpingFromColor:(id)arg0 toColor:(id)arg1 amount:(CGFloat)arg2 ;
@end


