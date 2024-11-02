// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTLAYERCONTAINER_H
#define LOTLAYERCONTAINER_H


#import <QuartzCore/QuartzCore.h>
#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "LOTTransformInterpolator.h"
#import "LOTNumberInterpolator.h"
#import "LOTRenderGroup.h"
#import "LOTMaskContainer.h"

@interface LOTLayerContainer : CALayer {
    LOTTransformInterpolator *_transformInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    NSNumber *_inFrame;
    NSNumber *_outFrame;
    CALayer *DEBUG_Center;
    LOTRenderGroup *_contentsGroup;
    LOTMaskContainer *_maskLayer;
}


@property (readonly, nonatomic) NSString *layerName; // ivar: _layerName
@property (retain, nonatomic) NSNumber *currentFrame;
@property (readonly, nonatomic) NSNumber *timeStretchFactor; // ivar: _timeStretchFactor
@property (nonatomic) CGRect viewportBounds; // ivar: _viewportBounds
@property (readonly, nonatomic) CALayer *wrapperLayer; // ivar: _wrapperLayer
@property (readonly, nonatomic) NSDictionary *valueInterpolators; // ivar: _valueInterpolators


-(id)initWithModel:(id)arg0 inLayerGroup:(id)arg1 ;
-(void)commonInitializeWith:(id)arg0 inLayerGroup:(id)arg1 ;
-(void)buildContents:(id)arg0 ;
-(void)_setImageForAsset:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)display;
-(void)displayWithFrame:(id)arg0 ;
-(void)displayWithFrame:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)searchNodesForKeypath:(id)arg0 ;
-(void)setValueDelegate:(id)arg0 forKeypath:(id)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg0 ;


@end


#endif