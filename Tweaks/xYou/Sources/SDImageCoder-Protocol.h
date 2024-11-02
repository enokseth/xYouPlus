// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol SDImageCoder


-(BOOL)canDecodeFromData:(id)arg0 ;
-(id)decodedImageWithData:(id)arg0 options:(id)arg1 ;
-(BOOL)canEncodeToFormat:(NSInteger)arg0 ;
-(id)encodedDataWithImage:(id)arg0 format:(NSInteger)arg1 options:(id)arg2 ;

@end

