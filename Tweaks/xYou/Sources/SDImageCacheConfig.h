// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGECACHECONFIG_H
#define SDIMAGECACHECONFIG_H


#import <Foundation/Foundation.h>

#import "NSCopying-Protocol.h"

@interface SDImageCacheConfig : NSObject <NSCopying>



@property (nonatomic) BOOL shouldDisableiCloud; // ivar: _shouldDisableiCloud
@property (nonatomic) BOOL shouldCacheImagesInMemory; // ivar: _shouldCacheImagesInMemory
@property (nonatomic) BOOL shouldUseWeakMemoryCache; // ivar: _shouldUseWeakMemoryCache
@property (nonatomic) BOOL shouldRemoveExpiredDataWhenEnterBackground; // ivar: _shouldRemoveExpiredDataWhenEnterBackground
@property (nonatomic) NSUInteger diskCacheReadingOptions; // ivar: _diskCacheReadingOptions
@property (nonatomic) NSUInteger diskCacheWritingOptions; // ivar: _diskCacheWritingOptions
@property (nonatomic) CGFloat maxDiskAge; // ivar: _maxDiskAge
@property (nonatomic) NSUInteger maxDiskSize; // ivar: _maxDiskSize
@property (nonatomic) NSUInteger maxMemoryCost; // ivar: _maxMemoryCost
@property (nonatomic) NSUInteger maxMemoryCount; // ivar: _maxMemoryCount
@property (nonatomic) NSUInteger diskCacheExpireType; // ivar: _diskCacheExpireType
@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (nonatomic) Class memoryCacheClass; // ivar: _memoryCacheClass
@property (nonatomic) Class diskCacheClass; // ivar: _diskCacheClass


-(id)init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)defaultCacheConfig;


@end


#endif