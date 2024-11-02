// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FMDATABASE_H
#define FMDATABASE_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface FMDatabase : NSObject {
    *void _db;
    BOOL _isExecutingStatement;
    CGFloat _startBusyRetryTime;
    NSMutableSet *_openResultSets;
    NSMutableSet *_openFunctions;
    NSDateFormatter *_dateFormat;
}


@property (nonatomic) unsigned int applicationID;
@property (nonatomic) unsigned int userVersion;
@property BOOL traceExecution; // ivar: _traceExecution
@property BOOL checkedOut; // ivar: _checkedOut
@property BOOL crashOnErrors; // ivar: _crashOnErrors
@property BOOL logsErrors; // ivar: _logsErrors
@property (retain) NSMutableDictionary *cachedStatements; // ivar: _cachedStatements
@property (nonatomic) BOOL isOpen; // ivar: _isOpen
@property (readonly, nonatomic) BOOL goodConnection;
@property (readonly, nonatomic) NSInteger lastInsertRowId;
@property (readonly, nonatomic) int changes;
@property (readonly, nonatomic) BOOL isInTransaction; // ivar: _isInTransaction
@property (readonly, nonatomic) BOOL hasOpenResultSets;
@property (nonatomic) BOOL shouldCacheStatements; // ivar: _shouldCacheStatements
@property (readonly, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) *void sqliteHandle;
@property (nonatomic) CGFloat maxBusyRetryTimeInterval; // ivar: _maxBusyRetryTimeInterval


-(id)stringForQuery:(id)arg0 ;
-(int)intForQuery:(id)arg0 ;
-(NSInteger)longForQuery:(id)arg0 ;
-(BOOL)boolForQuery:(id)arg0 ;
-(CGFloat)doubleForQuery:(id)arg0 ;
-(id)dataForQuery:(id)arg0 ;
-(id)dateForQuery:(id)arg0 ;
-(BOOL)tableExists:(id)arg0 ;
-(id)getSchema;
-(id)getTableSchema:(id)arg0 ;
-(BOOL)columnExists:(id)arg0 inTableWithName:(id)arg1 ;
-(BOOL)columnExists:(id)arg0 columnName:(id)arg1 ;
-(BOOL)validateSQL:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;
-(char *)sqlitePath;
-(int)limitFor:(int)arg0 value:(int)arg1 ;
-(BOOL)open;
-(BOOL)openWithFlags:(int)arg0 ;
-(BOOL)openWithFlags:(int)arg0 vfs:(id)arg1 ;
-(BOOL)close;
-(int)busyRetryTimeout;
-(void)setBusyRetryTimeout:(int)arg0 ;
-(void)closeOpenResultSets;
-(void)resultSetDidClose:(id)arg0 ;
-(void)clearCachedStatements;
-(id)cachedStatementForQuery:(id)arg0 ;
-(void)setCachedStatement:(id)arg0 forQuery:(id)arg1 ;
-(BOOL)rekey:(id)arg0 ;
-(BOOL)rekeyWithData:(id)arg0 ;
-(BOOL)setKey:(id)arg0 ;
-(BOOL)setKeyWithData:(id)arg0 ;
-(BOOL)hasDateFormatter;
-(void)setDateFormat:(id)arg0 ;
-(id)dateFromString:(id)arg0 ;
-(id)stringFromDate:(id)arg0 ;
-(void)warnInUse;
-(BOOL)databaseExists;
-(id)lastErrorMessage;
-(BOOL)hadError;
-(int)lastErrorCode;
-(int)lastExtendedErrorCode;
-(id)errorWithMessage:(id)arg0 ;
-(id)lastError;
-(int)bindObject:(id)arg0 toColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 ;
-(void)extractSQL:(id)arg0 argumentsList:(char *)arg1 intoString:(id)arg2 arguments:(id)arg3 ;
-(id)executeQuery:(id)arg0 withParameterDictionary:(id)arg1 ;
-(id)executeQuery:(id)arg0 withArgumentsInArray:(id)arg1 orDictionary:(id)arg2 orVAList:(char *)arg3 shouldBind:(BOOL)arg4 ;
-(BOOL)bindStatement:(struct sqlite3_stmt *)arg0 WithArgumentsInArray:(id)arg1 orDictionary:(id)arg2 orVAList:(char *)arg3 ;
-(id)executeQuery:(id)arg0 ;
-(id)executeQueryWithFormat:(id)arg0 ;
-(id)executeQuery:(id)arg0 withArgumentsInArray:(id)arg1 ;
-(id)executeQuery:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)executeQuery:(id)arg0 withVAList:(char *)arg1 ;
-(BOOL)executeUpdate:(id)arg0 error:(*id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char *)arg4 ;
-(BOOL)executeUpdate:(id)arg0 ;
-(BOOL)executeUpdate:(id)arg0 withArgumentsInArray:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(BOOL)executeUpdate:(id)arg0 withParameterDictionary:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg0 withVAList:(char *)arg1 ;
-(BOOL)executeUpdateWithFormat:(id)arg0 ;
-(BOOL)executeStatements:(id)arg0 ;
-(BOOL)executeStatements:(id)arg0 withResultBlock:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg0 withErrorAndBindings:(*id)arg1 ;
-(BOOL)update:(id)arg0 withErrorAndBindings:(*id)arg1 ;
-(id)prepare:(id)arg0 ;
-(BOOL)rollback;
-(BOOL)commit;
-(BOOL)beginTransaction;
-(BOOL)beginDeferredTransaction;
-(BOOL)beginImmediateTransaction;
-(BOOL)beginExclusiveTransaction;
-(BOOL)inTransaction;
-(BOOL)interrupt;
-(BOOL)startSavePointWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)releaseSavePointWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollbackToSavePointWithName:(id)arg0 error:(*id)arg1 ;
-(id)inSavePoint:(id)arg0 ;
-(BOOL)checkpoint:(int)arg0 error:(*id)arg1 ;
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkpoint:(int)arg0 name:(id)arg1 logFrameCount:(*int)arg2 checkpointCount:(*int)arg3 error:(*id)arg4 ;
-(void)makeFunctionNamed:(id)arg0 maximumArguments:(int)arg1 withBlock:(id)arg2 ;
-(void)makeFunctionNamed:(id)arg0 arguments:(int)arg1 block:(id)arg2 ;
-(int)valueType:(*void)arg0 ;
-(int)valueInt:(*void)arg0 ;
-(NSInteger)valueLong:(*void)arg0 ;
-(CGFloat)valueDouble:(*void)arg0 ;
-(id)valueData:(*void)arg0 ;
-(id)valueString:(*void)arg0 ;
-(void)resultNullInContext:(*void)arg0 ;
-(void)resultInt:(int)arg0 context:(*void)arg1 ;
-(void)resultLong:(NSInteger)arg0 context:(*void)arg1 ;
-(void)resultDouble:(CGFloat)arg0 context:(*void)arg1 ;
-(void)resultData:(id)arg0 context:(*void)arg1 ;
-(void)resultString:(id)arg0 context:(*void)arg1 ;
-(void)resultError:(id)arg0 context:(*void)arg1 ;
-(void)resultErrorCode:(int)arg0 context:(*void)arg1 ;
-(void)resultErrorNoMemoryInContext:(*void)arg0 ;
-(void)resultErrorTooBigInContext:(*void)arg0 ;
+(id)databaseWithPath:(id)arg0 ;
+(id)databaseWithURL:(id)arg0 ;
+(id)FMDBUserVersion;
+(int)FMDBVersion;
+(id)sqliteLibVersion;
+(BOOL)isSQLiteThreadSafe;
+(id)storeableDateFormat:(id)arg0 ;


@end


#endif