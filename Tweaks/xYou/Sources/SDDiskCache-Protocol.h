// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol SDDiskCache


-(id)initWithCachePath:(id)arg0 config:(id)arg1 ;
-(BOOL)containsDataForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(id)extendedDataForKey:(id)arg0 ;
-(void)setExtendedData:(id)arg0 forKey:(id)arg1 ;
-(void)removeDataForKey:(id)arg0 ;
-(void)removeAllData;
-(void)removeExpiredData;
-(id)cachePathForKey:(id)arg0 ;
-(NSUInteger)totalCount;
-(NSUInteger)totalSize;

@end

