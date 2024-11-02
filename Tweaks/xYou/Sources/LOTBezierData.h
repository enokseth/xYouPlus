// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTBEZIERDATA_H
#define LOTBEZIERDATA_H


#import <Foundation/Foundation.h>


@interface LOTBezierData : NSObject {
    *CGPoint _vertices;
    *CGPoint _inTangents;
    *CGPoint _outTangents;
}


@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) BOOL closed; // ivar: _closed


-(id)initWithData:(id)arg0 ;
-(void)dealloc;
-(struct CGPoint )vertexAtIndex:(NSInteger)arg0 ;
-(struct CGPoint )inTangentAtIndex:(NSInteger)arg0 ;
-(struct CGPoint )outTangentAtIndex:(NSInteger)arg0 ;
-(void)initializeData:(id)arg0 ;
-(struct CGPoint )_vertexAtIndex:(NSInteger)arg0 inArray:(id)arg1 ;


@end


#endif