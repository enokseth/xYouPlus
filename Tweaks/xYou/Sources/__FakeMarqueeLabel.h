// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef __FAKEMARQUEELABEL_H
#define __FAKEMARQUEELABEL_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "__MarqueeLabel.h"
#import "__MarqueeLabelType-Protocol.h"

@interface __FakeMarqueeLabel : UILabel <__MarqueeLabelType>



@property (nonatomic) CGFloat rate; // ivar: _rate
@property (nonatomic) CGFloat animationDelay; // ivar: _animationDelay
@property (weak, nonatomic) __MarqueeLabel *synchronizedLabel; // ivar: _synchronizedLabel
@property (readonly, nonatomic) CGFloat animationDuration;
@property (nonatomic) BOOL holdScrolling; // ivar: _holdScrolling
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)resetLabel;
-(void)unpauseLabel;
-(void)pauseLabel;
-(void)restartLabel;
-(void)shutdownLabel;
-(BOOL)isPaused;


@end


#endif