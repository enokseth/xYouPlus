// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H


#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>
#import <AVKit/AVKit.h>

#import "DownloadedVC.h"
#import "AVAudioPlayerDelegate-Protocol.h"
#import "AVPlayerViewControllerDelegate-Protocol.h"
#import "AVPictureInPictureControllerDelegate-Protocol.h"

@interface PlayerManager : NSObject <AVAudioPlayerDelegate, AVPlayerViewControllerDelegate, AVPictureInPictureControllerDelegate>

 {
    AVAudioPlayer *audioPlayer;
    NSTimer *timer;
    BOOL isPaused;
}


@property (retain, nonatomic) UIImage *currentArtwork; // ivar: _currentArtwork
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *channel; // ivar: _channel
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayer *videoPlayer; // ivar: _videoPlayer
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (retain, nonatomic) DownloadedVC *source; // ivar: _source
@property (retain, nonatomic) NSString *currentPlayingPath; // ivar: _currentPlayingPath
@property (nonatomic) int repeatStatus; // ivar: _repeatStatus
@property (nonatomic) BOOL shuffleStatus; // ivar: _shuffleStatus
@property (nonatomic) CGFloat ytMediaTime; // ivar: _ytMediaTime
@property (retain, nonatomic) NSMutableArray *played; // ivar: _played
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)audioHardwareRouteChanged:(id)arg0 ;
-(void)setUpCommandCenter;
-(id)metadataKey:(id)arg0 atIndex:(int)arg1 ;
-(id)currentMetadataForKey:(id)arg0 ;
-(int)currentPlayingIndex;
-(id)allDownloaded;
-(void)playSongAtIndex:(int)arg0 source:(id)arg1 ;
-(void)playSongAtIndex:(int)arg0 ;
-(void)playSongAtPath:(id)arg0 source:(id)arg1 ;
-(void)playSongAtPath:(id)arg0 ;
-(void)playVideoAtPath:(id)arg0 forVC:(id)arg1 ;
-(void)playerViewController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1 ;
-(void)play;
-(void)pause;
-(void)next;
-(void)previous;
-(void)stop;
-(BOOL)isPlaying;
-(BOOL)isPaused;
-(void)setMetadataForCurrentIndex;
-(void)setMetadataForIndex:(int)arg0 ;
-(void)updateElapsedPlaybackTime;
-(NSInteger)changedScrubber:(id)arg0 ;
-(float)progress;
-(void)updateProgress;
-(float)duration;
-(float)currentTime;
-(void)setCurrentTime:(CGFloat)arg0 ;
-(id)timeStringFromSeconds:(int)arg0 ;
-(void)setAudioSessionActive;
-(void)setShuffle:(BOOL)arg0 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
+(id)sharedInstance;


@end


#endif