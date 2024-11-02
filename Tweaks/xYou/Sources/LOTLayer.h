// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTLAYER_H
#define LOTLAYER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>

#import "LOTAsset.h"
#import "LOTKeyframeGroup.h"

@interface LOTLayer : NSObject

@property (readonly, nonatomic) NSString *layerName; // ivar: _layerName
@property (readonly, nonatomic) NSString *referenceID; // ivar: _referenceID
@property (readonly, nonatomic) NSNumber *layerID; // ivar: _layerID
@property (readonly, nonatomic) NSInteger layerType; // ivar: _layerType
@property (readonly, nonatomic) NSNumber *parentID; // ivar: _parentID
@property (readonly, nonatomic) NSNumber *startFrame; // ivar: _startFrame
@property (readonly, nonatomic) NSNumber *inFrame; // ivar: _inFrame
@property (readonly, nonatomic) NSNumber *outFrame; // ivar: _outFrame
@property (readonly, nonatomic) NSNumber *timeStretch; // ivar: _timeStretch
@property (readonly, nonatomic) CGRect layerBounds; // ivar: _layerBounds
@property (readonly, nonatomic) NSArray *shapes; // ivar: _shapes
@property (readonly, nonatomic) NSArray *masks; // ivar: _masks
@property (readonly, nonatomic) NSNumber *layerWidth; // ivar: _layerWidth
@property (readonly, nonatomic) NSNumber *layerHeight; // ivar: _layerHeight
@property (readonly, nonatomic) UIColor *solidColor; // ivar: _solidColor
@property (readonly, nonatomic) LOTAsset *imageAsset; // ivar: _imageAsset
@property (readonly, nonatomic) LOTKeyframeGroup *opacity; // ivar: _opacity
@property (readonly, nonatomic) LOTKeyframeGroup *timeRemapping; // ivar: _timeRemapping
@property (readonly, nonatomic) LOTKeyframeGroup *rotation; // ivar: _rotation
@property (readonly, nonatomic) LOTKeyframeGroup *position; // ivar: _position
@property (readonly, nonatomic) LOTKeyframeGroup *positionX; // ivar: _positionX
@property (readonly, nonatomic) LOTKeyframeGroup *positionY; // ivar: _positionY
@property (readonly, nonatomic) LOTKeyframeGroup *anchor; // ivar: _anchor
@property (readonly, nonatomic) LOTKeyframeGroup *scale; // ivar: _scale
@property (readonly, nonatomic) NSInteger matteType; // ivar: _matteType


-(id)initWithJSON:(id)arg0 withAssetGroup:(id)arg1 withFramerate:(id)arg2 ;
-(void)_mapFromJSON:(id)arg0 withAssetGroup:(id)arg1 withFramerate:(id)arg2 ;
-(id)description;


@end


#endif