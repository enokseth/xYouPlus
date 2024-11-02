// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FMDATABASEPOOL_H
#define FMDATABASEPOOL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface FMDatabasePool : NSObject {
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableArray *_databaseInPool;
    NSMutableArray *_databaseOutPool;
}


@property (copy) NSString *path; // ivar: _path
@property id *delegate; // ivar: _delegate
@property NSUInteger maximumNumberOfDatabasesToCreate; // ivar: _maximumNumberOfDatabasesToCreate
@property (readonly) int openFlags; // ivar: _openFlags
@property (copy) NSString *vfsName; // ivar: _vfsName
@property (readonly, nonatomic) NSUInteger countOfCheckedInDatabases;
@property (readonly, nonatomic) NSUInteger countOfCheckedOutDatabases;
@property (readonly, nonatomic) NSUInteger countOfOpenDatabases;


-(id)initWithURL:(id)arg0 flags:(int)arg1 vfs:(id)arg2 ;
-(id)initWithPath:(id)arg0 flags:(int)arg1 vfs:(id)arg2 ;
-(id)initWithPath:(id)arg0 flags:(int)arg1 ;
-(id)initWithURL:(id)arg0 flags:(int)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)executeLocked:(id)arg0 ;
-(void)pushDatabaseBackInPool:(id)arg0 ;
-(id)db;
-(void)releaseAllDatabases;
-(void)inDatabase:(id)arg0 ;
-(void)beginTransaction:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)inTransaction:(id)arg0 ;
-(void)inDeferredTransaction:(id)arg0 ;
-(void)inExclusiveTransaction:(id)arg0 ;
-(void)inImmediateTransaction:(id)arg0 ;
-(id)inSavePoint:(id)arg0 ;
+(id)databasePoolWithPath:(id)arg0 ;
+(id)databasePoolWithURL:(id)arg0 ;
+(id)databasePoolWithPath:(id)arg0 flags:(int)arg1 ;
+(id)databasePoolWithURL:(id)arg0 flags:(int)arg1 ;
+(Class)databaseClass;


@end


#endif