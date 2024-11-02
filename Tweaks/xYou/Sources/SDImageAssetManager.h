// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGEASSETMANAGER_H
#define SDIMAGEASSETMANAGER_H


#import <Foundation/Foundation.h>


@interface SDImageAssetManager : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMapTable *imageTable; // ivar: _imageTable


-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(id)getPathForName:(id)arg0 bundle:(id)arg1 preferredScale:(*CGFloat)arg2 ;
-(id)imageForName:(id)arg0 ;
-(void)storeImage:(id)arg0 forName:(id)arg1 ;
+(id)sharedAssetManager;


@end


#endif