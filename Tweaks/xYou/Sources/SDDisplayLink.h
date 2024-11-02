// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDDISPLAYLINK_H
#define SDDISPLAYLINK_H


#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>


@interface SDDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) BOOL isRunning;


-(void)dealloc;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)addToRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)displayLinkDidRefresh:(id)arg0 ;
+(id)displayLinkWithTarget:(id)arg0 selector:(SEL)arg1 ;


@end


#endif