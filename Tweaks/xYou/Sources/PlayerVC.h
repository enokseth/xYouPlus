// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef PLAYERVC_H
#define PLAYERVC_H


#import <UIKit/UIKit.h>
#import <AVKit/AVKit.h>
#import <Foundation/Foundation.h>

#import "ArtworkImageView.h"
#import "SSBouncyButton.h"
#import "__MarqueeLabel.h"
#import "UITextViewDelegate-Protocol.h"

@interface PlayerVC : UIViewController <UITextViewDelegate>

 {
    AVRoutePickerView *airplayButton;
}


@property (retain, nonatomic) UIBarButtonItem *playButton; // ivar: _playButton
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: _nextButton
@property (retain, nonatomic) UIBarButtonItem *previousButton; // ivar: _previousButton
@property (retain, nonatomic) UIBarButtonItem *closeButton; // ivar: _closeButton
@property (retain, nonatomic) ArtworkImageView *artworkImageView; // ivar: _artworkImageView
@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) UISlider *slider; // ivar: _slider
@property (retain, nonatomic) SSBouncyButton *optionsButton; // ivar: _optionsButton
@property (retain, nonatomic) UITextView *lyricsView; // ivar: _lyricsView
@property (retain, nonatomic) SSBouncyButton *lyricsButton; // ivar: _lyricsButton
@property (retain, nonatomic) UIButton *playPlayerButton; // ivar: _playPlayerButton
@property (retain, nonatomic) UIButton *nextPlayerButton; // ivar: _nextPlayerButton
@property (retain, nonatomic) UIButton *previousPlayerButton; // ivar: _previousPlayerButton
@property (retain, nonatomic) UIButton *repeatPlayerButton; // ivar: _repeatPlayerButton
@property (retain, nonatomic) UIButton *shufflePlayerButton; // ivar: _shufflePlayerButton
@property (retain, nonatomic) __MarqueeLabel *totalSongs; // ivar: _totalSongs
@property (retain, nonatomic) __MarqueeLabel *songTitle; // ivar: _songTitle
@property (retain, nonatomic) __MarqueeLabel *channel; // ivar: _channel
@property (retain, nonatomic) UILabel *currentTime; // ivar: _currentTime
@property (retain, nonatomic) UILabel *totalTime; // ivar: _totalTime
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (nonatomic) BOOL isShowingLyricsView; // ivar: _isShowingLyricsView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_setPopupItemButtonsWithTraitCollection:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(id)ytBackgroundColor;
-(id)ytTextColor;
-(void)updatePageStyles;
-(void)close;
-(void)play;
-(void)pause;
-(void)next;
-(void)previous;
-(void)repeat;
-(void)shuffle;
-(void)updatePlayer;
-(void)updateProgress;
-(void)sliderValueChanged:(id)arg0 forEvent:(id)arg1 ;
-(void)optionButton:(id)arg0 ;
-(void)getLyricsButton:(id)arg0 ;
-(id)createTmpLinkURLToFileAtPath:(id)arg0 withName:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(BOOL)isRTL;


@end


#endif