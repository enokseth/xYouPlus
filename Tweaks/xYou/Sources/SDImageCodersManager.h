// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDIMAGECODERSMANAGER_H
#define SDIMAGECODERSMANAGER_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDImageCoder-Protocol.h"

@interface SDImageCodersManager : NSObject <SDImageCoder>

 {
    os_unfair_lock_s _codersLock;
}


@property (retain, nonatomic) NSMutableArray *imageCoders; // ivar: _imageCoders
@property (copy, nonatomic) NSArray *coders;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)addCoder:(id)arg0 ;
-(void)removeCoder:(id)arg0 ;
-(BOOL)canDecodeFromData:(id)arg0 ;
-(BOOL)canEncodeToFormat:(NSInteger)arg0 ;
-(id)decodedImageWithData:(id)arg0 options:(id)arg1 ;
-(id)encodedDataWithImage:(id)arg0 format:(NSInteger)arg1 options:(id)arg2 ;
+(id)sharedManager;


@end


#endif