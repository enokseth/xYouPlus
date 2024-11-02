// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEACTIVITYINDICATOR_H
#define SDWEBIMAGEACTIVITYINDICATOR_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "SDWebImageIndicator-Protocol.h"

@interface SDWebImageActivityIndicator : NSObject <SDWebImageIndicator>



@property (retain, nonatomic) UIActivityIndicatorView *indicatorView; // ivar: _indicatorView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)commonInit;
-(void)startAnimatingIndicator;
-(void)stopAnimatingIndicator;
+(id)grayIndicator;
+(id)grayLargeIndicator;
+(id)whiteIndicator;
+(id)whiteLargeIndicator;
+(id)largeIndicator;
+(id)mediumIndicator;


@end


#endif