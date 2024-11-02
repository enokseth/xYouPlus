// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LOTMASKCONTAINER_H
#define LOTMASKCONTAINER_H


#import <QuartzCore/QuartzCore.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>


@interface LOTMaskContainer : CALayer {
    NSArray *_masks;
}


@property (retain, nonatomic) NSNumber *currentFrame; // ivar: _currentFrame


-(id)initWithMasks:(id)arg0 ;


@end


#endif