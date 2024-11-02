// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTCOMPOSITION_H
#define LOTCOMPOSITION_H


#import <Foundation/Foundation.h>

#import "LOTLayerGroup.h"
#import "LOTAssetGroup.h"

@interface LOTComposition : NSObject

@property (readonly, nonatomic) CGRect compBounds; // ivar: _compBounds
@property (readonly, nonatomic) NSNumber *startFrame; // ivar: _startFrame
@property (readonly, nonatomic) NSNumber *endFrame; // ivar: _endFrame
@property (readonly, nonatomic) NSNumber *framerate; // ivar: _framerate
@property (readonly, nonatomic) CGFloat timeDuration; // ivar: _timeDuration
@property (readonly, nonatomic) LOTLayerGroup *layerGroup; // ivar: _layerGroup
@property (readonly, nonatomic) LOTAssetGroup *assetGroup; // ivar: _assetGroup
@property (retain, nonatomic) NSString *rootDirectory; // ivar: _rootDirectory
@property (readonly, nonatomic) NSBundle *assetBundle; // ivar: _assetBundle
@property (copy, nonatomic) NSString *cacheKey; // ivar: _cacheKey


-(id)initWithJSON:(id)arg0 withAssetBundle:(id)arg1 ;
-(void)_mapFromJSON:(id)arg0 withAssetBundle:(id)arg1 ;
+(id)animationNamed:(id)arg0 ;
+(id)animationNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)animationWithFilePath:(id)arg0 ;
+(id)animationFromJSON:(id)arg0 ;
+(id)animationFromJSON:(id)arg0 inBundle:(id)arg1 ;


@end


#endif