// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTBEZIERPATH_H
#define LOTBEZIERPATH_H


#import <Foundation/Foundation.h>


@interface LOTBezierPath : NSObject {
    *LOT_Subpath headSubpath_;
    *LOT_Subpath tailSubpath_;
    CGPoint subpathStartPoint_;
    *CGFloat _lineDashPattern;
    NSInteger _lineDashCount;
    CGFloat _lineDashPhase;
    *CGPath _path;
}


@property (readonly, nonatomic) *LOT_Subpath headSubpath;
@property (nonatomic) BOOL cacheLengths; // ivar: _cacheLengths
@property (readonly, nonatomic) CGFloat length; // ivar: _length
@property (readonly, nonatomic) *CGPath CGPath;
@property (readonly, nonatomic) CGPoint currentPoint;
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) int lineCapStyle; // ivar: _lineCapStyle
@property (nonatomic) int lineJoinStyle; // ivar: _lineJoinStyle
@property (nonatomic) CGFloat miterLimit; // ivar: _miterLimit
@property (nonatomic) CGFloat flatness; // ivar: _flatness
@property (nonatomic) BOOL usesEvenOddFillRule; // ivar: _usesEvenOddFillRule
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) CGRect bounds;


-(id)init;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)removeAllSubpaths;
-(void)addSubpathWithType:(int)arg0 length:(CGFloat)arg1 endPoint:(struct CGPoint )arg2 controlPoint1:(struct CGPoint )arg3 controlPoint1:(struct CGPoint )arg4 ;
-(void)LOT_moveToPoint:(struct CGPoint )arg0 ;
-(void)LOT_addLineToPoint:(struct CGPoint )arg0 ;
-(void)LOT_addCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)LOT_closePath;
-(void)_clearPathData;
-(void)LOT_removeAllPoints;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(void)LOT_applyTransform:(struct CGAffineTransform )arg0 ;
-(void)LOT_appendPath:(id)arg0 ;
-(void)trimPathFromT:(CGFloat)arg0 toT:(CGFloat)arg1 offset:(CGFloat)arg2 ;
-(void)setWithCGPath:(struct CGPath *)arg0 ;
-(void)lot_enumeratePath:(struct CGPath *)arg0 elementsUsingBlock:(id)arg1 ;
+(id)pathWithCGPath:(struct CGPath *)arg0 ;
+(id)newPath;


@end


#endif