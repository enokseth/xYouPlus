// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTLAYERGROUP_H
#define LOTLAYERGROUP_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface LOTLayerGroup : NSObject {
    NSDictionary *_modelMap;
    NSDictionary *_referenceIDMap;
}


@property (readonly, nonatomic) NSArray *layers; // ivar: _layers


-(id)initWithLayerJSON:(id)arg0 withAssetGroup:(id)arg1 withFramerate:(id)arg2 ;
-(void)_mapFromJSON:(id)arg0 withAssetGroup:(id)arg1 withFramerate:(id)arg2 ;
-(id)layerModelForID:(id)arg0 ;
-(id)layerForReferenceID:(id)arg0 ;


@end


#endif