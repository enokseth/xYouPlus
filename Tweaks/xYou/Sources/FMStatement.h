// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FMSTATEMENT_H
#define FMSTATEMENT_H


#import <Foundation/Foundation.h>


@interface FMStatement : NSObject

@property NSInteger useCount; // ivar: _useCount
@property (retain) NSString *query; // ivar: _query
@property *void statement; // ivar: _statement
@property BOOL inUse; // ivar: _inUse


-(void)dealloc;
-(void)close;
-(void)reset;
-(id)description;


@end


#endif