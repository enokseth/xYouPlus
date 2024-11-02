// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTMASKNODELAYER_H
#define LOTMASKNODELAYER_H


#import <QuartzCore/QuartzCore.h>

#import "LOTPathInterpolator.h"
#import "LOTNumberInterpolator.h"
#import "LOTMask.h"

@interface LOTMaskNodeLayer : CAShapeLayer {
    LOTPathInterpolator *_pathInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    LOTNumberInterpolator *_expansionInterpolator;
}


@property (readonly, nonatomic) LOTMask *maskNode; // ivar: _maskNode


-(id)initWithMask:(id)arg0 ;
-(void)updateForFrame:(id)arg0 withViewBounds:(struct CGRect )arg1 ;
-(BOOL)hasUpdateForFrame:(id)arg0 ;


@end


#endif