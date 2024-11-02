// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTKEYFRAME_H
#define LOTKEYFRAME_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>

#import "LOTBezierData.h"

@interface LOTKeyframe : NSObject

@property (readonly, nonatomic) NSNumber *keyframeTime; // ivar: _keyframeTime
@property (readonly, nonatomic) BOOL isHold; // ivar: _isHold
@property (readonly, nonatomic) CGPoint inTangent; // ivar: _inTangent
@property (readonly, nonatomic) CGPoint outTangent; // ivar: _outTangent
@property (readonly, nonatomic) CGPoint spatialInTangent; // ivar: _spatialInTangent
@property (readonly, nonatomic) CGPoint spatialOutTangent; // ivar: _spatialOutTangent
@property (readonly, nonatomic) CGFloat floatValue; // ivar: _floatValue
@property (readonly, nonatomic) CGPoint pointValue; // ivar: _pointValue
@property (readonly, nonatomic) CGSize sizeValue; // ivar: _sizeValue
@property (readonly, nonatomic) UIColor *colorValue; // ivar: _colorValue
@property (readonly, nonatomic) LOTBezierData *pathData; // ivar: _pathData
@property (readonly, nonatomic) NSArray *arrayValue; // ivar: _arrayValue


-(id)initWithKeyframe:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)initWithLOTKeyframe:(id)arg0 ;
-(id)copyWithData:(id)arg0 ;
-(void)setData:(id)arg0 ;
-(void)remapValueWithBlock:(id)arg0 ;
-(void)setupOutputWithData:(id)arg0 ;
-(struct CGPoint )_pointFromValueArray:(id)arg0 ;
-(struct CGPoint )_pointFromValueDict:(id)arg0 ;
-(id)_colorValueFromArray:(id)arg0 ;


@end


#endif