// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol SDAnimatedImage

@property (readonly, nonatomic, getter=isAllFramesLoaded) BOOL allFramesLoaded;
@property (readonly, nonatomic) NSObject<SDAnimatedImageCoder> *animatedCoder;

-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 options:(id)arg2 ;
-(id)initWithAnimatedCoder:(id)arg0 scale:(CGFloat)arg1 ;

@optional
-(void)preloadAllFrames;
-(void)unloadAllFrames;
-(BOOL)isAllFramesLoaded;
-(id)animatedCoder;
@end

