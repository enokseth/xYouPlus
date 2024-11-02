// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FMRESULTSET_H
#define FMRESULTSET_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "FMDatabase.h"
#import "FMStatement.h"

@interface FMResultSet : NSObject {
    NSMutableDictionary *_columnNameToIndexMap;
}


@property (nonatomic) BOOL shouldAutoClose; // ivar: _shouldAutoClose
@property (retain, nonatomic) FMDatabase *parentDB; // ivar: _parentDB
@property (retain) NSString *query; // ivar: _query
@property (readonly) NSMutableDictionary *columnNameToIndexMap;
@property (retain) FMStatement *statement; // ivar: _statement
@property (readonly, nonatomic) int columnCount;
@property (readonly, nonatomic) NSDictionary *resultDictionary;


-(void)dealloc;
-(void)close;
-(void)kvcMagic:(id)arg0 ;
-(id)resultDict;
-(BOOL)next;
-(BOOL)nextWithError:(*id)arg0 ;
-(BOOL)step;
-(BOOL)stepWithError:(*id)arg0 ;
-(int)internalStepWithError:(*id)arg0 ;
-(BOOL)hasAnotherRow;
-(int)columnIndexForName:(id)arg0 ;
-(int)intForColumn:(id)arg0 ;
-(int)intForColumnIndex:(int)arg0 ;
-(NSInteger)longForColumn:(id)arg0 ;
-(NSInteger)longForColumnIndex:(int)arg0 ;
-(NSInteger)longLongIntForColumn:(id)arg0 ;
-(NSInteger)longLongIntForColumnIndex:(int)arg0 ;
-(NSUInteger)unsignedLongLongIntForColumn:(id)arg0 ;
-(NSUInteger)unsignedLongLongIntForColumnIndex:(int)arg0 ;
-(BOOL)boolForColumn:(id)arg0 ;
-(BOOL)boolForColumnIndex:(int)arg0 ;
-(CGFloat)doubleForColumn:(id)arg0 ;
-(CGFloat)doubleForColumnIndex:(int)arg0 ;
-(id)stringForColumnIndex:(int)arg0 ;
-(id)stringForColumn:(id)arg0 ;
-(id)dateForColumn:(id)arg0 ;
-(id)dateForColumnIndex:(int)arg0 ;
-(id)dataForColumn:(id)arg0 ;
-(id)dataForColumnIndex:(int)arg0 ;
-(id)dataNoCopyForColumn:(id)arg0 ;
-(id)dataNoCopyForColumnIndex:(int)arg0 ;
-(BOOL)columnIndexIsNull:(int)arg0 ;
-(BOOL)columnIsNull:(id)arg0 ;
-(char *)UTF8StringForColumnIndex:(int)arg0 ;
-(char *)UTF8StringForColumn:(id)arg0 ;
-(char *)UTF8StringForColumnName:(id)arg0 ;
-(id)objectForColumnIndex:(int)arg0 ;
-(id)objectForColumnName:(id)arg0 ;
-(id)objectForColumn:(id)arg0 ;
-(id)columnNameForIndex:(int)arg0 ;
-(id)objectAtIndexedSubscript:(int)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(BOOL)bindWithArray:(id)arg0 orDictionary:(id)arg1 orVAList:(char *)arg2 ;
-(BOOL)bindWithArray:(id)arg0 ;
-(BOOL)bindWithDictionary:(id)arg0 ;
+(id)resultSetWithStatement:(id)arg0 usingParentDatabase:(id)arg1 shouldAutoClose:(BOOL)arg2 ;


@end


#endif