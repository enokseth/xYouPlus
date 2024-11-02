// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTASSETGROUP_H
#define LOTASSETGROUP_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface LOTAssetGroup : NSObject {
    NSMutableDictionary *_assetMap;
    NSDictionary *_assetJSONMap;
}


@property (retain, nonatomic) NSString *rootDirectory; // ivar: _rootDirectory
@property (readonly, nonatomic) NSBundle *assetBundle; // ivar: _assetBundle


-(id)initWithJSON:(id)arg0 withAssetBundle:(id)arg1 withFramerate:(id)arg2 ;
-(void)buildAssetNamed:(id)arg0 withFramerate:(id)arg1 ;
-(void)finalizeInitializationWithFramerate:(id)arg0 ;
-(id)assetModelForID:(id)arg0 ;


@end


#endif