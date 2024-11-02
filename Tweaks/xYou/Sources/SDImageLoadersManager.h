// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGELOADERSMANAGER_H
#define SDIMAGELOADERSMANAGER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDImageLoader-Protocol.h"

@interface SDImageLoadersManager : NSObject <SDImageLoader>

 {
    os_unfair_lock_s _loadersLock;
}


@property (retain, nonatomic) NSMutableArray *imageLoaders; // ivar: _imageLoaders
@property (copy, nonatomic) NSArray *loaders;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)addLoader:(id)arg0 ;
-(void)removeLoader:(id)arg0 ;
-(BOOL)canRequestImageForURL:(id)arg0 ;
// -(id)requestImageWithURL:(id)arg0 options:(NSUInteger)arg1 context:(id)arg2 progress:(id)arg3 completed:(unk)arg4  ;
-(BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1 ;
+(id)sharedManager;


@end


#endif