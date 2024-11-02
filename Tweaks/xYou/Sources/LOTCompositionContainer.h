// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTCOMPOSITIONCONTAINER_H
#define LOTCOMPOSITIONCONTAINER_H


#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreFoundation/CoreFoundation.h>

#import "LOTLayerContainer.h"
#import "LOTNumberInterpolator.h"

@interface LOTCompositionContainer : LOTLayerContainer {
    NSNumber *_frameOffset;
    CALayer *DEBUG_Center;
    NSMutableDictionary *_keypathCache;
    LOTNumberInterpolator *_timeInterpolator;
}


@property (readonly, nonatomic) NSArray *childLayers; // ivar: _childLayers
@property (readonly, nonatomic) NSDictionary *childMap; // ivar: _childMap


-(id)initWithModel:(id)arg0 inLayerGroup:(id)arg1 withLayerGroup:(id)arg2 withAssestGroup:(id)arg3 ;
-(void)initializeWithChildGroup:(id)arg0 withAssetGroup:(id)arg1 ;
-(void)displayWithFrame:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)setViewportBounds:(struct CGRect )arg0 ;
-(void)searchNodesForKeypath:(id)arg0 ;
-(void)setValueDelegate:(id)arg0 forKeypath:(id)arg1 ;
-(id)keysForKeyPath:(id)arg0 ;
-(id)_layerForKeypath:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toKeypathLayer:(id)arg1 withParentLayer:(id)arg2 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toKeypathLayer:(id)arg1 withParentLayer:(id)arg2 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromKeypathLayer:(id)arg1 withParentLayer:(id)arg2 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromKeypathLayer:(id)arg1 withParentLayer:(id)arg2 ;
-(void)addSublayer:(id)arg0 toKeypathLayer:(id)arg1 ;
-(void)maskSublayer:(id)arg0 toKeypathLayer:(id)arg1 ;


@end


#endif