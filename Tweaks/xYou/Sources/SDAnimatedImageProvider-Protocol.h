// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol SDAnimatedImageProvider

@property (readonly, copy, nonatomic) NSData *animatedImageData;
@property (readonly, nonatomic) NSUInteger animatedImageFrameCount;
@property (readonly, nonatomic) NSUInteger animatedImageLoopCount;

-(id)animatedImageFrameAtIndex:(NSUInteger)arg0 ;
-(CGFloat)animatedImageDurationAtIndex:(NSUInteger)arg0 ;
-(id)animatedImageData;
-(NSUInteger)animatedImageFrameCount;
-(NSUInteger)animatedImageLoopCount;

@end

