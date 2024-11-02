// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FMDATABASEQUEUE_H
#define FMDATABASEQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FMDatabase.h"

@interface FMDatabaseQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    FMDatabase *_db;
}


@property (retain) NSString *path; // ivar: _path
@property (readonly) int openFlags; // ivar: _openFlags
@property (copy) NSString *vfsName; // ivar: _vfsName


-(id)initWithURL:(id)arg0 flags:(int)arg1 vfs:(id)arg2 ;
-(id)initWithPath:(id)arg0 flags:(int)arg1 vfs:(id)arg2 ;
-(id)initWithPath:(id)arg0 flags:(int)arg1 ;
-(id)initWithURL:(id)arg0 flags:(int)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)interrupt;
-(id)database;
-(void)inDatabase:(id)arg0 ;
-(void)beginTransaction:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)inTransaction:(id)arg0 ;
-(void)inDeferredTransaction:(id)arg0 ;
-(void)inExclusiveTransaction:(id)arg0 ;
-(void)inImmediateTransaction:(id)arg0 ;
-(id)inSavePoint:(id)arg0 ;
-(BOOL)checkpoint:(int)arg0 error:(*id)arg1 ;
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 logFrameCount:(*int)arg2 checkpointCount:(*int)arg3 error:(*id)arg4 ;
+(id)databaseQueueWithPath:(id)arg0 ;
+(id)databaseQueueWithURL:(id)arg0 ;
+(id)databaseQueueWithPath:(id)arg0 flags:(int)arg1 ;
+(id)databaseQueueWithURL:(id)arg0 flags:(int)arg1 ;
+(Class)databaseClass;


@end


#endif