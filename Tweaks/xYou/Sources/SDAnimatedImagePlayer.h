// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDANIMATEDIMAGEPLAYER_H
#define SDANIMATEDIMAGEPLAYER_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SDDisplayLink.h"
#import "SDAnimatedImageProvider-Protocol.h"

@interface SDAnimatedImagePlayer : NSObject {
    os_unfair_lock_s _lock;
    NSString *_runLoopMode;
}


@property (retain, nonatomic) UIImage *currentFrame; // ivar: _currentFrame
@property (nonatomic) NSUInteger currentFrameIndex; // ivar: _currentFrameIndex
@property (nonatomic) NSUInteger currentLoopCount; // ivar: _currentLoopCount
@property (retain, nonatomic) NSObject<SDAnimatedImageProvider> *animatedProvider; // ivar: _animatedProvider
@property (retain, nonatomic) NSMutableDictionary *frameBuffer; // ivar: _frameBuffer
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic) BOOL bufferMiss; // ivar: _bufferMiss
@property (nonatomic) BOOL needsDisplayWhenImageBecomesAvailable; // ivar: _needsDisplayWhenImageBecomesAvailable
@property (nonatomic) BOOL shouldReverse; // ivar: _shouldReverse
@property (nonatomic) NSUInteger maxBufferCount; // ivar: _maxBufferCount
@property (retain, nonatomic) NSOperationQueue *fetchQueue; // ivar: _fetchQueue
@property (retain, nonatomic) SDDisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) NSUInteger totalFrameCount; // ivar: _totalFrameCount
@property (nonatomic) NSUInteger totalLoopCount; // ivar: _totalLoopCount
@property (nonatomic) CGFloat playbackRate; // ivar: _playbackRate
@property (nonatomic) NSUInteger playbackMode; // ivar: _playbackMode
@property (nonatomic) NSUInteger maxBufferSize; // ivar: _maxBufferSize
@property (copy, nonatomic) NSString *runLoopMode;
@property (copy, nonatomic) id *animationFrameHandler; // ivar: _animationFrameHandler
@property (copy, nonatomic) id *animationLoopHandler; // ivar: _animationLoopHandler
@property (readonly, nonatomic) BOOL isPlaying;


-(id)initWithProvider:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(void)setupCurrentFrame;
-(void)clearFrameBuffer;
-(void)startPlaying;
-(void)stopPlaying;
-(void)pausePlaying;
-(void)seekToFrameAtIndex:(NSUInteger)arg0 loopCount:(NSUInteger)arg1 ;
-(void)displayDidRefresh:(id)arg0 ;
-(void)handleFrameChange;
-(void)handleLoopChange;
-(void)calculateMaxBufferCount;
+(id)playerWithProvider:(id)arg0 ;
+(id)defaultRunLoopMode;


@end


#endif