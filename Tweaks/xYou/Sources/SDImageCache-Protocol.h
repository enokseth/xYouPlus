// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol SDImageCache


-(id)queryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3 ;
-(id)queryImageForKey:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 ;
-(void)storeImage:(id)arg0 imageData:(id)arg1 forKey:(id)arg2 cacheType:(NSInteger)arg3 completion:(id)arg4 ;
-(void)removeImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)containsImageForKey:(id)arg0 cacheType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)clearWithCacheType:(NSInteger)arg0 completion:(id)arg1 ;

@end

