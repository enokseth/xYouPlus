// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDDISKCACHE_H
#define SDDISKCACHE_H


#import <Foundation/Foundation.h>

#import "SDImageCacheConfig.h"
#import "SDDiskCache-Protocol.h"

@interface SDDiskCache : NSObject <SDDiskCache>



@property (copy, nonatomic) NSString *diskCachePath; // ivar: _diskCachePath
@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly, nonatomic) SDImageCacheConfig *config; // ivar: _config
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithCachePath:(id)arg0 config:(id)arg1 ;
-(void)commonInit;
-(BOOL)containsDataForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(id)extendedDataForKey:(id)arg0 ;
-(void)setExtendedData:(id)arg0 forKey:(id)arg1 ;
-(void)removeDataForKey:(id)arg0 ;
-(void)removeAllData;
-(void)removeExpiredData;
-(id)cachePathForKey:(id)arg0 ;
-(NSUInteger)totalSize;
-(NSUInteger)totalCount;
-(id)cachePathForKey:(id)arg0 inPath:(id)arg1 ;
-(void)moveCacheDirectoryFromPath:(id)arg0 toPath:(id)arg1 ;


@end


#endif