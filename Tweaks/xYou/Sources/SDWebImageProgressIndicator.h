// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEPROGRESSINDICATOR_H
#define SDWEBIMAGEPROGRESSINDICATOR_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "SDWebImageIndicator-Protocol.h"

@interface SDWebImageProgressIndicator : NSObject <SDWebImageIndicator>



@property (retain, nonatomic) UIProgressView *indicatorView; // ivar: _indicatorView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)commonInit;
-(void)startAnimatingIndicator;
-(void)stopAnimatingIndicator;
-(void)updateIndicatorProgress:(CGFloat)arg0 ;
+(id)defaultIndicator;
+(id)barIndicator;


@end


#endif