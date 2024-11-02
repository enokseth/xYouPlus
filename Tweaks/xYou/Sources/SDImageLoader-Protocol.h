// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol SDImageLoader


-(BOOL)canRequestImageForURL:(id)arg0 ;
-(id)requestImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 progress:(id)arg3 completed:(unk)arg4 ;
-(BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 ;

@optional
-(BOOL)canRequestImageForURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 ;
-(BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 options:(NSUInteger)arg2 context:(id)arg3 ;
@end

