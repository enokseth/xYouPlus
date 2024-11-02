// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADINGCELL_H
#define DOWNLOADINGCELL_H


#import <UIKit/UIKit.h>

#import "SSBouncyButton.h"
#import "DownloadingInfoButton.h"
#import "DownloadingConversionInfo.h"
#import "__MarqueeLabel.h"
#import "xYouItem.h"
#import "DownloadingVC.h"

@interface DownloadingCell : UITableViewCell {
    UIImage *albumImagePlaceholder;
    UIVisualEffectView *effectView;
}


@property (retain, nonatomic) SSBouncyButton *optionsButton; // ivar: _optionsButton
@property (retain, nonatomic) DownloadingInfoButton *infoButton; // ivar: _infoButton
@property (retain, nonatomic) DownloadingInfoButton *secondaryInfoButton; // ivar: _secondaryInfoButton
@property (retain, nonatomic) DownloadingConversionInfo *conversionInfo; // ivar: _conversionInfo
@property (retain, nonatomic) UIImageView *albumImageView; // ivar: _albumImageView
@property (retain, nonatomic) __MarqueeLabel *title; // ivar: _title
@property (retain, nonatomic) __MarqueeLabel *channel; // ivar: _channel
@property (retain, nonatomic) UILabel *typeAndQuality; // ivar: _typeAndQuality
@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) UIImageView *aVideoImage; // ivar: _aVideoImage
@property (retain, nonatomic) xYouItem *xYouItem; // ivar: _xYouItem
@property (retain, nonatomic) DownloadingVC *downloadingVC; // ivar: _downloadingVC


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)updateCellInfo;
-(void)updateAlbumeImageView;
-(void)updateProgressWithNotification:(id)arg0 ;
-(void)updateProgress;
-(void)updateProgressForInfoButton:(id)arg0 downloadItem:(id)arg1 ;
-(void)updateConversionProgress;
-(void)setPlaceholderImage;
-(void)cellOptionsButton;
-(BOOL)isColorLight:(id)arg0 ;
-(id)ytBackgroundColor;
-(id)ytTextColor;
-(void)updatePageStyles;


@end


#endif