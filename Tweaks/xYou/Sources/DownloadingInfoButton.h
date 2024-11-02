// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADINGINFOBUTTON_H
#define DOWNLOADINGINFOBUTTON_H


#import <UIKit/UIKit.h>

#import "SSBouncyButton.h"
#import "__MarqueeLabel.h"

@interface DownloadingInfoButton : SSBouncyButton {
    UIImageView *icon;
    UIImageView *sizeImage;
    UIImageView *speedImage;
    UIImageView *timeImage;
    UIImageView *infoImage;
}


@property (retain, nonatomic) UIImageView *downloadIcon; // ivar: _downloadIcon
@property (retain, nonatomic) UILabel *sizeLabel; // ivar: _sizeLabel
@property (retain, nonatomic) UILabel *speedAndProgressLabel; // ivar: _speedAndProgressLabel
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (retain, nonatomic) __MarqueeLabel *statusLabel; // ivar: _statusLabel
@property (retain, nonatomic) UIProgressView *progressBar; // ivar: _progressBar


-(id)initForAudio:(BOOL)arg0 ;
-(void)updateLabelsForProgress:(id)arg0 tintColor:(id)arg1 statusLabel:(id)arg2 ;
-(void)dealloc;
-(id)ytBackgroundColor;
-(id)ytTextColor;
-(void)updatePageStyles;


@end


#endif