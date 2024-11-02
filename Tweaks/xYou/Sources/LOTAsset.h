// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTASSET_H
#define LOTASSET_H


#import <Foundation/Foundation.h>

#import "LOTLayerGroup.h"

@interface LOTAsset : NSObject

@property (readonly, nonatomic) NSString *referenceID; // ivar: _referenceID
@property (readonly, nonatomic) NSNumber *assetWidth; // ivar: _assetWidth
@property (readonly, nonatomic) NSNumber *assetHeight; // ivar: _assetHeight
@property (readonly, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) NSString *imageDirectory; // ivar: _imageDirectory
@property (readonly, nonatomic) LOTLayerGroup *layerGroup; // ivar: _layerGroup
@property (retain, nonatomic) NSString *rootDirectory; // ivar: _rootDirectory
@property (readonly, nonatomic) NSBundle *assetBundle; // ivar: _assetBundle


-(id)initWithJSON:(id)arg0 withAssetGroup:(id)arg1 withAssetBundle:(id)arg2 withFramerate:(id)arg3 ;
-(void)_mapFromJSON:(id)arg0 withAssetGroup:(id)arg1 withFramerate:(id)arg2 ;


@end


#endif