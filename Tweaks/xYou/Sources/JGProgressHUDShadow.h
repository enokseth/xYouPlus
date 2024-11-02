// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef JGPROGRESSHUDSHADOW_H
#define JGPROGRESSHUDSHADOW_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface JGProgressHUDShadow : NSObject

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) CGSize offset; // ivar: _offset
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) float opacity; // ivar: _opacity


-(id)initWithColor:(id)arg0 offset:(struct CGSize )arg1 radius:(CGFloat)arg2 opacity:(float)arg3 ;
+(id)shadowWithColor:(id)arg0 offset:(struct CGSize )arg1 radius:(CGFloat)arg2 opacity:(float)arg3 ;


@end


#endif